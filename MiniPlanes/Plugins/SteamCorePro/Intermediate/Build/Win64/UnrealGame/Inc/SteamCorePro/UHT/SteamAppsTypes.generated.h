// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamApps/SteamAppsTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDLCInstalled;
struct FFileDetailsResult;
struct FTimedTrialStatus;
#ifdef STEAMCOREPRO_SteamAppsTypes_generated_h
#error "SteamAppsTypes.generated.h already included, missing '#pragma once' in SteamAppsTypes.h"
#endif
#define STEAMCOREPRO_SteamAppsTypes_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsTypes_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimedTrialStatus_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FTimedTrialStatus>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsTypes_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFileDetailsResult_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FFileDetailsResult>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsTypes_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDLCInstalled_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FDLCInstalled>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsTypes_h_124_DELEGATE \
STEAMCOREPRO_API void FOnFileDetailsResult_DelegateWrapper(const FScriptDelegate& OnFileDetailsResult, FFileDetailsResult const& Data, bool bWasSuccessful);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsTypes_h_125_DELEGATE \
STEAMCOREPRO_API void FOnDLCInstalled_DelegateWrapper(const FMulticastScriptDelegate& OnDLCInstalled, FDLCInstalled const& Data);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsTypes_h_126_DELEGATE \
STEAMCOREPRO_API void FOnFileDetailsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFileDetailsResultDelegate, FFileDetailsResult const& Data);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsTypes_h_127_DELEGATE \
STEAMCOREPRO_API void FOnNewUrlLaunchParametersDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNewUrlLaunchParametersDelegate);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsTypes_h_128_DELEGATE \
STEAMCOREPRO_API void FOnTimedTrialStatusDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTimedTrialStatusDelegate, FTimedTrialStatus const& Data);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsTypes_h


#define FOREACH_ENUM_ESTEAMBETABRANCHFLAGS(op) \
	op(ESteamBetaBranchFlags::k_EBetaBranch_None) \
	op(ESteamBetaBranchFlags::k_EBetaBranch_Default) \
	op(ESteamBetaBranchFlags::k_EBetaBranch_Available) \
	op(ESteamBetaBranchFlags::k_EBetaBranch_Private) \
	op(ESteamBetaBranchFlags::k_EBetaBranch_Selected) \
	op(ESteamBetaBranchFlags::k_EBetaBranch_Installed) 

enum class ESteamBetaBranchFlags : uint8;
template<> struct TIsUEnumClass<ESteamBetaBranchFlags> { enum { Value = true }; };
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamBetaBranchFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
