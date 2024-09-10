/**
* Copyright (C) 2017-2024 eelDev AB
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SteamCoreProGameMode.generated.h"

UCLASS()
class STEAMCOREPRO_API ASteamCoreProGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;
};
