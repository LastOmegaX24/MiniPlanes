// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamUser/SteamUserAsyncActions.h"
#include "SteamCorePro/Public/SteamUser/SteamUserTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamUserAsyncActions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProAsyncAction();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL_NoRegister();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FEncryptedAppTicketResponse();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FStoreAuthURLResponse();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Delegate FRequestEncryptedAppTicketDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventRequestEncryptedAppTicketDelegate_Parms
	{
		FEncryptedAppTicketResponse Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventRequestEncryptedAppTicketDelegate_Parms, Data), Z_Construct_UScriptStruct_FEncryptedAppTicketResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 556015635
void Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventRequestEncryptedAppTicketDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventRequestEncryptedAppTicketDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "RequestEncryptedAppTicketDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventRequestEncryptedAppTicketDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventRequestEncryptedAppTicketDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRequestEncryptedAppTicketDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestEncryptedAppTicketDelegate, FEncryptedAppTicketResponse const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventRequestEncryptedAppTicketDelegate_Parms
	{
		FEncryptedAppTicketResponse Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventRequestEncryptedAppTicketDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	RequestEncryptedAppTicketDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRequestEncryptedAppTicketDelegate

// Begin Delegate FRequestStoreAuthURLDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventRequestStoreAuthURLDelegate_Parms
	{
		FStoreAuthURLResponse Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventRequestStoreAuthURLDelegate_Parms, Data), Z_Construct_UScriptStruct_FStoreAuthURLResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3250354329
void Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventRequestStoreAuthURLDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventRequestStoreAuthURLDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "RequestStoreAuthURLDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventRequestStoreAuthURLDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventRequestStoreAuthURLDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRequestStoreAuthURLDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestStoreAuthURLDelegate, FStoreAuthURLResponse const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventRequestStoreAuthURLDelegate_Parms
	{
		FStoreAuthURLResponse Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventRequestStoreAuthURLDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	RequestStoreAuthURLDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRequestStoreAuthURLDelegate

// Begin Class USteamCoreProUserAsyncActionRequestEncryptedAppTicket Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics
{
	struct SteamCoreProUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms
	{
		FEncryptedAppTicketResponse Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FEncryptedAppTicketResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 556015635
void Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::SteamCoreProUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::SteamCoreProUserAsyncActionRequestEncryptedAppTicket_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProUserAsyncActionRequestEncryptedAppTicket::execHandleCallback)
{
	P_GET_STRUCT_REF(FEncryptedAppTicketResponse,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProUserAsyncActionRequestEncryptedAppTicket Function HandleCallback

// Begin Class USteamCoreProUserAsyncActionRequestEncryptedAppTicket Function RequestEncryptedAppTicketAsync
struct Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics
{
	struct SteamCoreProUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms
	{
		UObject* WorldContextObject;
		TArray<uint8> DataToInclude;
		float Timeout;
		USteamCoreProUserAsyncActionRequestEncryptedAppTicket* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DataToInclude" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|User|Async" },
		{ "Comment", "/**\n\x09* Requests an application ticket encrypted with the secret \"encrypted app ticket key\".\n\x09*\n\x09* The encryption key can be obtained from the Encrypted App Ticket Key page on the App Admin for your app.\n\x09* There can only be one EncryptedAppTicketResponse_t pending, and this call is subject to a 60 second rate limit.\n\x09* After receiving the response you should call GetEncryptedAppTicket to get the ticket Data, and then you need to send it to a secure server to be decrypted with the SteamEncryptedAppTicket functions.\n\x09*\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Encrypted App Ticket" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
		{ "ToolTip", "Requests an application ticket encrypted with the secret \"encrypted app ticket key\".\n\nThe encryption key can be obtained from the Encrypted App Ticket Key page on the App Admin for your app.\nThere can only be one EncryptedAppTicketResponse_t pending, and this call is subject to a 60 second rate limit.\nAfter receiving the response you should call GetEncryptedAppTicket to get the ticket Data, and then you need to send it to a secure server to be decrypted with the SteamEncryptedAppTicket functions.\n\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataToInclude_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToInclude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude_Inner = { "DataToInclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude = { "DataToInclude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms, DataToInclude), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_DataToInclude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket, nullptr, "RequestEncryptedAppTicketAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::SteamCoreProUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::SteamCoreProUserAsyncActionRequestEncryptedAppTicket_eventRequestEncryptedAppTicketAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProUserAsyncActionRequestEncryptedAppTicket::execRequestEncryptedAppTicketAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY(uint8,Z_Param_DataToInclude);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProUserAsyncActionRequestEncryptedAppTicket**)Z_Param__Result=USteamCoreProUserAsyncActionRequestEncryptedAppTicket::RequestEncryptedAppTicketAsync(Z_Param_WorldContextObject,Z_Param_DataToInclude,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProUserAsyncActionRequestEncryptedAppTicket Function RequestEncryptedAppTicketAsync

// Begin Class USteamCoreProUserAsyncActionRequestEncryptedAppTicket
void USteamCoreProUserAsyncActionRequestEncryptedAppTicket::StaticRegisterNativesUSteamCoreProUserAsyncActionRequestEncryptedAppTicket()
{
	UClass* Class = USteamCoreProUserAsyncActionRequestEncryptedAppTicket::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &USteamCoreProUserAsyncActionRequestEncryptedAppTicket::execHandleCallback },
		{ "RequestEncryptedAppTicketAsync", &USteamCoreProUserAsyncActionRequestEncryptedAppTicket::execRequestEncryptedAppTicketAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProUserAsyncActionRequestEncryptedAppTicket);
UClass* Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_NoRegister()
{
	return USteamCoreProUserAsyncActionRequestEncryptedAppTicket::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProUserAsyncActionRequestEncryptedAppTicket\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/SteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProUserAsyncActionRequestEncryptedAppTicket\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_HandleCallback, "HandleCallback" }, // 2482130860
		{ &Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync, "RequestEncryptedAppTicketAsync" }, // 3901652577
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProUserAsyncActionRequestEncryptedAppTicket>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProUserAsyncActionRequestEncryptedAppTicket, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_RequestEncryptedAppTicketDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 583932664
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_Statics::ClassParams = {
	&USteamCoreProUserAsyncActionRequestEncryptedAppTicket::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket()
{
	if (!Z_Registration_Info_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket.OuterSingleton, Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProUserAsyncActionRequestEncryptedAppTicket>()
{
	return USteamCoreProUserAsyncActionRequestEncryptedAppTicket::StaticClass();
}
USteamCoreProUserAsyncActionRequestEncryptedAppTicket::USteamCoreProUserAsyncActionRequestEncryptedAppTicket(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProUserAsyncActionRequestEncryptedAppTicket);
USteamCoreProUserAsyncActionRequestEncryptedAppTicket::~USteamCoreProUserAsyncActionRequestEncryptedAppTicket() {}
// End Class USteamCoreProUserAsyncActionRequestEncryptedAppTicket

// Begin Class USteamCoreProUserAsyncActionRequestStoreAuthURL Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics
{
	struct SteamCoreProUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms
	{
		FStoreAuthURLResponse Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FStoreAuthURLResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3250354329
void Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::SteamCoreProUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::SteamCoreProUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProUserAsyncActionRequestStoreAuthURL::execHandleCallback)
{
	P_GET_STRUCT_REF(FStoreAuthURLResponse,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProUserAsyncActionRequestStoreAuthURL Function HandleCallback

// Begin Class USteamCoreProUserAsyncActionRequestStoreAuthURL Function RequestStoreAuthURLAsync
struct Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics
{
	struct SteamCoreProUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms
	{
		UObject* WorldContextObject;
		FString RedirectURL;
		float Timeout;
		USteamCoreProUserAsyncActionRequestStoreAuthURL* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|User|Async" },
		{ "Comment", "/**\n\x09* Requests a URL which authenticates an in-game browser for store check-out, and then redirects to the specified URL.\n\x09*\n\x09* As long as the in-game browser accepts and handles session cookies, Steam microtransaction checkout pages will automatically recognize the user instead of presenting a login page.\n\x09* NOTE: The URL has a very short lifetime to prevent history-snooping attacks, so you should only call this API when you are about to launch the browser, or else immediately navigate to the result URL using a hidden browser window.\n\x09* NOTE: The resulting authorization cookie has an expiration time of one day, so it would be a good idea to request and visit a new auth URL every 12 hours.\n\x09*\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Store Auth URL" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
		{ "ToolTip", "Requests a URL which authenticates an in-game browser for store check-out, and then redirects to the specified URL.\n\nAs long as the in-game browser accepts and handles session cookies, Steam microtransaction checkout pages will automatically recognize the user instead of presenting a login page.\nNOTE: The URL has a very short lifetime to prevent history-snooping attacks, so you should only call this API when you are about to launch the browser, or else immediately navigate to the result URL using a hidden browser window.\nNOTE: The resulting authorization cookie has an expiration time of one day, so it would be a good idea to request and visit a new auth URL every 12 hours.\n\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RedirectURL;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_RedirectURL = { "RedirectURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms, RedirectURL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_RedirectURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL, nullptr, "RequestStoreAuthURLAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::SteamCoreProUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::SteamCoreProUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProUserAsyncActionRequestStoreAuthURL::execRequestStoreAuthURLAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_RedirectURL);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProUserAsyncActionRequestStoreAuthURL**)Z_Param__Result=USteamCoreProUserAsyncActionRequestStoreAuthURL::RequestStoreAuthURLAsync(Z_Param_WorldContextObject,Z_Param_RedirectURL,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProUserAsyncActionRequestStoreAuthURL Function RequestStoreAuthURLAsync

// Begin Class USteamCoreProUserAsyncActionRequestStoreAuthURL
void USteamCoreProUserAsyncActionRequestStoreAuthURL::StaticRegisterNativesUSteamCoreProUserAsyncActionRequestStoreAuthURL()
{
	UClass* Class = USteamCoreProUserAsyncActionRequestStoreAuthURL::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &USteamCoreProUserAsyncActionRequestStoreAuthURL::execHandleCallback },
		{ "RequestStoreAuthURLAsync", &USteamCoreProUserAsyncActionRequestStoreAuthURL::execRequestStoreAuthURLAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProUserAsyncActionRequestStoreAuthURL);
UClass* Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL_NoRegister()
{
	return USteamCoreProUserAsyncActionRequestStoreAuthURL::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProUserAsyncActionRequestStoreAuthURL\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUser/SteamUserAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProUserAsyncActionRequestStoreAuthURL\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUser/SteamUserAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_HandleCallback, "HandleCallback" }, // 1724944957
		{ &Z_Construct_UFunction_USteamCoreProUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync, "RequestStoreAuthURLAsync" }, // 3425771251
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProUserAsyncActionRequestStoreAuthURL>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProUserAsyncActionRequestStoreAuthURL, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_RequestStoreAuthURLDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1145654103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL_Statics::ClassParams = {
	&USteamCoreProUserAsyncActionRequestStoreAuthURL::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL()
{
	if (!Z_Registration_Info_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL.OuterSingleton, Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProUserAsyncActionRequestStoreAuthURL>()
{
	return USteamCoreProUserAsyncActionRequestStoreAuthURL::StaticClass();
}
USteamCoreProUserAsyncActionRequestStoreAuthURL::USteamCoreProUserAsyncActionRequestStoreAuthURL(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProUserAsyncActionRequestStoreAuthURL);
USteamCoreProUserAsyncActionRequestStoreAuthURL::~USteamCoreProUserAsyncActionRequestStoreAuthURL() {}
// End Class USteamCoreProUserAsyncActionRequestStoreAuthURL

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket, USteamCoreProUserAsyncActionRequestEncryptedAppTicket::StaticClass, TEXT("USteamCoreProUserAsyncActionRequestEncryptedAppTicket"), &Z_Registration_Info_UClass_USteamCoreProUserAsyncActionRequestEncryptedAppTicket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProUserAsyncActionRequestEncryptedAppTicket), 686396023U) },
		{ Z_Construct_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL, USteamCoreProUserAsyncActionRequestStoreAuthURL::StaticClass, TEXT("USteamCoreProUserAsyncActionRequestStoreAuthURL"), &Z_Registration_Info_UClass_USteamCoreProUserAsyncActionRequestStoreAuthURL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProUserAsyncActionRequestStoreAuthURL), 2197427272U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_1710711018(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUserAsyncActions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
