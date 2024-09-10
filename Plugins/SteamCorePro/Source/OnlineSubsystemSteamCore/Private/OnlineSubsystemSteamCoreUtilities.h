/**
* Copyright (C) 2017-2024 eelDev AB
*
*/

#pragma once

#include "CoreMinimal.h"
#include "OnlineSubsystemSteamCorePrivate.h"
#include "OnlineSubsystemSteamCoreUtilities.generated.h"

#if WITH_STEAMCORE
namespace SteamCore
{
	FString SteamResultString(EResult Result);
	FString SteamChatMemberStateChangeString(EChatMemberStateChange StateChange);
	FString SteamChatRoomEnterResponseString(EChatRoomEnterResponse Response);
	FString SteamMatchMakingServerResponseString(EMatchMakingServerResponse Response);
	FString SteamP2PConnectError(EP2PSessionError InError);
	FString SteamVoiceResult(EVoiceResult Result);
	EOnlineServerConnectionStatus::Type SteamConnectionResult(const EResult Result);	
}
#endif


UCLASS(abstract)
class ONLINESUBSYSTEMSTEAMCORE_API USteamCoreSubsystemUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "SteamCore|Utilities")
	static bool SendSessionInviteToFriend(int32 LocalUserNum, const FString& FriendSteamId);
};