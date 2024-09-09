// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamScreenshots/SteamScreenshotsTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FScreenshotReady;
struct FScreenshotRequested;
#ifdef STEAMCOREPRO_SteamScreenshotsTypes_generated_h
#error "SteamScreenshotsTypes.generated.h already included, missing '#pragma once' in SteamScreenshotsTypes.h"
#endif
#define STEAMCOREPRO_SteamScreenshotsTypes_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshotsTypes_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScreenshotHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FScreenshotHandle>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshotsTypes_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScreenshotReady_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FScreenshotReady>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshotsTypes_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScreenshotRequested_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FScreenshotRequested>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshotsTypes_h_95_DELEGATE \
STEAMCOREPRO_API void FOnScreenshotReady_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotReady, FScreenshotReady const& Data);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshotsTypes_h_96_DELEGATE \
STEAMCOREPRO_API void FOnScreenshotRequested_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotRequested, FScreenshotRequested const& Data);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshotsTypes_h


#define FOREACH_ENUM_ESTEAMVRSCREENSHOTTYPE(op) \
	op(ESteamVRScreenshotType::None) \
	op(ESteamVRScreenshotType::Mono) \
	op(ESteamVRScreenshotType::Stereo) \
	op(ESteamVRScreenshotType::MonoCubemap) \
	op(ESteamVRScreenshotType::MonoPanorama) \
	op(ESteamVRScreenshotType::StereoPanorama) 

enum class ESteamVRScreenshotType : uint8;
template<> struct TIsUEnumClass<ESteamVRScreenshotType> { enum { Value = true }; };
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamVRScreenshotType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
