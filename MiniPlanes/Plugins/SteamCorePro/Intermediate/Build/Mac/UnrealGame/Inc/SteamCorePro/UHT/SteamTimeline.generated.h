// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamTimeline/SteamTimeline.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProTimeline;
enum class ESteamTimelineEventClipPriority : uint8;
enum class ESteamTimelineGameMode : uint8;
#ifdef STEAMCOREPRO_SteamTimeline_generated_h
#error "SteamTimeline.generated.h already included, missing '#pragma once' in SteamTimeline.h"
#endif
#define STEAMCOREPRO_SteamTimeline_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimeline_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTimelineGameMode); \
	DECLARE_FUNCTION(execAddTimelineEvent); \
	DECLARE_FUNCTION(execClearTimelineStateDescription); \
	DECLARE_FUNCTION(execSetTimelineStateDescription); \
	DECLARE_FUNCTION(execGetSteamTimeline);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimeline_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProTimeline(); \
	friend struct Z_Construct_UClass_USteamProTimeline_Statics; \
public: \
	DECLARE_CLASS(USteamProTimeline, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProTimeline)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimeline_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProTimeline(USteamProTimeline&&); \
	USteamProTimeline(const USteamProTimeline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProTimeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProTimeline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProTimeline)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimeline_h_14_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimeline_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimeline_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimeline_h_17_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimeline_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProTimeline>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimeline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
