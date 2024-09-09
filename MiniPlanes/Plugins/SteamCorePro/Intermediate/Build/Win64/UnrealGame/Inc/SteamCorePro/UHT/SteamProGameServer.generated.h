// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamGameServer/SteamProGameServer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProGameServer;
enum class ESteamBeginAuthSessionResult : uint8;
enum class ESteamUserHasLicenseForAppResult : uint8;
struct FSteamID;
struct FSteamNetworkingIdentity;
struct FSteamTicketHandle;
#ifdef STEAMCOREPRO_SteamProGameServer_generated_h
#error "SteamProGameServer.generated.h already included, missing '#pragma once' in SteamProGameServer.h"
#endif
#define STEAMCOREPRO_SteamProGameServer_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamProGameServer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWasRestartRequested); \
	DECLARE_FUNCTION(execUserHasLicenseForApp); \
	DECLARE_FUNCTION(execSetSpectatorServerName); \
	DECLARE_FUNCTION(execSetSpectatorPort); \
	DECLARE_FUNCTION(execSetServerName); \
	DECLARE_FUNCTION(execSetRegion); \
	DECLARE_FUNCTION(execSetProduct); \
	DECLARE_FUNCTION(execSetPasswordProtected); \
	DECLARE_FUNCTION(execSetModDir); \
	DECLARE_FUNCTION(execSetMaxPlayerCount); \
	DECLARE_FUNCTION(execSetMapName); \
	DECLARE_FUNCTION(execSetKeyValue); \
	DECLARE_FUNCTION(execSetGameTags); \
	DECLARE_FUNCTION(execSetGameDescription); \
	DECLARE_FUNCTION(execSetGameData); \
	DECLARE_FUNCTION(execSetDedicatedServer); \
	DECLARE_FUNCTION(execSetBotPlayerCount); \
	DECLARE_FUNCTION(execRequestUserGroupStatus); \
	DECLARE_FUNCTION(execLogOnAnonymous); \
	DECLARE_FUNCTION(execLogOn); \
	DECLARE_FUNCTION(execLogOff); \
	DECLARE_FUNCTION(execGetServerSteamID_PureCompact); \
	DECLARE_FUNCTION(execGetServerSteamID_Pure); \
	DECLARE_FUNCTION(execGetServerSteamID); \
	DECLARE_FUNCTION(execGetServerPublicIP_PureCompact); \
	DECLARE_FUNCTION(execGetServerPublicIP_Pure); \
	DECLARE_FUNCTION(execGetServerPublicIP); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execSetAdvertiseServerActive); \
	DECLARE_FUNCTION(execCreateUnauthenticatedUserConnection); \
	DECLARE_FUNCTION(execComputeNewPlayerCompatibility); \
	DECLARE_FUNCTION(execClearAllKeyValues); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execBUpdateUserData); \
	DECLARE_FUNCTION(execBSecure); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execBeginAuthSession); \
	DECLARE_FUNCTION(execAssociateWithClan); \
	DECLARE_FUNCTION(execGetSteamGameServer);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamProGameServer_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProGameServer(); \
	friend struct Z_Construct_UClass_USteamProGameServer_Statics; \
public: \
	DECLARE_CLASS(USteamProGameServer, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProGameServer)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamProGameServer_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProGameServer(USteamProGameServer&&); \
	USteamProGameServer(const USteamProGameServer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProGameServer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProGameServer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProGameServer)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamProGameServer_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamProGameServer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamProGameServer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamProGameServer_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamProGameServer_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProGameServer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamProGameServer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
