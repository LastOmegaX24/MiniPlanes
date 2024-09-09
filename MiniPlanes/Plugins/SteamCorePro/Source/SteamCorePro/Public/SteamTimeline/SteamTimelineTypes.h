/**
* Copyright (C) 2017-2024 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInput
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCorePro/SteamCoreProModule.h"
//#include "SteamTimelineTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

// Controls the color of the timeline bar segments. The value names listed here map to a multiplayer game, where
// the user starts a game (in menus), then joins a multiplayer session that first has a character selection lobby
// then finally the multiplayer session starts. However, you can also map these values to any type of game. In a single
// player game where you visit towns & dungeons, you could set k_ETimelineGameMode_Menus when the player is in a town
// buying items, k_ETimelineGameMode_Staging for when a dungeon is loading and k_ETimelineGameMode_Playing for when
// inside the dungeon fighting monsters.
UENUM(BlueprintType)
enum class ESteamTimelineGameMode : uint8
{
	k_ETimelineGameMode_Invalid = 0,
	k_ETimelineGameMode_Playing = 1,
	k_ETimelineGameMode_Staging = 2,
	k_ETimelineGameMode_Menus = 3,
	k_ETimelineGameMode_LoadingScreen = 4,

	k_ETimelineGameMode_Max, // one past the last valid value
};

// Used in AddTimelineEvent, where Featured events will be offered before Standard events
UENUM(BlueprintType)
enum class ESteamTimelineEventClipPriority : uint8
{
	k_ETimelineEventClipPriority_Invalid = 0,
	k_ETimelineEventClipPriority_None = 1,
	k_ETimelineEventClipPriority_Standard = 2,
	k_ETimelineEventClipPriority_Featured = 3,
};