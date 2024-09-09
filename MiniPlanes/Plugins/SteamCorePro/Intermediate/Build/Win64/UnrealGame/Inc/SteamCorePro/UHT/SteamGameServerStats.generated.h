// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamGameServerStats/SteamGameServerStats.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProGameServerStats;
struct FSteamID;
#ifdef STEAMCOREPRO_SteamGameServerStats_generated_h
#error "SteamGameServerStats.generated.h already included, missing '#pragma once' in SteamGameServerStats.h"
#endif
#define STEAMCOREPRO_SteamGameServerStats_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStats_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateUserAvgRateStat); \
	DECLARE_FUNCTION(execSetUserStatInt); \
	DECLARE_FUNCTION(execSetUserStatFloat); \
	DECLARE_FUNCTION(execSetUserAchievement); \
	DECLARE_FUNCTION(execServerStoreUserStats); \
	DECLARE_FUNCTION(execServerRequestUserStats); \
	DECLARE_FUNCTION(execGetUserStatInt); \
	DECLARE_FUNCTION(execGetUserStatFloat); \
	DECLARE_FUNCTION(execGetUserAchievement); \
	DECLARE_FUNCTION(execClearUserAchievement); \
	DECLARE_FUNCTION(execGetSteamGameServerStats);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStats_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProGameServerStats(); \
	friend struct Z_Construct_UClass_USteamProGameServerStats_Statics; \
public: \
	DECLARE_CLASS(USteamProGameServerStats, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProGameServerStats)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStats_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProGameServerStats(USteamProGameServerStats&&); \
	USteamProGameServerStats(const USteamProGameServerStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProGameServerStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProGameServerStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProGameServerStats)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStats_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStats_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStats_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStats_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStats_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProGameServerStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
