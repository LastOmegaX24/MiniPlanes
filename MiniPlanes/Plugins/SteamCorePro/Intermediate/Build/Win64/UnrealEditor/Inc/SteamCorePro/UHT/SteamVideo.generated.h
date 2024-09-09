// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamVideo/SteamVideo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProVideo;
#ifdef STEAMCOREPRO_SteamVideo_generated_h
#error "SteamVideo.generated.h already included, missing '#pragma once' in SteamVideo.h"
#endif
#define STEAMCOREPRO_SteamVideo_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamVideo_SteamVideo_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsBroadcasting); \
	DECLARE_FUNCTION(execGetVideoURL); \
	DECLARE_FUNCTION(execGetOPFStringForApp); \
	DECLARE_FUNCTION(execGetOPFSettings); \
	DECLARE_FUNCTION(execGetSteamVideo);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamVideo_SteamVideo_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProVideo(); \
	friend struct Z_Construct_UClass_USteamProVideo_Statics; \
public: \
	DECLARE_CLASS(USteamProVideo, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProVideo)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamVideo_SteamVideo_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProVideo(USteamProVideo&&); \
	USteamProVideo(const USteamProVideo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProVideo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProVideo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProVideo)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamVideo_SteamVideo_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamVideo_SteamVideo_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamVideo_SteamVideo_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamVideo_SteamVideo_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamVideo_SteamVideo_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProVideo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamVideo_SteamVideo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
