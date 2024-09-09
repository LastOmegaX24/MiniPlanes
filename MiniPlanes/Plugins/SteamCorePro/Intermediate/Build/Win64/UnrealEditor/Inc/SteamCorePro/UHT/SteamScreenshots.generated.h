// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamScreenshots/SteamScreenshots.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProScreenshots;
enum class ESteamVRScreenshotType : uint8;
struct FPublishedFileID;
struct FScreenshotHandle;
struct FSteamID;
#ifdef STEAMCOREPRO_SteamScreenshots_generated_h
#error "SteamScreenshots.generated.h already included, missing '#pragma once' in SteamScreenshots.h"
#endif
#define STEAMCOREPRO_SteamScreenshots_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshots_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWriteScreenshot); \
	DECLARE_FUNCTION(execTriggerScreenshot); \
	DECLARE_FUNCTION(execTagUser); \
	DECLARE_FUNCTION(execTagPublishedFile); \
	DECLARE_FUNCTION(execSetLocation); \
	DECLARE_FUNCTION(execIsScreenshotsHooked); \
	DECLARE_FUNCTION(execHookScreenshots); \
	DECLARE_FUNCTION(execAddVRScreenshotToLibrary); \
	DECLARE_FUNCTION(execAddScreenshotToLibrary); \
	DECLARE_FUNCTION(execGetSteamScreenshots);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshots_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProScreenshots(); \
	friend struct Z_Construct_UClass_USteamProScreenshots_Statics; \
public: \
	DECLARE_CLASS(USteamProScreenshots, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProScreenshots)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshots_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProScreenshots(USteamProScreenshots&&); \
	USteamProScreenshots(const USteamProScreenshots&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProScreenshots); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProScreenshots); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProScreenshots)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshots_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshots_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshots_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshots_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshots_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProScreenshots>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshots_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
