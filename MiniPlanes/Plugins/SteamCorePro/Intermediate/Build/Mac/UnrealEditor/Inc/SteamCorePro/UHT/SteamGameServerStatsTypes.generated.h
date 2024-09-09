// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamGameServerStats/SteamGameServerStatsTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGSStatsReceived;
struct FGSStatsStored;
struct FGSStatsUnloaded;
#ifdef STEAMCOREPRO_SteamGameServerStatsTypes_generated_h
#error "SteamGameServerStatsTypes.generated.h already included, missing '#pragma once' in SteamGameServerStatsTypes.h"
#endif
#define STEAMCOREPRO_SteamGameServerStatsTypes_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStatsTypes_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSStatsReceived_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FGSStatsReceived>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStatsTypes_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSStatsStored_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FGSStatsStored>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStatsTypes_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FGSStatsUnloaded>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStatsTypes_h_87_DELEGATE \
STEAMCOREPRO_API void FOnServerRequestUserStats_DelegateWrapper(const FScriptDelegate& OnServerRequestUserStats, FGSStatsReceived const& Data, bool bWasSuccessful);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStatsTypes_h_88_DELEGATE \
STEAMCOREPRO_API void FOnServerStoreUserStats_DelegateWrapper(const FScriptDelegate& OnServerStoreUserStats, FGSStatsStored const& Data, bool bWasSuccessful);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStatsTypes_h_89_DELEGATE \
STEAMCOREPRO_API void FOnGSStatsUnloaded_DelegateWrapper(const FMulticastScriptDelegate& OnGSStatsUnloaded, FGSStatsUnloaded const& Data);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStatsTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
