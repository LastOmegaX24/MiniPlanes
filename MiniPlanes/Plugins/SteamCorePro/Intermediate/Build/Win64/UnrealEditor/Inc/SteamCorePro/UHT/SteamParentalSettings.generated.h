// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamParentalSettings/SteamParentalSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProParentalSettings;
enum class ESteamParentalFeature : uint8;
#ifdef STEAMCOREPRO_SteamParentalSettings_generated_h
#error "SteamParentalSettings.generated.h already included, missing '#pragma once' in SteamParentalSettings.h"
#endif
#define STEAMCOREPRO_SteamParentalSettings_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBIsFeatureInBlockList); \
	DECLARE_FUNCTION(execBIsFeatureBlocked); \
	DECLARE_FUNCTION(execBIsAppInBlockList); \
	DECLARE_FUNCTION(execBIsAppBlocked); \
	DECLARE_FUNCTION(execBIsParentalLockLocked); \
	DECLARE_FUNCTION(execBIsParentalLockEnabled); \
	DECLARE_FUNCTION(execGetSteamParentalSettings);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProParentalSettings(); \
	friend struct Z_Construct_UClass_USteamProParentalSettings_Statics; \
public: \
	DECLARE_CLASS(USteamProParentalSettings, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProParentalSettings)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProParentalSettings(USteamProParentalSettings&&); \
	USteamProParentalSettings(const USteamProParentalSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProParentalSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProParentalSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProParentalSettings)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettings_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProParentalSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
