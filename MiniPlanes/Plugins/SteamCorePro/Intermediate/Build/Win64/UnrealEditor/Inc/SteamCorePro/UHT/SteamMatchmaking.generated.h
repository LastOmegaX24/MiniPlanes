// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamMatchmaking/SteamMatchmaking.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProMatchmaking;
enum class ESteamChatEntryType : uint8;
enum class ESteamFavoriteFlags : uint8;
enum class ESteamLobbyComparison : uint8;
enum class ESteamLobbyDistanceFilter : uint8;
enum class ESteamLobbyType : uint8;
struct FSteamID;
#ifdef STEAMCOREPRO_SteamMatchmaking_generated_h
#error "SteamMatchmaking.generated.h already included, missing '#pragma once' in SteamMatchmaking.h"
#endif
#define STEAMCOREPRO_SteamMatchmaking_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmaking_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetLobbyType); \
	DECLARE_FUNCTION(execSetLobbyOwner); \
	DECLARE_FUNCTION(execSetLobbyMemberLimit); \
	DECLARE_FUNCTION(execSetLobbyMemberData); \
	DECLARE_FUNCTION(execSetLobbyJoinable); \
	DECLARE_FUNCTION(execSetLobbyGameServer); \
	DECLARE_FUNCTION(execSetLobbyData); \
	DECLARE_FUNCTION(execSetLinkedLobby); \
	DECLARE_FUNCTION(execSendLobbyChatMsg); \
	DECLARE_FUNCTION(execRequestLobbyList); \
	DECLARE_FUNCTION(execRequestLobbyData); \
	DECLARE_FUNCTION(execRemoveFavoriteGame); \
	DECLARE_FUNCTION(execLeaveLobby); \
	DECLARE_FUNCTION(execJoinLobby); \
	DECLARE_FUNCTION(execInviteUserToLobby); \
	DECLARE_FUNCTION(execGetNumLobbyMembers); \
	DECLARE_FUNCTION(execGetLobbyOwner); \
	DECLARE_FUNCTION(execGetLobbyMemberLimit); \
	DECLARE_FUNCTION(execGetLobbyMemberData); \
	DECLARE_FUNCTION(execGetLobbyMemberByIndex); \
	DECLARE_FUNCTION(execGetLobbyGameServer); \
	DECLARE_FUNCTION(execGetLobbyDataCount); \
	DECLARE_FUNCTION(execGetLobbyDataByIndex); \
	DECLARE_FUNCTION(execGetLobbyData); \
	DECLARE_FUNCTION(execGetLobbyChatEntry); \
	DECLARE_FUNCTION(execGetLobbyByIndex); \
	DECLARE_FUNCTION(execGetFavoriteGameCount); \
	DECLARE_FUNCTION(execGetFavoriteGame); \
	DECLARE_FUNCTION(execDeleteLobbyData); \
	DECLARE_FUNCTION(execCreateLobby); \
	DECLARE_FUNCTION(execAddRequestLobbyListStringFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListResultCountFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListNumericalFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListNearValueFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListFilterSlotsAvailable); \
	DECLARE_FUNCTION(execAddRequestLobbyListDistanceFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListCompatibleMembersFilter); \
	DECLARE_FUNCTION(execAddFavoriteGame); \
	DECLARE_FUNCTION(execGetSteamMatchmaking);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmaking_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProMatchmaking(); \
	friend struct Z_Construct_UClass_USteamProMatchmaking_Statics; \
public: \
	DECLARE_CLASS(USteamProMatchmaking, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProMatchmaking)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmaking_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProMatchmaking(USteamProMatchmaking&&); \
	USteamProMatchmaking(const USteamProMatchmaking&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProMatchmaking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProMatchmaking); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProMatchmaking)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmaking_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmaking_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmaking_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmaking_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmaking_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProMatchmaking>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmaking_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
