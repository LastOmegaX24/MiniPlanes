// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamRemoteStorage/SteamRemoteStorage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProRemoteStorage;
enum class ESteamRemoteStoragePlatform : uint8;
enum class ESteamUGCReadAction : uint8;
struct FRemoteStorageFileReadAsyncComplete;
struct FSteamID;
struct FSteamUGCHandle;
struct FUGCFileWriteStreamHandle;
#ifdef STEAMCOREPRO_SteamRemoteStorage_generated_h
#error "SteamRemoteStorage.generated.h already included, missing '#pragma once' in SteamRemoteStorage.h"
#endif
#define STEAMCOREPRO_SteamRemoteStorage_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndFileWriteBatch); \
	DECLARE_FUNCTION(execBeginFileWriteBatch); \
	DECLARE_FUNCTION(execGetLocalFileChangeCount); \
	DECLARE_FUNCTION(execSetSyncPlatforms); \
	DECLARE_FUNCTION(execSetCloudEnabledForApp); \
	DECLARE_FUNCTION(execIsCloudEnabledForApp); \
	DECLARE_FUNCTION(execIsCloudEnabledForAccount); \
	DECLARE_FUNCTION(execGetUGCDownloadProgress); \
	DECLARE_FUNCTION(execUGCDownloadToLocation); \
	DECLARE_FUNCTION(execUGCRead); \
	DECLARE_FUNCTION(execUGCDownload); \
	DECLARE_FUNCTION(execGetUGCDetails); \
	DECLARE_FUNCTION(execGetSyncPlatforms); \
	DECLARE_FUNCTION(execGetQuota); \
	DECLARE_FUNCTION(execGetFileTimestamp); \
	DECLARE_FUNCTION(execGetFileSize); \
	DECLARE_FUNCTION(execGetFileNameAndSize); \
	DECLARE_FUNCTION(execGetFileCount); \
	DECLARE_FUNCTION(execGetCachedUGCHandle); \
	DECLARE_FUNCTION(execGetCachedUGCCount); \
	DECLARE_FUNCTION(execFileWriteStreamWriteChunk); \
	DECLARE_FUNCTION(execFileWriteStreamOpen); \
	DECLARE_FUNCTION(execFileWriteStreamClose); \
	DECLARE_FUNCTION(execFileWriteStreamCancel); \
	DECLARE_FUNCTION(execFileWriteAsync); \
	DECLARE_FUNCTION(execFileWrite); \
	DECLARE_FUNCTION(execFileShare); \
	DECLARE_FUNCTION(execFileReadAsyncComplete); \
	DECLARE_FUNCTION(execFileReadAsync); \
	DECLARE_FUNCTION(execFileRead); \
	DECLARE_FUNCTION(execFilePersisted); \
	DECLARE_FUNCTION(execFileForget); \
	DECLARE_FUNCTION(execFileExists); \
	DECLARE_FUNCTION(execFileDelete); \
	DECLARE_FUNCTION(execGetSteamRemoteStorage);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProRemoteStorage(); \
	friend struct Z_Construct_UClass_USteamProRemoteStorage_Statics; \
public: \
	DECLARE_CLASS(USteamProRemoteStorage, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProRemoteStorage)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProRemoteStorage(USteamProRemoteStorage&&); \
	USteamProRemoteStorage(const USteamProRemoteStorage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProRemoteStorage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProRemoteStorage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProRemoteStorage)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemoteStorage_SteamRemoteStorage_h_14_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProRemoteStorage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemoteStorage_SteamRemoteStorage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
