// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamTimeline/SteamTimelineTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCOREPRO_SteamTimelineTypes_generated_h
#error "SteamTimelineTypes.generated.h already included, missing '#pragma once' in SteamTimelineTypes.h"
#endif
#define STEAMCOREPRO_SteamTimelineTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimelineTypes_h


#define FOREACH_ENUM_ESTEAMTIMELINEGAMEMODE(op) \
	op(ESteamTimelineGameMode::k_ETimelineGameMode_Invalid) \
	op(ESteamTimelineGameMode::k_ETimelineGameMode_Playing) \
	op(ESteamTimelineGameMode::k_ETimelineGameMode_Staging) \
	op(ESteamTimelineGameMode::k_ETimelineGameMode_Menus) \
	op(ESteamTimelineGameMode::k_ETimelineGameMode_LoadingScreen) \
	op(ESteamTimelineGameMode::k_ETimelineGameMode_Max) 

enum class ESteamTimelineGameMode : uint8;
template<> struct TIsUEnumClass<ESteamTimelineGameMode> { enum { Value = true }; };
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamTimelineGameMode>();

#define FOREACH_ENUM_ESTEAMTIMELINEEVENTCLIPPRIORITY(op) \
	op(ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Invalid) \
	op(ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_None) \
	op(ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Standard) \
	op(ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Featured) 

enum class ESteamTimelineEventClipPriority : uint8;
template<> struct TIsUEnumClass<ESteamTimelineEventClipPriority> { enum { Value = true }; };
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamTimelineEventClipPriority>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
