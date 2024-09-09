// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamGameSearch/SteamProGameSearch.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProGameSearch;
enum class ESteamGameSearchErrorCode : uint8;
enum class ESteamPlayerResult : uint8;
struct FSteamID;
#ifdef STEAMCOREPRO_SteamProGameSearch_generated_h
#error "SteamProGameSearch.generated.h already included, missing '#pragma once' in SteamProGameSearch.h"
#endif
#define STEAMCOREPRO_SteamProGameSearch_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameSearch_SteamProGameSearch_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndGame); \
	DECLARE_FUNCTION(execSubmitPlayerResult); \
	DECLARE_FUNCTION(execCancelRequestPlayersForGame); \
	DECLARE_FUNCTION(execHostConfirmGameStart); \
	DECLARE_FUNCTION(execRequestPlayersForGame); \
	DECLARE_FUNCTION(execSetConnectionDetails); \
	DECLARE_FUNCTION(execSetGameHostParams); \
	DECLARE_FUNCTION(execEndGameSearch); \
	DECLARE_FUNCTION(execRetrieveConnectionDetails); \
	DECLARE_FUNCTION(execDeclineGame); \
	DECLARE_FUNCTION(execAcceptGame); \
	DECLARE_FUNCTION(execSearchForGameSolo); \
	DECLARE_FUNCTION(execSearchForGameWithLobby); \
	DECLARE_FUNCTION(execAddGameSearchParams); \
	DECLARE_FUNCTION(execGetSteamGameSearch);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameSearch_SteamProGameSearch_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProGameSearch(); \
	friend struct Z_Construct_UClass_USteamProGameSearch_Statics; \
public: \
	DECLARE_CLASS(USteamProGameSearch, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProGameSearch)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameSearch_SteamProGameSearch_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProGameSearch(USteamProGameSearch&&); \
	USteamProGameSearch(const USteamProGameSearch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProGameSearch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProGameSearch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProGameSearch)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameSearch_SteamProGameSearch_h_16_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameSearch_SteamProGameSearch_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameSearch_SteamProGameSearch_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameSearch_SteamProGameSearch_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameSearch_SteamProGameSearch_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProGameSearch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameSearch_SteamProGameSearch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
