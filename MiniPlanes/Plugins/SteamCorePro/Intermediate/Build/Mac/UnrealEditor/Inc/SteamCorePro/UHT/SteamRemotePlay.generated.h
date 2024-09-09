// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamRemotePlay/SteamRemotePlay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProRemotePlay;
enum class ESteamCoreProDeviceFormFactor : uint8;
struct FSteamID;
#ifdef STEAMCOREPRO_SteamRemotePlay_generated_h
#error "SteamRemotePlay.generated.h already included, missing '#pragma once' in SteamRemotePlay.h"
#endif
#define STEAMCOREPRO_SteamRemotePlay_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlay_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBSendRemotePlayTogetherInvite); \
	DECLARE_FUNCTION(execBStartRemotePlayTogether); \
	DECLARE_FUNCTION(execBGetSessionClientResolution); \
	DECLARE_FUNCTION(execGetSessionClientFormFactor); \
	DECLARE_FUNCTION(execGetSessionClientName); \
	DECLARE_FUNCTION(execGetSessionSteamID); \
	DECLARE_FUNCTION(execGetSessionID); \
	DECLARE_FUNCTION(execGetSessionCount); \
	DECLARE_FUNCTION(execGetSteamRemotePlay);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlay_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProRemotePlay(); \
	friend struct Z_Construct_UClass_USteamProRemotePlay_Statics; \
public: \
	DECLARE_CLASS(USteamProRemotePlay, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProRemotePlay)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlay_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProRemotePlay(USteamProRemotePlay&&); \
	USteamProRemotePlay(const USteamProRemotePlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProRemotePlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProRemotePlay); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProRemotePlay)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlay_h_14_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlay_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlay_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlay_h_17_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlay_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProRemotePlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
