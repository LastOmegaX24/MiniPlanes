﻿/**
* Copyright (C) 2017-2024 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamAppList
*/

#pragma once

#include "UObject/NameTypes.h"
#include <OnlineSubsystemTypes.h>
#include <Interfaces/OnlinePresenceInterface.h>

#if WITH_STEAMCORE
#include "OnlineSessionSettings.h"
#include "isteammatchmaking.h"
#endif

#include "SteamCoreSharedTypes.generated.h"


#ifndef STEAMCORE_SUBSYSTEM
#define STEAMCORE_SUBSYSTEM FName(TEXT("STEAMCORE"))
#endif

#ifdef _MSC_VER
#define STEAM_SDK_IGNORE_REDUNDANCY_START \
__pragma(warning(push)) \
__pragma(warning(disable: 6287)) 

#define STEAM_SDK_IGNORE_REDUNDANCY_END \
__pragma(warning(pop))
#else
#define STEAM_SDK_IGNORE_REDUNDANCY_START
#define STEAM_SDK_IGNORE_REDUNDANCY_END
#endif

namespace FNetworkProtocolTypes
{
 STEAMCORESHARED_API extern const FLazyName SteamCore;
 STEAMCORESHARED_API extern const FLazyName SteamCoreSocketsP2P;
 STEAMCORESHARED_API extern const FLazyName SteamCoreSocketsIP;
}

// lobby search distance. Lobby results are sorted from closest to farthest.
UENUM(BlueprintType)
enum class ESteamLobbyDistanceFilter : uint8
{
 // only lobbies in the same immediate region will be returned
 k_ELobbyDistanceFilterClose = 0 UMETA(DisplayName="Close"),
 // only lobbies in the same region or near by regions
 k_ELobbyDistanceFilterDefault UMETA(DisplayName="Default"),
 // for games that don't have many latency requirements, will return lobbies about half-way around the globe
 k_ELobbyDistanceFilterFar UMETA(DisplayName="Far"),
 // no filtering, will match lobbies as far as India to NY (not recommended, expect multiple seconds of latency between the clients)
 k_ELobbyDistanceFilterWorldwide UMETA(DisplayName="WorldWide"),	
};


UENUM(BlueprintType)
enum class EOnlineFriendSteamCorePresenceState : uint8
{
 /** User is offline */
 Offline,
 /** User is online */
 Online,
 /** User is away */
 Away,
 /** User is away for >2 hours (can change depending on platform) */
 ExtendedAway,
 /** User is in do not disturb mode */
 DoNotDisturb,
 /** Default */
 Unknown
};
USTRUCT(BlueprintType)
struct STEAMCORESHARED_API FOnlineUserPresenceSteamCoreBlueprint
{
 GENERATED_BODY()
	
public:
 FOnlineUserPresenceSteamCoreBlueprint()
  : bIsOnline(false)
  , bIsPlaying(false)
  , bIsPlayingThisGame(false)
  , bIsJoinable(false)
  , bHasVoiceSupport(false)
  , PresenceState(EOnlineFriendSteamCorePresenceState::Offline)
 {
 }
 FOnlineUserPresenceSteamCoreBlueprint(const FOnlineUserPresence& Presence)
  : bIsOnline(Presence.bIsOnline)
  , bIsPlaying(Presence.bIsPlaying)
  , bIsPlayingThisGame(Presence.bIsPlayingThisGame)
  , bIsJoinable(Presence.bIsJoinable)
  , bHasVoiceSupport(Presence.bHasVoiceSupport)
  , PresenceState(static_cast<EOnlineFriendSteamCorePresenceState>(Presence.Status.State))
 {
 }
public:
 UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
 bool bIsOnline;
	
 UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
 bool bIsPlaying;
	
 UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
 bool bIsPlayingThisGame;
	
 UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
 bool bIsJoinable;
	
 UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
 bool bHasVoiceSupport;
	
 UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
 FDateTime LastOnline;
	
 UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
 EOnlineFriendSteamCorePresenceState PresenceState;
};
USTRUCT(BlueprintType)
struct STEAMCORESHARED_API FOnlineFriendSteamCoreBlueprint
{
 GENERATED_BODY()
	
public:
 FOnlineFriendSteamCoreBlueprint()
 {
 }
 FOnlineFriendSteamCoreBlueprint(const FOnlineFriend& Friend)
  : DisplayName(Friend.GetDisplayName())
  , RealName(Friend.GetRealName())
  , Presence(Friend.GetPresence())
  , SteamId(Friend.GetUserId()->ToString())
 {
 }
public:
 UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
 FString DisplayName;
	
 UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
 FString RealName;
	
 UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
 FOnlineUserPresenceSteamCoreBlueprint Presence;
 UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
 FString SteamId;
};

#if WITH_STEAMCORE
class FOnlineSessionSearchSteam final : public FOnlineSessionSearch
{
public:
 ELobbyDistanceFilter m_LobbyDistanceFilter;
};
#endif