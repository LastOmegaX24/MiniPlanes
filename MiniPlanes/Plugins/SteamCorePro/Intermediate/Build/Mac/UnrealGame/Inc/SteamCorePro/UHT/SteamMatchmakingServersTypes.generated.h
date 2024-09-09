// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamMatchmakingServers/SteamMatchmakingServersTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
struct FGameServerItem;
struct FGameServerRule;
#ifdef STEAMCOREPRO_SteamMatchmakingServersTypes_generated_h
#error "SteamMatchmakingServersTypes.generated.h already included, missing '#pragma once' in SteamMatchmakingServersTypes.h"
#endif
#define STEAMCOREPRO_SteamMatchmakingServersTypes_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFilters); \
	DECLARE_FUNCTION(execAddFilterPassword); \
	DECLARE_FUNCTION(execAddFilterProxy); \
	DECLARE_FUNCTION(execAddFilterNotAppId); \
	DECLARE_FUNCTION(execAddFilterWhitelisted); \
	DECLARE_FUNCTION(execAddFilterName); \
	DECLARE_FUNCTION(execAddFilterVersion); \
	DECLARE_FUNCTION(execAddFilterLinux); \
	DECLARE_FUNCTION(execAddFilterNoPlayers); \
	DECLARE_FUNCTION(execAddFilterHasPlayers); \
	DECLARE_FUNCTION(execAddFilterNotFull); \
	DECLARE_FUNCTION(execAddFilterSecure); \
	DECLARE_FUNCTION(execAddFilterDedicated); \
	DECLARE_FUNCTION(execAddFilterGameAddr); \
	DECLARE_FUNCTION(execAddFilterNor); \
	DECLARE_FUNCTION(execAddFilterNand); \
	DECLARE_FUNCTION(execAddFilterOr); \
	DECLARE_FUNCTION(execAddFilterAnd); \
	DECLARE_FUNCTION(execAddFilterGameTagsNor); \
	DECLARE_FUNCTION(execAddFilterGameTagsAnd); \
	DECLARE_FUNCTION(execAddFilterGameDataNor); \
	DECLARE_FUNCTION(execAddFilterGameDataOr); \
	DECLARE_FUNCTION(execAddFilterGameDataAnd); \
	DECLARE_FUNCTION(execAddFilterMap);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUServerFilter(); \
	friend struct Z_Construct_UClass_UServerFilter_Statics; \
public: \
	DECLARE_CLASS(UServerFilter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(UServerFilter)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UServerFilter(UServerFilter&&); \
	UServerFilter(const UServerFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UServerFilter)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_14_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_17_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class UServerFilter>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_207_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamServerAddr_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FSteamServerAddr>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_242_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameServerItem_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FGameServerItem>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_327_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameServerRule_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FGameServerRule>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_347_DELEGATE \
STEAMCOREPRO_API void FOnServerUpdated_DelegateWrapper(const FScriptDelegate& OnServerUpdated, FGameServerItem const& data);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_348_DELEGATE \
STEAMCOREPRO_API void FOnServerPing_DelegateWrapper(const FScriptDelegate& OnServerPing, FGameServerItem const& data, bool bWasSuccessful);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_349_DELEGATE \
STEAMCOREPRO_API void FOnServerRules_DelegateWrapper(const FScriptDelegate& OnServerRules, TArray<FGameServerRule> const& data, bool bWasSuccessful);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_350_DELEGATE \
STEAMCOREPRO_API void FOnServerRefreshCompleted_DelegateWrapper(const FScriptDelegate& OnServerRefreshCompleted);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
