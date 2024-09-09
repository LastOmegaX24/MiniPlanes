// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamInventory/SteamInventoryAsyncActions.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
#include "SteamCorePro/Public/SteamInventory/SteamInventoryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamInventoryAsyncActions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProAsyncAction();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult_NoRegister();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDef();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Delegate FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms
	{
		FSteamInventoryEligiblePromoItemDefIDs Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 488628953
void Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate, FSteamInventoryEligiblePromoItemDefIDs const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms
	{
		FSteamInventoryEligiblePromoItemDefIDs Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate

// Begin Delegate FOnSteamInventoryRequestPricesResultAsyncDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms
	{
		FSteamInventoryRequestPricesResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2729181900
void Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryRequestPricesResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryRequestPricesResultAsyncDelegate, FSteamInventoryRequestPricesResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms
	{
		FSteamInventoryRequestPricesResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnSteamInventoryRequestPricesResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSteamInventoryRequestPricesResultAsyncDelegate

// Begin Delegate FOnSteamInventoryStartPurchaseResultAsyncDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms
	{
		FSteamInventoryStartPurchaseResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 65692934
void Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryStartPurchaseResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryStartPurchaseResultAsyncDelegate, FSteamInventoryStartPurchaseResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms
	{
		FSteamInventoryStartPurchaseResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnSteamInventoryStartPurchaseResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSteamInventoryStartPurchaseResultAsyncDelegate

// Begin Class USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics
{
	struct SteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventHandleCallback_Parms
	{
		FSteamInventoryEligiblePromoItemDefIDs Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 488628953
void Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::SteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::SteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::execHandleCallback)
{
	P_GET_STRUCT_REF(FSteamInventoryEligiblePromoItemDefIDs,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs Function HandleCallback

// Begin Class USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs Function RequestEligiblePromoItemDefinitionsIDsAsync
struct Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics
{
	struct SteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamID;
		float Timeout;
		USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Inventory|Async" },
		{ "Comment", "/**\n\x09* Request the list of \"eligible\" promo items that can be manually granted to the given user.\n\x09* These are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week.\n\x09* After calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids.\n\x09*\n\x09* @param\x09SteamID\x09\x09The Steam ID of the user to request the eligible promo items for.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Eligible Promo Item Definitions IDs" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "Request the list of \"eligible\" promo items that can be manually granted to the given user.\nThese are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week.\nAfter calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids.\n\n@param        SteamID         The Steam ID of the user to request the eligible promo items for.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, nullptr, "RequestEligiblePromoItemDefinitionsIDsAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::SteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::SteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_eventRequestEligiblePromoItemDefinitionsIDsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::execRequestEligiblePromoItemDefinitionsIDsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs**)Z_Param__Result=USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::RequestEligiblePromoItemDefinitionsIDsAsync(Z_Param_WorldContextObject,Z_Param_SteamID,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs Function RequestEligiblePromoItemDefinitionsIDsAsync

// Begin Class USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs
void USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::StaticRegisterNativesUSteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs()
{
	UClass* Class = USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::execHandleCallback },
		{ "RequestEligiblePromoItemDefinitionsIDsAsync", &USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::execRequestEligiblePromoItemDefinitionsIDsAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs);
UClass* Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_NoRegister()
{
	return USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback, "HandleCallback" }, // 1506670249
		{ &Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync, "RequestEligiblePromoItemDefinitionsIDsAsync" }, // 3581230754
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1575212664
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::ClassParams = {
	&USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs()
{
	if (!Z_Registration_Info_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.OuterSingleton, Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs>()
{
	return USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::StaticClass();
}
USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs);
USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::~USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs() {}
// End Class USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs

// Begin Class USteamCoreProInventoryAsyncActionRequestPricesResult Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_HandleCallback_Statics
{
	struct SteamCoreProInventoryAsyncActionRequestPricesResult_eventHandleCallback_Parms
	{
		FSteamInventoryRequestPricesResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProInventoryAsyncActionRequestPricesResult_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2729181900
void Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProInventoryAsyncActionRequestPricesResult_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProInventoryAsyncActionRequestPricesResult_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::SteamCoreProInventoryAsyncActionRequestPricesResult_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::SteamCoreProInventoryAsyncActionRequestPricesResult_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProInventoryAsyncActionRequestPricesResult::execHandleCallback)
{
	P_GET_STRUCT_REF(FSteamInventoryRequestPricesResult,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProInventoryAsyncActionRequestPricesResult Function HandleCallback

// Begin Class USteamCoreProInventoryAsyncActionRequestPricesResult Function RequestPricesAsync
struct Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics
{
	struct SteamCoreProInventoryAsyncActionRequestPricesResult_eventRequestPricesAsync_Parms
	{
		UObject* WorldContextObject;
		float Timeout;
		USteamCoreProInventoryAsyncActionRequestPricesResult* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Inventory|Async" },
		{ "Comment", "/**\n\x09* Request prices for all item definitions that can be purchased in the user's local currency.\n\x09* A SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code.\n\x09* After that, you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition.\n\x09*\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Prices" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "Request prices for all item definitions that can be purchased in the user's local currency.\nA SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code.\nAfter that, you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition.\n\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProInventoryAsyncActionRequestPricesResult_eventRequestPricesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProInventoryAsyncActionRequestPricesResult_eventRequestPricesAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProInventoryAsyncActionRequestPricesResult_eventRequestPricesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult, nullptr, "RequestPricesAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::SteamCoreProInventoryAsyncActionRequestPricesResult_eventRequestPricesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::SteamCoreProInventoryAsyncActionRequestPricesResult_eventRequestPricesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_RequestPricesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProInventoryAsyncActionRequestPricesResult::execRequestPricesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProInventoryAsyncActionRequestPricesResult**)Z_Param__Result=USteamCoreProInventoryAsyncActionRequestPricesResult::RequestPricesAsync(Z_Param_WorldContextObject,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProInventoryAsyncActionRequestPricesResult Function RequestPricesAsync

// Begin Class USteamCoreProInventoryAsyncActionRequestPricesResult
void USteamCoreProInventoryAsyncActionRequestPricesResult::StaticRegisterNativesUSteamCoreProInventoryAsyncActionRequestPricesResult()
{
	UClass* Class = USteamCoreProInventoryAsyncActionRequestPricesResult::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &USteamCoreProInventoryAsyncActionRequestPricesResult::execHandleCallback },
		{ "RequestPricesAsync", &USteamCoreProInventoryAsyncActionRequestPricesResult::execRequestPricesAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProInventoryAsyncActionRequestPricesResult);
UClass* Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult_NoRegister()
{
	return USteamCoreProInventoryAsyncActionRequestPricesResult::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProInventoryAsyncActionRequestPricesResult\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProInventoryAsyncActionRequestPricesResult\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_HandleCallback, "HandleCallback" }, // 814677770
		{ &Z_Construct_UFunction_USteamCoreProInventoryAsyncActionRequestPricesResult_RequestPricesAsync, "RequestPricesAsync" }, // 2394639049
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProInventoryAsyncActionRequestPricesResult>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProInventoryAsyncActionRequestPricesResult, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1516622657
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult_Statics::ClassParams = {
	&USteamCoreProInventoryAsyncActionRequestPricesResult::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult()
{
	if (!Z_Registration_Info_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult.OuterSingleton, Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProInventoryAsyncActionRequestPricesResult>()
{
	return USteamCoreProInventoryAsyncActionRequestPricesResult::StaticClass();
}
USteamCoreProInventoryAsyncActionRequestPricesResult::USteamCoreProInventoryAsyncActionRequestPricesResult(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProInventoryAsyncActionRequestPricesResult);
USteamCoreProInventoryAsyncActionRequestPricesResult::~USteamCoreProInventoryAsyncActionRequestPricesResult() {}
// End Class USteamCoreProInventoryAsyncActionRequestPricesResult

// Begin Class USteamCoreProInventoryAsyncActionStartPurchaseResult Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics
{
	struct SteamCoreProInventoryAsyncActionStartPurchaseResult_eventHandleCallback_Parms
	{
		FSteamInventoryStartPurchaseResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProInventoryAsyncActionStartPurchaseResult_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 65692934
void Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProInventoryAsyncActionStartPurchaseResult_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProInventoryAsyncActionStartPurchaseResult_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::SteamCoreProInventoryAsyncActionStartPurchaseResult_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::SteamCoreProInventoryAsyncActionStartPurchaseResult_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProInventoryAsyncActionStartPurchaseResult::execHandleCallback)
{
	P_GET_STRUCT_REF(FSteamInventoryStartPurchaseResult,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProInventoryAsyncActionStartPurchaseResult Function HandleCallback

// Begin Class USteamCoreProInventoryAsyncActionStartPurchaseResult Function StartPurchaseAsync
struct Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics
{
	struct SteamCoreProInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms
	{
		UObject* WorldContextObject;
		TArray<FSteamItemDef> ItemDefs;
		TArray<int32> Quantity;
		float Timeout;
		USteamCoreProInventoryAsyncActionStartPurchaseResult* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Inventory|Async" },
		{ "Comment", "/**\n\x09* Starts the purchase process for the user, given a \"shopping cart\" of item definitions that the user would like to buy.\n\x09*\n\x09* The user will be prompted in the Steam Overlay to complete the purchase in their local currency, funding their Steam Wallet if necessary, etc.\n\x09* If the purchase process was started successfully, then m_ulOrderID and m_ulTransID will be valid in the SteamInventoryStartPurchaseResult_t call result.\n\x09* If the user authorizes the transaction and completes the purchase, then the callback SteamInventoryResultReady_t will be triggered and you can then retrieve what new items the user has acquired.\n\x09* NOTE: You must call DestroyResult on the inventory result for when you are done with it.\n\x09*\n\x09* @param\x09ItemDefs\x09\x09The array of item definition ids that the user wants to purchase.\n\x09* @param\x09Quantity\x09\x09The array of quantities of each item definition that the user wants to purchase.\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Start Purchase" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "Starts the purchase process for the user, given a \"shopping cart\" of item definitions that the user would like to buy.\n\nThe user will be prompted in the Steam Overlay to complete the purchase in their local currency, funding their Steam Wallet if necessary, etc.\nIf the purchase process was started successfully, then m_ulOrderID and m_ulTransID will be valid in the SteamInventoryStartPurchaseResult_t call result.\nIf the user authorizes the transaction and completes the purchase, then the callback SteamInventoryResultReady_t will be triggered and you can then retrieve what new items the user has acquired.\nNOTE: You must call DestroyResult on the inventory result for when you are done with it.\n\n@param        ItemDefs                The array of item definition ids that the user wants to purchase.\n@param        Quantity                The array of quantities of each item definition that the user wants to purchase.\n@param        Timeout                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(0, nullptr) }; // 342357027
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefs_MetaData), NewProp_ItemDefs_MetaData) }; // 342357027
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Quantity_Inner = { "Quantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms, Quantity), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ItemDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Quantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult, nullptr, "StartPurchaseAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::SteamCoreProInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::SteamCoreProInventoryAsyncActionStartPurchaseResult_eventStartPurchaseAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProInventoryAsyncActionStartPurchaseResult::execStartPurchaseAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY(FSteamItemDef,Z_Param_ItemDefs);
	P_GET_TARRAY(int32,Z_Param_Quantity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProInventoryAsyncActionStartPurchaseResult**)Z_Param__Result=USteamCoreProInventoryAsyncActionStartPurchaseResult::StartPurchaseAsync(Z_Param_WorldContextObject,Z_Param_ItemDefs,Z_Param_Quantity,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProInventoryAsyncActionStartPurchaseResult Function StartPurchaseAsync

// Begin Class USteamCoreProInventoryAsyncActionStartPurchaseResult
void USteamCoreProInventoryAsyncActionStartPurchaseResult::StaticRegisterNativesUSteamCoreProInventoryAsyncActionStartPurchaseResult()
{
	UClass* Class = USteamCoreProInventoryAsyncActionStartPurchaseResult::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &USteamCoreProInventoryAsyncActionStartPurchaseResult::execHandleCallback },
		{ "StartPurchaseAsync", &USteamCoreProInventoryAsyncActionStartPurchaseResult::execStartPurchaseAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProInventoryAsyncActionStartPurchaseResult);
UClass* Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult_NoRegister()
{
	return USteamCoreProInventoryAsyncActionStartPurchaseResult::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProInventoryAsyncActionStartPurchaseResult\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProInventoryAsyncActionStartPurchaseResult\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_HandleCallback, "HandleCallback" }, // 1531887544
		{ &Z_Construct_UFunction_USteamCoreProInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync, "StartPurchaseAsync" }, // 1599444774
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProInventoryAsyncActionStartPurchaseResult>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProInventoryAsyncActionStartPurchaseResult, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2929969195
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult_Statics::ClassParams = {
	&USteamCoreProInventoryAsyncActionStartPurchaseResult::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult()
{
	if (!Z_Registration_Info_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult.OuterSingleton, Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProInventoryAsyncActionStartPurchaseResult>()
{
	return USteamCoreProInventoryAsyncActionStartPurchaseResult::StaticClass();
}
USteamCoreProInventoryAsyncActionStartPurchaseResult::USteamCoreProInventoryAsyncActionStartPurchaseResult(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProInventoryAsyncActionStartPurchaseResult);
USteamCoreProInventoryAsyncActionStartPurchaseResult::~USteamCoreProInventoryAsyncActionStartPurchaseResult() {}
// End Class USteamCoreProInventoryAsyncActionStartPurchaseResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventoryAsyncActions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::StaticClass, TEXT("USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs"), &Z_Registration_Info_UClass_USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs), 4167248901U) },
		{ Z_Construct_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult, USteamCoreProInventoryAsyncActionRequestPricesResult::StaticClass, TEXT("USteamCoreProInventoryAsyncActionRequestPricesResult"), &Z_Registration_Info_UClass_USteamCoreProInventoryAsyncActionRequestPricesResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProInventoryAsyncActionRequestPricesResult), 196313718U) },
		{ Z_Construct_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult, USteamCoreProInventoryAsyncActionStartPurchaseResult::StaticClass, TEXT("USteamCoreProInventoryAsyncActionStartPurchaseResult"), &Z_Registration_Info_UClass_USteamCoreProInventoryAsyncActionStartPurchaseResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProInventoryAsyncActionStartPurchaseResult), 382421591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventoryAsyncActions_h_1157476479(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventoryAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventoryAsyncActions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
