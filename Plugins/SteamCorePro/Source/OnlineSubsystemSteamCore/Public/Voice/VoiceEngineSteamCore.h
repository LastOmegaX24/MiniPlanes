/**
* Copyright (C) 2017-2024 eelDev AB
*
*/

#pragma once

#include "CoreMinimal.h"
#include "OnlineSubsystemTypes.h"
#include "OnlineSubsystemSteamCoreTypes.h"
#include "OnlineSubsystemUtilsPackage.h"
#include "VoiceEngineImpl.h"

class IOnlineSubsystem;
class FUniqueNetIdSteam;

#define INVALID_INDEX -1

#if WITH_STEAMCORE
class ONLINESUBSYSTEMSTEAMCORE_API FVoiceEngineSteamCoreCore : public FVoiceEngineImpl
{
	virtual void StartRecording() const override;
	virtual void StoppedRecording() const override;

PACKAGE_SCOPE:
	FVoiceEngineSteamCoreCore() :
		FVoiceEngineImpl(),
		m_SteamUserPtr(nullptr),
		m_SteamFriendsPtr(nullptr)
	{};

public:

	FVoiceEngineSteamCoreCore(IOnlineSubsystem* InSubsystem);
	virtual ~FVoiceEngineSteamCoreCore() override;

private:
	ISteamUser* m_SteamUserPtr;
	ISteamFriends* m_SteamFriendsPtr;
};
#endif