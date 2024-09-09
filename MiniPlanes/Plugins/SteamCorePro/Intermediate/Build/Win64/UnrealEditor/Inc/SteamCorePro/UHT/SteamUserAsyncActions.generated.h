// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUser/SteamUserAsyncActions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USteamCoreProUserAsyncActionRequestEncryptedAppTicket;
class USteamCoreProUserAsyncActionRequestStoreAuthURL;
struct FEncryptedAppTicketResponse;
struct FStoreAuthURLResponse;
#ifdef STEAMCOREPRO_SteamUserAsyncActions_generated_h
#error "SteamUserAsyncActions.generated.h already included, missing '#pragma once' in SteamUserAsyncActions.h"
#endif
#define STEAMCOREPRO_SteamUserAsyncActions_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_16_DELEGATE \
STEAMCOREPRO_API void FRequestEncryptedAppTicketDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestEncryptedAppTicketDelegate, FEncryptedAppTicketResponse const& Data, bool bWasSuccessful);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_17_DELEGATE \
STEAMCOREPRO_API void FRequestStoreAuthURLDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestStoreAuthURLDelegate, FStoreAuthURLResponse const& Data, bool bWasSuccessful);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestEncryptedAppTicketAsync);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreProUserAsyncActionRequestEncryptedAppTicket(); \
	friend struct Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_Statics; \
public: \
	DECLARE_CLASS(USteamCoreProUserAsyncActionRequestEncryptedAppTicket, USteamCoreProAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreProUserAsyncActionRequestEncryptedAppTicket)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreProUserAsyncActionRequestEncryptedAppTicket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamCoreProUserAsyncActionRequestEncryptedAppTicket(USteamCoreProUserAsyncActionRequestEncryptedAppTicket&&); \
	USteamCoreProUserAsyncActionRequestEncryptedAppTicket(const USteamCoreProUserAsyncActionRequestEncryptedAppTicket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreProUserAsyncActionRequestEncryptedAppTicket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreProUserAsyncActionRequestEncryptedAppTicket); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreProUserAsyncActionRequestEncryptedAppTicket) \
	NO_API virtual ~USteamCoreProUserAsyncActionRequestEncryptedAppTicket();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_22_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_25_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamCoreProUserAsyncActionRequestEncryptedAppTicket>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestStoreAuthURLAsync);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreProUserAsyncActionRequestStoreAuthURL(); \
	friend struct Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL_Statics; \
public: \
	DECLARE_CLASS(USteamCoreProUserAsyncActionRequestStoreAuthURL, USteamCoreProAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreProUserAsyncActionRequestStoreAuthURL)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreProUserAsyncActionRequestStoreAuthURL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamCoreProUserAsyncActionRequestStoreAuthURL(USteamCoreProUserAsyncActionRequestStoreAuthURL&&); \
	USteamCoreProUserAsyncActionRequestStoreAuthURL(const USteamCoreProUserAsyncActionRequestStoreAuthURL&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreProUserAsyncActionRequestStoreAuthURL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreProUserAsyncActionRequestStoreAuthURL); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreProUserAsyncActionRequestStoreAuthURL) \
	NO_API virtual ~USteamCoreProUserAsyncActionRequestStoreAuthURL();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_49_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_52_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamCoreProUserAsyncActionRequestStoreAuthURL>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
