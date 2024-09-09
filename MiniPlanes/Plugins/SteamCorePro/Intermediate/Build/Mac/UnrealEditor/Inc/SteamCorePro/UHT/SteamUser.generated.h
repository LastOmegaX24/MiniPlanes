// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUser/SteamUser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProUser;
enum class ESteamBeginAuthSessionResult : uint8;
enum class ESteamUserHasLicenseForAppResult : uint8;
enum class ESteamVoiceResult : uint8;
struct FSteamID;
struct FSteamNetworkingIdentity;
struct FSteamTicketHandle;
#ifdef STEAMCOREPRO_SteamUser_generated_h
#error "SteamUser.generated.h already included, missing '#pragma once' in SteamUser.h"
#endif
#define STEAMCOREPRO_SteamUser_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUser_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUserHasLicenseForApp); \
	DECLARE_FUNCTION(execStopVoiceRecording); \
	DECLARE_FUNCTION(execStartVoiceRecording); \
	DECLARE_FUNCTION(execRequestStoreAuthURL); \
	DECLARE_FUNCTION(execRequestEncryptedAppTicket); \
	DECLARE_FUNCTION(execGetVoiceOptimalSampleRate); \
	DECLARE_FUNCTION(execGetVoice); \
	DECLARE_FUNCTION(execGetSteamID); \
	DECLARE_FUNCTION(execGetSteamID_Pure); \
	DECLARE_FUNCTION(execGetPlayerSteamLevel); \
	DECLARE_FUNCTION(execGetGameBadgeLevel); \
	DECLARE_FUNCTION(execGetEncryptedAppTicket); \
	DECLARE_FUNCTION(execGetAvailableVoice); \
	DECLARE_FUNCTION(execGetAuthTicketForWebApi); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execDecompressVoice); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execBIsTwoFactorEnabled); \
	DECLARE_FUNCTION(execBIsPhoneVerified); \
	DECLARE_FUNCTION(execBIsPhoneRequiringVerification); \
	DECLARE_FUNCTION(execBIsPhoneIdentifying); \
	DECLARE_FUNCTION(execBIsBehindNAT); \
	DECLARE_FUNCTION(execBeginAuthSession); \
	DECLARE_FUNCTION(execAdvertiseGame); \
	DECLARE_FUNCTION(execGetSteamUser);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUser_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProUser(); \
	friend struct Z_Construct_UClass_USteamProUser_Statics; \
public: \
	DECLARE_CLASS(USteamProUser, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProUser)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUser_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProUser(USteamProUser&&); \
	USteamProUser(const USteamProUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProUser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProUser)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUser_h_14_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUser_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUser_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUser_h_17_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUser_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProUser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
