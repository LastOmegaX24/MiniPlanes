// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamInventory/SteamInventory.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
#include "SteamCorePro/Public/SteamInventory/SteamInventoryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamInventory() {}

// Begin Cross Module References
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProInventory();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProInventory_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamResult();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryDefinitionUpdate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryFullUpdate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryResultReady__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResult();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDef();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDetails();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemInstanceID();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProInventory Function AddPromoItem
struct Z_Construct_UFunction_USteamProInventory_AddPromoItem_Statics
{
	struct SteamProInventory_eventAddPromoItem_Parms
	{
		FSteamInventoryResult Result;
		FSteamItemDef ItemDef;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Grant a specific one-time promotional item to the current user.\n\x09*\n\x09* This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to \n\x09* grant an item to users who also own a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\n\x09* Any items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. \n\x09* This version will grant all items that have promo attributes specified for them in the configured item definitions. \n\x09* This allows adding additional promotional items without having to update the game client. For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\x09*\n\x09* @param\x09ItemDef\x09\x09The ItemDef to grant the player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Grant a specific one-time promotional item to the current user.\n\nThis can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to\ngrant an item to users who also own a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\nAny items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item.\nThis version will grant all items that have promo attributes specified for them in the configured item definitions.\nThis allows adding additional promotional items without having to update the game client. For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\n@param        ItemDef         The ItemDef to grant the player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_AddPromoItem_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventAddPromoItem_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 277898169
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_AddPromoItem_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventAddPromoItem_Parms, ItemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 342357027
void Z_Construct_UFunction_USteamProInventory_AddPromoItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventAddPromoItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_AddPromoItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventAddPromoItem_Parms), &Z_Construct_UFunction_USteamProInventory_AddPromoItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_AddPromoItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_AddPromoItem_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_AddPromoItem_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_AddPromoItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_AddPromoItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_AddPromoItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "AddPromoItem", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_AddPromoItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_AddPromoItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_AddPromoItem_Statics::SteamProInventory_eventAddPromoItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_AddPromoItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_AddPromoItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_AddPromoItem_Statics::SteamProInventory_eventAddPromoItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_AddPromoItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_AddPromoItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execAddPromoItem)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_STRUCT(FSteamItemDef,Z_Param_ItemDef);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::AddPromoItem(Z_Param_Out_Result,Z_Param_ItemDef);
	P_NATIVE_END;
}
// End Class USteamProInventory Function AddPromoItem

// Begin Class USteamProInventory Function AddPromoItems
struct Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics
{
	struct SteamProInventory_eventAddPromoItems_Parms
	{
		FSteamInventoryResult OutResult;
		TArray<FSteamItemDef> ItemDefs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Grant a specific one-time promotional item to the current user.\n\x09*\n\x09* This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to\n\x09* grant an item to users who also own a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\n\x09* Any items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item.\n\x09* This version will grant all items that have promo attributes specified for them in the configured item definitions.\n\x09* This allows adding additional promotional items without having to update the game client. For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\x09*\n\x09* @param\x09ItemDefs\x09\x09\x09The list of items to grant the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Grant a specific one-time promotional item to the current user.\n\nThis can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to\ngrant an item to users who also own a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\nAny items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item.\nThis version will grant all items that have promo attributes specified for them in the configured item definitions.\nThis allows adding additional promotional items without having to update the game client. For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\n@param        ItemDefs                        The list of items to grant the user." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventAddPromoItems_Parms, OutResult), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 277898169
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 342357027
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventAddPromoItems_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 342357027
void Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventAddPromoItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventAddPromoItems_Parms), &Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "AddPromoItems", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::SteamProInventory_eventAddPromoItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::SteamProInventory_eventAddPromoItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_AddPromoItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_AddPromoItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execAddPromoItems)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_OutResult);
	P_GET_TARRAY(FSteamItemDef,Z_Param_ItemDefs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::AddPromoItems(Z_Param_Out_OutResult,Z_Param_ItemDefs);
	P_NATIVE_END;
}
// End Class USteamProInventory Function AddPromoItems

// Begin Class USteamProInventory Function CheckResultSteamID
struct Z_Construct_UFunction_USteamProInventory_CheckResultSteamID_Statics
{
	struct SteamProInventory_eventCheckResultSteamID_Parms
	{
		FSteamInventoryResult Handle;
		FSteamID SteamIDExpected;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Checks whether an inventory result handle belongs to the specified Steam ID.\n\x09*\n\x09* This is important when using DeserializeResult, to verify that a remote player is not pretending to have a different user's inventory.\n\x09*\n\x09* @param\x09Handle\x09\x09The inventory result handle to check the Steam ID on.\n\x09* @param\x09steamID\x09\x09The Steam ID to verify.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Checks whether an inventory result handle belongs to the specified Steam ID.\n\nThis is important when using DeserializeResult, to verify that a remote player is not pretending to have a different user's inventory.\n\n@param        Handle          The inventory result handle to check the Steam ID on.\n@param        steamID         The Steam ID to verify." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDExpected;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_CheckResultSteamID_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventCheckResultSteamID_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 277898169
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_CheckResultSteamID_Statics::NewProp_SteamIDExpected = { "SteamIDExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventCheckResultSteamID_Parms, SteamIDExpected), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProInventory_CheckResultSteamID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventCheckResultSteamID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_CheckResultSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventCheckResultSteamID_Parms), &Z_Construct_UFunction_USteamProInventory_CheckResultSteamID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_CheckResultSteamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_CheckResultSteamID_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_CheckResultSteamID_Statics::NewProp_SteamIDExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_CheckResultSteamID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_CheckResultSteamID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_CheckResultSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "CheckResultSteamID", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_CheckResultSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_CheckResultSteamID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_CheckResultSteamID_Statics::SteamProInventory_eventCheckResultSteamID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_CheckResultSteamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_CheckResultSteamID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_CheckResultSteamID_Statics::SteamProInventory_eventCheckResultSteamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_CheckResultSteamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_CheckResultSteamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execCheckResultSteamID)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDExpected);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::CheckResultSteamID(Z_Param_Handle,Z_Param_SteamIDExpected);
	P_NATIVE_END;
}
// End Class USteamProInventory Function CheckResultSteamID

// Begin Class USteamProInventory Function ConsumeItem
struct Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics
{
	struct SteamProInventory_eventConsumeItem_Parms
	{
		FSteamInventoryResult Result;
		FSteamItemInstanceID ItemConsume;
		int32 Quantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Consumes items from a user's inventory. If the quantity of the given item goes to zero, it is permanently removed.\n\x09*\n\x09* Once an item is removed it cannot be recovered. This is not for the faint of heart - if your game implements item removal at all, a high-friction UI confirmation process is highly recommended. \n\x09* ConsumeItem can be restricted to certain item definitions or fully blocked via the Steamworks website to minimize support/abuse issues such as the classic \"my brother borrowed my laptop and deleted all of my rare items\".\n\x09*\n\x09* @param\x09ItemConsume\x09\x09\x09The item instance id to consume.\n\x09* @param\x09Quantity\x09\x09The number of items in that stack to consume.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Consumes items from a user's inventory. If the quantity of the given item goes to zero, it is permanently removed.\n\nOnce an item is removed it cannot be recovered. This is not for the faint of heart - if your game implements item removal at all, a high-friction UI confirmation process is highly recommended.\nConsumeItem can be restricted to certain item definitions or fully blocked via the Steamworks website to minimize support/abuse issues such as the classic \"my brother borrowed my laptop and deleted all of my rare items\".\n\n@param        ItemConsume                     The item instance id to consume.\n@param        Quantity                The number of items in that stack to consume." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemConsume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventConsumeItem_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 277898169
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::NewProp_ItemConsume = { "ItemConsume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventConsumeItem_Parms, ItemConsume), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2669364223
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventConsumeItem_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventConsumeItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventConsumeItem_Parms), &Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::NewProp_ItemConsume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "ConsumeItem", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::SteamProInventory_eventConsumeItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::SteamProInventory_eventConsumeItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_ConsumeItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_ConsumeItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execConsumeItem)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemConsume);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::ConsumeItem(Z_Param_Out_Result,Z_Param_ItemConsume,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class USteamProInventory Function ConsumeItem

// Begin Class USteamProInventory Function DeserializeResult
struct Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics
{
	struct SteamProInventory_eventDeserializeResult_Parms
	{
		FSteamInventoryResult Result;
		TArray<uint8> Buffer;
		bool bReservedMustBeFalse;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Deserializes a result set and verifies the signature bytes.\n\x09*\n\x09* This call has a potential soft-failure mode where the handle status is set to k_EResultExpired. GetResultItems will still succeed in this mode. \n\x09* The \"expired\" result could indicate that the data may be out of date - not just due to timed expiration (one hour), but also because one of the items in the result set may have been traded or consumed since the result set was generated. \n\x09* You could compare the timestamp from GetResultTimestamp to ISteamUtils::GetServerRealTime to determine how old the data is. You could simply ignore the \"expired\" result code and continue as normal, \n\x09* or you could request the player with expired data to send an updated result set.\n\x09* You should call CheckResultSteamID on the result handle when it completes to verify that a remote player is not pretending to have a different user's inventory.\n\x09*\n\x09* @param\x09""Buffer\x09\x09\x09\x09\x09The buffer to deserialize.\n\x09* @param\x09""bReservedMustBeFalse\x09This must be false!\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Deserializes a result set and verifies the signature bytes.\n\nThis call has a potential soft-failure mode where the handle status is set to k_EResultExpired. GetResultItems will still succeed in this mode.\nThe \"expired\" result could indicate that the data may be out of date - not just due to timed expiration (one hour), but also because one of the items in the result set may have been traded or consumed since the result set was generated.\nYou could compare the timestamp from GetResultTimestamp to ISteamUtils::GetServerRealTime to determine how old the data is. You could simply ignore the \"expired\" result code and continue as normal,\nor you could request the player with expired data to send an updated result set.\nYou should call CheckResultSteamID on the result handle when it completes to verify that a remote player is not pretending to have a different user's inventory.\n\n@param        Buffer                                  The buffer to deserialize.\n@param        bReservedMustBeFalse    This must be false!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
	static void NewProp_bReservedMustBeFalse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReservedMustBeFalse;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventDeserializeResult_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 277898169
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventDeserializeResult_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse_SetBit(void* Obj)
{
	((SteamProInventory_eventDeserializeResult_Parms*)Obj)->bReservedMustBeFalse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse = { "bReservedMustBeFalse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventDeserializeResult_Parms), &Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventDeserializeResult_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventDeserializeResult_Parms), &Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::NewProp_Buffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::NewProp_Buffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "DeserializeResult", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::SteamProInventory_eventDeserializeResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::SteamProInventory_eventDeserializeResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_DeserializeResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_DeserializeResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execDeserializeResult)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_TARRAY(uint8,Z_Param_Buffer);
	P_GET_UBOOL(Z_Param_bReservedMustBeFalse);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::DeserializeResult(Z_Param_Out_Result,Z_Param_Buffer,Z_Param_bReservedMustBeFalse);
	P_NATIVE_END;
}
// End Class USteamProInventory Function DeserializeResult

// Begin Class USteamProInventory Function DestroyResult
struct Z_Construct_UFunction_USteamProInventory_DestroyResult_Statics
{
	struct SteamProInventory_eventDestroyResult_Parms
	{
		FSteamInventoryResult Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Destroys a result handle and frees all associated memory.\n\x09*\n\x09* @param\x09Handle\x09\x09The inventory result handle to destroy.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Destroys a result handle and frees all associated memory.\n\n@param        Handle          The inventory result handle to destroy." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_DestroyResult_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventDestroyResult_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 277898169
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_DestroyResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_DestroyResult_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_DestroyResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_DestroyResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "DestroyResult", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_DestroyResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_DestroyResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_DestroyResult_Statics::SteamProInventory_eventDestroyResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_DestroyResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_DestroyResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_DestroyResult_Statics::SteamProInventory_eventDestroyResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_DestroyResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_DestroyResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execDestroyResult)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProInventory::DestroyResult(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class USteamProInventory Function DestroyResult

// Begin Class USteamProInventory Function ExchangeItems
struct Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics
{
	struct SteamProInventory_eventExchangeItems_Parms
	{
		FSteamInventoryResult Result;
		TArray<FSteamItemDef> ArrayGenerate;
		TArray<int32> ArrayGenerateQuantity;
		TArray<FSteamItemInstanceID> ArrayDestroy;
		TArray<int32> ArrayDestroyQuantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Grant one item in exchange for a set of other items.\n\x09*\n\x09* This can be used to implement crafting recipes or transmutations, or items which unpack themselves into other items (e.g., a chest).\n\x09* The caller of this API passes in the requested item and an array of existing items and quantities to exchange for it. \n\x09* The API currently takes an array of items to generate but at this time the size of that array must be 1 and the quantity of the new item must be 1.\n\x09* Any items that can be granted MUST have an exchange attribute in their itemdef. The exchange attribute specifies a set of recipes that are valid exchanges for this item. \n\x09* Exchange recipes are evaluated atomically by the Inventory Service; if the supplied components do not match the recipe, or do not contain sufficient quantity, the exchange will fail.\n\x09*\n\x09* @param\x09""ArrayGenerate\x09\x09\x09\x09\x09The list of items that will be created by this call. Currently can only be 1 item!\n\x09* @param\x09""ArrayGenerateQuantity\x09\x09\x09The quantity of each item in pArrayGenerate to create. Currently can only be 1 item and it must be set to 1!\n\x09* @param\x09""ArrayDestroy\x09\x09\x09\x09\x09The list of items that will be destroyed by this call.\n\x09* @param\x09""ArrayDestroyQuantity\x09\x09\x09The quantity of each item in pArrayDestroy to destroy.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Grant one item in exchange for a set of other items.\n\nThis can be used to implement crafting recipes or transmutations, or items which unpack themselves into other items (e.g., a chest).\nThe caller of this API passes in the requested item and an array of existing items and quantities to exchange for it.\nThe API currently takes an array of items to generate but at this time the size of that array must be 1 and the quantity of the new item must be 1.\nAny items that can be granted MUST have an exchange attribute in their itemdef. The exchange attribute specifies a set of recipes that are valid exchanges for this item.\nExchange recipes are evaluated atomically by the Inventory Service; if the supplied components do not match the recipe, or do not contain sufficient quantity, the exchange will fail.\n\n@param        ArrayGenerate                                   The list of items that will be created by this call. Currently can only be 1 item!\n@param        ArrayGenerateQuantity                   The quantity of each item in pArrayGenerate to create. Currently can only be 1 item and it must be set to 1!\n@param        ArrayDestroy                                    The list of items that will be destroyed by this call.\n@param        ArrayDestroyQuantity                    The quantity of each item in pArrayDestroy to destroy." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayGenerate_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayGenerate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayGenerateQuantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayGenerateQuantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayDestroy_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayDestroy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayDestroyQuantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayDestroyQuantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventExchangeItems_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 277898169
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ArrayGenerate_Inner = { "ArrayGenerate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 342357027
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ArrayGenerate = { "ArrayGenerate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventExchangeItems_Parms, ArrayGenerate), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 342357027
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity_Inner = { "ArrayGenerateQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity = { "ArrayGenerateQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventExchangeItems_Parms, ArrayGenerateQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ArrayDestroy_Inner = { "ArrayDestroy", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2669364223
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ArrayDestroy = { "ArrayDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventExchangeItems_Parms, ArrayDestroy), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2669364223
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ArrayDestroyQuantity_Inner = { "ArrayDestroyQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ArrayDestroyQuantity = { "ArrayDestroyQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventExchangeItems_Parms, ArrayDestroyQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventExchangeItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventExchangeItems_Parms), &Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ArrayGenerate_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ArrayGenerate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ArrayDestroy_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ArrayDestroy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ArrayDestroyQuantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ArrayDestroyQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "ExchangeItems", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::SteamProInventory_eventExchangeItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::SteamProInventory_eventExchangeItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_ExchangeItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_ExchangeItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execExchangeItems)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_TARRAY(FSteamItemDef,Z_Param_ArrayGenerate);
	P_GET_TARRAY(int32,Z_Param_ArrayGenerateQuantity);
	P_GET_TARRAY(FSteamItemInstanceID,Z_Param_ArrayDestroy);
	P_GET_TARRAY(int32,Z_Param_ArrayDestroyQuantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::ExchangeItems(Z_Param_Out_Result,Z_Param_ArrayGenerate,Z_Param_ArrayGenerateQuantity,Z_Param_ArrayDestroy,Z_Param_ArrayDestroyQuantity);
	P_NATIVE_END;
}
// End Class USteamProInventory Function ExchangeItems

// Begin Class USteamProInventory Function GenerateItems
struct Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics
{
	struct SteamProInventory_eventGenerateItems_Parms
	{
		FSteamInventoryResult Result;
		TArray<FSteamItemDef> ItemDefs;
		TArray<int32> Quantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Grants specific items to the current user, for developers only.\n\x09*\n\x09* This API is only intended for prototyping - it is only usable by Steam accounts that belong to the publisher group for your game.\n\x09* You can pass in an array of items, identified by their SteamItemDef_t and optionally a second array of corresponding quantities for each item. The length of these arrays MUST match!\n\x09*\n\x09* @param\x09ItemDefs\x09\x09The list of items to grant the user.\n\x09* @param\x09Quantity\x09\x09The quantity of each item in pArrayItemDefs to grant. This is optional, pass in NULL to specify 1 of each item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Grants specific items to the current user, for developers only.\n\nThis API is only intended for prototyping - it is only usable by Steam accounts that belong to the publisher group for your game.\nYou can pass in an array of items, identified by their SteamItemDef_t and optionally a second array of corresponding quantities for each item. The length of these arrays MUST match!\n\n@param        ItemDefs                The list of items to grant the user.\n@param        Quantity                The quantity of each item in pArrayItemDefs to grant. This is optional, pass in NULL to specify 1 of each item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Quantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGenerateItems_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 277898169
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 342357027
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGenerateItems_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 342357027
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::NewProp_Quantity_Inner = { "Quantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGenerateItems_Parms, Quantity), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventGenerateItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventGenerateItems_Parms), &Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::NewProp_Quantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "GenerateItems", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::SteamProInventory_eventGenerateItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::SteamProInventory_eventGenerateItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_GenerateItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_GenerateItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execGenerateItems)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_TARRAY(FSteamItemDef,Z_Param_ItemDefs);
	P_GET_TARRAY(int32,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::GenerateItems(Z_Param_Out_Result,Z_Param_ItemDefs,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class USteamProInventory Function GenerateItems

// Begin Class USteamProInventory Function GetAllItems
struct Z_Construct_UFunction_USteamProInventory_GetAllItems_Statics
{
	struct SteamProInventory_eventGetAllItems_Parms
	{
		FSteamInventoryResult Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Start retrieving all items in the current users inventory.\n\x09*\n\x09* Calls to this function are subject to rate limits and may return cached results if called too frequently. \n\x09* It is suggested that you call this function only when you are about to display the user's full inventory, or if you expect that the inventory may have changed.\n\x09* \n\x09* @param\x09Handle\x09\x09Returns a new inventory result handle.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Start retrieving all items in the current users inventory.\n\nCalls to this function are subject to rate limits and may return cached results if called too frequently.\nIt is suggested that you call this function only when you are about to display the user's full inventory, or if you expect that the inventory may have changed.\n\n@param        Handle          Returns a new inventory result handle." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_GetAllItems_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetAllItems_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 277898169
void Z_Construct_UFunction_USteamProInventory_GetAllItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventGetAllItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_GetAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventGetAllItems_Parms), &Z_Construct_UFunction_USteamProInventory_GetAllItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_GetAllItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetAllItems_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetAllItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetAllItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_GetAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "GetAllItems", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_GetAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetAllItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_GetAllItems_Statics::SteamProInventory_eventGetAllItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetAllItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_GetAllItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_GetAllItems_Statics::SteamProInventory_eventGetAllItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_GetAllItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_GetAllItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execGetAllItems)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::GetAllItems(Z_Param_Out_Handle);
	P_NATIVE_END;
}
// End Class USteamProInventory Function GetAllItems

// Begin Class USteamProInventory Function GetEligiblePromoItemDefinitionIDs
struct Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics
{
	struct SteamProInventory_eventGetEligiblePromoItemDefinitionIDs_Parms
	{
		FSteamID SteamID;
		TArray<FSteamItemDef> ItemDefs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Get the list of item definition ids that a user can be granted.\n\x09*\n\x09* You should call this while handling a SteamInventoryEligiblePromoItemDefIDs_t call result to pull out the item definition ids.\n\x09*\n\x09* @param\x09SteamID\x09\x09The Steam ID of the user who these items are for. This should be the same as SteamInventoryEligiblePromoItemDefIDs_t.m_steamID.\n\x09* @param\x09ItemDefs\x09Returns the item definition ids by copying them into this array.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Get the list of item definition ids that a user can be granted.\n\nYou should call this while handling a SteamInventoryEligiblePromoItemDefIDs_t call result to pull out the item definition ids.\n\n@param        SteamID         The Steam ID of the user who these items are for. This should be the same as SteamInventoryEligiblePromoItemDefIDs_t.m_steamID.\n@param        ItemDefs        Returns the item definition ids by copying them into this array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetEligiblePromoItemDefinitionIDs_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 342357027
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetEligiblePromoItemDefinitionIDs_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 342357027
void Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventGetEligiblePromoItemDefinitionIDs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventGetEligiblePromoItemDefinitionIDs_Parms), &Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "GetEligiblePromoItemDefinitionIDs", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::SteamProInventory_eventGetEligiblePromoItemDefinitionIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::SteamProInventory_eventGetEligiblePromoItemDefinitionIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execGetEligiblePromoItemDefinitionIDs)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_ItemDefs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::GetEligiblePromoItemDefinitionIDs(Z_Param_SteamID,Z_Param_Out_ItemDefs);
	P_NATIVE_END;
}
// End Class USteamProInventory Function GetEligiblePromoItemDefinitionIDs

// Begin Class USteamProInventory Function GetItemDefinitionIDs
struct Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs_Statics
{
	struct SteamProInventory_eventGetItemDefinitionIDs_Parms
	{
		TArray<FSteamItemDef> ItemDefs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Returns the set of all item definition IDs which are defined in the App Admin panel of the Steamworks website.\n\x09*\n\x09* These item definitions may not necessarily be contiguous integers.\n\x09* This should be called in response to a SteamInventoryDefinitionUpdate_t callback. \n\x09* There is no reason to call this function if your game hardcodes the numeric definition IDs (eg, purple face mask = 20, blue weapon mod = 55) and does not allow for adding new item types without a client patch.\n\x09*\n\x09* @param\x09ItemDefs\x09Returns the item definitions by copying them into this array.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Returns the set of all item definition IDs which are defined in the App Admin panel of the Steamworks website.\n\nThese item definitions may not necessarily be contiguous integers.\nThis should be called in response to a SteamInventoryDefinitionUpdate_t callback.\nThere is no reason to call this function if your game hardcodes the numeric definition IDs (eg, purple face mask = 20, blue weapon mod = 55) and does not allow for adding new item types without a client patch.\n\n@param        ItemDefs        Returns the item definitions by copying them into this array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 342357027
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetItemDefinitionIDs_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 342357027
void Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventGetItemDefinitionIDs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventGetItemDefinitionIDs_Parms), &Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "GetItemDefinitionIDs", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs_Statics::SteamProInventory_eventGetItemDefinitionIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs_Statics::SteamProInventory_eventGetItemDefinitionIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execGetItemDefinitionIDs)
{
	P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_ItemDefs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::GetItemDefinitionIDs(Z_Param_Out_ItemDefs);
	P_NATIVE_END;
}
// End Class USteamProInventory Function GetItemDefinitionIDs

// Begin Class USteamProInventory Function GetItemDefinitionProperty
struct Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics
{
	struct SteamProInventory_eventGetItemDefinitionProperty_Parms
	{
		FSteamItemDef ItemDef;
		FString PropertyName;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Gets a string property from the specified item definition.\n\x09*\n\x09* Gets a property value for a specific item definition.\n\x09* Note that some properties (for example, \"name\") may be localized and will depend on the current Steam language settings (see ISteamApps::GetCurrentGameLanguage). Property names are always ASCII alphanumeric and underscores.\n\x09* Pass in NULL for pchPropertyName to get a comma-separated list of available property names. In this mode, punValueBufferSizeOut will contain the suggested buffer size. Otherwise it will be the number of bytes actually copied to pchValueBuffer.\n\x09*\n\x09* @param\x09ItemDef\x09\x09\x09\x09The item definition to get the properties for.\n\x09* @param\x09PropertyName\x09\x09The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n\x09* @param\x09Value\x09\x09\x09\x09Returns the value associated with pchPropertyName.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Gets a string property from the specified item definition.\n\nGets a property value for a specific item definition.\nNote that some properties (for example, \"name\") may be localized and will depend on the current Steam language settings (see ISteamApps::GetCurrentGameLanguage). Property names are always ASCII alphanumeric and underscores.\nPass in NULL for pchPropertyName to get a comma-separated list of available property names. In this mode, punValueBufferSizeOut will contain the suggested buffer size. Otherwise it will be the number of bytes actually copied to pchValueBuffer.\n\n@param        ItemDef                         The item definition to get the properties for.\n@param        PropertyName            The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n@param        Value                           Returns the value associated with pchPropertyName." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetItemDefinitionProperty_Parms, ItemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 342357027
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetItemDefinitionProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetItemDefinitionProperty_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventGetItemDefinitionProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventGetItemDefinitionProperty_Parms), &Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "GetItemDefinitionProperty", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::SteamProInventory_eventGetItemDefinitionProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::SteamProInventory_eventGetItemDefinitionProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execGetItemDefinitionProperty)
{
	P_GET_STRUCT(FSteamItemDef,Z_Param_ItemDef);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::GetItemDefinitionProperty(Z_Param_ItemDef,Z_Param_PropertyName,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class USteamProInventory Function GetItemDefinitionProperty

// Begin Class USteamProInventory Function GetItemPrice
struct Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics
{
	struct SteamProInventory_eventGetItemPrice_Parms
	{
		FSteamItemDef ItemDef;
		int32 Price;
		int32 BasePrice;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\x09*\n\x09* @param\x09ItemDef\x09\x09The item definition id to retrieve the price for\n\x09* @param\x09Price\x09\x09The price pointer to populate. Prices are rendered in the user's local currency.\n\x09* @param\x09""BasePrice\x09(Steam SDK 1.46 only)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\n@param        ItemDef         The item definition id to retrieve the price for\n@param        Price           The price pointer to populate. Prices are rendered in the user's local currency.\n@param        BasePrice       (Steam SDK 1.46 only)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Price;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BasePrice;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetItemPrice_Parms, ItemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 342357027
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetItemPrice_Parms, Price), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::NewProp_BasePrice = { "BasePrice", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetItemPrice_Parms, BasePrice), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventGetItemPrice_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventGetItemPrice_Parms), &Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::NewProp_Price,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::NewProp_BasePrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "GetItemPrice", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::SteamProInventory_eventGetItemPrice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::SteamProInventory_eventGetItemPrice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_GetItemPrice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_GetItemPrice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execGetItemPrice)
{
	P_GET_STRUCT(FSteamItemDef,Z_Param_ItemDef);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Price);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BasePrice);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::GetItemPrice(Z_Param_ItemDef,Z_Param_Out_Price,Z_Param_Out_BasePrice);
	P_NATIVE_END;
}
// End Class USteamProInventory Function GetItemPrice

// Begin Class USteamProInventory Function GetItemsByID
struct Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics
{
	struct SteamProInventory_eventGetItemsByID_Parms
	{
		FSteamInventoryResult InventoryResult;
		TArray<FSteamItemInstanceID> InstanceIDs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Gets the state of a subset of the current user's inventory.\n\x09*\n\x09* The subset is specified by an array of item instance IDs.\n\x09* The results from this call can be serialized using SerializeResult and passed to other players to \"prove\" that the current user owns specific items, without exposing the user's entire inventory. For example, you could call this with the IDs of the user's currently equipped items and serialize this to a buffer, and then transmit this buffer to other players upon joining a game.\n\x09* \n\x09* @param\x09InstanceIDs\x09\x09""A list of the item instance ids to update the state of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Gets the state of a subset of the current user's inventory.\n\nThe subset is specified by an array of item instance IDs.\nThe results from this call can be serialized using SerializeResult and passed to other players to \"prove\" that the current user owns specific items, without exposing the user's entire inventory. For example, you could call this with the IDs of the user's currently equipped items and serialize this to a buffer, and then transmit this buffer to other players upon joining a game.\n\n@param        InstanceIDs             A list of the item instance ids to update the state of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceIDs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetItemsByID_Parms, InventoryResult), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 277898169
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::NewProp_InstanceIDs_Inner = { "InstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2669364223
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::NewProp_InstanceIDs = { "InstanceIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetItemsByID_Parms, InstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2669364223
void Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventGetItemsByID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventGetItemsByID_Parms), &Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::NewProp_InventoryResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::NewProp_InstanceIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::NewProp_InstanceIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "GetItemsByID", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::SteamProInventory_eventGetItemsByID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::SteamProInventory_eventGetItemsByID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_GetItemsByID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_GetItemsByID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execGetItemsByID)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_InventoryResult);
	P_GET_TARRAY(FSteamItemInstanceID,Z_Param_InstanceIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::GetItemsByID(Z_Param_Out_InventoryResult,Z_Param_InstanceIDs);
	P_NATIVE_END;
}
// End Class USteamProInventory Function GetItemsByID

// Begin Class USteamProInventory Function GetItemsWithPrices
struct Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics
{
	struct SteamProInventory_eventGetItemsWithPrices_Parms
	{
		TArray<FSteamItemDef> ItemDefs;
		TArray<int32> Prices;
		TArray<int32> BasePrices;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\x09*\n\x09* @param\x09ItemDefs\x09\x09The array of item definition ids to populate\n\x09* @param\x09Prices\x09\x09The array of prices for each corresponding item definition id in pArrayItemDefs. Prices are rendered in the user's local currency.\n\x09* @param\x09""BasePrices\x09(Steam SDK 1.46 only)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\n@param        ItemDefs                The array of item definition ids to populate\n@param        Prices          The array of prices for each corresponding item definition id in pArrayItemDefs. Prices are rendered in the user's local currency.\n@param        BasePrices      (Steam SDK 1.46 only)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Prices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Prices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BasePrices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BasePrices;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 342357027
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetItemsWithPrices_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 342357027
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::NewProp_Prices_Inner = { "Prices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::NewProp_Prices = { "Prices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetItemsWithPrices_Parms, Prices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::NewProp_BasePrices_Inner = { "BasePrices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::NewProp_BasePrices = { "BasePrices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetItemsWithPrices_Parms, BasePrices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventGetItemsWithPrices_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventGetItemsWithPrices_Parms), &Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::NewProp_Prices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::NewProp_Prices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::NewProp_BasePrices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::NewProp_BasePrices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "GetItemsWithPrices", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::SteamProInventory_eventGetItemsWithPrices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::SteamProInventory_eventGetItemsWithPrices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execGetItemsWithPrices)
{
	P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_ItemDefs);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Prices);
	P_GET_TARRAY_REF(int32,Z_Param_Out_BasePrices);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::GetItemsWithPrices(Z_Param_Out_ItemDefs,Z_Param_Out_Prices,Z_Param_Out_BasePrices);
	P_NATIVE_END;
}
// End Class USteamProInventory Function GetItemsWithPrices

// Begin Class USteamProInventory Function GetNumItemsWithPrices
struct Z_Construct_UFunction_USteamProInventory_GetNumItemsWithPrices_Statics
{
	struct SteamProInventory_eventGetNumItemsWithPrices_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* After a successful call to RequestPrices, this will return the number of item definitions with valid pricing.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "After a successful call to RequestPrices, this will return the number of item definitions with valid pricing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInventory_GetNumItemsWithPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetNumItemsWithPrices_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_GetNumItemsWithPrices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetNumItemsWithPrices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetNumItemsWithPrices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_GetNumItemsWithPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "GetNumItemsWithPrices", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_GetNumItemsWithPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetNumItemsWithPrices_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_GetNumItemsWithPrices_Statics::SteamProInventory_eventGetNumItemsWithPrices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetNumItemsWithPrices_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_GetNumItemsWithPrices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_GetNumItemsWithPrices_Statics::SteamProInventory_eventGetNumItemsWithPrices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_GetNumItemsWithPrices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_GetNumItemsWithPrices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execGetNumItemsWithPrices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProInventory::GetNumItemsWithPrices();
	P_NATIVE_END;
}
// End Class USteamProInventory Function GetNumItemsWithPrices

// Begin Class USteamProInventory Function GetResultItemProperty
struct Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics
{
	struct SteamProInventory_eventGetResultItemProperty_Parms
	{
		FSteamInventoryResult Handle;
		int32 ItemIndex;
		FString PropertyName;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Gets the dynamic properties from an item in an inventory result set.\n\x09*\n\x09* Property names are always composed of ASCII letters, numbers, and/or underscores.\n\x09* If the results do not fit in the given buffer, partial results may be copied.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The result handle containing the item to get the properties of.\n\x09* @param\x09ItemIndex\x09\n\x09* @param\x09PropertyName\x09The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Gets the dynamic properties from an item in an inventory result set.\n\nProperty names are always composed of ASCII letters, numbers, and/or underscores.\nIf the results do not fit in the given buffer, partial results may be copied.\n\n@param        Handle                  The result handle containing the item to get the properties of.\n@param        ItemIndex\n@param        PropertyName    The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetResultItemProperty_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 277898169
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetResultItemProperty_Parms, ItemIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetResultItemProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetResultItemProperty_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventGetResultItemProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventGetResultItemProperty_Parms), &Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::NewProp_ItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "GetResultItemProperty", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::SteamProInventory_eventGetResultItemProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::SteamProInventory_eventGetResultItemProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_GetResultItemProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_GetResultItemProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execGetResultItemProperty)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::GetResultItemProperty(Z_Param_Handle,Z_Param_ItemIndex,Z_Param_PropertyName,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class USteamProInventory Function GetResultItemProperty

// Begin Class USteamProInventory Function GetResultItems
struct Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics
{
	struct SteamProInventory_eventGetResultItems_Parms
	{
		FSteamInventoryResult Handle;
		TArray<FSteamItemDetails> Items;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Get the items associated with an inventory result handle.\n\x09*\n\x09* @param\x09Handle\x09\x09The inventory result handle to get the items for.\n\x09* @param\x09Items\x09\x09The details are returned by copying them into this array.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Get the items associated with an inventory result handle.\n\n@param        Handle          The inventory result handle to get the items for.\n@param        Items           The details are returned by copying them into this array." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetResultItems_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 277898169
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDetails, METADATA_PARAMS(0, nullptr) }; // 3639696997
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetResultItems_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3639696997
void Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventGetResultItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventGetResultItems_Parms), &Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "GetResultItems", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::SteamProInventory_eventGetResultItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::SteamProInventory_eventGetResultItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_GetResultItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_GetResultItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execGetResultItems)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_GET_TARRAY_REF(FSteamItemDetails,Z_Param_Out_Items);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::GetResultItems(Z_Param_Handle,Z_Param_Out_Items);
	P_NATIVE_END;
}
// End Class USteamProInventory Function GetResultItems

// Begin Class USteamProInventory Function GetResultStatus
struct Z_Construct_UFunction_USteamProInventory_GetResultStatus_Statics
{
	struct SteamProInventory_eventGetResultStatus_Parms
	{
		FSteamInventoryResult Handle;
		ESteamResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Find out the status of an asynchronous inventory result handle.\n\x09*\n\x09* This is a polling equivalent to registering a callback function for SteamInventoryResultReady_t.\n\x09*\n\x09* @param\x09Handle\x09\x09The inventory result handle to get the status for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Find out the status of an asynchronous inventory result handle.\n\nThis is a polling equivalent to registering a callback function for SteamInventoryResultReady_t.\n\n@param        Handle          The inventory result handle to get the status for." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_GetResultStatus_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetResultStatus_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 277898169
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInventory_GetResultStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProInventory_GetResultStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetResultStatus_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(0, nullptr) }; // 2516430442
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_GetResultStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetResultStatus_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetResultStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetResultStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetResultStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_GetResultStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "GetResultStatus", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_GetResultStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetResultStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_GetResultStatus_Statics::SteamProInventory_eventGetResultStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetResultStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_GetResultStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_GetResultStatus_Statics::SteamProInventory_eventGetResultStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_GetResultStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_GetResultStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execGetResultStatus)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamResult*)Z_Param__Result=USteamProInventory::GetResultStatus(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class USteamProInventory Function GetResultStatus

// Begin Class USteamProInventory Function GetResultTimestamp
struct Z_Construct_UFunction_USteamProInventory_GetResultTimestamp_Statics
{
	struct SteamProInventory_eventGetResultTimestamp_Parms
	{
		FSteamInventoryResult Handle;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Gets the server time at which the result was generated.\n\x09*\x09\n\x09* @param\x09Handle\x09The inventory result handle to get the timestamp for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Gets the server time at which the result was generated.\n\n@param        Handle  The inventory result handle to get the timestamp for." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_GetResultTimestamp_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetResultTimestamp_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 277898169
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInventory_GetResultTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetResultTimestamp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_GetResultTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetResultTimestamp_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetResultTimestamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetResultTimestamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_GetResultTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "GetResultTimestamp", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_GetResultTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetResultTimestamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_GetResultTimestamp_Statics::SteamProInventory_eventGetResultTimestamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetResultTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_GetResultTimestamp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_GetResultTimestamp_Statics::SteamProInventory_eventGetResultTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_GetResultTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_GetResultTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execGetResultTimestamp)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProInventory::GetResultTimestamp(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class USteamProInventory Function GetResultTimestamp

// Begin Class USteamProInventory Function GetSteamInventory
struct Z_Construct_UFunction_USteamProInventory_GetSteamInventory_Statics
{
	struct SteamProInventory_eventGetSteamInventory_Parms
	{
		USteamProInventory* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProInventory_GetSteamInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGetSteamInventory_Parms, ReturnValue), Z_Construct_UClass_USteamProInventory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_GetSteamInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GetSteamInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetSteamInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_GetSteamInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "GetSteamInventory", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_GetSteamInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetSteamInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_GetSteamInventory_Statics::SteamProInventory_eventGetSteamInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GetSteamInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_GetSteamInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_GetSteamInventory_Statics::SteamProInventory_eventGetSteamInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_GetSteamInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_GetSteamInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execGetSteamInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProInventory**)Z_Param__Result=USteamProInventory::GetSteamInventory();
	P_NATIVE_END;
}
// End Class USteamProInventory Function GetSteamInventory

// Begin Class USteamProInventory Function GrantPromoItems
struct Z_Construct_UFunction_USteamProInventory_GrantPromoItems_Statics
{
	struct SteamProInventory_eventGrantPromoItems_Parms
	{
		FSteamInventoryResult Result;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Grant all potential one-time promotional items to the current user.\n\x09*\n\x09* This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. \n\x09* One of the primary scenarios for this call is to grant an item to users who also own a specific other game. If you want to grant specific promotional items rather than all of them see: AddPromoItem and AddPromoItems.\n\x09* Any items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. \n\x09* This version will grant all items that have promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client. \n\x09* For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\x09*\n\x09* @param\x09Result\x09\x09Returns a new inventory result handle.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Grant all potential one-time promotional items to the current user.\n\nThis can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs.\nOne of the primary scenarios for this call is to grant an item to users who also own a specific other game. If you want to grant specific promotional items rather than all of them see: AddPromoItem and AddPromoItems.\nAny items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item.\nThis version will grant all items that have promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client.\nFor example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\n@param        Result          Returns a new inventory result handle." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_GrantPromoItems_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventGrantPromoItems_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 277898169
void Z_Construct_UFunction_USteamProInventory_GrantPromoItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventGrantPromoItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_GrantPromoItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventGrantPromoItems_Parms), &Z_Construct_UFunction_USteamProInventory_GrantPromoItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_GrantPromoItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GrantPromoItems_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_GrantPromoItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GrantPromoItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_GrantPromoItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "GrantPromoItems", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_GrantPromoItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GrantPromoItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_GrantPromoItems_Statics::SteamProInventory_eventGrantPromoItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_GrantPromoItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_GrantPromoItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_GrantPromoItems_Statics::SteamProInventory_eventGrantPromoItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_GrantPromoItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_GrantPromoItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execGrantPromoItems)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::GrantPromoItems(Z_Param_Out_Result);
	P_NATIVE_END;
}
// End Class USteamProInventory Function GrantPromoItems

// Begin Class USteamProInventory Function LoadItemDefinitions
struct Z_Construct_UFunction_USteamProInventory_LoadItemDefinitions_Statics
{
	struct SteamProInventory_eventLoadItemDefinitions_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Triggers an asynchronous load and refresh of item definitions.\n\x09*\n\x09* Item definitions are a mapping of \"definition IDs\" (integers between 1 and 999999999) to a set of string properties. \n\x09* Some of these properties are required to display items on the Steam community web site. Other properties can be defined by applications. \n\x09* There is no reason to call this function if your game hardcoded the numeric definition IDs (e.g. purple face mask = 20, blue weapon mod = 55) and does not allow for adding new item types without a client patch.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Triggers an asynchronous load and refresh of item definitions.\n\nItem definitions are a mapping of \"definition IDs\" (integers between 1 and 999999999) to a set of string properties.\nSome of these properties are required to display items on the Steam community web site. Other properties can be defined by applications.\nThere is no reason to call this function if your game hardcoded the numeric definition IDs (e.g. purple face mask = 20, blue weapon mod = 55) and does not allow for adding new item types without a client patch." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventLoadItemDefinitions_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventLoadItemDefinitions_Parms), &Z_Construct_UFunction_USteamProInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_LoadItemDefinitions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_LoadItemDefinitions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_LoadItemDefinitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "LoadItemDefinitions", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_LoadItemDefinitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_LoadItemDefinitions_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_LoadItemDefinitions_Statics::SteamProInventory_eventLoadItemDefinitions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_LoadItemDefinitions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_LoadItemDefinitions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_LoadItemDefinitions_Statics::SteamProInventory_eventLoadItemDefinitions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_LoadItemDefinitions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_LoadItemDefinitions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execLoadItemDefinitions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::LoadItemDefinitions();
	P_NATIVE_END;
}
// End Class USteamProInventory Function LoadItemDefinitions

// Begin Class USteamProInventory Function RemoveProperty
struct Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics
{
	struct SteamProInventory_eventRemoveProperty_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FSteamItemInstanceID ItemID;
		FString PropertyName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Removes a dynamic property for the given item.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09* @param\x09ItemID\x09\x09\x09ID of the item being modified.\n\x09* @param\x09PropertyName\x09The dynamic property being removed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Removes a dynamic property for the given item.\n\n@param        Handle                  The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param        ItemID                  ID of the item being modified.\n@param        PropertyName    The dynamic property being removed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventRemoveProperty_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1389306764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventRemoveProperty_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2669364223
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventRemoveProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventRemoveProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventRemoveProperty_Parms), &Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "RemoveProperty", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::SteamProInventory_eventRemoveProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::SteamProInventory_eventRemoveProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_RemoveProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_RemoveProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execRemoveProperty)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::RemoveProperty(Z_Param_Handle,Z_Param_ItemID,Z_Param_PropertyName);
	P_NATIVE_END;
}
// End Class USteamProInventory Function RemoveProperty

// Begin Class USteamProInventory Function RequestEligiblePromoItemDefinitionsIDs
struct Z_Construct_UFunction_USteamProInventory_RequestEligiblePromoItemDefinitionsIDs_Statics
{
	struct SteamProInventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Request the list of \"eligible\" promo items that can be manually granted to the given user.\n\x09*\n\x09* These are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week.\n\x09* After calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids.\n\x09*\n\x09* @param\x09SteamID\x09\x09The Steam ID of the user to request the eligible promo items for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Request the list of \"eligible\" promo items that can be manually granted to the given user.\n\nThese are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week.\nAfter calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids.\n\n@param        SteamID         The Steam ID of the user to request the eligible promo items for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3245911673
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "RequestEligiblePromoItemDefinitionsIDs", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::SteamProInventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::SteamProInventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_RequestEligiblePromoItemDefinitionsIDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execRequestEligiblePromoItemDefinitionsIDs)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestEligiblePromoItemDefinitionsIDs(FOnRequestEligiblePromoItemDefinitionsIDs(Z_Param_Out_Callback),Z_Param_SteamID);
	P_NATIVE_END;
}
// End Class USteamProInventory Function RequestEligiblePromoItemDefinitionsIDs

// Begin Class USteamProInventory Function RequestPrices
struct Z_Construct_UFunction_USteamProInventory_RequestPrices_Statics
{
	struct SteamProInventory_eventRequestPrices_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Request prices for all item definitions that can be purchased in the user's local currency. \n\x09*\n\x09* A SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code. \n\x09* After that, you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Request prices for all item definitions that can be purchased in the user's local currency.\n\nA SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code.\nAfter that, you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProInventory_RequestPrices_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventRequestPrices_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3945961504
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_RequestPrices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_RequestPrices_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_RequestPrices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_RequestPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "RequestPrices", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_RequestPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_RequestPrices_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_RequestPrices_Statics::SteamProInventory_eventRequestPrices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_RequestPrices_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_RequestPrices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_RequestPrices_Statics::SteamProInventory_eventRequestPrices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_RequestPrices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_RequestPrices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execRequestPrices)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestPrices(FOnSteamInventoryRequestPricesResult(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class USteamProInventory Function RequestPrices

// Begin Class USteamProInventory Function SerializeResult
struct Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics
{
	struct SteamProInventory_eventSerializeResult_Parms
	{
		FSteamInventoryResult Handle;
		TArray<uint8> Buffer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Serialized result sets contain a short signature which can't be forged or replayed across different game sessions.\n\x09*\n\x09* A result set can be serialized on the local client, transmitted to other players via your game networking, and deserialized by the remote players. \n\x09* This is a secure way of preventing hackers from lying about posessing rare/high-value items. Serializes a result set with signature bytes to an output buffer. \n\x09* The size of a serialized result depends on the number items which are being serialized. When securely transmitting items to other players, it is recommended to use GetItemsByID first to create a minimal result set.\n\x09* Results have a built-in timestamp which will be considered \"expired\" after an hour has elapsed. See DeserializeResult for expiration handling.\n\x09* If this is set pOutBuffer to NULL then punOutBufferSize will be set to the buffer size required. So you can make the buffer and then call this again to fill it with the data.\n\x09*\n\x09* @param\x09Handle\x09\x09The inventory result handle to serialize.\n\x09* @param\x09""Buffer\x09\x09The buffer that the serialized result will be copied into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Serialized result sets contain a short signature which can't be forged or replayed across different game sessions.\n\nA result set can be serialized on the local client, transmitted to other players via your game networking, and deserialized by the remote players.\nThis is a secure way of preventing hackers from lying about posessing rare/high-value items. Serializes a result set with signature bytes to an output buffer.\nThe size of a serialized result depends on the number items which are being serialized. When securely transmitting items to other players, it is recommended to use GetItemsByID first to create a minimal result set.\nResults have a built-in timestamp which will be considered \"expired\" after an hour has elapsed. See DeserializeResult for expiration handling.\nIf this is set pOutBuffer to NULL then punOutBufferSize will be set to the buffer size required. So you can make the buffer and then call this again to fill it with the data.\n\n@param        Handle          The inventory result handle to serialize.\n@param        Buffer          The buffer that the serialized result will be copied into." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventSerializeResult_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 277898169
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventSerializeResult_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventSerializeResult_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventSerializeResult_Parms), &Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::NewProp_Buffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::NewProp_Buffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "SerializeResult", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::SteamProInventory_eventSerializeResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::SteamProInventory_eventSerializeResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_SerializeResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_SerializeResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execSerializeResult)
{
	P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::SerializeResult(Z_Param_Handle,Z_Param_Out_Buffer);
	P_NATIVE_END;
}
// End Class USteamProInventory Function SerializeResult

// Begin Class USteamProInventory Function SetPropertyBool
struct Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics
{
	struct SteamProInventory_eventSetPropertyBool_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FSteamItemInstanceID ItemID;
		FString PropertyName;
		bool bValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09* @param\x09ItemID\x09\x09\x09\x09ID of the item being modified.\n\x09* @param\x09PropertyName\x09\x09The dynamic property being added or updated.\n\x09* @param\x09""bValue\x09\x09\x09\x09The string value being set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param        Handle                          The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param        ItemID                          ID of the item being modified.\n@param        PropertyName            The dynamic property being added or updated.\n@param        bValue                          The string value being set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventSetPropertyBool_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1389306764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventSetPropertyBool_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2669364223
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventSetPropertyBool_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((SteamProInventory_eventSetPropertyBool_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventSetPropertyBool_Parms), &Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventSetPropertyBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventSetPropertyBool_Parms), &Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::NewProp_bValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "SetPropertyBool", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::SteamProInventory_eventSetPropertyBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::SteamProInventory_eventSetPropertyBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_SetPropertyBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_SetPropertyBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execSetPropertyBool)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_UBOOL(Z_Param_bValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::SetPropertyBool(Z_Param_Handle,Z_Param_ItemID,Z_Param_PropertyName,Z_Param_bValue);
	P_NATIVE_END;
}
// End Class USteamProInventory Function SetPropertyBool

// Begin Class USteamProInventory Function SetPropertyFloat
struct Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics
{
	struct SteamProInventory_eventSetPropertyFloat_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FSteamItemInstanceID ItemID;
		FString PropertyName;
		float Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09* @param\x09ItemID\x09\x09\x09\x09ID of the item being modified.\n\x09* @param\x09PropertyName\x09\x09The dynamic property being added or updated.\n\x09* @param\x09Value\x09\x09\x09\x09The string value being set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param        Handle                          The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param        ItemID                          ID of the item being modified.\n@param        PropertyName            The dynamic property being added or updated.\n@param        Value                           The string value being set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventSetPropertyFloat_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1389306764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventSetPropertyFloat_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2669364223
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventSetPropertyFloat_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventSetPropertyFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventSetPropertyFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventSetPropertyFloat_Parms), &Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "SetPropertyFloat", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::SteamProInventory_eventSetPropertyFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::SteamProInventory_eventSetPropertyFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_SetPropertyFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_SetPropertyFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execSetPropertyFloat)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::SetPropertyFloat(Z_Param_Handle,Z_Param_ItemID,Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USteamProInventory Function SetPropertyFloat

// Begin Class USteamProInventory Function SetPropertyInt
struct Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics
{
	struct SteamProInventory_eventSetPropertyInt_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FSteamItemInstanceID ItemID;
		FString PropertyName;
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09* @param\x09ItemID\x09\x09\x09\x09ID of the item being modified.\n\x09* @param\x09PropertyName\x09\x09The dynamic property being added or updated.\n\x09* @param\x09Value\x09\x09\x09\x09The string value being set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param        Handle                          The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param        ItemID                          ID of the item being modified.\n@param        PropertyName            The dynamic property being added or updated.\n@param        Value                           The string value being set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventSetPropertyInt_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1389306764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventSetPropertyInt_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2669364223
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventSetPropertyInt_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventSetPropertyInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventSetPropertyInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventSetPropertyInt_Parms), &Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "SetPropertyInt", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::SteamProInventory_eventSetPropertyInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::SteamProInventory_eventSetPropertyInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_SetPropertyInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_SetPropertyInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execSetPropertyInt)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::SetPropertyInt(Z_Param_Handle,Z_Param_ItemID,Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USteamProInventory Function SetPropertyInt

// Begin Class USteamProInventory Function SetPropertyString
struct Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics
{
	struct SteamProInventory_eventSetPropertyString_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FSteamItemInstanceID ItemID;
		FString PropertyName;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09* @param\x09ItemID\x09\x09\x09\x09ID of the item being modified.\n\x09* @param\x09PropertyName\x09\x09The dynamic property being added or updated.\n\x09* @param\x09Value\x09\x09\x09\x09The string value being set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param        Handle                          The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param        ItemID                          ID of the item being modified.\n@param        PropertyName            The dynamic property being added or updated.\n@param        Value                           The string value being set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventSetPropertyString_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1389306764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventSetPropertyString_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2669364223
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventSetPropertyString_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventSetPropertyString_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventSetPropertyString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventSetPropertyString_Parms), &Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "SetPropertyString", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::SteamProInventory_eventSetPropertyString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::SteamProInventory_eventSetPropertyString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_SetPropertyString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_SetPropertyString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execSetPropertyString)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::SetPropertyString(Z_Param_Handle,Z_Param_ItemID,Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USteamProInventory Function SetPropertyString

// Begin Class USteamProInventory Function StartPurchase
struct Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics
{
	struct SteamProInventory_eventStartPurchase_Parms
	{
		FScriptDelegate Callback;
		TArray<FSteamItemDef> ItemDefs;
		TArray<int32> Quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Starts the purchase process for the user, given a \"shopping cart\" of item definitions that the user would like to buy. \n\x09*\n\x09* The user will be prompted in the Steam Overlay to complete the purchase in their local currency, funding their Steam Wallet if necessary, etc.\n\x09* If the purchase process was started successfully, then m_ulOrderID and m_ulTransID will be valid in the SteamInventoryStartPurchaseResult_t call result.\n\x09* If the user authorizes the transaction and completes the purchase, then the callback SteamInventoryResultReady_t will be triggered and you can then retrieve what new items the user has acquired. \n\x09* NOTE: You must call DestroyResult on the inventory result for when you are done with it.\n\x09*\n\x09* @param\x09ItemDefs\x09\x09The array of item definition ids that the user wants to purchase.\n\x09* @param\x09Quantity\x09\x09The array of quantities of each item definition that the user wants to purchase.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Starts the purchase process for the user, given a \"shopping cart\" of item definitions that the user would like to buy.\n\nThe user will be prompted in the Steam Overlay to complete the purchase in their local currency, funding their Steam Wallet if necessary, etc.\nIf the purchase process was started successfully, then m_ulOrderID and m_ulTransID will be valid in the SteamInventoryStartPurchaseResult_t call result.\nIf the user authorizes the transaction and completes the purchase, then the callback SteamInventoryResultReady_t will be triggered and you can then retrieve what new items the user has acquired.\nNOTE: You must call DestroyResult on the inventory result for when you are done with it.\n\n@param        ItemDefs                The array of item definition ids that the user wants to purchase.\n@param        Quantity                The array of quantities of each item definition that the user wants to purchase." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventStartPurchase_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 540706287
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 342357027
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventStartPurchase_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefs_MetaData), NewProp_ItemDefs_MetaData) }; // 342357027
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::NewProp_Quantity_Inner = { "Quantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventStartPurchase_Parms, Quantity), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::NewProp_Quantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "StartPurchase", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::SteamProInventory_eventStartPurchase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::SteamProInventory_eventStartPurchase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_StartPurchase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_StartPurchase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execStartPurchase)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_TARRAY(FSteamItemDef,Z_Param_ItemDefs);
	P_GET_TARRAY(int32,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartPurchase(FOnSteamInventoryStartPurchaseResult(Z_Param_Out_Callback),Z_Param_ItemDefs,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class USteamProInventory Function StartPurchase

// Begin Class USteamProInventory Function StartUpdateProperties
struct Z_Construct_UFunction_USteamProInventory_StartUpdateProperties_Statics
{
	struct SteamProInventory_eventStartUpdateProperties_Parms
	{
		FSteamInventoryUpdateHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Starts a transaction request to update dynamic properties on items for the current user. \n\x09*\n\x09* This call is rate-limited by user, so property modifications should be batched as much as possible (e.g. at the end of a map or game session).\n\x09* After calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers. \n\x09* A SteamInventoryResultReady_t callback will be fired with the results of the operation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Starts a transaction request to update dynamic properties on items for the current user.\n\nThis call is rate-limited by user, so property modifications should be batched as much as possible (e.g. at the end of a map or game session).\nAfter calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers.\nA SteamInventoryResultReady_t callback will be fired with the results of the operation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_StartUpdateProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventStartUpdateProperties_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1389306764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_StartUpdateProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_StartUpdateProperties_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_StartUpdateProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_StartUpdateProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "StartUpdateProperties", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_StartUpdateProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_StartUpdateProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_StartUpdateProperties_Statics::SteamProInventory_eventStartUpdateProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_StartUpdateProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_StartUpdateProperties_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_StartUpdateProperties_Statics::SteamProInventory_eventStartUpdateProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_StartUpdateProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_StartUpdateProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execStartUpdateProperties)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamInventoryUpdateHandle*)Z_Param__Result=USteamProInventory::StartUpdateProperties();
	P_NATIVE_END;
}
// End Class USteamProInventory Function StartUpdateProperties

// Begin Class USteamProInventory Function SubmitUpdateProperties
struct Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties_Statics
{
	struct SteamProInventory_eventSubmitUpdateProperties_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FSteamInventoryResult ResultHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Starts a transaction request to update dynamic properties on items for the current user.\n\x09*\n\x09* This call is rate-limited by user, so property modifications should be batched as much as possible (e.g. at the end of a map or game session).\n\x09* After calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers.\n\x09* A SteamInventoryResultReady_t callback will be fired with the results of the operation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Starts a transaction request to update dynamic properties on items for the current user.\n\nThis call is rate-limited by user, so property modifications should be batched as much as possible (e.g. at the end of a map or game session).\nAfter calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers.\nA SteamInventoryResultReady_t callback will be fired with the results of the operation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventSubmitUpdateProperties_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1389306764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventSubmitUpdateProperties_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 277898169
void Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventSubmitUpdateProperties_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventSubmitUpdateProperties_Parms), &Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties_Statics::NewProp_ResultHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "SubmitUpdateProperties", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties_Statics::SteamProInventory_eventSubmitUpdateProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties_Statics::SteamProInventory_eventSubmitUpdateProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execSubmitUpdateProperties)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::SubmitUpdateProperties(Z_Param_Handle,Z_Param_Out_ResultHandle);
	P_NATIVE_END;
}
// End Class USteamProInventory Function SubmitUpdateProperties

// Begin Class USteamProInventory Function TransferItemQuantity
struct Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics
{
	struct SteamProInventory_eventTransferItemQuantity_Parms
	{
		FSteamInventoryResult Result;
		FSteamItemInstanceID ItemIDSource;
		int32 Quantity;
		FSteamItemInstanceID ItemIDDest;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Transfer items between stacks within a user's inventory.\n\x09*\n\x09* This can be used to stack, split, and moving items. The source and destination items must have the same itemdef id. \n\x09* To move items onto a destination stack specify the source, the quantity to move, and the destination item id. To split an existing stack, pass k_SteamItemInstanceIDInvalid into itemIdDest. A new item stack will be generated with the requested quantity.\n\x09*\n\x09* @param\x09ItemIDSource\x09\x09The source item to transfer.\n\x09* @param\x09Quantity\x09\x09\x09The quantity of the item that will be transfered from itemIdSource to itemIdDest.\n\x09* @param\x09ItemIDDest\x09\x09\x09The destination item. You can pass k_SteamItemInstanceIDInvalid to split the source stack into a new item stack with the requested quantity.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Transfer items between stacks within a user's inventory.\n\nThis can be used to stack, split, and moving items. The source and destination items must have the same itemdef id.\nTo move items onto a destination stack specify the source, the quantity to move, and the destination item id. To split an existing stack, pass k_SteamItemInstanceIDInvalid into itemIdDest. A new item stack will be generated with the requested quantity.\n\n@param        ItemIDSource            The source item to transfer.\n@param        Quantity                        The quantity of the item that will be transfered from itemIdSource to itemIdDest.\n@param        ItemIDDest                      The destination item. You can pass k_SteamItemInstanceIDInvalid to split the source stack into a new item stack with the requested quantity." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemIDSource;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemIDDest;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventTransferItemQuantity_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 277898169
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::NewProp_ItemIDSource = { "ItemIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventTransferItemQuantity_Parms, ItemIDSource), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2669364223
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventTransferItemQuantity_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::NewProp_ItemIDDest = { "ItemIDDest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventTransferItemQuantity_Parms, ItemIDDest), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2669364223
void Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventTransferItemQuantity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventTransferItemQuantity_Parms), &Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::NewProp_ItemIDSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::NewProp_ItemIDDest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "TransferItemQuantity", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::SteamProInventory_eventTransferItemQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::SteamProInventory_eventTransferItemQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_TransferItemQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_TransferItemQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execTransferItemQuantity)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemIDSource);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemIDDest);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::TransferItemQuantity(Z_Param_Out_Result,Z_Param_ItemIDSource,Z_Param_Quantity,Z_Param_ItemIDDest);
	P_NATIVE_END;
}
// End Class USteamProInventory Function TransferItemQuantity

// Begin Class USteamProInventory Function TriggerItemDrop
struct Z_Construct_UFunction_USteamProInventory_TriggerItemDrop_Statics
{
	struct SteamProInventory_eventTriggerItemDrop_Parms
	{
		FSteamInventoryResult Result;
		FSteamItemDef ListDefinition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Trigger an item drop if the user has played a long enough period of time.\n\x09*\n\x09* This period can be customized in two places:\n\x09* At the application level within Inventory Service: Playtime Item Grants. This will automatically apply to all \"playtimegenerator\" items that do not specify any overrides.\n\x09* In an individual \"playtimegenerator\" item definition. The settings would take precedence over any application-level settings.\n\x09* Only item definitions which are marked as \"playtime item generators\" can be spawned.\n\x09* Typically this function should be called at the end of a game or level or match or any point of significance in the game in which an item drop could occur. \n\x09* The granularity of the playtime generator settings is in minutes, so calling it more frequently than minutes is not useful and will be rate limited in the Steam client. \n\x09* The Steam servers will perform playtime accounting to prevent too-frequent drops. The servers will also manage adding the item to the players inventory.\n\x09*\n\x09* @param\x09ListDefinition\x09\x09This must refer to an itemdefid of the type \"playtimegenerator\". See the inventory schema for more details.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
		{ "ToolTip", "Trigger an item drop if the user has played a long enough period of time.\n\nThis period can be customized in two places:\nAt the application level within Inventory Service: Playtime Item Grants. This will automatically apply to all \"playtimegenerator\" items that do not specify any overrides.\nIn an individual \"playtimegenerator\" item definition. The settings would take precedence over any application-level settings.\nOnly item definitions which are marked as \"playtime item generators\" can be spawned.\nTypically this function should be called at the end of a game or level or match or any point of significance in the game in which an item drop could occur.\nThe granularity of the playtime generator settings is in minutes, so calling it more frequently than minutes is not useful and will be rate limited in the Steam client.\nThe Steam servers will perform playtime accounting to prevent too-frequent drops. The servers will also manage adding the item to the players inventory.\n\n@param        ListDefinition          This must refer to an itemdefid of the type \"playtimegenerator\". See the inventory schema for more details." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ListDefinition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_TriggerItemDrop_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventTriggerItemDrop_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(0, nullptr) }; // 277898169
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInventory_TriggerItemDrop_Statics::NewProp_ListDefinition = { "ListDefinition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInventory_eventTriggerItemDrop_Parms, ListDefinition), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 342357027
void Z_Construct_UFunction_USteamProInventory_TriggerItemDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInventory_eventTriggerItemDrop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInventory_TriggerItemDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInventory_eventTriggerItemDrop_Parms), &Z_Construct_UFunction_USteamProInventory_TriggerItemDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInventory_TriggerItemDrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_TriggerItemDrop_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_TriggerItemDrop_Statics::NewProp_ListDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInventory_TriggerItemDrop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_TriggerItemDrop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInventory_TriggerItemDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInventory, nullptr, "TriggerItemDrop", nullptr, nullptr, Z_Construct_UFunction_USteamProInventory_TriggerItemDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_TriggerItemDrop_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInventory_TriggerItemDrop_Statics::SteamProInventory_eventTriggerItemDrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInventory_TriggerItemDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInventory_TriggerItemDrop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInventory_TriggerItemDrop_Statics::SteamProInventory_eventTriggerItemDrop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInventory_TriggerItemDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInventory_TriggerItemDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInventory::execTriggerItemDrop)
{
	P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
	P_GET_STRUCT(FSteamItemDef,Z_Param_ListDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInventory::TriggerItemDrop(Z_Param_Out_Result,Z_Param_ListDefinition);
	P_NATIVE_END;
}
// End Class USteamProInventory Function TriggerItemDrop

// Begin Class USteamProInventory
void USteamProInventory::StaticRegisterNativesUSteamProInventory()
{
	UClass* Class = USteamProInventory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPromoItem", &USteamProInventory::execAddPromoItem },
		{ "AddPromoItems", &USteamProInventory::execAddPromoItems },
		{ "CheckResultSteamID", &USteamProInventory::execCheckResultSteamID },
		{ "ConsumeItem", &USteamProInventory::execConsumeItem },
		{ "DeserializeResult", &USteamProInventory::execDeserializeResult },
		{ "DestroyResult", &USteamProInventory::execDestroyResult },
		{ "ExchangeItems", &USteamProInventory::execExchangeItems },
		{ "GenerateItems", &USteamProInventory::execGenerateItems },
		{ "GetAllItems", &USteamProInventory::execGetAllItems },
		{ "GetEligiblePromoItemDefinitionIDs", &USteamProInventory::execGetEligiblePromoItemDefinitionIDs },
		{ "GetItemDefinitionIDs", &USteamProInventory::execGetItemDefinitionIDs },
		{ "GetItemDefinitionProperty", &USteamProInventory::execGetItemDefinitionProperty },
		{ "GetItemPrice", &USteamProInventory::execGetItemPrice },
		{ "GetItemsByID", &USteamProInventory::execGetItemsByID },
		{ "GetItemsWithPrices", &USteamProInventory::execGetItemsWithPrices },
		{ "GetNumItemsWithPrices", &USteamProInventory::execGetNumItemsWithPrices },
		{ "GetResultItemProperty", &USteamProInventory::execGetResultItemProperty },
		{ "GetResultItems", &USteamProInventory::execGetResultItems },
		{ "GetResultStatus", &USteamProInventory::execGetResultStatus },
		{ "GetResultTimestamp", &USteamProInventory::execGetResultTimestamp },
		{ "GetSteamInventory", &USteamProInventory::execGetSteamInventory },
		{ "GrantPromoItems", &USteamProInventory::execGrantPromoItems },
		{ "LoadItemDefinitions", &USteamProInventory::execLoadItemDefinitions },
		{ "RemoveProperty", &USteamProInventory::execRemoveProperty },
		{ "RequestEligiblePromoItemDefinitionsIDs", &USteamProInventory::execRequestEligiblePromoItemDefinitionsIDs },
		{ "RequestPrices", &USteamProInventory::execRequestPrices },
		{ "SerializeResult", &USteamProInventory::execSerializeResult },
		{ "SetPropertyBool", &USteamProInventory::execSetPropertyBool },
		{ "SetPropertyFloat", &USteamProInventory::execSetPropertyFloat },
		{ "SetPropertyInt", &USteamProInventory::execSetPropertyInt },
		{ "SetPropertyString", &USteamProInventory::execSetPropertyString },
		{ "StartPurchase", &USteamProInventory::execStartPurchase },
		{ "StartUpdateProperties", &USteamProInventory::execStartUpdateProperties },
		{ "SubmitUpdateProperties", &USteamProInventory::execSubmitUpdateProperties },
		{ "TransferItemQuantity", &USteamProInventory::execTransferItemQuantity },
		{ "TriggerItemDrop", &USteamProInventory::execTriggerItemDrop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProInventory);
UClass* Z_Construct_UClass_USteamProInventory_NoRegister()
{
	return USteamProInventory::StaticClass();
}
struct Z_Construct_UClass_USteamProInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamInventory/SteamInventory.h" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryResultReady_MetaData[] = {
		{ "Category", "SteamCore|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryDefinitionUpdate_MetaData[] = {
		{ "Category", "SteamCore|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryFullUpdate_MetaData[] = {
		{ "Category", "SteamCore|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryStartPurchaseResult_MetaData[] = {
		{ "Category", "SteamCore|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryRequestPricesResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryEligiblePromoItemDefIDs_MetaData[] = {
		{ "Category", "SteamCore|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryResultReady;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryDefinitionUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryFullUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryStartPurchaseResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryRequestPricesResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryEligiblePromoItemDefIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProInventory_AddPromoItem, "AddPromoItem" }, // 645327545
		{ &Z_Construct_UFunction_USteamProInventory_AddPromoItems, "AddPromoItems" }, // 1132076372
		{ &Z_Construct_UFunction_USteamProInventory_CheckResultSteamID, "CheckResultSteamID" }, // 1187847355
		{ &Z_Construct_UFunction_USteamProInventory_ConsumeItem, "ConsumeItem" }, // 3637393658
		{ &Z_Construct_UFunction_USteamProInventory_DeserializeResult, "DeserializeResult" }, // 2844788413
		{ &Z_Construct_UFunction_USteamProInventory_DestroyResult, "DestroyResult" }, // 565008463
		{ &Z_Construct_UFunction_USteamProInventory_ExchangeItems, "ExchangeItems" }, // 2307073704
		{ &Z_Construct_UFunction_USteamProInventory_GenerateItems, "GenerateItems" }, // 474193419
		{ &Z_Construct_UFunction_USteamProInventory_GetAllItems, "GetAllItems" }, // 2478253628
		{ &Z_Construct_UFunction_USteamProInventory_GetEligiblePromoItemDefinitionIDs, "GetEligiblePromoItemDefinitionIDs" }, // 3712874259
		{ &Z_Construct_UFunction_USteamProInventory_GetItemDefinitionIDs, "GetItemDefinitionIDs" }, // 2186533130
		{ &Z_Construct_UFunction_USteamProInventory_GetItemDefinitionProperty, "GetItemDefinitionProperty" }, // 1299671195
		{ &Z_Construct_UFunction_USteamProInventory_GetItemPrice, "GetItemPrice" }, // 1539307851
		{ &Z_Construct_UFunction_USteamProInventory_GetItemsByID, "GetItemsByID" }, // 29216095
		{ &Z_Construct_UFunction_USteamProInventory_GetItemsWithPrices, "GetItemsWithPrices" }, // 2273774135
		{ &Z_Construct_UFunction_USteamProInventory_GetNumItemsWithPrices, "GetNumItemsWithPrices" }, // 3971605648
		{ &Z_Construct_UFunction_USteamProInventory_GetResultItemProperty, "GetResultItemProperty" }, // 356214184
		{ &Z_Construct_UFunction_USteamProInventory_GetResultItems, "GetResultItems" }, // 1278004987
		{ &Z_Construct_UFunction_USteamProInventory_GetResultStatus, "GetResultStatus" }, // 3956256563
		{ &Z_Construct_UFunction_USteamProInventory_GetResultTimestamp, "GetResultTimestamp" }, // 3719543735
		{ &Z_Construct_UFunction_USteamProInventory_GetSteamInventory, "GetSteamInventory" }, // 1140899582
		{ &Z_Construct_UFunction_USteamProInventory_GrantPromoItems, "GrantPromoItems" }, // 2262588158
		{ &Z_Construct_UFunction_USteamProInventory_LoadItemDefinitions, "LoadItemDefinitions" }, // 3685803836
		{ &Z_Construct_UFunction_USteamProInventory_RemoveProperty, "RemoveProperty" }, // 2669424215
		{ &Z_Construct_UFunction_USteamProInventory_RequestEligiblePromoItemDefinitionsIDs, "RequestEligiblePromoItemDefinitionsIDs" }, // 672952710
		{ &Z_Construct_UFunction_USteamProInventory_RequestPrices, "RequestPrices" }, // 2903861459
		{ &Z_Construct_UFunction_USteamProInventory_SerializeResult, "SerializeResult" }, // 2803820984
		{ &Z_Construct_UFunction_USteamProInventory_SetPropertyBool, "SetPropertyBool" }, // 1525016697
		{ &Z_Construct_UFunction_USteamProInventory_SetPropertyFloat, "SetPropertyFloat" }, // 2405202653
		{ &Z_Construct_UFunction_USteamProInventory_SetPropertyInt, "SetPropertyInt" }, // 716059090
		{ &Z_Construct_UFunction_USteamProInventory_SetPropertyString, "SetPropertyString" }, // 3222021962
		{ &Z_Construct_UFunction_USteamProInventory_StartPurchase, "StartPurchase" }, // 4203741941
		{ &Z_Construct_UFunction_USteamProInventory_StartUpdateProperties, "StartUpdateProperties" }, // 3547961614
		{ &Z_Construct_UFunction_USteamProInventory_SubmitUpdateProperties, "SubmitUpdateProperties" }, // 2672104398
		{ &Z_Construct_UFunction_USteamProInventory_TransferItemQuantity, "TransferItemQuantity" }, // 2112137511
		{ &Z_Construct_UFunction_USteamProInventory_TriggerItemDrop, "TriggerItemDrop" }, // 2226242822
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProInventory_Statics::NewProp_SteamInventoryResultReady = { "SteamInventoryResultReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProInventory, SteamInventoryResultReady), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryResultReady__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryResultReady_MetaData), NewProp_SteamInventoryResultReady_MetaData) }; // 1119146492
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProInventory_Statics::NewProp_SteamInventoryDefinitionUpdate = { "SteamInventoryDefinitionUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProInventory, SteamInventoryDefinitionUpdate), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryDefinitionUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryDefinitionUpdate_MetaData), NewProp_SteamInventoryDefinitionUpdate_MetaData) }; // 3308807781
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProInventory_Statics::NewProp_SteamInventoryFullUpdate = { "SteamInventoryFullUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProInventory, SteamInventoryFullUpdate), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryFullUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryFullUpdate_MetaData), NewProp_SteamInventoryFullUpdate_MetaData) }; // 3780418603
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProInventory_Statics::NewProp_SteamInventoryStartPurchaseResult = { "SteamInventoryStartPurchaseResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProInventory, SteamInventoryStartPurchaseResult), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryStartPurchaseResult_MetaData), NewProp_SteamInventoryStartPurchaseResult_MetaData) }; // 2743797218
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProInventory_Statics::NewProp_SteamInventoryRequestPricesResultDelegate = { "SteamInventoryRequestPricesResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProInventory, SteamInventoryRequestPricesResultDelegate), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryRequestPricesResultDelegate_MetaData), NewProp_SteamInventoryRequestPricesResultDelegate_MetaData) }; // 3221538683
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProInventory_Statics::NewProp_SteamInventoryEligiblePromoItemDefIDs = { "SteamInventoryEligiblePromoItemDefIDs", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProInventory, SteamInventoryEligiblePromoItemDefIDs), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamInventoryEligiblePromoItemDefIDs_MetaData), NewProp_SteamInventoryEligiblePromoItemDefIDs_MetaData) }; // 3228218692
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamProInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProInventory_Statics::NewProp_SteamInventoryResultReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProInventory_Statics::NewProp_SteamInventoryDefinitionUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProInventory_Statics::NewProp_SteamInventoryFullUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProInventory_Statics::NewProp_SteamInventoryStartPurchaseResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProInventory_Statics::NewProp_SteamInventoryRequestPricesResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProInventory_Statics::NewProp_SteamInventoryEligiblePromoItemDefIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProInventory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamProInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProInventory_Statics::ClassParams = {
	&USteamProInventory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamProInventory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamProInventory_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProInventory()
{
	if (!Z_Registration_Info_UClass_USteamProInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProInventory.OuterSingleton, Z_Construct_UClass_USteamProInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProInventory.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProInventory>()
{
	return USteamProInventory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProInventory);
// End Class USteamProInventory

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProInventory, USteamProInventory::StaticClass, TEXT("USteamProInventory"), &Z_Registration_Info_UClass_USteamProInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProInventory), 2274402610U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventory_h_3907670089(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
