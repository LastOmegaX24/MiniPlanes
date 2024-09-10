// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUGC/SteamUGC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProUGC;
enum class ESteamItemPreviewType : uint8;
enum class ESteamItemState : uint8;
enum class ESteamItemStatistic : uint8;
enum class ESteamItemUpdateStatus : uint8;
enum class ESteamRemoteStoragePublishedFileVisibility : uint8;
enum class ESteamUGCContentDescriptorID : uint8;
enum class ESteamUGCMatchingUGCType : uint8;
enum class ESteamUGCQuery : uint8;
enum class ESteamUserUGCList : uint8;
enum class ESteamUserUGCListSortOrder : uint8;
enum class ESteamWorkshopFileType : uint8;
struct FPublishedFileID;
struct FSteamID;
struct FSteamUGCDetails;
struct FUGCQueryHandle;
struct FUGCUpdateHandle;
#ifdef STEAMCOREPRO_SteamUGC_generated_h
#error "SteamUGC.generated.h already included, missing '#pragma once' in SteamUGC.h"
#endif
#define STEAMCOREPRO_SteamUGC_generated_h

#define FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUGC_SteamUGC_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUserContentDescriptorPreferences); \
	DECLARE_FUNCTION(execGetWorkshopEULAStatus); \
	DECLARE_FUNCTION(execShowWorkshopEULA); \
	DECLARE_FUNCTION(execUpdateItemPreviewVideo); \
	DECLARE_FUNCTION(execUpdateItemPreviewFile); \
	DECLARE_FUNCTION(execUnsubscribeItem); \
	DECLARE_FUNCTION(execSuspendDownloads); \
	DECLARE_FUNCTION(execSubscribeItem); \
	DECLARE_FUNCTION(execSubmitItemUpdate); \
	DECLARE_FUNCTION(execStopPlaytimeTrackingForAllItems); \
	DECLARE_FUNCTION(execStopPlaytimeTracking); \
	DECLARE_FUNCTION(execStartPlaytimeTracking); \
	DECLARE_FUNCTION(execStartItemUpdate); \
	DECLARE_FUNCTION(execSetUserItemVote); \
	DECLARE_FUNCTION(execSetSearchText); \
	DECLARE_FUNCTION(execSetReturnTotalOnly); \
	DECLARE_FUNCTION(execSetReturnPlaytimeStats); \
	DECLARE_FUNCTION(execSetReturnOnlyIDs); \
	DECLARE_FUNCTION(execSetReturnMetadata); \
	DECLARE_FUNCTION(execSetReturnLongDescription); \
	DECLARE_FUNCTION(execSetReturnKeyValueTags); \
	DECLARE_FUNCTION(execSetReturnChildren); \
	DECLARE_FUNCTION(execSetReturnAdditionalPreviews); \
	DECLARE_FUNCTION(execSetRankedByTrendDays); \
	DECLARE_FUNCTION(execSetMatchAnyTag); \
	DECLARE_FUNCTION(execSetLanguage); \
	DECLARE_FUNCTION(execSetItemVisibility); \
	DECLARE_FUNCTION(execSetItemUpdateLanguage); \
	DECLARE_FUNCTION(execSetItemTitle); \
	DECLARE_FUNCTION(execSetItemTags); \
	DECLARE_FUNCTION(execSetItemPreview); \
	DECLARE_FUNCTION(execSetItemMetadata); \
	DECLARE_FUNCTION(execSetItemDescription); \
	DECLARE_FUNCTION(execSetItemContent); \
	DECLARE_FUNCTION(execSetCloudFileNameFilter); \
	DECLARE_FUNCTION(execSetAllowLegacyUpload); \
	DECLARE_FUNCTION(execSetAdminQuery); \
	DECLARE_FUNCTION(execSetAllowCachedResponse); \
	DECLARE_FUNCTION(execSendQueryUGCRequest); \
	DECLARE_FUNCTION(execSetRequiredGameVersions); \
	DECLARE_FUNCTION(execRemoveContentDescriptor); \
	DECLARE_FUNCTION(execAddContentDescriptor); \
	DECLARE_FUNCTION(execRemoveItemPreview); \
	DECLARE_FUNCTION(execRemoveItemKeyValueTags); \
	DECLARE_FUNCTION(execRemoveItemFromFavorites); \
	DECLARE_FUNCTION(execRemoveDependency); \
	DECLARE_FUNCTION(execRemoveAppDependency); \
	DECLARE_FUNCTION(execReleaseQueryUGCRequest); \
	DECLARE_FUNCTION(execGetUserItemVote); \
	DECLARE_FUNCTION(execGetSubscribedItems); \
	DECLARE_FUNCTION(execGetQueryUGCStatistic); \
	DECLARE_FUNCTION(execGetQueryUGCTagDisplayName); \
	DECLARE_FUNCTION(execGetQueryUGCTag); \
	DECLARE_FUNCTION(execGetQueryUGCNumTags); \
	DECLARE_FUNCTION(execGetQueryUGCResult); \
	DECLARE_FUNCTION(execGetQueryUGCPreviewURL); \
	DECLARE_FUNCTION(execGetQueryUGCNumKeyValueTags); \
	DECLARE_FUNCTION(execGetQueryUGCNumAdditionalPreviews); \
	DECLARE_FUNCTION(execGetQueryUGCMetadata); \
	DECLARE_FUNCTION(execGetSupportedGameVersionData); \
	DECLARE_FUNCTION(execGetNumSupportedGameVersions); \
	DECLARE_FUNCTION(execGetQueryUGCKeyValueTag); \
	DECLARE_FUNCTION(execGetQueryUGCChildren); \
	DECLARE_FUNCTION(execGetQueryUGCAdditionalPreview); \
	DECLARE_FUNCTION(execGetNumSubscribedItems); \
	DECLARE_FUNCTION(execGetItemUpdateProgress); \
	DECLARE_FUNCTION(execGetItemState); \
	DECLARE_FUNCTION(execGetItemInstallInfo); \
	DECLARE_FUNCTION(execGetItemDownloadInfo); \
	DECLARE_FUNCTION(execGetAppDependencies); \
	DECLARE_FUNCTION(execDownloadItem); \
	DECLARE_FUNCTION(execDeleteItem); \
	DECLARE_FUNCTION(execCreateQueryUserUGCRequest); \
	DECLARE_FUNCTION(execCreateQueryUGCDetailsRequest); \
	DECLARE_FUNCTION(execCreateQueryAllUGCRequest); \
	DECLARE_FUNCTION(execCreateItem); \
	DECLARE_FUNCTION(execBInitWorkshopForGameServer); \
	DECLARE_FUNCTION(execAddRequiredTagGroup); \
	DECLARE_FUNCTION(execAddRequiredTag); \
	DECLARE_FUNCTION(execAddRequiredKeyValueTag); \
	DECLARE_FUNCTION(execAddItemToFavorites); \
	DECLARE_FUNCTION(execAddItemPreviewVideo); \
	DECLARE_FUNCTION(execAddItemPreviewFile); \
	DECLARE_FUNCTION(execAddItemKeyValueTag); \
	DECLARE_FUNCTION(execAddExcludedTag); \
	DECLARE_FUNCTION(execAddDependency); \
	DECLARE_FUNCTION(execAddAppDependency); \
	DECLARE_FUNCTION(execGetSteamUGC);


#define FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUGC_SteamUGC_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProUGC(); \
	friend struct Z_Construct_UClass_USteamProUGC_Statics; \
public: \
	DECLARE_CLASS(USteamProUGC, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProUGC)


#define FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUGC_SteamUGC_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProUGC(USteamProUGC&&); \
	USteamProUGC(const USteamProUGC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProUGC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProUGC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProUGC)


#define FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUGC_SteamUGC_h_14_PROLOG
#define FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUGC_SteamUGC_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUGC_SteamUGC_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUGC_SteamUGC_h_17_INCLASS_NO_PURE_DECLS \
	FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUGC_SteamUGC_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProUGC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUGC_SteamUGC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
