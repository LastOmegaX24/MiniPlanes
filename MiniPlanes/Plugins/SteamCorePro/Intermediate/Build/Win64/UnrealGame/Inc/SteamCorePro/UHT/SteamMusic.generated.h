// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamMusic/SteamMusic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProMusic;
enum class ESteamAudioPlaybackStatus : uint8;
#ifdef STEAMCOREPRO_SteamMusic_generated_h
#error "SteamMusic.generated.h already included, missing '#pragma once' in SteamMusic.h"
#endif
#define STEAMCOREPRO_SteamMusic_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMusic_SteamMusic_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execPlayNext); \
	DECLARE_FUNCTION(execPlayPrevious); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execGetPlaybackStatus); \
	DECLARE_FUNCTION(execBIsPlaying); \
	DECLARE_FUNCTION(execBIsEnabled); \
	DECLARE_FUNCTION(execGetSteamMusic);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMusic_SteamMusic_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProMusic(); \
	friend struct Z_Construct_UClass_USteamProMusic_Statics; \
public: \
	DECLARE_CLASS(USteamProMusic, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProMusic)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMusic_SteamMusic_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProMusic(USteamProMusic&&); \
	USteamProMusic(const USteamProMusic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProMusic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProMusic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProMusic)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMusic_SteamMusic_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMusic_SteamMusic_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMusic_SteamMusic_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMusic_SteamMusic_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMusic_SteamMusic_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProMusic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMusic_SteamMusic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
