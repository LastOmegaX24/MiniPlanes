// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamInventory/SteamInventory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProInventory;
enum class ESteamResult : uint8;
struct FSteamID;
struct FSteamInventoryResult;
struct FSteamInventoryUpdateHandle;
struct FSteamItemDef;
struct FSteamItemDetails;
struct FSteamItemInstanceID;
#ifdef STEAMCOREPRO_SteamInventory_generated_h
#error "SteamInventory.generated.h already included, missing '#pragma once' in SteamInventory.h"
#endif
#define STEAMCOREPRO_SteamInventory_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPropertyFloat); \
	DECLARE_FUNCTION(execSetPropertyInt); \
	DECLARE_FUNCTION(execSetPropertyBool); \
	DECLARE_FUNCTION(execSetPropertyString); \
	DECLARE_FUNCTION(execRemoveProperty); \
	DECLARE_FUNCTION(execSubmitUpdateProperties); \
	DECLARE_FUNCTION(execStartUpdateProperties); \
	DECLARE_FUNCTION(execTriggerItemDrop); \
	DECLARE_FUNCTION(execTransferItemQuantity); \
	DECLARE_FUNCTION(execStartPurchase); \
	DECLARE_FUNCTION(execSerializeResult); \
	DECLARE_FUNCTION(execRequestPrices); \
	DECLARE_FUNCTION(execRequestEligiblePromoItemDefinitionsIDs); \
	DECLARE_FUNCTION(execLoadItemDefinitions); \
	DECLARE_FUNCTION(execGrantPromoItems); \
	DECLARE_FUNCTION(execGetResultTimestamp); \
	DECLARE_FUNCTION(execGetResultStatus); \
	DECLARE_FUNCTION(execGetResultItems); \
	DECLARE_FUNCTION(execGetResultItemProperty); \
	DECLARE_FUNCTION(execGetNumItemsWithPrices); \
	DECLARE_FUNCTION(execGetItemsWithPrices); \
	DECLARE_FUNCTION(execGetItemPrice); \
	DECLARE_FUNCTION(execGetItemsByID); \
	DECLARE_FUNCTION(execGetItemDefinitionProperty); \
	DECLARE_FUNCTION(execGetItemDefinitionIDs); \
	DECLARE_FUNCTION(execGetEligiblePromoItemDefinitionIDs); \
	DECLARE_FUNCTION(execGetAllItems); \
	DECLARE_FUNCTION(execGenerateItems); \
	DECLARE_FUNCTION(execExchangeItems); \
	DECLARE_FUNCTION(execDestroyResult); \
	DECLARE_FUNCTION(execDeserializeResult); \
	DECLARE_FUNCTION(execConsumeItem); \
	DECLARE_FUNCTION(execCheckResultSteamID); \
	DECLARE_FUNCTION(execAddPromoItems); \
	DECLARE_FUNCTION(execAddPromoItem); \
	DECLARE_FUNCTION(execGetSteamInventory);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProInventory(); \
	friend struct Z_Construct_UClass_USteamProInventory_Statics; \
public: \
	DECLARE_CLASS(USteamProInventory, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProInventory)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventory_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProInventory(USteamProInventory&&); \
	USteamProInventory(const USteamProInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProInventory)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventory_h_14_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventory_h_17_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
