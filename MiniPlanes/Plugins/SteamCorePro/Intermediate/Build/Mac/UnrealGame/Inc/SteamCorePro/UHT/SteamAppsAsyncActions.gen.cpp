// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamApps/SteamAppsAsyncActions.h"
#include "SteamCorePro/Public/SteamApps/SteamAppsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAppsAsyncActions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProAsyncAction();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FFileDetailsResult();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Delegate FOnFileDetailsResultAsyncDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnFileDetailsResultAsyncDelegate_Parms
	{
		FFileDetailsResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnFileDetailsResultAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FFileDetailsResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1050696504
void Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnFileDetailsResultAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnFileDetailsResultAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnFileDetailsResultAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFileDetailsResultAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFileDetailsResultAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFileDetailsResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFileDetailsResultAsyncDelegate, FFileDetailsResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnFileDetailsResultAsyncDelegate_Parms
	{
		FFileDetailsResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnFileDetailsResultAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFileDetailsResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFileDetailsResultAsyncDelegate

// Begin Class USteamCoreProAppsAsyncActionGetFileDetails Function GetFileDetailsAsync
struct Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics
{
	struct SteamCoreProAppsAsyncActionGetFileDetails_eventGetFileDetailsAsync_Parms
	{
		UObject* WorldContextObject;
		FString FileName;
		float Timeout;
		USteamCoreProAppsAsyncActionGetFileDetails* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Apps|Async" },
		{ "Comment", "/**\n\x09* Asynchronously retrieves metadata details about a specific file in the depot manifest.\n\x09* Currently provides:\n\x09* The file size in bytes.\n\x09* The file's SHA1 hash.\n\x09* The file's flags.\n\x09*\n\x09* @param\x09""FileName\x09The absolute path and name to the file.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Get File Details" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsAsyncActions.h" },
		{ "ToolTip", "Asynchronously retrieves metadata details about a specific file in the depot manifest.\nCurrently provides:\nThe file size in bytes.\nThe file's SHA1 hash.\nThe file's flags.\n\n@param        FileName        The absolute path and name to the file.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProAppsAsyncActionGetFileDetails_eventGetFileDetailsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProAppsAsyncActionGetFileDetails_eventGetFileDetailsAsync_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProAppsAsyncActionGetFileDetails_eventGetFileDetailsAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProAppsAsyncActionGetFileDetails_eventGetFileDetailsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails, nullptr, "GetFileDetailsAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::SteamCoreProAppsAsyncActionGetFileDetails_eventGetFileDetailsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::SteamCoreProAppsAsyncActionGetFileDetails_eventGetFileDetailsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProAppsAsyncActionGetFileDetails::execGetFileDetailsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProAppsAsyncActionGetFileDetails**)Z_Param__Result=USteamCoreProAppsAsyncActionGetFileDetails::GetFileDetailsAsync(Z_Param_WorldContextObject,Z_Param_FileName,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProAppsAsyncActionGetFileDetails Function GetFileDetailsAsync

// Begin Class USteamCoreProAppsAsyncActionGetFileDetails Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_HandleCallback_Statics
{
	struct SteamCoreProAppsAsyncActionGetFileDetails_eventHandleCallback_Parms
	{
		FFileDetailsResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProAppsAsyncActionGetFileDetails_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FFileDetailsResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1050696504
void Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProAppsAsyncActionGetFileDetails_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProAppsAsyncActionGetFileDetails_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_HandleCallback_Statics::SteamCoreProAppsAsyncActionGetFileDetails_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_HandleCallback_Statics::SteamCoreProAppsAsyncActionGetFileDetails_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProAppsAsyncActionGetFileDetails::execHandleCallback)
{
	P_GET_STRUCT_REF(FFileDetailsResult,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProAppsAsyncActionGetFileDetails Function HandleCallback

// Begin Class USteamCoreProAppsAsyncActionGetFileDetails
void USteamCoreProAppsAsyncActionGetFileDetails::StaticRegisterNativesUSteamCoreProAppsAsyncActionGetFileDetails()
{
	UClass* Class = USteamCoreProAppsAsyncActionGetFileDetails::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFileDetailsAsync", &USteamCoreProAppsAsyncActionGetFileDetails::execGetFileDetailsAsync },
		{ "HandleCallback", &USteamCoreProAppsAsyncActionGetFileDetails::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProAppsAsyncActionGetFileDetails);
UClass* Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails_NoRegister()
{
	return USteamCoreProAppsAsyncActionGetFileDetails::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProAppsAsyncActionGetFileDetails\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamApps/SteamAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProAppsAsyncActionGetFileDetails\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_GetFileDetailsAsync, "GetFileDetailsAsync" }, // 3783744910
		{ &Z_Construct_UFunction_USteamCoreProAppsAsyncActionGetFileDetails_HandleCallback, "HandleCallback" }, // 2892800260
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProAppsAsyncActionGetFileDetails>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProAppsAsyncActionGetFileDetails, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2722963627
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails_Statics::ClassParams = {
	&USteamCoreProAppsAsyncActionGetFileDetails::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails()
{
	if (!Z_Registration_Info_UClass_USteamCoreProAppsAsyncActionGetFileDetails.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProAppsAsyncActionGetFileDetails.OuterSingleton, Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProAppsAsyncActionGetFileDetails.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProAppsAsyncActionGetFileDetails>()
{
	return USteamCoreProAppsAsyncActionGetFileDetails::StaticClass();
}
USteamCoreProAppsAsyncActionGetFileDetails::USteamCoreProAppsAsyncActionGetFileDetails(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProAppsAsyncActionGetFileDetails);
USteamCoreProAppsAsyncActionGetFileDetails::~USteamCoreProAppsAsyncActionGetFileDetails() {}
// End Class USteamCoreProAppsAsyncActionGetFileDetails

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsAsyncActions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreProAppsAsyncActionGetFileDetails, USteamCoreProAppsAsyncActionGetFileDetails::StaticClass, TEXT("USteamCoreProAppsAsyncActionGetFileDetails"), &Z_Registration_Info_UClass_USteamCoreProAppsAsyncActionGetFileDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProAppsAsyncActionGetFileDetails), 785916020U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsAsyncActions_h_2774694882(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsAsyncActions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
