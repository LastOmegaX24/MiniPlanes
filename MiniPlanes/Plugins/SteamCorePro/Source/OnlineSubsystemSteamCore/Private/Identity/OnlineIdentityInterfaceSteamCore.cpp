/**
* Copyright (C) 2017-2024 eelDev AB
*
*/

#include "Identity/OnlineIdentityInterfaceSteamCore.h"
#include "OnlineSubsystemSteamCorePrivatePCH.h" 

#if WITH_STEAMCORE
FOnlineIdentitySteamCore::FOnlineIdentitySteamCore(FOnlineSubsystemSteamCore* InSubsystem)
	: m_SteamUserPtr(nullptr),
	  m_SteamFriendsPtr(nullptr),
	  m_SteamSubsystem(InSubsystem)
{
	m_SteamUserPtr = SteamUser();
	m_SteamFriendsPtr = SteamFriends();
}

TSharedPtr<FUserOnlineAccount> FOnlineIdentitySteamCore::GetUserAccount(const FUniqueNetId& UserId) const
{
	LogVeryVerbose("");
	return nullptr;
}

TArray<TSharedPtr<FUserOnlineAccount>> FOnlineIdentitySteamCore::GetAllUserAccounts() const
{
	LogVeryVerbose("");
	return TArray<TSharedPtr<FUserOnlineAccount>>();
}

bool FOnlineIdentitySteamCore::Login(int32 LocalUserNum, const FOnlineAccountCredentials& AccountCredentials)
{
	LogVerbose("");
	FString ErrorStr;
	if (LocalUserNum < MAX_LOCAL_PLAYERS)
	{
		if (m_SteamUserPtr != nullptr &&
			m_SteamUserPtr->BLoggedOn())
		{
			TriggerOnLoginChangedDelegates(LocalUserNum);
			TriggerOnLoginCompleteDelegates(LocalUserNum, true, *FUniqueNetIdSteam::Create(m_SteamUserPtr->GetSteamID()), TEXT(""));
			return true;
		}
		else
		{
			ErrorStr = TEXT("Not logged in or no connection.");
		}
	}
	else
	{
		ErrorStr = FString::Printf(TEXT("Invalid user %d"), LocalUserNum);
	}

	if (!ErrorStr.IsEmpty())
	{
		LogWarning("Failed Steam login. %s", *ErrorStr);
		TriggerOnLoginCompleteDelegates(LocalUserNum, false, *FUniqueNetIdSteam::EmptyId(), ErrorStr);
	}

	return false;
}

bool FOnlineIdentitySteamCore::Logout(int32 LocalUserNum)
{
	LogVerbose("");
	TriggerOnLogoutCompleteDelegates(LocalUserNum, false);
	return false;
}

bool FOnlineIdentitySteamCore::AutoLogin(int32 LocalUserNum)
{
	LogVerbose("");
	if (!IsRunningDedicatedServer())
	{
		if (m_SteamUserPtr != nullptr &&
			m_SteamUserPtr->BLoggedOn())
		{
			TriggerOnLoginChangedDelegates(LocalUserNum);
			FString AuthToken = GetAuthToken(LocalUserNum);
			TriggerOnLoginCompleteDelegates(LocalUserNum, true, *FUniqueNetIdSteam::Create(m_SteamUserPtr->GetSteamID()), TEXT(""));
			return true;
		}
		TriggerOnLoginCompleteDelegates(0, false, *FUniqueNetIdSteam::EmptyId(), TEXT("AutoLogin failed. Not logged in or no connection."));
		return false;
	}
	else
	{
		return false;
	}
}

ELoginStatus::Type FOnlineIdentitySteamCore::GetLoginStatus(int32 LocalUserNum) const
{
	LogVeryVerbose("");
	if (LocalUserNum < MAX_LOCAL_PLAYERS &&
		m_SteamUserPtr != nullptr)
	{
		return m_SteamUserPtr->BLoggedOn() ? ELoginStatus::LoggedIn : ELoginStatus::NotLoggedIn;
	}
	return ELoginStatus::NotLoggedIn;
}

ELoginStatus::Type FOnlineIdentitySteamCore::GetLoginStatus(const FUniqueNetId& UserId) const
{
	LogVeryVerbose("");
	return GetLoginStatus(0);
}

FUniqueNetIdPtr FOnlineIdentitySteamCore::GetUniquePlayerId(int32 LocalUserNum) const
{
	LogVeryVerbose("");
	if (LocalUserNum < MAX_LOCAL_PLAYERS &&
		m_SteamUserPtr != nullptr)
	{
		return FUniqueNetIdSteam::Create(m_SteamUserPtr->GetSteamID());
	}
	return nullptr;
}

FUniqueNetIdPtr FOnlineIdentitySteamCore::CreateUniquePlayerId(uint8* Bytes, int32 Size)
{
	LogVerbose("");
	if (Bytes && Size == sizeof(uint64))
	{
		const uint64* RawUniqueId = reinterpret_cast<uint64*>(Bytes);
		CSteamID SteamId(*RawUniqueId);
		if (SteamId.IsValid())
		{
			return FUniqueNetIdSteam::Create(SteamId);
		}
	}

	return nullptr;
}

FUniqueNetIdPtr FOnlineIdentitySteamCore::CreateUniquePlayerId(const FString& Str)
{
	LogVerbose("");
	return FUniqueNetIdSteam::Create(Str);
}

FString FOnlineIdentitySteamCore::GetPlayerNickname(int32 LocalUserNum) const
{
	LogVeryVerbose("");
	if (LocalUserNum < MAX_LOCAL_PLAYERS &&
		m_SteamFriendsPtr != nullptr)
	{
		const char* PersonaName = m_SteamFriendsPtr->GetPersonaName();
		return FString(UTF8_TO_TCHAR(PersonaName));
	}
	return FString(TEXT(""));
}

FString FOnlineIdentitySteamCore::GetPlayerNickname(const FUniqueNetId& UserId) const
{
	LogVeryVerbose("");
	if (m_SteamFriendsPtr != nullptr)
	{
		const char* PersonaName = m_SteamFriendsPtr->GetPersonaName();
		return FString(UTF8_TO_TCHAR(PersonaName));
	}
	return FString(TEXT(""));
}

FString FOnlineIdentitySteamCore::GetAuthToken(int32 LocalUserNum) const
{
	LogVeryVerbose("");
	FString ResultToken;
	if (LocalUserNum < MAX_LOCAL_PLAYERS)
	{
		if (m_SteamUserPtr != nullptr &&
			m_SteamUserPtr->BLoggedOn())
		{
			uint8 AuthToken[1024];
			uint32 AuthTokenSize = 0;
			SteamNetworkingIdentity NetworkingIdentity;
			NetworkingIdentity.SetSteamID64(m_SteamUserPtr->GetSteamID().ConvertToUint64());
			NetworkingIdentity.m_eType = ESteamNetworkingIdentityType::k_ESteamNetworkingIdentityType_SteamID;
			//NetworkingIdentity.m_eType = ESteamNetworkingIdentityType::k_ESteamNetworkingIdentityType_GenericString;
			//NetworkingIdentity.SetGenericString("STEAMCORE");
			
			if (m_SteamUserPtr->GetAuthSessionTicket(AuthToken, UE_ARRAY_COUNT(AuthToken), &AuthTokenSize, &NetworkingIdentity) != k_HAuthTicketInvalid &&
				AuthTokenSize > 0)
			{
				ResultToken = BytesToHex(AuthToken, AuthTokenSize);
				LogVerbose("Obtained steam authticket");
				FPlatformProcess::Sleep(0.1f);
			}
			else
			{
				LogWarning("Failed to acquire Steam auth session ticket for %d", LocalUserNum);
			}
		}
	}
	return ResultToken;
}



void FOnlineIdentitySteamCore::RevokeAuthToken(const FUniqueNetId& UserId, const FOnRevokeAuthTokenCompleteDelegate& Delegate)
{
	LogVerbose("FOnlineIdentitySteamCore::RevokeAuthToken not implemented");
	FUniqueNetIdRef UserIdRef(UserId.AsShared());
	m_SteamSubsystem->ExecuteNextTick([UserIdRef, Delegate]()
	{
		Delegate.ExecuteIfBound(*UserIdRef, FOnlineError(FString(TEXT("RevokeAuthToken not implemented"))));
	});
}

#if UE_VERSION_OLDER_THAN(5,4,0)
void FOnlineIdentitySteamCore::GetUserPrivilege(const FUniqueNetId& UserId, EUserPrivileges::Type Privilege, const FOnGetUserPrivilegeCompleteDelegate& Delegate)
{
	LogVerbose("");
	Delegate.ExecuteIfBound(UserId, Privilege, static_cast<uint32>(EPrivilegeResults::NoFailures));
}
#else
void FOnlineIdentitySteamCore::GetUserPrivilege(const FUniqueNetId& UserId, EUserPrivileges::Type Privilege, const FOnGetUserPrivilegeCompleteDelegate& Delegate, EShowPrivilegeResolveUI ShowResolveUI)
{
	LogVerbose("");
	Delegate.ExecuteIfBound(UserId, Privilege, static_cast<uint32>(EPrivilegeResults::NoFailures));
}
#endif

FPlatformUserId FOnlineIdentitySteamCore::GetPlatformUserIdFromUniqueNetId(const FUniqueNetId& UniqueNetId) const
{
	LogVeryVerbose("");
	for (int i = 0; i < MAX_LOCAL_PLAYERS; ++i)
	{
		auto CurrentUniqueId = GetUniquePlayerId(i);
		if (CurrentUniqueId.IsValid() && (*CurrentUniqueId == UniqueNetId))
		{
#if UE_VERSION_OLDER_THAN(5,0,0)
			return i;
#else
			return GetPlatformUserIdFromLocalUserNum(i);
#endif
		}
	}

	return PLATFORMUSERID_NONE;
}

FString FOnlineIdentitySteamCore::GetAuthType() const
{
	LogVeryVerbose("");
	return TEXT("");
}

void FOnlineIdentitySteamCore::GetLinkedAccountAuthToken(int32 LocalUserNum, const FOnGetLinkedAccountAuthTokenCompleteDelegate& Delegate) const
{
	LogVeryVerbose("");
	FExternalAuthToken AuthToken;
	AuthToken.TokenString = GetAuthToken(LocalUserNum);
	Delegate.ExecuteIfBound(LocalUserNum, AuthToken.HasTokenString(), AuthToken);
}
#endif