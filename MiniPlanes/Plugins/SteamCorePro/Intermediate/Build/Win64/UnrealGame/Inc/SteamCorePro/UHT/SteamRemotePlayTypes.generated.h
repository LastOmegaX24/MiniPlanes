// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamRemotePlay/SteamRemotePlayTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamRemotePlaySessionConnected;
struct FSteamRemotePlaySessionDisconnected;
#ifdef STEAMCOREPRO_SteamRemotePlayTypes_generated_h
#error "SteamRemotePlayTypes.generated.h already included, missing '#pragma once' in SteamRemotePlayTypes.h"
#endif
#define STEAMCOREPRO_SteamRemotePlayTypes_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FSteamRemotePlaySessionConnected>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FSteamRemotePlaySessionDisconnected>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_90_DELEGATE \
STEAMCOREPRO_API void FOnSteamRemotePlaySessionConnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionConnected, FSteamRemotePlaySessionConnected const& Data);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_91_DELEGATE \
STEAMCOREPRO_API void FOnSteamRemotePlaySessionDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionDisconnected, FSteamRemotePlaySessionDisconnected const& Data);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h


#define FOREACH_ENUM_ESTEAMCOREPRODEVICEFORMFACTOR(op) \
	op(ESteamCoreProDeviceFormFactor::Unknown) \
	op(ESteamCoreProDeviceFormFactor::Phone) \
	op(ESteamCoreProDeviceFormFactor::Tablet) \
	op(ESteamCoreProDeviceFormFactor::Computer) \
	op(ESteamCoreProDeviceFormFactor::TV) 

enum class ESteamCoreProDeviceFormFactor : uint8;
template<> struct TIsUEnumClass<ESteamCoreProDeviceFormFactor> { enum { Value = true }; };
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCoreProDeviceFormFactor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
