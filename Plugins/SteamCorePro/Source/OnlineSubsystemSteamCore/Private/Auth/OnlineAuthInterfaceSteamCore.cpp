/**
* Copyright (C) 2017-2024 eelDev AB
*
*/

#include "Auth/OnlineAuthInterfaceSteamCore.h"
#include "OnlineSubsystemSteamCorePrivatePCH.h"

#define STEAM_AUTH_MAX_TICKET_LENGTH_IN_BYTES 1024

#if WITH_STEAMCORE

FOnlineAuthSteamCore::FOnlineAuthSteamCore(FOnlineSubsystemSteamCore* InSubsystem, FOnlineAuthSteamCoreUtilsPtr InAuthUtils)
	: m_SteamUserPtr(SteamUser()),
	  m_SteamServerPtr(SteamGameServer()),
	  m_SteamSubsystem(InSubsystem),
	  m_AuthUtils(InAuthUtils),
	  m_bEnabled(false),
	  m_bBadKey(false),
	  m_bReuseKey(false),
	  m_bBadWrite(false),
	  m_bDropAll(false),
	  m_bRandomDrop(false),
	  m_bNeverSendKey(false),
	  m_bSendBadId(false)
{
	const FString SteamModuleName(TEXT("SteamCoreAuthComponentModuleInterface"));
	if (!PacketHandler::DoesAnyProfileHaveComponent(SteamModuleName))
	{
		TArray<FString> ComponentList;
		GConfig->GetArray(TEXT("PacketHandlerComponents"), TEXT("Components"), ComponentList, GEngineIni);

		for (FString CompStr : ComponentList)
		{
			if (CompStr.Contains(SteamModuleName))
			{
				m_bEnabled = true;
				break;
			}
		}
	}
	else
	{
		m_bEnabled = true;
	}

	if (m_bEnabled)
	{
		LogVerbose("AUTH: Steam Auth Enabled");
	}
}

FOnlineAuthSteamCore::FOnlineAuthSteamCore()
	: m_SteamUserPtr(nullptr),
	  m_SteamServerPtr(nullptr),
	  m_SteamSubsystem(nullptr),
	  m_AuthUtils(nullptr),
	  m_bEnabled(false),
	  m_bBadKey(false),
	  m_bReuseKey(false),
	  m_bBadWrite(false),
	  m_bDropAll(false),
	  m_bRandomDrop(false),
	  m_bNeverSendKey(false),
	  m_bSendBadId(false)
{
}

FOnlineAuthSteamCore::~FOnlineAuthSteamCore()
{
	RevokeAllTickets();
}

uint32 FOnlineAuthSteamCore::GetMaxTicketSizeInBytes()
{
	LogVerbose("");
	return STEAM_AUTH_MAX_TICKET_LENGTH_IN_BYTES;
}

FString FOnlineAuthSteamCore::GetAuthTicket(uint32& AuthTokenHandle)
{
	LogVerbose("");
	FString ResultToken;
	AuthTokenHandle = k_HAuthTicketInvalid;
	if (m_SteamUserPtr != nullptr && m_SteamUserPtr->BLoggedOn())
	{
		uint8 AuthToken[STEAM_AUTH_MAX_TICKET_LENGTH_IN_BYTES];
		uint32 AuthTokenSize = 0;
		SteamNetworkingIdentity NetworkingIdentity;
		NetworkingIdentity.m_eType = ESteamNetworkingIdentityType::k_ESteamNetworkingIdentityType_SteamID;
		NetworkingIdentity.SetSteamID(m_ServerSteamId);

		LogVerbose("FOnlineAuthSteamCore::GetAuthTicket ServerSteamId: (%d)", m_ServerSteamId.ConvertToUint64());
		
		//NetworkingIdentity.SetGenericString("STEAMCORE");
		
		AuthTokenHandle = m_SteamUserPtr->GetAuthSessionTicket(AuthToken, UE_ARRAY_COUNT(AuthToken), &AuthTokenSize, &NetworkingIdentity);
		if (AuthTokenHandle != k_HAuthTicketInvalid && AuthTokenSize > 0)
		{
			ResultToken = BytesToHex(AuthToken, AuthTokenSize);
			m_SteamTicketHandles.AddUnique(AuthTokenHandle);
			LogVerbose("AUTH: Generated steam authticket %s handle %d", OSS_REDACT(*ResultToken), AuthTokenHandle);
		}
		else
		{
			LogWarning("AUTH: Failed to create Steam auth session ticket");
		}
	}
	return ResultToken;
}

FOnlineAuthSteamCore::SharedAuthUserSteamPtr FOnlineAuthSteamCore::GetUser(const FUniqueNetId& InUserId)
{
	LogVerbose("");
	if (SharedAuthUserSteamPtr* AuthUserPtr = m_AuthUsers.Find(InUserId.AsShared()))
	{
		return *AuthUserPtr;
	}
	else
	{
		LogWarning("AUTH: Trying to fetch user %s entry but the user does not exist", *InUserId.ToString());
		return nullptr;
	}
}

FOnlineAuthSteamCore::SharedAuthUserSteamPtr FOnlineAuthSteamCore::GetOrCreateUser(const FUniqueNetId& InUserId)
{
	LogVerbose("FOnlineAuthSteamCore::SharedAuthUserSteamPtr");
	
	if (SharedAuthUserSteamPtr* AuthUserPtr = m_AuthUsers.Find(InUserId.AsShared()))
	{
		return *AuthUserPtr;
	}

	SharedAuthUserSteamPtr AuthUserPtr = MakeShareable(new FSteamAuthUser);
	m_AuthUsers.Add(InUserId.AsShared(), AuthUserPtr);
	return AuthUserPtr;
}

bool FOnlineAuthSteamCore::AuthenticateUser(const FUniqueNetId& InUserId)
{
	LogVerbose("");
	const FUniqueNetIdSteam& SteamUserId = FUniqueNetIdSteam::Cast(InUserId);
	if (SteamUserId.IsValid() && m_bEnabled)
	{
		const SharedAuthUserSteamPtr TargetUser = GetOrCreateUser(SteamUserId);

		if (EnumHasAnyFlags(TargetUser->m_Status, ESteamAuthStatus::HasOrIsPendingAuth))
		{
			LogVerbose("AUTH: The user %s has authenticated or is currently authenticating. Skipping reauth", *InUserId.ToString());
			return true;
		}

		if (EnumHasAnyFlags(TargetUser->m_Status, ESteamAuthStatus::FailKick))
		{
			return false;
		}

		if (TargetUser->m_RecvTicket.IsEmpty())
		{
			LogWarning("AUTH: Ticket from user %s is empty", *InUserId.ToString());
			TargetUser->m_Status |= ESteamAuthStatus::AuthFail;
			return false;
		}

		if (TargetUser->m_RecvTicket.Len() > STEAM_AUTH_MAX_TICKET_LENGTH_IN_BYTES)
		{
			LogWarning("AUTH: Ticket from user is over max size of ticket length");
			TargetUser->m_Status |= ESteamAuthStatus::AuthFail;
			return false;
		}

		for (int32 i = 0; i < TargetUser->m_RecvTicket.Len(); ++i)
		{
			if (!CheckTCharIsHex(TargetUser->m_RecvTicket.GetCharArray()[i]))
			{
				LogWarning("AUTH: Ticket from user is not stored in hex!");
				TargetUser->m_Status |= ESteamAuthStatus::AuthFail;
				return false;
			}
		}

		uint8 AuthTokenRaw[STEAM_AUTH_MAX_TICKET_LENGTH_IN_BYTES];
		const int32 TicketSize = HexToBytes(TargetUser->m_RecvTicket, AuthTokenRaw);
		const CSteamID UserCSteamId = SteamUserId;

		if (IsRunningDedicatedServer())
		{
			check(m_SteamServerPtr != nullptr);

			m_ServerSteamId = m_SteamServerPtr->GetSteamID();

			const EBeginAuthSessionResult Result = m_SteamServerPtr->BeginAuthSession(AuthTokenRaw, TicketSize, UserCSteamId);
			if (Result == k_EBeginAuthSessionResultOK)
			{
				LogVerbose("AUTH: Steam user authentication task started for %s successfully", *InUserId.ToString());
				TargetUser->m_Status |= ESteamAuthStatus::ValidationStarted;
				return true;
			}
			else
			{
				LogWarning("AUTH: User %s failed authentication %d", *InUserId.ToString(), static_cast<int32>(Result));
				TargetUser->m_Status |= ESteamAuthStatus::AuthFail;
			}
		}
		else
		{
			check(m_SteamUserPtr != nullptr);
			const EBeginAuthSessionResult Result = m_SteamUserPtr->BeginAuthSession(AuthTokenRaw, TicketSize, UserCSteamId);
			if (Result == k_EBeginAuthSessionResultOK)
			{
				LogVerbose("AUTH: Steam user authentication task started for %s successfully", *InUserId.ToString());
				TargetUser->m_Status |= ESteamAuthStatus::ValidationStarted;
				return true;
			}
			else
			{
				LogWarning("AUTH: User %s failed authentication %d", *InUserId.ToString(), static_cast<int32>(Result));
				TargetUser->m_Status |= ESteamAuthStatus::AuthFail;
			}
		}
	}
	else if (m_bEnabled)
	{
		LogWarning("AUTH: UserId was invalid!");
	}
	return false;
}

void FOnlineAuthSteamCore::EndAuthentication(const FUniqueNetId& InUserId) const
{
	LogVerbose("");
	const FUniqueNetIdSteam& SteamId = FUniqueNetIdSteam::Cast(InUserId);
	if (SteamId.IsValid())
	{
		const CSteamID UserCSteamId = CSteamID(*(uint64*)SteamId.GetBytes());
		if (IsRunningDedicatedServer())
		{
			check(m_SteamServerPtr != nullptr);
			m_SteamServerPtr->EndAuthSession(UserCSteamId);
		}
		else
		{
			check(m_SteamUserPtr != nullptr);
			m_SteamUserPtr->EndAuthSession(UserCSteamId);
		}
		LogVerbose("AUTH: Ended authentication with %s", *SteamId.ToString());
	}
}

void FOnlineAuthSteamCore::RevokeTicket(const uint32& Handle)
{
	LogVerbose("");
	if (m_SteamUserPtr != nullptr)
	{
		if (m_SteamTicketHandles.Contains(Handle))
		{
			m_SteamUserPtr->CancelAuthTicket(Handle);
			m_SteamTicketHandles.Remove(Handle);
			LogVerbose("AUTH: Revoking auth ticket with handle %d", static_cast<int32>(Handle));
		}
	}
	else
	{
		LogWarning("AUTH: Cannot revoke ticket with handle %d", static_cast<int32>(Handle));
	}
}

void FOnlineAuthSteamCore::RevokeAllTickets()
{
	LogVerbose("AUTH: Revoking all tickets.");

	for (m_SteamAuthentications::TIterator Users(m_AuthUsers); Users; ++Users)
	{
		EndAuthentication(*Users->Key);
	}

	if (m_SteamUserPtr != nullptr)
	{
		for (int HandleIdx = 0; HandleIdx < m_SteamTicketHandles.Num(); ++HandleIdx)
		{
			m_SteamUserPtr->CancelAuthTicket(m_SteamTicketHandles[HandleIdx]);
		}
	}

	m_SteamTicketHandles.Empty();
	m_AuthUsers.Empty();
}

void FOnlineAuthSteamCore::MarkPlayerForKick(const FUniqueNetId& InUserId)
{
	LogVerbose("");
	const FUniqueNetIdSteam& SteamId = FUniqueNetIdSteam::Cast(InUserId);
	const SharedAuthUserSteamPtr TargetUser = GetUser(SteamId);
	if (TargetUser.IsValid())
	{
		TargetUser->m_Status |= ESteamAuthStatus::AuthFail;
		LogVerbose("AUTH: Marking %s for kick", *InUserId.ToString());
	}
}

bool FOnlineAuthSteamCore::KickPlayer(const FUniqueNetId& InUserId, bool bSuppressFailure)
{
	LogVerbose("");
	bool bKickSuccess = false;
	const FUniqueNetIdSteam& SteamId = FUniqueNetIdSteam::Cast(InUserId);
	const UWorld* World = (m_SteamSubsystem != nullptr) ? GetWorldForOnline(m_SteamSubsystem->GetInstanceName()) : nullptr;

	if (m_SteamUserPtr != nullptr && m_SteamUserPtr->GetSteamID() == SteamId)
	{
		if (!bSuppressFailure)
		{
			LogWarning("AUTH: Cannot kick ourselves!");
		}
		return false;
	}

	if (m_AuthUtils.IsValid() && m_AuthUtils->m_OverrideFailureDelegate.IsBound())
	{
		m_AuthUtils->m_OverrideFailureDelegate.Execute(InUserId);
		RemoveUser(InUserId);
		return true;
	}

	if (World)
	{
		const AGameModeBase* GameMode = World->GetAuthGameMode();
		if (GameMode == nullptr || GameMode->GameSession == nullptr)
		{
			if (!bSuppressFailure)
			{
				LogWarning("AUTH: Cannot kick player %s as we do not have a gamemode or session", *InUserId.ToString());
			}
			return false;
		}

		for (FConstPlayerControllerIterator Itr = World->GetPlayerControllerIterator(); Itr; ++Itr)
		{
			APlayerController* PC = Itr->Get();
			if (PC && PC->PlayerState != nullptr && PC->PlayerState->GetUniqueId().IsValid() &&
				*(PC->PlayerState->GetUniqueId().GetUniqueNetId()) == InUserId)
			{
				const FText AuthKickReason = NSLOCTEXT("NetworkErrors", "HostClosedConnection", "Host closed the connection.");
				bKickSuccess = GameMode->GameSession->KickPlayer(PC, AuthKickReason);
				break;
			}
		}
	}

	if (bKickSuccess)
	{
		LogVerbose("AUTH: Successfully kicked player %s", *InUserId.ToString());
		RemoveUser(InUserId);
	}
	else if (!bSuppressFailure)
	{
		LogWarning("AUTH: Was not able to kick player %s Valid world: %d.", *InUserId.ToString(), (World != nullptr));
	}

	return bKickSuccess;
}

void FOnlineAuthSteamCore::RemoveUser(const FUniqueNetId& TargetUser)
{
	LogVerbose("");
	if (!IsServer() || !m_bEnabled)
	{
		return;
	}

	if (m_AuthUsers.Contains(TargetUser.AsShared()))
	{
		LogVerbose("AUTH: Removing user %s", *TargetUser.ToString());
		EndAuthentication(TargetUser);
		m_AuthUsers.Remove(TargetUser.AsShared());
	}
}

bool FOnlineAuthSteamCore::Tick(float DeltaTime)
{
	LogVeryVerbose("");
	if (!m_bEnabled || !IsServer())
	{
		return true;
	}

	for (m_SteamAuthentications::TIterator It(m_AuthUsers); It; ++It)
	{
		if (It->Value.IsValid())
		{
			const SharedAuthUserSteamPtr CurUser = It->Value;
			const FUniqueNetId& CurUserId = *It->Key;

			if (EnumHasAnyFlags(CurUser->m_Status, ESteamAuthStatus::FailKick))
			{
				if (KickPlayer(CurUserId, EnumHasAnyFlags(CurUser->m_Status, ESteamAuthStatus::KickUser)))
				{
					return true;
				}
				CurUser->m_Status |= ESteamAuthStatus::KickUser;
			}
		}
	}

	return true;
}

bool FOnlineAuthSteamCore::Exec(const TCHAR* Cmd)
{
	LogVerbose("");
#if UE_BUILD_SHIPPING
	return false;
#else
	bool bWasHandled = false;
	if (FParse::Command(&Cmd, TEXT("BADKEY")))
	{
		bWasHandled = true;
		m_bBadKey = !m_bBadKey;
		LogWarning("AUTH: Set send only bad auth keys flag to %d", m_bBadKey);
	}
	else if (FParse::Command(&Cmd, TEXT("BADWRITES")))
	{
		bWasHandled = true;
		m_bBadWrite = !m_bBadWrite;
		LogWarning("AUTH: Set bad writes flag to %d", m_bBadWrite);
	}
	else if (FParse::Command(&Cmd, TEXT("SENDBADID")))
	{
		bWasHandled = true;
		m_bSendBadId = !m_bSendBadId;
		LogWarning("AUTH: Set send bad id flag to %d", m_bSendBadId);
	}
	else if (FParse::Command(&Cmd, TEXT("NEVERSENDKEY")))
	{
		bWasHandled = true;
		m_bNeverSendKey = !m_bNeverSendKey;
		LogWarning("AUTH: Set block key send flag to %d", m_bNeverSendKey);
	}
	else if (FParse::Command(&Cmd, TEXT("REUSEKEY")))
	{
		bWasHandled = true;
		m_bReuseKey = !m_bReuseKey;
		LogWarning("AUTH: Set reuse auth key flag to %d", m_bReuseKey);
	}
	else if (FParse::Command(&Cmd, TEXT("DROPALL")))
	{
		bWasHandled = true;
		m_bDropAll = !m_bDropAll;
		LogWarning("AUTH: Set drop all packets flag to %d", m_bDropAll);
	}
	else if (FParse::Command(&Cmd, TEXT("DROPRANDOM")))
	{
		bWasHandled = true;
		m_bRandomDrop = !m_bRandomDrop;
		LogWarning("AUTH: Set drop random packets flag to %d", m_bRandomDrop);
	}
	else if (FParse::Command(&Cmd, TEXT("ENABLE")))
	{
		bWasHandled = true;
		m_bEnabled = true;
		LogWarning("AUTH: Enabling the Auth Interface");
	}
	else if (FParse::Command(&Cmd, TEXT("DISABLE")))
	{
		bWasHandled = true;
		m_bEnabled = false;
		LogWarning("AUTH: Disabling the Auth Interface");
	}
	else if (FParse::Command(&Cmd, TEXT("FREEALLKEYS")))
	{
		bWasHandled = true;
		LogWarning("AUTH: Freeing all keys.");
		RevokeAllTickets();
	}
	else if (FParse::Command(&Cmd, TEXT("RESET")))
	{
		m_bEnabled = bWasHandled = true;
		m_bSendBadId = m_bNeverSendKey = m_bRandomDrop = m_bBadKey = m_bBadWrite = m_bDropAll = m_bReuseKey = false;
		LogWarning("AUTH: Reset all cheats.");
	}

	return bWasHandled;
#endif
}

void FOnlineAuthSteamCore::OnAuthResult(const FUniqueNetId& TargetId, int32 Response)
{
	LogVerbose("");
	if (!m_bEnabled)
	{
		return;
	}

	const FUniqueNetIdSteam& SteamId = FUniqueNetIdSteam::Cast(TargetId);
	if (!SteamId.IsValid())
	{
		LogWarning("AUTH: Auth Callback cannot process invalid users!");
		return;
	}

	const bool bDidAuthSucceed = (Response == k_EAuthSessionResponseOK);
	const SharedAuthUserSteamPtr TargetUser = GetUser(TargetId);
	if (!TargetUser.IsValid())
	{
		LogWarning("AUTH: Could not find user data on result callback for %s, were they were recently deleted?", *SteamId.ToString());
		return;
	}

	TargetUser->m_Status &= ~ESteamAuthStatus::ValidationStarted;
	TargetUser->m_RecvTicket.Empty();

	LogVerbose("AUTH: Finished auth with %s. Result ok? %d Response code %d", *SteamId.ToString(), bDidAuthSucceed, Response);
	if (bDidAuthSucceed)
	{
		TargetUser->m_Status |= ESteamAuthStatus::AuthSuccess;
	}
	else
	{
		TargetUser->m_Status |= ESteamAuthStatus::AuthFail;
	}
	ExecuteResultDelegate(SteamId, bDidAuthSucceed, static_cast<ESteamAuthResponseCode>(Response));
}

void FOnlineAuthSteamCore::ExecuteResultDelegate(const FUniqueNetId& TargetId, bool bWasSuccessful, ESteamAuthResponseCode ResponseCode) const
{
	LogVerbose("");
	if (m_AuthUtils.IsValid())
	{
		m_AuthUtils->m_OnAuthenticationResultDelegate.ExecuteIfBound(TargetId, bWasSuccessful);
		m_AuthUtils->m_OnAuthenticationResultWithCodeDelegate.ExecuteIfBound(TargetId, bWasSuccessful, ResponseCode);
	}
}

void FOnlineAuthSteamCore::SetServerSteamId(uint64 Data)
{
	m_ServerSteamId = Data;
}

void FOnlineAuthSteamCore::FSteamAuthUser::SetKey(const FString& NewKey)
{
	LogVerbose("FOnlineAuthSteamCore::FSteamAuthUser::SetKey");
	if (!EnumHasAnyFlags(m_Status, ESteamAuthStatus::HasOrIsPendingAuth))
	{
		m_RecvTicket = NewKey;
	}
}

bool FOnlineAuthUtilsSteamCore::IsSteamAuthEnabled()
{
	LogVerbose("");
	const FOnlineSubsystemSteamCore* SteamSub = static_cast<const FOnlineSubsystemSteamCore*>(IOnlineSubsystem::Get(STEAMCORE_SUBSYSTEM));
	return (SteamSub && SteamSub->GetAuthInterface().IsValid() && SteamSub->GetAuthInterface()->IsSessionAuthEnabled());
}
#endif