// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamParties/SteamPartiesAsyncActions.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
#include "SteamCorePro/Public/SteamParties/SteamPartiesTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamPartiesAsyncActions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProAsyncAction();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty_NoRegister();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FChangeNumOpenSlotsData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FCreateBeaconData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FJoinPartyData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FPartyBeaconID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamPartyBeaconLocation();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Delegate FOnJoinPartyCallback
struct Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnJoinPartyCallback_Parms
	{
		FJoinPartyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnJoinPartyCallback_Parms, Data), Z_Construct_UScriptStruct_FJoinPartyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2028239435
void Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnJoinPartyCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnJoinPartyCallback_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnJoinPartyCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature_Statics::_Script_SteamCorePro_eventOnJoinPartyCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature_Statics::_Script_SteamCorePro_eventOnJoinPartyCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoinPartyCallback_DelegateWrapper(const FMulticastScriptDelegate& OnJoinPartyCallback, FJoinPartyData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnJoinPartyCallback_Parms
	{
		FJoinPartyData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnJoinPartyCallback_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnJoinPartyCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnJoinPartyCallback

// Begin Delegate FOnCreateBeaconCallback
struct Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnCreateBeaconCallback_Parms
	{
		FCreateBeaconData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnCreateBeaconCallback_Parms, Data), Z_Construct_UScriptStruct_FCreateBeaconData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2357902595
void Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnCreateBeaconCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnCreateBeaconCallback_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnCreateBeaconCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature_Statics::_Script_SteamCorePro_eventOnCreateBeaconCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature_Statics::_Script_SteamCorePro_eventOnCreateBeaconCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCreateBeaconCallback_DelegateWrapper(const FMulticastScriptDelegate& OnCreateBeaconCallback, FCreateBeaconData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnCreateBeaconCallback_Parms
	{
		FCreateBeaconData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnCreateBeaconCallback_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnCreateBeaconCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCreateBeaconCallback

// Begin Delegate FOnChangeNumOpenSlotsCallback
struct Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnChangeNumOpenSlotsCallback_Parms
	{
		FChangeNumOpenSlotsData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnChangeNumOpenSlotsCallback_Parms, Data), Z_Construct_UScriptStruct_FChangeNumOpenSlotsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3651233754
void Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnChangeNumOpenSlotsCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnChangeNumOpenSlotsCallback_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnChangeNumOpenSlotsCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::_Script_SteamCorePro_eventOnChangeNumOpenSlotsCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::_Script_SteamCorePro_eventOnChangeNumOpenSlotsCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChangeNumOpenSlotsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnChangeNumOpenSlotsCallback, FChangeNumOpenSlotsData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnChangeNumOpenSlotsCallback_Parms
	{
		FChangeNumOpenSlotsData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnChangeNumOpenSlotsCallback_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnChangeNumOpenSlotsCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnChangeNumOpenSlotsCallback

// Begin Class USteamCoreProSteamPartiesAsyncActionJoinParty Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_HandleCallback_Statics
{
	struct SteamCoreProSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms
	{
		FJoinPartyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FJoinPartyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2028239435
void Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::SteamCoreProSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::SteamCoreProSteamPartiesAsyncActionJoinParty_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProSteamPartiesAsyncActionJoinParty::execHandleCallback)
{
	P_GET_STRUCT_REF(FJoinPartyData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProSteamPartiesAsyncActionJoinParty Function HandleCallback

// Begin Class USteamCoreProSteamPartiesAsyncActionJoinParty Function JoinPartyAsync
struct Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics
{
	struct SteamCoreProSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms
	{
		UObject* WorldContextObject;
		FPartyBeaconID BeaconId;
		float Timeout;
		USteamCoreProSteamPartiesAsyncActionJoinParty* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|SteamParties|Async" },
		{ "Comment", "/**\n\x09* When the user indicates they wish to join the party advertised by a given beacon, call this method.\n\x09* On success, Steam will reserve a slot for this user in the party and return the necessary \"join game\" string to use to complete the connection.\n\x09*\n\x09* @param\x09""BeaconId\x09\x09""Beacon ID for the party you wish to join.\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Join Party" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
		{ "ToolTip", "When the user indicates they wish to join the party advertised by a given beacon, call this method.\nOn success, Steam will reserve a slot for this user in the party and return the necessary \"join game\" string to use to complete the connection.\n\n@param        BeaconId                Beacon ID for the party you wish to join.\n@param        Timeout                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_BeaconId = { "BeaconId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms, BeaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 2716630048
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_BeaconId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty, nullptr, "JoinPartyAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::SteamCoreProSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::SteamCoreProSteamPartiesAsyncActionJoinParty_eventJoinPartyAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProSteamPartiesAsyncActionJoinParty::execJoinPartyAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FPartyBeaconID,Z_Param_BeaconId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProSteamPartiesAsyncActionJoinParty**)Z_Param__Result=USteamCoreProSteamPartiesAsyncActionJoinParty::JoinPartyAsync(Z_Param_WorldContextObject,Z_Param_BeaconId,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProSteamPartiesAsyncActionJoinParty Function JoinPartyAsync

// Begin Class USteamCoreProSteamPartiesAsyncActionJoinParty
void USteamCoreProSteamPartiesAsyncActionJoinParty::StaticRegisterNativesUSteamCoreProSteamPartiesAsyncActionJoinParty()
{
	UClass* Class = USteamCoreProSteamPartiesAsyncActionJoinParty::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &USteamCoreProSteamPartiesAsyncActionJoinParty::execHandleCallback },
		{ "JoinPartyAsync", &USteamCoreProSteamPartiesAsyncActionJoinParty::execJoinPartyAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProSteamPartiesAsyncActionJoinParty);
UClass* Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty_NoRegister()
{
	return USteamCoreProSteamPartiesAsyncActionJoinParty::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProSteamPartiesAsyncActionJoinParty\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamParties/SteamPartiesAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProSteamPartiesAsyncActionJoinParty\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_HandleCallback, "HandleCallback" }, // 730465950
		{ &Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionJoinParty_JoinPartyAsync, "JoinPartyAsync" }, // 1730729450
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProSteamPartiesAsyncActionJoinParty>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProSteamPartiesAsyncActionJoinParty, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 258461692
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty_Statics::ClassParams = {
	&USteamCoreProSteamPartiesAsyncActionJoinParty::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty()
{
	if (!Z_Registration_Info_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty.OuterSingleton, Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProSteamPartiesAsyncActionJoinParty>()
{
	return USteamCoreProSteamPartiesAsyncActionJoinParty::StaticClass();
}
USteamCoreProSteamPartiesAsyncActionJoinParty::USteamCoreProSteamPartiesAsyncActionJoinParty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProSteamPartiesAsyncActionJoinParty);
USteamCoreProSteamPartiesAsyncActionJoinParty::~USteamCoreProSteamPartiesAsyncActionJoinParty() {}
// End Class USteamCoreProSteamPartiesAsyncActionJoinParty

// Begin Class USteamCoreProSteamPartiesAsyncActionCreateBeacon Function CreateBeaconAsync
struct Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics
{
	struct SteamCoreProSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms
	{
		UObject* WorldContextObject;
		int32 OpenSlots;
		FSteamPartyBeaconLocation BeaconLocation;
		FString ConnectString;
		FString Metadata;
		float Timeout;
		USteamCoreProSteamPartiesAsyncActionCreateBeacon* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|SteamParties|Async" },
		{ "Comment", "/**\n\x09* Create a beacon. You can only create one beacon at a time.\n\x09* Steam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\x09*\n\x09* If users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\x09*\n\x09* @param\x09OpenSlots\x09\x09\x09\x09Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n\x09* @param\x09""BeaconLocation\x09\x09\x09Location information for the beacon. Should be one of the locations returned by ISteamParties::GetAvailableBeaconLocations.\n\x09* @param\x09""ConnectString\x09\x09\x09""Connect string that will be given to the game on launch for a user that follows the beacon.\n\x09* @param\x09Metadata\x09\x09\x09\x09""Additional game metadata that can be set on the beacon, and is exposed via ISteamParties::GetBeaconDetails.\n\x09* @param\x09Timeout\x09\x09\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Create Beacon" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
		{ "ToolTip", "Create a beacon. You can only create one beacon at a time.\nSteam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\nIf users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\n@param        OpenSlots                               Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n@param        BeaconLocation                  Location information for the beacon. Should be one of the locations returned by ISteamParties::GetAvailableBeaconLocations.\n@param        ConnectString                   Connect string that will be given to the game on launch for a user that follows the beacon.\n@param        Metadata                                Additional game metadata that can be set on the beacon, and is exposed via ISteamParties::GetBeaconDetails.\n@param        Timeout                                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OpenSlots;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconLocation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_OpenSlots = { "OpenSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, OpenSlots), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_BeaconLocation = { "BeaconLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, BeaconLocation), Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, METADATA_PARAMS(0, nullptr) }; // 3205846201
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, ConnectString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, Metadata), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_OpenSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_BeaconLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ConnectString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_Metadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon, nullptr, "CreateBeaconAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::SteamCoreProSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::SteamCoreProSteamPartiesAsyncActionCreateBeacon_eventCreateBeaconAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProSteamPartiesAsyncActionCreateBeacon::execCreateBeaconAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_OpenSlots);
	P_GET_STRUCT(FSteamPartyBeaconLocation,Z_Param_BeaconLocation);
	P_GET_PROPERTY(FStrProperty,Z_Param_ConnectString);
	P_GET_PROPERTY(FStrProperty,Z_Param_Metadata);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProSteamPartiesAsyncActionCreateBeacon**)Z_Param__Result=USteamCoreProSteamPartiesAsyncActionCreateBeacon::CreateBeaconAsync(Z_Param_WorldContextObject,Z_Param_OpenSlots,Z_Param_BeaconLocation,Z_Param_ConnectString,Z_Param_Metadata,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProSteamPartiesAsyncActionCreateBeacon Function CreateBeaconAsync

// Begin Class USteamCoreProSteamPartiesAsyncActionCreateBeacon Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics
{
	struct SteamCoreProSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms
	{
		FCreateBeaconData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FCreateBeaconData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2357902595
void Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::SteamCoreProSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::SteamCoreProSteamPartiesAsyncActionCreateBeacon_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProSteamPartiesAsyncActionCreateBeacon::execHandleCallback)
{
	P_GET_STRUCT_REF(FCreateBeaconData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProSteamPartiesAsyncActionCreateBeacon Function HandleCallback

// Begin Class USteamCoreProSteamPartiesAsyncActionCreateBeacon
void USteamCoreProSteamPartiesAsyncActionCreateBeacon::StaticRegisterNativesUSteamCoreProSteamPartiesAsyncActionCreateBeacon()
{
	UClass* Class = USteamCoreProSteamPartiesAsyncActionCreateBeacon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateBeaconAsync", &USteamCoreProSteamPartiesAsyncActionCreateBeacon::execCreateBeaconAsync },
		{ "HandleCallback", &USteamCoreProSteamPartiesAsyncActionCreateBeacon::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProSteamPartiesAsyncActionCreateBeacon);
UClass* Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon_NoRegister()
{
	return USteamCoreProSteamPartiesAsyncActionCreateBeacon::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProSteamPartiesAsyncActionCreateBeacon\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamParties/SteamPartiesAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProSteamPartiesAsyncActionCreateBeacon\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync, "CreateBeaconAsync" }, // 2337190166
		{ &Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionCreateBeacon_HandleCallback, "HandleCallback" }, // 317069669
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProSteamPartiesAsyncActionCreateBeacon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProSteamPartiesAsyncActionCreateBeacon, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3766860541
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon_Statics::ClassParams = {
	&USteamCoreProSteamPartiesAsyncActionCreateBeacon::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon()
{
	if (!Z_Registration_Info_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon.OuterSingleton, Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProSteamPartiesAsyncActionCreateBeacon>()
{
	return USteamCoreProSteamPartiesAsyncActionCreateBeacon::StaticClass();
}
USteamCoreProSteamPartiesAsyncActionCreateBeacon::USteamCoreProSteamPartiesAsyncActionCreateBeacon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProSteamPartiesAsyncActionCreateBeacon);
USteamCoreProSteamPartiesAsyncActionCreateBeacon::~USteamCoreProSteamPartiesAsyncActionCreateBeacon() {}
// End Class USteamCoreProSteamPartiesAsyncActionCreateBeacon

// Begin Class USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots Function ChangeNumOpenSlotsAsync
struct Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics
{
	struct SteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms
	{
		UObject* WorldContextObject;
		FPartyBeaconID BeaconId;
		int32 OpenSlots;
		float Timeout;
		USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|SteamParties|Async" },
		{ "Comment", "/**\n\x09* Create a beacon. You can only create one beacon at a time.\n\x09* Steam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\x09*\n\x09* If users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\x09*\n\x09* @param\x09OpenSlots\x09\x09Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Change Num Open Slots" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
		{ "ToolTip", "Create a beacon. You can only create one beacon at a time.\nSteam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\nIf users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\n@param        OpenSlots               Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n@param        Timeout                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OpenSlots;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_BeaconId = { "BeaconId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, BeaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 2716630048
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_OpenSlots = { "OpenSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, OpenSlots), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_BeaconId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_OpenSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots, nullptr, "ChangeNumOpenSlotsAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::SteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::SteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_eventChangeNumOpenSlotsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots::execChangeNumOpenSlotsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FPartyBeaconID,Z_Param_BeaconId);
	P_GET_PROPERTY(FIntProperty,Z_Param_OpenSlots);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots**)Z_Param__Result=USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots::ChangeNumOpenSlotsAsync(Z_Param_WorldContextObject,Z_Param_BeaconId,Z_Param_OpenSlots,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots Function ChangeNumOpenSlotsAsync

// Begin Class USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics
{
	struct SteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms
	{
		FChangeNumOpenSlotsData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FChangeNumOpenSlotsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3651233754
void Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::SteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::SteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots::execHandleCallback)
{
	P_GET_STRUCT_REF(FChangeNumOpenSlotsData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots Function HandleCallback

// Begin Class USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots
void USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots::StaticRegisterNativesUSteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots()
{
	UClass* Class = USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeNumOpenSlotsAsync", &USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots::execChangeNumOpenSlotsAsync },
		{ "HandleCallback", &USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots);
UClass* Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister()
{
	return USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProSteamPartiesAsyncActionCreateBeacon\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamParties/SteamPartiesAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProSteamPartiesAsyncActionCreateBeacon\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync, "ChangeNumOpenSlotsAsync" }, // 1710818564
		{ &Z_Construct_UFunction_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback, "HandleCallback" }, // 167065035
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1691416024
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_Statics::ClassParams = {
	&USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots()
{
	if (!Z_Registration_Info_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots.OuterSingleton, Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots>()
{
	return USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass();
}
USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots::USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots);
USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots::~USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots() {}
// End Class USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty, USteamCoreProSteamPartiesAsyncActionJoinParty::StaticClass, TEXT("USteamCoreProSteamPartiesAsyncActionJoinParty"), &Z_Registration_Info_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProSteamPartiesAsyncActionJoinParty), 777269195U) },
		{ Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon, USteamCoreProSteamPartiesAsyncActionCreateBeacon::StaticClass, TEXT("USteamCoreProSteamPartiesAsyncActionCreateBeacon"), &Z_Registration_Info_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProSteamPartiesAsyncActionCreateBeacon), 746689140U) },
		{ Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots, USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass, TEXT("USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots"), &Z_Registration_Info_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots), 1616058817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_2086067724(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
