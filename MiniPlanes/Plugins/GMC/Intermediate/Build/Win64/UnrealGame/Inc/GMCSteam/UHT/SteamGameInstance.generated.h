// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameInstance/SteamGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNetDriver;
class UWorld;
#ifdef GMCSTEAM_SteamGameInstance_generated_h
#error "SteamGameInstance.generated.h already included, missing '#pragma once' in SteamGameInstance.h"
#endif
#define GMCSTEAM_SteamGameInstance_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_GameInstance_SteamGameInstance_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FServerInfo_Statics; \
	GMCSTEAM_API static class UScriptStruct* StaticStruct();


template<> GMCSTEAM_API UScriptStruct* StaticStruct<struct FServerInfo>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_GameInstance_SteamGameInstance_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnNetworkFailure); \
	DECLARE_FUNCTION(execOnTravelFailure); \
	DECLARE_FUNCTION(execGetCurrentMapName); \
	DECLARE_FUNCTION(execRefreshServerList); \
	DECLARE_FUNCTION(execJoinGameSession); \
	DECLARE_FUNCTION(execHostGameSession);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_GameInstance_SteamGameInstance_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamGameInstance(); \
	friend struct Z_Construct_UClass_USteamGameInstance_Statics; \
public: \
	DECLARE_CLASS(USteamGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GMCSteam"), NO_API) \
	DECLARE_SERIALIZER(USteamGameInstance)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_GameInstance_SteamGameInstance_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamGameInstance(USteamGameInstance&&); \
	USteamGameInstance(const USteamGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamGameInstance) \
	NO_API virtual ~USteamGameInstance();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_GameInstance_SteamGameInstance_h_30_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_GameInstance_SteamGameInstance_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_GameInstance_SteamGameInstance_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_GameInstance_SteamGameInstance_h_33_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_GameInstance_SteamGameInstance_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMCSTEAM_API UClass* StaticClass<class USteamGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_GameInstance_SteamGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
