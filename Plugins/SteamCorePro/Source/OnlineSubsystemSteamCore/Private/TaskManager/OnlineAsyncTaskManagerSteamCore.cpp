/**
* Copyright (C) 2017-2024 eelDev AB
*
*/

#include "TaskManager/OnlineAsyncTaskManagerSteamCore.h"
#include "OnlineAsyncTaskManagerAsyncTasksSteamCore.h"
#include "OnlineSubsystemSteamCorePrivatePCH.h" 
#include "ExternalUI/OnlineExternalUITypesSteamCore.h"

#if WITH_STEAMCORE
void FOnlineAsyncTaskManagerSteamCore::OnlineTick()
{
	check(m_SteamSubsystem);
	check(FPlatformTLS::GetCurrentThreadId() == OnlineThreadId);

	if (m_SteamSubsystem->IsSteamClientAvailable())
	{
		SteamAPI_RunCallbacks();
	}

	if (m_SteamSubsystem->IsSteamServerAvailable())
	{
		SteamGameServer_RunCallbacks();
	}
}

void FOnlineAsyncTaskManagerSteamCore::OnInviteAccepted(GameRichPresenceJoinRequested_t* pParam)
{
	FOnlineAsyncEventSteamCoreInviteAccepted* NewEvent = new FOnlineAsyncEventSteamCoreInviteAccepted(m_SteamSubsystem, *FUniqueNetIdSteam::Create(pParam->m_steamIDFriend), UTF8_TO_TCHAR(pParam->m_rgchConnect));
	LogVerbose("%s", *NewEvent->ToString());
	AddToOutQueue(NewEvent);
}

void FOnlineAsyncTaskManagerSteamCore::OnLobbyInviteAccepted(GameLobbyJoinRequested_t* pParam)
{
	LogVerbose("");
	if (pParam->m_steamIDLobby.IsLobby())
	{
		const FUniqueNetIdSteamRef LobbyId = FUniqueNetIdSteam::Create(pParam->m_steamIDLobby);

		const FOnlineSessionSteamCorePtr SessionInt = StaticCastSharedPtr<FOnlineSessionSteamCore>(m_SteamSubsystem->GetSessionInterface());
		if (SessionInt.IsValid() && !SessionInt->IsMemberOfLobby(*LobbyId))
		{
			FOnlineAsyncEventSteamCoreLobbyInviteAccepted* NewEvent = new FOnlineAsyncEventSteamCoreLobbyInviteAccepted(m_SteamSubsystem, *FUniqueNetIdSteam::Create(pParam->m_steamIDFriend), *LobbyId);
			LogVerbose("%s", *NewEvent->ToString());
			AddToOutQueue(NewEvent);
		}
		else
		{
			LogWarning("Attempting to accept invite to lobby user is already in, ignoring.");
		}
	}
	else
	{
		LogWarning("OnLobbyInviteAccepted: Invalid LobbyId received.");
	}
}

void FOnlineAsyncTaskManagerSteamCore::OnLobbyEnter(LobbyEnter_t* pParam)
{
	if (SteamMatchmaking()->GetLobbyOwner(pParam->m_ulSteamIDLobby) != SteamUser()->GetSteamID())
	{
		FOnlineAsyncEventSteamLobbyEnter* NewEvent = new FOnlineAsyncEventSteamLobbyEnter(m_SteamSubsystem, *pParam);
		LogVerbose("%s", *NewEvent->ToString());
		AddToOutQueue(NewEvent);
	}
}

void FOnlineAsyncTaskManagerSteamCore::OnLobbyChatUpdate(LobbyChatUpdate_t* pParam)
{
	FOnlineAsyncEventSteamLobbyChatUpdate* NewEvent = new FOnlineAsyncEventSteamLobbyChatUpdate(m_SteamSubsystem, *pParam);
	LogVerbose("%s", *NewEvent->ToString());
	AddToOutQueue(NewEvent);
}

void FOnlineAsyncTaskManagerSteamCore::OnLobbyDataUpdate(LobbyDataUpdate_t* pParam)
{
	if (pParam->m_ulSteamIDLobby == pParam->m_ulSteamIDMember)
	{
		if (!pParam->m_bSuccess)
		{
			LogVerbose("Lobby %s is no longer available.", *FUniqueNetIdSteam::ToDebugString(pParam->m_ulSteamIDLobby));
		}

		const ISteamMatchmaking* SteamMatchmakingPtr = SteamMatchmaking();
		check(SteamMatchmakingPtr);

		FOnlineAsyncEventSteamLobbyUpdate* NewEvent = new FOnlineAsyncEventSteamLobbyUpdate(m_SteamSubsystem, *FUniqueNetIdSteam::Create(pParam->m_ulSteamIDLobby));
		LogVerbose("%s", *NewEvent->ToString());
		AddToOutQueue(NewEvent);
	}
}

void FOnlineAsyncTaskManagerSteamCore::OnUserStatsReceived(UserStatsReceived_t* pParam)
{
	const CGameID GameID(m_SteamSubsystem->GetSteamAppId());
	if (GameID.ToUint64() == pParam->m_nGameID)
	{
		const FUniqueNetIdSteamRef UserId = FUniqueNetIdSteam::Create(pParam->m_steamIDUser);
		if (pParam->m_eResult != k_EResultOK)
		{
			if (pParam->m_eResult == k_EResultFail)
			{
				LogWarning("Failed to obtain steam user stats, user: %s has no stats entries", *UserId->ToDebugString());
			}
			else
			{
				LogWarning("Failed to obtain steam user stats, user: %s error: %s", *UserId->ToDebugString(), *SteamCore::SteamResultString(pParam->m_eResult));
			}
		}

		FOnlineAsyncEventSteamStatsReceived* NewEvent = new FOnlineAsyncEventSteamStatsReceived(m_SteamSubsystem, *UserId, pParam->m_eResult);
		LogVerbose("%s", *NewEvent->ToString());
		AddToOutQueue(NewEvent);
	}
	else
	{
		LogWarning("Obtained steam user stats, but for wrong game! Ignoring.");
	}
}

void FOnlineAsyncTaskManagerSteamCore::OnUserStatsStored(UserStatsStored_t* pParam)
{
	const CGameID GameID(m_SteamSubsystem->GetSteamAppId());
	if (GameID.ToUint64() == pParam->m_nGameID)
	{
		const FUniqueNetIdSteamRef UserId = FUniqueNetIdSteam::Create(SteamUser()->GetSteamID());
		if (pParam->m_eResult != k_EResultOK)
		{
			if (pParam->m_eResult == k_EResultInvalidParam)
			{
				LogWarning("Invalid stats data set, stats have been reverted to state prior to last write.");
			}
			else
			{
				LogWarning("Failed to store steam user stats, error: %s", *SteamCore::SteamResultString(pParam->m_eResult));
			}
		}

		FOnlineAsyncEventSteamStatsStored* NewEvent = new FOnlineAsyncEventSteamStatsStored(m_SteamSubsystem, *UserId, pParam->m_eResult);
		LogVerbose("%s", *NewEvent->ToString());
		AddToOutQueue(NewEvent);
	}
	else
	{
		LogWarning("Stored steam user stats, but for wrong game! Ignoring.");
	}
}

void FOnlineAsyncTaskManagerSteamCore::OnUserStatsUnloaded(UserStatsUnloaded_t* pParam)
{
	FOnlineAsyncEventSteamStatsUnloaded* NewEvent = new FOnlineAsyncEventSteamStatsUnloaded(m_SteamSubsystem, *FUniqueNetIdSteam::Create(pParam->m_steamIDUser));
	LogVerbose("%s", *NewEvent->ToString());
	AddToOutQueue(NewEvent);
}

void FOnlineAsyncTaskManagerSteamCore::OnExternalUITriggered(GameOverlayActivated_t* pParam)
{
	FOnlineAsyncEventSteamCoreExternalUITriggered* NewEvent = new FOnlineAsyncEventSteamCoreExternalUITriggered(m_SteamSubsystem, (pParam->m_bActive != 0) ? true : false);
	LogVerbose("%s", *NewEvent->ToString());
	AddToOutQueue(NewEvent);
}

void FOnlineAsyncTaskManagerSteamCore::OnSteamServersConnected(SteamServersConnected_t* pParam)
{
	FOnlineAsyncEventSteamServerConnectionState* NewEvent = new FOnlineAsyncEventSteamServerConnectionState(m_SteamSubsystem, EOnlineServerConnectionStatus::Connected);
	LogVerbose("%s", *NewEvent->ToString());
	AddToOutQueue(NewEvent);
}

void FOnlineAsyncTaskManagerSteamCore::OnSteamServersDisconnected(SteamServersDisconnected_t* pParam)
{
	FOnlineAsyncEventSteamServerConnectionState* NewEvent = new FOnlineAsyncEventSteamServerConnectionState(m_SteamSubsystem, SteamCore::SteamConnectionResult(pParam->m_eResult));
	LogVerbose("%s", *NewEvent->ToString());
	AddToOutQueue(NewEvent);
}

void FOnlineAsyncTaskManagerSteamCore::OnSteamServersConnectedGS(SteamServersConnected_t* pParam)
{
	FOnlineAsyncEventSteamServerConnectedGS* NewEvent = new FOnlineAsyncEventSteamServerConnectedGS(m_SteamSubsystem, *FUniqueNetIdSteam::Create(SteamGameServer()->GetSteamID()));
	LogVerbose("%s", *NewEvent->ToString());
	AddToOutQueue(NewEvent);
}

void FOnlineAsyncTaskManagerSteamCore::OnSteamServersDisconnectedGS(SteamServersDisconnected_t* pParam)
{
	FOnlineAsyncEventSteamServerDisconnectedGS* NewEvent = new FOnlineAsyncEventSteamServerDisconnectedGS(m_SteamSubsystem, *pParam);
	LogVerbose("%s", *NewEvent->ToString());
	AddToOutQueue(NewEvent);
}

void FOnlineAsyncTaskManagerSteamCore::OnSteamServersConnectFailureGS(SteamServerConnectFailure_t* CallbackData)
{
	if (!CallbackData->m_bStillRetrying)
	{
		FOnlineAsyncEventSteamServerFailedGS* NewEvent = new FOnlineAsyncEventSteamServerFailedGS(m_SteamSubsystem, *CallbackData);
		LogVerbose("%s", *NewEvent->ToString());
		AddToOutQueue(NewEvent);
	}
}

void FOnlineAsyncTaskManagerSteamCore::OnPolicyResponseGS(GSPolicyResponse_t* CallbackData)
{
	FOnlineAsyncEventSteamServerPolicyResponseGS* NewEvent = new FOnlineAsyncEventSteamServerPolicyResponseGS(m_SteamSubsystem, *CallbackData);
	LogVerbose("%s", *NewEvent->ToString());
	AddToOutQueue(NewEvent);
}


void FOnlineAsyncTaskManagerSteamCore::OnAuthenticationResponseGS(ValidateAuthTicketResponse_t* pParam)
{
	FOnlineAsyncEventSteamAuthenticationResponse* NewEvent = new FOnlineAsyncEventSteamAuthenticationResponse(m_SteamSubsystem, *pParam, true);
	LogVerbose("%s", *NewEvent->ToString());
	AddToOutQueue(NewEvent);
}

void FOnlineAsyncTaskManagerSteamCore::OnAuthenticationResponse(ValidateAuthTicketResponse_t* pParam)
{
	FOnlineAsyncEventSteamAuthenticationResponse* NewEvent = new FOnlineAsyncEventSteamAuthenticationResponse(m_SteamSubsystem, *pParam, false);
	LogVerbose("%s", *NewEvent->ToString());
	AddToOutQueue(NewEvent);
}

void FOnlineAsyncTaskManagerSteamCore::OnP2PSessionRequest(P2PSessionRequest_t* pParam)
{
	LogVerbose("Client connection request Id: %s", *FUniqueNetIdSteam::ToDebugString(pParam->m_steamIDRemote));

	IOnlineSessionPtr SessionInt = m_SteamSubsystem->GetSessionInterface();
	if (SessionInt.IsValid() && SessionInt->GetNumSessions() > 0)
	{
		FOnlineAsyncEventSteamConnectionRequest* NewEvent = new FOnlineAsyncEventSteamConnectionRequest(m_SteamSubsystem, SteamNetworking(), *FUniqueNetIdSteam::Create(pParam->m_steamIDRemote));
		LogVerbose("%s", *NewEvent->ToString());
		AddToOutQueue(NewEvent);
	}
}

void FOnlineAsyncTaskManagerSteamCore::OnP2PSessionConnectFail(P2PSessionConnectFail_t* pParam)
{
	FOnlineAsyncEventSteamConnectionFailed* NewEvent = new FOnlineAsyncEventSteamConnectionFailed(m_SteamSubsystem, *FUniqueNetIdSteam::Create(pParam->m_steamIDRemote), static_cast<EP2PSessionError>(pParam->m_eP2PSessionError));
	LogVerbose("%s", *NewEvent->ToString());
	AddToOutQueue(NewEvent);
}

void FOnlineAsyncTaskManagerSteamCore::OnP2PSessionRequestGS(P2PSessionRequest_t* pParam)
{
	FOnlineAsyncEventSteamConnectionRequest* NewEvent = new FOnlineAsyncEventSteamConnectionRequest(m_SteamSubsystem, SteamGameServerNetworking(), *FUniqueNetIdSteam::Create(pParam->m_steamIDRemote));
	LogVerbose("%s", *NewEvent->ToString());
	AddToOutQueue(NewEvent);
}

void FOnlineAsyncTaskManagerSteamCore::OnP2PSessionConnectFailGS(P2PSessionConnectFail_t* pParam)
{
	FOnlineAsyncEventSteamConnectionFailed* NewEvent = new FOnlineAsyncEventSteamConnectionFailed(m_SteamSubsystem, *FUniqueNetIdSteam::Create(pParam->m_steamIDRemote), static_cast<EP2PSessionError>(pParam->m_eP2PSessionError));
	LogVerbose("%s", *NewEvent->ToString());
	AddToOutQueue(NewEvent);
}

void FOnlineAsyncTaskManagerSteamCore::OnSteamShutdown(SteamShutdown_t* pParam)
{
	FOnlineAsyncEventSteamShutdown* NewEvent = new FOnlineAsyncEventSteamShutdown(m_SteamSubsystem);
	LogVerbose("%s", *NewEvent->ToString());
	AddToOutQueue(NewEvent);
}

void FOnlineAsyncTaskManagerSteamCore::OnRichPresenceUpdate(FriendRichPresenceUpdate_t* pParam)
{
	FOnlineAsyncEventSteamRichPresenceUpdate* NewEvent = new FOnlineAsyncEventSteamRichPresenceUpdate(m_SteamSubsystem, pParam->m_steamIDFriend);
	LogVerbose("%s", *NewEvent->ToString());
	AddToOutQueue(NewEvent);
}

void FOnlineAsyncTaskManagerSteamCore::OnFriendStatusUpdate(PersonaStateChange_t* pParam)
{
	const int ChangedData = pParam->m_nChangeFlags;
	const int RichPresenceWatchedEvents = (k_EPersonaChangeGameServer | k_EPersonaChangeGamePlayed | k_EPersonaChangeStatus | k_EPersonaChangeGoneOffline | k_EPersonaChangeComeOnline);

	if (ChangedData & RichPresenceWatchedEvents)
	{
		FOnlineAsyncEventSteamRichPresenceUpdate* NewEvent = new FOnlineAsyncEventSteamRichPresenceUpdate(m_SteamSubsystem, pParam->m_ulSteamID);
		LogVerbose("%s", *NewEvent->ToString());
		AddToOutQueue(NewEvent);
	}
}
#endif
