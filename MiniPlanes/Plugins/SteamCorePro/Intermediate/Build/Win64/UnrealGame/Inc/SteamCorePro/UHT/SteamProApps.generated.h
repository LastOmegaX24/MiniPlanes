// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamApps/SteamProApps.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProApps;
enum class ESteamBetaBranchFlags : uint8;
struct FSteamID;
#ifdef STEAMCOREPRO_SteamProApps_generated_h
#error "SteamProApps.generated.h already included, missing '#pragma once' in SteamProApps.h"
#endif
#define STEAMCOREPRO_SteamProApps_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamProApps_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFileDetails); \
	DECLARE_FUNCTION(execGetAppBuildId); \
	DECLARE_FUNCTION(execGetDlcDownloadProgress); \
	DECLARE_FUNCTION(execGetLaunchQueryParam); \
	DECLARE_FUNCTION(execGetAppOwner); \
	DECLARE_FUNCTION(execUninstallDLC); \
	DECLARE_FUNCTION(execMarkContentCorrupt); \
	DECLARE_FUNCTION(execBIsAppInstalled); \
	DECLARE_FUNCTION(execInstallDLC); \
	DECLARE_FUNCTION(execGetLaunchCommandLine); \
	DECLARE_FUNCTION(execGetInstalledDepots); \
	DECLARE_FUNCTION(execGetEarliestPurchaseUnixTime); \
	DECLARE_FUNCTION(execGetDLCCount); \
	DECLARE_FUNCTION(execGetCurrentBetaName); \
	DECLARE_FUNCTION(execGetAppInstallDir); \
	DECLARE_FUNCTION(execBIsSubscribedFromFreeWeekend); \
	DECLARE_FUNCTION(execSetActiveBeta); \
	DECLARE_FUNCTION(execGetBetaInfo); \
	DECLARE_FUNCTION(execGetNumBetas); \
	DECLARE_FUNCTION(execSetDlcContext); \
	DECLARE_FUNCTION(execBIsTimedTrial); \
	DECLARE_FUNCTION(execBIsSubscribedFromFamilySharing); \
	DECLARE_FUNCTION(execBIsSubscribedApp); \
	DECLARE_FUNCTION(execBIsVACBanned); \
	DECLARE_FUNCTION(execBIsDlcInstalled); \
	DECLARE_FUNCTION(execGetAvailableGameLanguages); \
	DECLARE_FUNCTION(execGetCurrentGameLanguage); \
	DECLARE_FUNCTION(execBGetDLCDataByIndex); \
	DECLARE_FUNCTION(execBIsCybercafe); \
	DECLARE_FUNCTION(execBIsLowViolence); \
	DECLARE_FUNCTION(execBIsSubscribed); \
	DECLARE_FUNCTION(execGetSteamApps);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamProApps_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProApps(); \
	friend struct Z_Construct_UClass_USteamProApps_Statics; \
public: \
	DECLARE_CLASS(USteamProApps, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProApps)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamProApps_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProApps(USteamProApps&&); \
	USteamProApps(const USteamProApps&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProApps); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProApps); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProApps)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamProApps_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamProApps_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamProApps_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamProApps_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamProApps_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProApps>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamProApps_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
