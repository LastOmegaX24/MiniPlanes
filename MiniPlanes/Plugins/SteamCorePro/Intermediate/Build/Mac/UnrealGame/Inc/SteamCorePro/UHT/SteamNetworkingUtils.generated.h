// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamNetworkingUtils/SteamNetworkingUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProNetworkingUtils;
struct FSteamNetworkPingLocation;
#ifdef STEAMCOREPRO_SteamNetworkingUtils_generated_h
#error "SteamNetworkingUtils.generated.h already included, missing '#pragma once' in SteamNetworkingUtils.h"
#endif
#define STEAMCOREPRO_SteamNetworkingUtils_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckPingDataUpToDate); \
	DECLARE_FUNCTION(execParsePingLocationString); \
	DECLARE_FUNCTION(execConvertPingLocationToString); \
	DECLARE_FUNCTION(execEstimatePingTimeFromLocalHost); \
	DECLARE_FUNCTION(execEstimatePingTimeBetweenTwoLocations); \
	DECLARE_FUNCTION(execGetLocalPingLocation); \
	DECLARE_FUNCTION(execInitRelayNetworkAccess); \
	DECLARE_FUNCTION(execGetSteamNetworkingUtils);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProNetworkingUtils(); \
	friend struct Z_Construct_UClass_USteamProNetworkingUtils_Statics; \
public: \
	DECLARE_CLASS(USteamProNetworkingUtils, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProNetworkingUtils)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProNetworkingUtils(USteamProNetworkingUtils&&); \
	USteamProNetworkingUtils(const USteamProNetworkingUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProNetworkingUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProNetworkingUtils); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProNetworkingUtils)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_14_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProNetworkingUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworkingUtils_SteamNetworkingUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
