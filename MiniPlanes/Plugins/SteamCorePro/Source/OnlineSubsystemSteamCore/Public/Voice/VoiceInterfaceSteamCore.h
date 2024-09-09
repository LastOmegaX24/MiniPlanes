/**
* Copyright (C) 2017-2024 eelDev AB
*
*/

#pragma once

#include "CoreMinimal.h"
#include "Interfaces/VoiceInterface.h"
#include "VoiceInterfaceImpl.h"
#include "VoiceEngineSteamCore.h"

#if WITH_STEAMCORE
class ONLINESUBSYSTEMSTEAMCORE_API FOnlineVoiceSteamCore : public FOnlineVoiceImpl
{
PACKAGE_SCOPE:
	FOnlineVoiceSteamCore()
		: FOnlineVoiceImpl()
	{
	};

public:
	FOnlineVoiceSteamCore(class IOnlineSubsystem* InOnlineSubsystem)
		: FOnlineVoiceImpl(InOnlineSubsystem)
	{
		check(InOnlineSubsystem);
	};

	virtual IVoiceEnginePtr CreateVoiceEngine() override
	{
		return MakeShareable(new FVoiceEngineSteamCoreCore(OnlineSubsystem));
	}

	virtual ~FOnlineVoiceSteamCore() override
	{
	};
};

typedef TSharedPtr<FOnlineVoiceSteamCore, ESPMode::ThreadSafe> FOnlineVoiceSteamCorePtr;
#endif