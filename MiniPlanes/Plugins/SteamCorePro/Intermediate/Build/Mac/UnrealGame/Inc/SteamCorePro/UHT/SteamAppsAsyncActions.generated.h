// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamApps/SteamAppsAsyncActions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USteamCoreProAppsAsyncActionGetFileDetails;
struct FFileDetailsResult;
#ifdef STEAMCOREPRO_SteamAppsAsyncActions_generated_h
#error "SteamAppsAsyncActions.generated.h already included, missing '#pragma once' in SteamAppsAsyncActions.h"
#endif
#define STEAMCOREPRO_SteamAppsAsyncActions_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsAsyncActions_h_16_DELEGATE \
STEAMCOREPRO_API void FOnFileDetailsResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFileDetailsResultAsyncDelegate, FFileDetailsResult const& Data, bool bWasSuccessful);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsAsyncActions_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetFileDetailsAsync);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsAsyncActions_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreProAppsAsyncActionGetFileDetails(); \
	friend struct Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails_Statics; \
public: \
	DECLARE_CLASS(USteamCoreProAppsAsyncActionGetFileDetails, USteamCoreProAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreProAppsAsyncActionGetFileDetails)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsAsyncActions_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreProAppsAsyncActionGetFileDetails(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamCoreProAppsAsyncActionGetFileDetails(USteamCoreProAppsAsyncActionGetFileDetails&&); \
	USteamCoreProAppsAsyncActionGetFileDetails(const USteamCoreProAppsAsyncActionGetFileDetails&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreProAppsAsyncActionGetFileDetails); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreProAppsAsyncActionGetFileDetails); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreProAppsAsyncActionGetFileDetails) \
	NO_API virtual ~USteamCoreProAppsAsyncActionGetFileDetails();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsAsyncActions_h_21_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsAsyncActions_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsAsyncActions_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsAsyncActions_h_24_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsAsyncActions_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamCoreProAppsAsyncActionGetFileDetails>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsAsyncActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
