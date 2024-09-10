/**
* Copyright (C) 2017-2024 eelDev AB
*
*/

#include "Voice/VoiceEngineSteamCore.h"
#include "OnlineSubsystemSteamCorePrivatePCH.h"

#if WITH_STEAMCORE

FVoiceEngineSteamCoreCore::FVoiceEngineSteamCoreCore(IOnlineSubsystem* InSubsystem)
	: FVoiceEngineImpl(InSubsystem),
	  m_SteamUserPtr(SteamUser()),
	  m_SteamFriendsPtr(SteamFriends())
{
}

FVoiceEngineSteamCoreCore::~FVoiceEngineSteamCoreCore()
{
	if (FVoiceEngineImpl::IsRecording())
	{
		m_SteamFriendsPtr->SetInGameVoiceSpeaking(m_SteamUserPtr->GetSteamID(), false);
	}
}

void FVoiceEngineSteamCoreCore::StartRecording() const
{
	LogVerbose("FVoiceEngineSteamCoreCore::StartRecording");
	if (GetVoiceCapture().IsValid())
	{
		if (!GetVoiceCapture()->Start())
		{
			LogWarning("Failed to start voice recording");
		}
		else if (m_SteamFriendsPtr)
		{
			m_SteamFriendsPtr->SetInGameVoiceSpeaking(m_SteamUserPtr->GetSteamID(), true);
		}
	}
}

void FVoiceEngineSteamCoreCore::StoppedRecording() const
{
	LogVerbose("FVoiceEngineSteamCoreCore::StoppedRecording");
	if (m_SteamFriendsPtr)
	{
		m_SteamFriendsPtr->SetInGameVoiceSpeaking(m_SteamUserPtr->GetSteamID(), false);
	}
}
#endif