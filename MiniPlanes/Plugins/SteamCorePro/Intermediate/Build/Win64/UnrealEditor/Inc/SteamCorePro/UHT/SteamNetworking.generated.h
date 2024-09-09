// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamNetworking/SteamNetworking.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProNetworking;
enum class ESteamP2PSend : uint8;
struct FSteamID;
struct FSteamP2PSessionState;
#ifdef STEAMCOREPRO_SteamNetworking_generated_h
#error "SteamNetworking.generated.h already included, missing '#pragma once' in SteamNetworking.h"
#endif
#define STEAMCOREPRO_SteamNetworking_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworking_SteamNetworking_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendP2PPacket); \
	DECLARE_FUNCTION(execReadP2PPacket); \
	DECLARE_FUNCTION(execIsP2PPacketAvailable); \
	DECLARE_FUNCTION(execGetP2PSessionState); \
	DECLARE_FUNCTION(execCloseP2PSessionWithUser); \
	DECLARE_FUNCTION(execCloseP2PChannelWithUser); \
	DECLARE_FUNCTION(execAllowP2PPacketRelay); \
	DECLARE_FUNCTION(execAcceptP2PSessionWithUser); \
	DECLARE_FUNCTION(execGetSteamNetworking);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworking_SteamNetworking_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProNetworking(); \
	friend struct Z_Construct_UClass_USteamProNetworking_Statics; \
public: \
	DECLARE_CLASS(USteamProNetworking, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProNetworking)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworking_SteamNetworking_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProNetworking(USteamProNetworking&&); \
	USteamProNetworking(const USteamProNetworking&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProNetworking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProNetworking); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProNetworking)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworking_SteamNetworking_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworking_SteamNetworking_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworking_SteamNetworking_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworking_SteamNetworking_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworking_SteamNetworking_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProNetworking>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworking_SteamNetworking_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
