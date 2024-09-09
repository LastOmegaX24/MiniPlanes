// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUtils/SteamUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProUtils;
enum class ESteamCoreIPv6ConnectivityProtocol : uint8;
enum class ESteamCoreIPv6ConnectivityState : uint8;
enum class ESteamFloatingGamepadTextInputMode : uint8;
enum class ESteamGamepadTextInputLineMode : uint8;
enum class ESteamGamepadTextInputMode : uint8;
enum class ESteamNotificationPosition : uint8;
enum class ESteamTextFilteringContext : uint8;
enum class ESteamUniverse : uint8;
struct FSteamID;
#ifdef STEAMCOREPRO_SteamUtils_generated_h
#error "SteamUtils.generated.h already included, missing '#pragma once' in SteamUtils.h"
#endif
#define STEAMCOREPRO_SteamUtils_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUtils_SteamUtils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDismissGamepadTextInput); \
	DECLARE_FUNCTION(execDismissFloatingGamepadTextInput); \
	DECLARE_FUNCTION(execSetGameLauncherMode); \
	DECLARE_FUNCTION(execShowFloatingGamepadTextInput); \
	DECLARE_FUNCTION(execGetIPv6ConnectivityState); \
	DECLARE_FUNCTION(execStartVRDashboard); \
	DECLARE_FUNCTION(execShowGamepadTextInput); \
	DECLARE_FUNCTION(execSetVRHeadsetStreamingEnabled); \
	DECLARE_FUNCTION(execSetOverlayNotificationPosition); \
	DECLARE_FUNCTION(execSetOverlayNotificationInset); \
	DECLARE_FUNCTION(execIsVRHeadsetStreamingEnabled); \
	DECLARE_FUNCTION(execIsSteamRunningInVR); \
	DECLARE_FUNCTION(execIsSteamInBigPictureMode); \
	DECLARE_FUNCTION(execIsSteamRunningOnSteamDeck); \
	DECLARE_FUNCTION(execFilterText); \
	DECLARE_FUNCTION(execInitFilterText); \
	DECLARE_FUNCTION(execIsSteamChinaLauncher); \
	DECLARE_FUNCTION(execIsOverlayEnabled); \
	DECLARE_FUNCTION(execGetSteamUILanguage); \
	DECLARE_FUNCTION(execGetServerRealTime); \
	DECLARE_FUNCTION(execGetSecondsSinceComputerActive); \
	DECLARE_FUNCTION(execGetSecondsSinceAppActive); \
	DECLARE_FUNCTION(execGetIPCountry); \
	DECLARE_FUNCTION(execGetIPCCallCount); \
	DECLARE_FUNCTION(execGetImageSize); \
	DECLARE_FUNCTION(execGetImageRGBA); \
	DECLARE_FUNCTION(execGetEnteredGamepadTextLength); \
	DECLARE_FUNCTION(execGetEnteredGamepadTextInput); \
	DECLARE_FUNCTION(execGetCurrentBatteryPower); \
	DECLARE_FUNCTION(execGetConnectedUniverse); \
	DECLARE_FUNCTION(execGetAppID_Pure); \
	DECLARE_FUNCTION(execGetAppID); \
	DECLARE_FUNCTION(execBOverlayNeedsPresent); \
	DECLARE_FUNCTION(execGetSteamUtils);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUtils_SteamUtils_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProUtils(); \
	friend struct Z_Construct_UClass_USteamProUtils_Statics; \
public: \
	DECLARE_CLASS(USteamProUtils, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProUtils)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUtils_SteamUtils_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProUtils(USteamProUtils&&); \
	USteamProUtils(const USteamProUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProUtils); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProUtils)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUtils_SteamUtils_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUtils_SteamUtils_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUtils_SteamUtils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUtils_SteamUtils_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUtils_SteamUtils_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUtils_SteamUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
