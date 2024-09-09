// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamInput/SteamInput.h"
#include "SteamCorePro/Public/SteamInput/SteamInputTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamInput() {}

// Begin Cross Module References
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProInput();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProInput_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreInputConfigurationEnableType();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProControllerPad();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputActionOrigin();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputLEDFlag();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputType();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProXboxOrigin();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionSetHandle();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionHandle();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionHandle();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FInputHandle();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FInputMotionData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FScePadTriggerEffectCommand();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProInput Function ActivateActionSet
struct Z_Construct_UFunction_USteamProInput_ActivateActionSet_Statics
{
	struct SteamProInput_eventActivateActionSet_Parms
	{
		FInputHandle Handle;
		FInputActionSetHandle ActionSetHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Reconfigure the controller to use the specified action set (ie \"Menu\", \"Walk\", or \"Drive\").\n\x09*\n\x09* This is cheap, and can be safely called repeatedly. It's often easier to repeatedly call it in your state loops, instead of trying to place it in all of your state transitions.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The Handle of the controller you want to activate an action set for.\n\x09* @param\x09""ActionSetHandle\x09\x09The Handle of the action set you want to activate.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Reconfigure the controller to use the specified action set (ie \"Menu\", \"Walk\", or \"Drive\").\n\nThis is cheap, and can be safely called repeatedly. It's often easier to repeatedly call it in your state loops, instead of trying to place it in all of your state transitions.\n\n@param        Handle                          The Handle of the controller you want to activate an action set for.\n@param        ActionSetHandle         The Handle of the action set you want to activate." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_ActivateActionSet_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventActivateActionSet_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_ActivateActionSet_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventActivateActionSet_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 2790418488
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_ActivateActionSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_ActivateActionSet_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_ActivateActionSet_Statics::NewProp_ActionSetHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_ActivateActionSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_ActivateActionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "ActivateActionSet", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_ActivateActionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_ActivateActionSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_ActivateActionSet_Statics::SteamProInput_eventActivateActionSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_ActivateActionSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_ActivateActionSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_ActivateActionSet_Statics::SteamProInput_eventActivateActionSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_ActivateActionSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_ActivateActionSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execActivateActionSet)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateActionSet(Z_Param_Handle,Z_Param_ActionSetHandle);
	P_NATIVE_END;
}
// End Class USteamProInput Function ActivateActionSet

// Begin Class USteamProInput Function ActivateActionSetLayer
struct Z_Construct_UFunction_USteamProInput_ActivateActionSetLayer_Statics
{
	struct SteamProInput_eventActivateActionSetLayer_Parms
	{
		FInputHandle Handle;
		FInputActionSetHandle ActionSetLayerHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Reconfigure the controller to use the specified action set layer.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to activate an action set layer for.\n\x09* @param\x09""ActionSetLayerHandle\x09The Handle of the action set layer you want to activate.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Reconfigure the controller to use the specified action set layer.\n\n@param        Handle                                  The Handle of the controller you want to activate an action set layer for.\n@param        ActionSetLayerHandle    The Handle of the action set layer you want to activate." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetLayerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_ActivateActionSetLayer_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventActivateActionSetLayer_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_ActivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle = { "ActionSetLayerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventActivateActionSetLayer_Parms, ActionSetLayerHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 2790418488
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_ActivateActionSetLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_ActivateActionSetLayer_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_ActivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_ActivateActionSetLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_ActivateActionSetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "ActivateActionSetLayer", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_ActivateActionSetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_ActivateActionSetLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_ActivateActionSetLayer_Statics::SteamProInput_eventActivateActionSetLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_ActivateActionSetLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_ActivateActionSetLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_ActivateActionSetLayer_Statics::SteamProInput_eventActivateActionSetLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_ActivateActionSetLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_ActivateActionSetLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execActivateActionSetLayer)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetLayerHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateActionSetLayer(Z_Param_Handle,Z_Param_ActionSetLayerHandle);
	P_NATIVE_END;
}
// End Class USteamProInput Function ActivateActionSetLayer

// Begin Class USteamProInput Function BNewDataAvailable
struct Z_Construct_UFunction_USteamProInput_BNewDataAvailable_Statics
{
	struct SteamProInput_eventBNewDataAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProInput_BNewDataAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInput_eventBNewDataAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInput_BNewDataAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInput_eventBNewDataAvailable_Parms), &Z_Construct_UFunction_USteamProInput_BNewDataAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_BNewDataAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_BNewDataAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_BNewDataAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_BNewDataAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "BNewDataAvailable", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_BNewDataAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_BNewDataAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_BNewDataAvailable_Statics::SteamProInput_eventBNewDataAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_BNewDataAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_BNewDataAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_BNewDataAvailable_Statics::SteamProInput_eventBNewDataAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_BNewDataAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_BNewDataAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execBNewDataAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInput::BNewDataAvailable();
	P_NATIVE_END;
}
// End Class USteamProInput Function BNewDataAvailable

// Begin Class USteamProInput Function BWaitForData
struct Z_Construct_UFunction_USteamProInput_BWaitForData_Statics
{
	struct SteamProInput_eventBWaitForData_Parms
	{
		bool bWaitForever;
		int32 Timeout;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Waits on an IPC event from Steam sent when there is new data to be fetched from\n\x09* the data drop. Returns true when data was recievied before the timeout expires.\n\x09* Useful for games with a dedicated input thread\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Waits on an IPC event from Steam sent when there is new data to be fetched from\nthe data drop. Returns true when data was recievied before the timeout expires.\nUseful for games with a dedicated input thread" },
	};
#endif // WITH_METADATA
	static void NewProp_bWaitForever_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForever;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Timeout;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::NewProp_bWaitForever_SetBit(void* Obj)
{
	((SteamProInput_eventBWaitForData_Parms*)Obj)->bWaitForever = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::NewProp_bWaitForever = { "bWaitForever", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInput_eventBWaitForData_Parms), &Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::NewProp_bWaitForever_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventBWaitForData_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInput_eventBWaitForData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInput_eventBWaitForData_Parms), &Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::NewProp_bWaitForever,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "BWaitForData", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::SteamProInput_eventBWaitForData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::SteamProInput_eventBWaitForData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_BWaitForData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_BWaitForData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execBWaitForData)
{
	P_GET_UBOOL(Z_Param_bWaitForever);
	P_GET_PROPERTY(FIntProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProInput::BWaitForData(Z_Param_bWaitForever,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamProInput Function BWaitForData

// Begin Class USteamProInput Function DeactivateActionSetLayer
struct Z_Construct_UFunction_USteamProInput_DeactivateActionSetLayer_Statics
{
	struct SteamProInput_eventDeactivateActionSetLayer_Parms
	{
		FInputHandle Handle;
		FInputActionSetHandle ActionSetLayerHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Reconfigure the controller to stop using the specified action set layer.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to deactivate an action set layer for.\n\x09* @param\x09""ActionSetLayerHandle\x09The Handle of the action set layer you want to deactivate.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Reconfigure the controller to stop using the specified action set layer.\n\n@param        Handle                                  The Handle of the controller you want to deactivate an action set layer for.\n@param        ActionSetLayerHandle    The Handle of the action set layer you want to deactivate." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetLayerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_DeactivateActionSetLayer_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventDeactivateActionSetLayer_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_DeactivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle = { "ActionSetLayerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventDeactivateActionSetLayer_Parms, ActionSetLayerHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 2790418488
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_DeactivateActionSetLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_DeactivateActionSetLayer_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_DeactivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_DeactivateActionSetLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_DeactivateActionSetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "DeactivateActionSetLayer", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_DeactivateActionSetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_DeactivateActionSetLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_DeactivateActionSetLayer_Statics::SteamProInput_eventDeactivateActionSetLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_DeactivateActionSetLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_DeactivateActionSetLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_DeactivateActionSetLayer_Statics::SteamProInput_eventDeactivateActionSetLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_DeactivateActionSetLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_DeactivateActionSetLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execDeactivateActionSetLayer)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetLayerHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivateActionSetLayer(Z_Param_Handle,Z_Param_ActionSetLayerHandle);
	P_NATIVE_END;
}
// End Class USteamProInput Function DeactivateActionSetLayer

// Begin Class USteamProInput Function DeactivateAllActionSetLayers
struct Z_Construct_UFunction_USteamProInput_DeactivateAllActionSetLayers_Statics
{
	struct SteamProInput_eventDeactivateAllActionSetLayers_Parms
	{
		FInputHandle Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Reconfigure the controller to stop using all action set layers.\n\x09*\n\x09* @param\x09Handle\x09The Handle of the controller you want to deactivate all action set layers for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Reconfigure the controller to stop using all action set layers.\n\n@param        Handle  The Handle of the controller you want to deactivate all action set layers for." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_DeactivateAllActionSetLayers_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventDeactivateAllActionSetLayers_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_DeactivateAllActionSetLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_DeactivateAllActionSetLayers_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_DeactivateAllActionSetLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_DeactivateAllActionSetLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "DeactivateAllActionSetLayers", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_DeactivateAllActionSetLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_DeactivateAllActionSetLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_DeactivateAllActionSetLayers_Statics::SteamProInput_eventDeactivateAllActionSetLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_DeactivateAllActionSetLayers_Statics::SteamProInput_eventDeactivateAllActionSetLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_DeactivateAllActionSetLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_DeactivateAllActionSetLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execDeactivateAllActionSetLayers)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivateAllActionSetLayers(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class USteamProInput Function DeactivateAllActionSetLayers

// Begin Class USteamProInput Function GetActionOriginFromXboxOrigin
struct Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin_Statics
{
	struct SteamProInput_eventGetActionOriginFromXboxOrigin_Parms
	{
		FInputHandle Handle;
		ESteamCoreProXboxOrigin Origin;
		TEnumAsByte<ESteamCoreProInputActionOrigin> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get an action Origin that you can use in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin\n\x09*\n\x09* @param\x09Handle\x09\x09The Handle of the controller to affect. You can use GetControllerForGamepadIndex to get this Handle\n\x09* @param\x09Origin\x09\x09This is the button you want to get the image for ex: k_EXboxOrigin_A\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get an action Origin that you can use in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin\n\n@param        Handle          The Handle of the controller to affect. You can use GetControllerForGamepadIndex to get this Handle\n@param        Origin          This is the button you want to get the image for ex: k_EXboxOrigin_A" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetActionOriginFromXboxOrigin_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetActionOriginFromXboxOrigin_Parms, Origin), Z_Construct_UEnum_SteamCorePro_ESteamCoreProXboxOrigin, METADATA_PARAMS(0, nullptr) }; // 3735483929
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetActionOriginFromXboxOrigin_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputActionOrigin, METADATA_PARAMS(0, nullptr) }; // 3685952530
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetActionOriginFromXboxOrigin", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin_Statics::SteamProInput_eventGetActionOriginFromXboxOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin_Statics::SteamProInput_eventGetActionOriginFromXboxOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetActionOriginFromXboxOrigin)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_ENUM(ESteamCoreProXboxOrigin,Z_Param_Origin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESteamCoreProInputActionOrigin>*)Z_Param__Result=P_THIS->GetActionOriginFromXboxOrigin(Z_Param_Handle,ESteamCoreProXboxOrigin(Z_Param_Origin));
	P_NATIVE_END;
}
// End Class USteamProInput Function GetActionOriginFromXboxOrigin

// Begin Class USteamProInput Function GetActionSetHandle
struct Z_Construct_UFunction_USteamProInput_GetActionSetHandle_Statics
{
	struct SteamProInput_eventGetActionSetHandle_Parms
	{
		FString ActionSetName;
		FInputActionSetHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Lookup the Handle for an Action Set. Best to do this once on startup, and store the Handles for all future API calls.\n\x09*\n\x09* @param\x09""ActionSetName\x09The string identifier of an action set defined in the game's VDF file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Lookup the Handle for an Action Set. Best to do this once on startup, and store the Handles for all future API calls.\n\n@param        ActionSetName   The string identifier of an action set defined in the game's VDF file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActionSetName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProInput_GetActionSetHandle_Statics::NewProp_ActionSetName = { "ActionSetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetActionSetHandle_Parms, ActionSetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetActionSetHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetActionSetHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 2790418488
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetActionSetHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetActionSetHandle_Statics::NewProp_ActionSetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetActionSetHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetActionSetHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetActionSetHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetActionSetHandle", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetActionSetHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetActionSetHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetActionSetHandle_Statics::SteamProInput_eventGetActionSetHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetActionSetHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetActionSetHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetActionSetHandle_Statics::SteamProInput_eventGetActionSetHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetActionSetHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetActionSetHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetActionSetHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ActionSetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputActionSetHandle*)Z_Param__Result=P_THIS->GetActionSetHandle(Z_Param_ActionSetName);
	P_NATIVE_END;
}
// End Class USteamProInput Function GetActionSetHandle

// Begin Class USteamProInput Function GetActiveActionSetLayers
struct Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers_Statics
{
	struct SteamProInput_eventGetActiveActionSetLayers_Parms
	{
		FInputHandle Handle;
		TArray<FInputActionSetHandle> Data;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Fill an array with all of the currently active action set layers for a specified controller Handle.\n\x09*\n\x09* @param\x09Handle\x09\x09The Handle of the controller you want to deactivate all action set layers for.\n\x09* @param\x09""Data\x09\x09This must point to a STEAM_INPUT_MAX_COUNT sized array of InputHandle_t.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Fill an array with all of the currently active action set layers for a specified controller Handle.\n\n@param        Handle          The Handle of the controller you want to deactivate all action set layers for.\n@param        Data            This must point to a STEAM_INPUT_MAX_COUNT sized array of InputHandle_t." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetActiveActionSetLayers_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 2790418488
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetActiveActionSetLayers_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2790418488
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetActiveActionSetLayers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetActiveActionSetLayers", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers_Statics::SteamProInput_eventGetActiveActionSetLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers_Statics::SteamProInput_eventGetActiveActionSetLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetActiveActionSetLayers)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_TARRAY_REF(FInputActionSetHandle,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetActiveActionSetLayers(Z_Param_Handle,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USteamProInput Function GetActiveActionSetLayers

// Begin Class USteamProInput Function GetAnalogActionData
struct Z_Construct_UFunction_USteamProInput_GetAnalogActionData_Statics
{
	struct SteamProInput_eventGetAnalogActionData_Parms
	{
		FInputHandle Handle;
		FInputAnalogActionHandle AnalogActionHandle;
		FInputAnalogActionData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the current state of the supplied analog game action.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to query.\n\x09* @param\x09""AnalogActionHandle\x09\x09The Handle of the analog action you want to query.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns the current state of the supplied analog game action.\n\n@param        Handle                                  The Handle of the controller you want to query.\n@param        AnalogActionHandle              The Handle of the analog action you want to query." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnalogActionHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetAnalogActionData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetAnalogActionData_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetAnalogActionData_Statics::NewProp_AnalogActionHandle = { "AnalogActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetAnalogActionData_Parms, AnalogActionHandle), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(0, nullptr) }; // 4029593120
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetAnalogActionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetAnalogActionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputAnalogActionData, METADATA_PARAMS(0, nullptr) }; // 4183507209
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetAnalogActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetAnalogActionData_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetAnalogActionData_Statics::NewProp_AnalogActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetAnalogActionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetAnalogActionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetAnalogActionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetAnalogActionData", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetAnalogActionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetAnalogActionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetAnalogActionData_Statics::SteamProInput_eventGetAnalogActionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetAnalogActionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetAnalogActionData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetAnalogActionData_Statics::SteamProInput_eventGetAnalogActionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetAnalogActionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetAnalogActionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetAnalogActionData)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_AnalogActionHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputAnalogActionData*)Z_Param__Result=P_THIS->GetAnalogActionData(Z_Param_Handle,Z_Param_AnalogActionHandle);
	P_NATIVE_END;
}
// End Class USteamProInput Function GetAnalogActionData

// Begin Class USteamProInput Function GetAnalogActionHandle
struct Z_Construct_UFunction_USteamProInput_GetAnalogActionHandle_Statics
{
	struct SteamProInput_eventGetAnalogActionHandle_Parms
	{
		FString PszActionName;
		FInputAnalogActionHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get the Handle of the specified Analog action.\n\x09*\n\x09* @param\x09PszActionName\x09\x09The string identifier of the analog action defined in the game's VDF file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get the Handle of the specified Analog action.\n\n@param        PszActionName           The string identifier of the analog action defined in the game's VDF file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PszActionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProInput_GetAnalogActionHandle_Statics::NewProp_PszActionName = { "PszActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetAnalogActionHandle_Parms, PszActionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetAnalogActionHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetAnalogActionHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(0, nullptr) }; // 4029593120
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetAnalogActionHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetAnalogActionHandle_Statics::NewProp_PszActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetAnalogActionHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetAnalogActionHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetAnalogActionHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetAnalogActionHandle", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetAnalogActionHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetAnalogActionHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetAnalogActionHandle_Statics::SteamProInput_eventGetAnalogActionHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetAnalogActionHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetAnalogActionHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetAnalogActionHandle_Statics::SteamProInput_eventGetAnalogActionHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetAnalogActionHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetAnalogActionHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetAnalogActionHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PszActionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputAnalogActionHandle*)Z_Param__Result=P_THIS->GetAnalogActionHandle(Z_Param_PszActionName);
	P_NATIVE_END;
}
// End Class USteamProInput Function GetAnalogActionHandle

// Begin Class USteamProInput Function GetAnalogActionOrigins
struct Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics
{
	struct SteamProInput_eventGetAnalogActionOrigins_Parms
	{
		FInputHandle Handle;
		FInputActionSetHandle ActionSetHandle;
		FInputAnalogActionHandle AnalogActionHandle;
		TArray<TEnumAsByte<ESteamCoreProInputActionOrigin> > OriginsOut;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get the Origin(s) for an analog action within an action set by filling OriginsOut with EInputActionOrigin Handles. Use this to display the appropriate on-screen prompt for the action.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to query.\n\x09* @param\x09""ActionSetHandle\x09\x09\x09The Handle of the action set you want to query.\n\x09* @param\x09""AnalogActionHandle\x09\x09The Handle of the analog action you want to query.\n\x09* @param\x09OriginsOut\x09\x09\x09\x09""A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin Handles.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get the Origin(s) for an analog action within an action set by filling OriginsOut with EInputActionOrigin Handles. Use this to display the appropriate on-screen prompt for the action.\n\n@param        Handle                                  The Handle of the controller you want to query.\n@param        ActionSetHandle                 The Handle of the action set you want to query.\n@param        AnalogActionHandle              The Handle of the analog action you want to query.\n@param        OriginsOut                              A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin Handles." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnalogActionHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OriginsOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginsOut;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetAnalogActionOrigins_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetAnalogActionOrigins_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 2790418488
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::NewProp_AnalogActionHandle = { "AnalogActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetAnalogActionOrigins_Parms, AnalogActionHandle), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(0, nullptr) }; // 4029593120
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut_Inner = { "OriginsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputActionOrigin, METADATA_PARAMS(0, nullptr) }; // 3685952530
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut = { "OriginsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetAnalogActionOrigins_Parms, OriginsOut), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3685952530
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetAnalogActionOrigins_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::NewProp_ActionSetHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::NewProp_AnalogActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetAnalogActionOrigins", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::SteamProInput_eventGetAnalogActionOrigins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::SteamProInput_eventGetAnalogActionOrigins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetAnalogActionOrigins)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
	P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_AnalogActionHandle);
	P_GET_TARRAY_REF(TEnumAsByte<ESteamCoreProInputActionOrigin>,Z_Param_Out_OriginsOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAnalogActionOrigins(Z_Param_Handle,Z_Param_ActionSetHandle,Z_Param_AnalogActionHandle,Z_Param_Out_OriginsOut);
	P_NATIVE_END;
}
// End Class USteamProInput Function GetAnalogActionOrigins

// Begin Class USteamProInput Function GetConnectedControllers
struct Z_Construct_UFunction_USteamProInput_GetConnectedControllers_Statics
{
	struct SteamProInput_eventGetConnectedControllers_Parms
	{
		TArray<FInputHandle> OutHandles;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Enumerates currently connected controllers by filling OutHandles with controller handles.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Enumerates currently connected controllers by filling OutHandles with controller handles." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHandles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetConnectedControllers_Statics::NewProp_OutHandles_Inner = { "OutHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInput_GetConnectedControllers_Statics::NewProp_OutHandles = { "OutHandles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetConnectedControllers_Parms, OutHandles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInput_GetConnectedControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetConnectedControllers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetConnectedControllers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetConnectedControllers_Statics::NewProp_OutHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetConnectedControllers_Statics::NewProp_OutHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetConnectedControllers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetConnectedControllers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetConnectedControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetConnectedControllers", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetConnectedControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetConnectedControllers_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetConnectedControllers_Statics::SteamProInput_eventGetConnectedControllers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetConnectedControllers_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetConnectedControllers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetConnectedControllers_Statics::SteamProInput_eventGetConnectedControllers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetConnectedControllers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetConnectedControllers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetConnectedControllers)
{
	P_GET_TARRAY_REF(FInputHandle,Z_Param_Out_OutHandles);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetConnectedControllers(Z_Param_Out_OutHandles);
	P_NATIVE_END;
}
// End Class USteamProInput Function GetConnectedControllers

// Begin Class USteamProInput Function GetControllerForGamepadIndex
struct Z_Construct_UFunction_USteamProInput_GetControllerForGamepadIndex_Statics
{
	struct SteamProInput_eventGetControllerForGamepadIndex_Parms
	{
		int32 Index;
		FInputHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the associated controller Handle for the specified emulated gamepad. Can be used with GetInputTypeForHandle to determine the controller type of a controller using Steam Input Gamepad Emulation.\n\x09*\n\x09* @param\x09Index\x09The index of the emulated gamepad you want to get a controller Handle for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns the associated controller Handle for the specified emulated gamepad. Can be used with GetInputTypeForHandle to determine the controller type of a controller using Steam Input Gamepad Emulation.\n\n@param        Index   The index of the emulated gamepad you want to get a controller Handle for." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInput_GetControllerForGamepadIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetControllerForGamepadIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetControllerForGamepadIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetControllerForGamepadIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetControllerForGamepadIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetControllerForGamepadIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetControllerForGamepadIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetControllerForGamepadIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetControllerForGamepadIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetControllerForGamepadIndex", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetControllerForGamepadIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetControllerForGamepadIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetControllerForGamepadIndex_Statics::SteamProInput_eventGetControllerForGamepadIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetControllerForGamepadIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetControllerForGamepadIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetControllerForGamepadIndex_Statics::SteamProInput_eventGetControllerForGamepadIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetControllerForGamepadIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetControllerForGamepadIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetControllerForGamepadIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputHandle*)Z_Param__Result=P_THIS->GetControllerForGamepadIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class USteamProInput Function GetControllerForGamepadIndex

// Begin Class USteamProInput Function GetCurrentActionSet
struct Z_Construct_UFunction_USteamProInput_GetCurrentActionSet_Statics
{
	struct SteamProInput_eventGetCurrentActionSet_Parms
	{
		FInputHandle Handle;
		FInputActionSetHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get the currently active action set for the specified controller.\n\x09*\n\x09* @param\x09Handle\x09The Handle of the controller you want to query.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get the currently active action set for the specified controller.\n\n@param        Handle  The Handle of the controller you want to query." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetCurrentActionSet_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetCurrentActionSet_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetCurrentActionSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetCurrentActionSet_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 2790418488
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetCurrentActionSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetCurrentActionSet_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetCurrentActionSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetCurrentActionSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetCurrentActionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetCurrentActionSet", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetCurrentActionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetCurrentActionSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetCurrentActionSet_Statics::SteamProInput_eventGetCurrentActionSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetCurrentActionSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetCurrentActionSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetCurrentActionSet_Statics::SteamProInput_eventGetCurrentActionSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetCurrentActionSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetCurrentActionSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetCurrentActionSet)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputActionSetHandle*)Z_Param__Result=P_THIS->GetCurrentActionSet(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class USteamProInput Function GetCurrentActionSet

// Begin Class USteamProInput Function GetDeviceBindingRevision
struct Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics
{
	struct SteamProInput_eventGetDeviceBindingRevision_Parms
	{
		FInputHandle Handle;
		int32 Major;
		int32 Minor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get's the major and minor device binding revisions for Steam Input API configurations. Minor revisions are for small changes such as adding a new option action or updating localization in the configuration. When updating a Minor revision only one new configuration needs to be update with the \"Use Action Block\" flag set. Major revisions are to be used when changing the number of action sets or otherwise reworking configurations to the degree that older configurations are no longer usable. When a user's binding disagree's with the major revision of the current official configuration Steam will forcibly update the user to the new configuration. New configurations will need to be made for every controller when updating the Major revision.\n\x09*\n\x09* @param\x09Handle\x09\x09The Handle of the controller to query.\n\x09* @param\x09Major\x09\x09Pointer to int that Major binding revision will be populated into\n\x09* @param\x09Minor\x09\x09Pointer to int that Minor binding revision will be populated into\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get's the major and minor device binding revisions for Steam Input API configurations. Minor revisions are for small changes such as adding a new option action or updating localization in the configuration. When updating a Minor revision only one new configuration needs to be update with the \"Use Action Block\" flag set. Major revisions are to be used when changing the number of action sets or otherwise reworking configurations to the degree that older configurations are no longer usable. When a user's binding disagree's with the major revision of the current official configuration Steam will forcibly update the user to the new configuration. New configurations will need to be made for every controller when updating the Major revision.\n\n@param        Handle          The Handle of the controller to query.\n@param        Major           Pointer to int that Major binding revision will be populated into\n@param        Minor           Pointer to int that Minor binding revision will be populated into" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Major;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Minor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetDeviceBindingRevision_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::NewProp_Major = { "Major", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetDeviceBindingRevision_Parms, Major), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::NewProp_Minor = { "Minor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetDeviceBindingRevision_Parms, Minor), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInput_eventGetDeviceBindingRevision_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInput_eventGetDeviceBindingRevision_Parms), &Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::NewProp_Major,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::NewProp_Minor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetDeviceBindingRevision", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::SteamProInput_eventGetDeviceBindingRevision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::SteamProInput_eventGetDeviceBindingRevision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetDeviceBindingRevision)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Major);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Minor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDeviceBindingRevision(Z_Param_Handle,Z_Param_Out_Major,Z_Param_Out_Minor);
	P_NATIVE_END;
}
// End Class USteamProInput Function GetDeviceBindingRevision

// Begin Class USteamProInput Function GetDigitalActionData
struct Z_Construct_UFunction_USteamProInput_GetDigitalActionData_Statics
{
	struct SteamProInput_eventGetDigitalActionData_Parms
	{
		FInputHandle Handle;
		FInputDigitalActionHandle DigitalActionHandle;
		FInputDigitalActionData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the current state of the supplied digital game action.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to query.\n\x09* @param\x09""DigitalActionHandle\x09\x09The Handle of the digital action you want to query.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns the current state of the supplied digital game action.\n\n@param        Handle                                  The Handle of the controller you want to query.\n@param        DigitalActionHandle             The Handle of the digital action you want to query." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DigitalActionHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetDigitalActionData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetDigitalActionData_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetDigitalActionData_Statics::NewProp_DigitalActionHandle = { "DigitalActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetDigitalActionData_Parms, DigitalActionHandle), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(0, nullptr) }; // 3302225021
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetDigitalActionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetDigitalActionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDigitalActionData, METADATA_PARAMS(0, nullptr) }; // 2571568463
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetDigitalActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetDigitalActionData_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetDigitalActionData_Statics::NewProp_DigitalActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetDigitalActionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetDigitalActionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetDigitalActionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetDigitalActionData", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetDigitalActionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetDigitalActionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetDigitalActionData_Statics::SteamProInput_eventGetDigitalActionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetDigitalActionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetDigitalActionData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetDigitalActionData_Statics::SteamProInput_eventGetDigitalActionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetDigitalActionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetDigitalActionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetDigitalActionData)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_STRUCT(FInputDigitalActionHandle,Z_Param_DigitalActionHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputDigitalActionData*)Z_Param__Result=P_THIS->GetDigitalActionData(Z_Param_Handle,Z_Param_DigitalActionHandle);
	P_NATIVE_END;
}
// End Class USteamProInput Function GetDigitalActionData

// Begin Class USteamProInput Function GetDigitalActionHandle
struct Z_Construct_UFunction_USteamProInput_GetDigitalActionHandle_Statics
{
	struct SteamProInput_eventGetDigitalActionHandle_Parms
	{
		FString PszActionName;
		FInputDigitalActionHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get the Handle of the specified digital action.\n\x09*\n\x09* @param\x09PszActionName\x09The string identifier of the digital action defined in the game's VDF file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get the Handle of the specified digital action.\n\n@param        PszActionName   The string identifier of the digital action defined in the game's VDF file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PszActionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProInput_GetDigitalActionHandle_Statics::NewProp_PszActionName = { "PszActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetDigitalActionHandle_Parms, PszActionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetDigitalActionHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetDigitalActionHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(0, nullptr) }; // 3302225021
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetDigitalActionHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetDigitalActionHandle_Statics::NewProp_PszActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetDigitalActionHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetDigitalActionHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetDigitalActionHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetDigitalActionHandle", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetDigitalActionHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetDigitalActionHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetDigitalActionHandle_Statics::SteamProInput_eventGetDigitalActionHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetDigitalActionHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetDigitalActionHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetDigitalActionHandle_Statics::SteamProInput_eventGetDigitalActionHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetDigitalActionHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetDigitalActionHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetDigitalActionHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PszActionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputDigitalActionHandle*)Z_Param__Result=P_THIS->GetDigitalActionHandle(Z_Param_PszActionName);
	P_NATIVE_END;
}
// End Class USteamProInput Function GetDigitalActionHandle

// Begin Class USteamProInput Function GetDigitalActionOrigins
struct Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics
{
	struct SteamProInput_eventGetDigitalActionOrigins_Parms
	{
		FInputHandle Handle;
		FInputActionSetHandle ActionSetHandle;
		FInputDigitalActionHandle DigitalActionHandle;
		TArray<TEnumAsByte<ESteamCoreProInputActionOrigin> > OriginsOut;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get the Origin(s) for a digital action within an action set by filling OriginsOut with EInputActionOrigin Handles. Use this to display the appropriate on-screen prompt for the action.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to query.\n\x09* @param\x09""ActionSetHandle\x09\x09\x09The Handle of the action set you want to query.\n\x09* @param\x09""DigitalActionHandle\x09\x09The Handle of the digital aciton you want to query.\n\x09* @param\x09OriginsOut\x09\x09\x09\x09""A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin Handles.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get the Origin(s) for a digital action within an action set by filling OriginsOut with EInputActionOrigin Handles. Use this to display the appropriate on-screen prompt for the action.\n\n@param        Handle                                  The Handle of the controller you want to query.\n@param        ActionSetHandle                 The Handle of the action set you want to query.\n@param        DigitalActionHandle             The Handle of the digital aciton you want to query.\n@param        OriginsOut                              A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin Handles." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DigitalActionHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OriginsOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginsOut;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetDigitalActionOrigins_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetDigitalActionOrigins_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 2790418488
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::NewProp_DigitalActionHandle = { "DigitalActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetDigitalActionOrigins_Parms, DigitalActionHandle), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(0, nullptr) }; // 3302225021
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut_Inner = { "OriginsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputActionOrigin, METADATA_PARAMS(0, nullptr) }; // 3685952530
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut = { "OriginsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetDigitalActionOrigins_Parms, OriginsOut), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3685952530
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetDigitalActionOrigins_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::NewProp_ActionSetHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::NewProp_DigitalActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetDigitalActionOrigins", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::SteamProInput_eventGetDigitalActionOrigins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::SteamProInput_eventGetDigitalActionOrigins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetDigitalActionOrigins)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
	P_GET_STRUCT(FInputDigitalActionHandle,Z_Param_DigitalActionHandle);
	P_GET_TARRAY_REF(TEnumAsByte<ESteamCoreProInputActionOrigin>,Z_Param_Out_OriginsOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDigitalActionOrigins(Z_Param_Handle,Z_Param_ActionSetHandle,Z_Param_DigitalActionHandle,Z_Param_Out_OriginsOut);
	P_NATIVE_END;
}
// End Class USteamProInput Function GetDigitalActionOrigins

// Begin Class USteamProInput Function GetGamepadIndexForController
struct Z_Construct_UFunction_USteamProInput_GetGamepadIndexForController_Statics
{
	struct SteamProInput_eventGetGamepadIndexForController_Parms
	{
		FInputHandle Handle;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the associated gamepad index for the specified controller, if emulating a gamepad.\n\x09*\n\x09* @param\x09Handle\x09\x09The Handle of the controller you want to get a gamepad index for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns the associated gamepad index for the specified controller, if emulating a gamepad.\n\n@param        Handle          The Handle of the controller you want to get a gamepad index for." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetGamepadIndexForController_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetGamepadIndexForController_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInput_GetGamepadIndexForController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetGamepadIndexForController_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetGamepadIndexForController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetGamepadIndexForController_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetGamepadIndexForController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetGamepadIndexForController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetGamepadIndexForController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetGamepadIndexForController", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetGamepadIndexForController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetGamepadIndexForController_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetGamepadIndexForController_Statics::SteamProInput_eventGetGamepadIndexForController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetGamepadIndexForController_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetGamepadIndexForController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetGamepadIndexForController_Statics::SteamProInput_eventGetGamepadIndexForController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetGamepadIndexForController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetGamepadIndexForController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetGamepadIndexForController)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetGamepadIndexForController(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class USteamProInput Function GetGamepadIndexForController

// Begin Class USteamProInput Function GetGlyphForActionOrigin_Legacy
struct Z_Construct_UFunction_USteamProInput_GetGlyphForActionOrigin_Legacy_Statics
{
	struct SteamProInput_eventGetGlyphForActionOrigin_Legacy_Parms
	{
		TEnumAsByte<ESteamCoreProInputActionOrigin> Origin;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get a local path to art for on-screen glyph for a particular Origin.\n\x09*\n\x09* @param\x09Origin\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get a local path to art for on-screen glyph for a particular Origin.\n\n@param        Origin" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_GetGlyphForActionOrigin_Legacy_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetGlyphForActionOrigin_Legacy_Parms, Origin), Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputActionOrigin, METADATA_PARAMS(0, nullptr) }; // 3685952530
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProInput_GetGlyphForActionOrigin_Legacy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetGlyphForActionOrigin_Legacy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetGlyphForActionOrigin_Legacy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetGlyphForActionOrigin_Legacy_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetGlyphForActionOrigin_Legacy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetGlyphForActionOrigin_Legacy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetGlyphForActionOrigin_Legacy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetGlyphForActionOrigin_Legacy", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetGlyphForActionOrigin_Legacy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetGlyphForActionOrigin_Legacy_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetGlyphForActionOrigin_Legacy_Statics::SteamProInput_eventGetGlyphForActionOrigin_Legacy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetGlyphForActionOrigin_Legacy_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetGlyphForActionOrigin_Legacy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetGlyphForActionOrigin_Legacy_Statics::SteamProInput_eventGetGlyphForActionOrigin_Legacy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetGlyphForActionOrigin_Legacy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetGlyphForActionOrigin_Legacy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetGlyphForActionOrigin_Legacy)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Origin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetGlyphForActionOrigin_Legacy(ESteamCoreProInputActionOrigin(Z_Param_Origin));
	P_NATIVE_END;
}
// End Class USteamProInput Function GetGlyphForActionOrigin_Legacy

// Begin Class USteamProInput Function GetGlyphForXboxOrigin
struct Z_Construct_UFunction_USteamProInput_GetGlyphForXboxOrigin_Statics
{
	struct SteamProInput_eventGetGlyphForXboxOrigin_Parms
	{
		ESteamCoreProXboxOrigin Origin;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\x09*\n\x09* @param\x09Origin\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\n@param        Origin" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetGlyphForXboxOrigin_Parms, Origin), Z_Construct_UEnum_SteamCorePro_ESteamCoreProXboxOrigin, METADATA_PARAMS(0, nullptr) }; // 3735483929
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProInput_GetGlyphForXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetGlyphForXboxOrigin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetGlyphForXboxOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetGlyphForXboxOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetGlyphForXboxOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetGlyphForXboxOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetGlyphForXboxOrigin", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetGlyphForXboxOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetGlyphForXboxOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetGlyphForXboxOrigin_Statics::SteamProInput_eventGetGlyphForXboxOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetGlyphForXboxOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetGlyphForXboxOrigin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetGlyphForXboxOrigin_Statics::SteamProInput_eventGetGlyphForXboxOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetGlyphForXboxOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetGlyphForXboxOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetGlyphForXboxOrigin)
{
	P_GET_ENUM(ESteamCoreProXboxOrigin,Z_Param_Origin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetGlyphForXboxOrigin(ESteamCoreProXboxOrigin(Z_Param_Origin));
	P_NATIVE_END;
}
// End Class USteamProInput Function GetGlyphForXboxOrigin

// Begin Class USteamProInput Function GetInputTypeForHandle
struct Z_Construct_UFunction_USteamProInput_GetInputTypeForHandle_Statics
{
	struct SteamProInput_eventGetInputTypeForHandle_Parms
	{
		FInputHandle Handle;
		ESteamCoreProInputType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the input type (device model) for the specified controller. This tells you if a given controller is a Steam controller, XBox 360 controller, PS4 controller, etc. For more details, see Steam's Supported Controller Database.\n\x09*\n\x09* @param\x09Handle\x09The Handle of the controller whose input type (device model) you want to query\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns the input type (device model) for the specified controller. This tells you if a given controller is a Steam controller, XBox 360 controller, PS4 controller, etc. For more details, see Steam's Supported Controller Database.\n\n@param        Handle  The Handle of the controller whose input type (device model) you want to query" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetInputTypeForHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetInputTypeForHandle_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetInputTypeForHandle_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputType, METADATA_PARAMS(0, nullptr) }; // 3147720343
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetInputTypeForHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetInputTypeForHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetInputTypeForHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetInputTypeForHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetInputTypeForHandle", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetInputTypeForHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetInputTypeForHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetInputTypeForHandle_Statics::SteamProInput_eventGetInputTypeForHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetInputTypeForHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetInputTypeForHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetInputTypeForHandle_Statics::SteamProInput_eventGetInputTypeForHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetInputTypeForHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetInputTypeForHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetInputTypeForHandle)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamCoreProInputType*)Z_Param__Result=P_THIS->GetInputTypeForHandle(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class USteamProInput Function GetInputTypeForHandle

// Begin Class USteamProInput Function GetMotionData
struct Z_Construct_UFunction_USteamProInput_GetMotionData_Statics
{
	struct SteamProInput_eventGetMotionData_Parms
	{
		FInputHandle Handle;
		FInputMotionData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns raw motion data for the specified controller.\n\x09*\n\x09* @param\x09Handle\x09The Handle of the controller you want to get motion data for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns raw motion data for the specified controller.\n\n@param        Handle  The Handle of the controller you want to get motion data for." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetMotionData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetMotionData_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetMotionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetMotionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputMotionData, METADATA_PARAMS(0, nullptr) }; // 2136145932
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetMotionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetMotionData_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetMotionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetMotionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetMotionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetMotionData", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetMotionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetMotionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetMotionData_Statics::SteamProInput_eventGetMotionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetMotionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetMotionData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetMotionData_Statics::SteamProInput_eventGetMotionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetMotionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetMotionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetMotionData)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputMotionData*)Z_Param__Result=P_THIS->GetMotionData(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class USteamProInput Function GetMotionData

// Begin Class USteamProInput Function GetRemotePlaySessionID
struct Z_Construct_UFunction_USteamProInput_GetRemotePlaySessionID_Statics
{
	struct SteamProInput_eventGetRemotePlaySessionID_Parms
	{
		FInputHandle Handle;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions\n\x09*\n\x09* @param\x09Handle The Handle of the controller to query.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions\n\n@param        Handle The Handle of the controller to query." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetRemotePlaySessionID_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetRemotePlaySessionID_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProInput_GetRemotePlaySessionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetRemotePlaySessionID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetRemotePlaySessionID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetRemotePlaySessionID_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetRemotePlaySessionID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetRemotePlaySessionID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetRemotePlaySessionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetRemotePlaySessionID", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetRemotePlaySessionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetRemotePlaySessionID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetRemotePlaySessionID_Statics::SteamProInput_eventGetRemotePlaySessionID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetRemotePlaySessionID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetRemotePlaySessionID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetRemotePlaySessionID_Statics::SteamProInput_eventGetRemotePlaySessionID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetRemotePlaySessionID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetRemotePlaySessionID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetRemotePlaySessionID)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRemotePlaySessionID(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class USteamProInput Function GetRemotePlaySessionID

// Begin Class USteamProInput Function GetSessionInputConfigurationSettings
struct Z_Construct_UFunction_USteamProInput_GetSessionInputConfigurationSettings_Statics
{
	struct SteamProInput_eventGetSessionInputConfigurationSettings_Parms
	{
		TArray<ESteamCoreInputConfigurationEnableType> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09 * Get a bitmask of the Steam Input Configuration types opted in for the current session. Returns ESteamInputConfigurationEnableType values.?\n\x09 * Note: user can override the settings from the Steamworks Partner site so the returned values may not exactly match your default configuration\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get a bitmask of the Steam Input Configuration types opted in for the current session. Returns ESteamInputConfigurationEnableType values.?\nNote: user can override the settings from the Steamworks Partner site so the returned values may not exactly match your default configuration" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_GetSessionInputConfigurationSettings_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProInput_GetSessionInputConfigurationSettings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCorePro_ESteamCoreInputConfigurationEnableType, METADATA_PARAMS(0, nullptr) }; // 3385079232
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProInput_GetSessionInputConfigurationSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetSessionInputConfigurationSettings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3385079232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetSessionInputConfigurationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetSessionInputConfigurationSettings_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetSessionInputConfigurationSettings_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetSessionInputConfigurationSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetSessionInputConfigurationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetSessionInputConfigurationSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetSessionInputConfigurationSettings", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetSessionInputConfigurationSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetSessionInputConfigurationSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetSessionInputConfigurationSettings_Statics::SteamProInput_eventGetSessionInputConfigurationSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetSessionInputConfigurationSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetSessionInputConfigurationSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetSessionInputConfigurationSettings_Statics::SteamProInput_eventGetSessionInputConfigurationSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetSessionInputConfigurationSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetSessionInputConfigurationSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetSessionInputConfigurationSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ESteamCoreInputConfigurationEnableType>*)Z_Param__Result=USteamProInput::GetSessionInputConfigurationSettings();
	P_NATIVE_END;
}
// End Class USteamProInput Function GetSessionInputConfigurationSettings

// Begin Class USteamProInput Function GetSteamInput
struct Z_Construct_UFunction_USteamProInput_GetSteamInput_Statics
{
	struct SteamProInput_eventGetSteamInput_Parms
	{
		USteamProInput* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProInput_GetSteamInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetSteamInput_Parms, ReturnValue), Z_Construct_UClass_USteamProInput_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetSteamInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetSteamInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetSteamInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetSteamInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetSteamInput", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetSteamInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetSteamInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetSteamInput_Statics::SteamProInput_eventGetSteamInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetSteamInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetSteamInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetSteamInput_Statics::SteamProInput_eventGetSteamInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetSteamInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetSteamInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetSteamInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProInput**)Z_Param__Result=USteamProInput::GetSteamInput();
	P_NATIVE_END;
}
// End Class USteamProInput Function GetSteamInput

// Begin Class USteamProInput Function GetStringForActionOrigin
struct Z_Construct_UFunction_USteamProInput_GetStringForActionOrigin_Statics
{
	struct SteamProInput_eventGetStringForActionOrigin_Parms
	{
		TEnumAsByte<ESteamCoreProInputActionOrigin> Origin;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns a localized string (from Steam's language setting) for the specified Origin.\n\x09*\n\x09* @param\x09Origin\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns a localized string (from Steam's language setting) for the specified Origin.\n\n@param        Origin" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_GetStringForActionOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetStringForActionOrigin_Parms, Origin), Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputActionOrigin, METADATA_PARAMS(0, nullptr) }; // 3685952530
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProInput_GetStringForActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetStringForActionOrigin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetStringForActionOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetStringForActionOrigin_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetStringForActionOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetStringForActionOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetStringForActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetStringForActionOrigin", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetStringForActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetStringForActionOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetStringForActionOrigin_Statics::SteamProInput_eventGetStringForActionOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetStringForActionOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetStringForActionOrigin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetStringForActionOrigin_Statics::SteamProInput_eventGetStringForActionOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetStringForActionOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetStringForActionOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetStringForActionOrigin)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Origin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStringForActionOrigin(ESteamCoreProInputActionOrigin(Z_Param_Origin));
	P_NATIVE_END;
}
// End Class USteamProInput Function GetStringForActionOrigin

// Begin Class USteamProInput Function GetStringForAnalogActionName
struct Z_Construct_UFunction_USteamProInput_GetStringForAnalogActionName_Statics
{
	struct SteamProInput_eventGetStringForAnalogActionName_Parms
	{
		FInputAnalogActionHandle ActionHandle;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09 * Returns a localized string (from Steam's language setting) for the user-facing action name corresponding to the specified handle\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns a localized string (from Steam's language setting) for the user-facing action name corresponding to the specified handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetStringForAnalogActionName_Statics::NewProp_ActionHandle = { "ActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetStringForAnalogActionName_Parms, ActionHandle), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(0, nullptr) }; // 4029593120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProInput_GetStringForAnalogActionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetStringForAnalogActionName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetStringForAnalogActionName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetStringForAnalogActionName_Statics::NewProp_ActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetStringForAnalogActionName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetStringForAnalogActionName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetStringForAnalogActionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetStringForAnalogActionName", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetStringForAnalogActionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetStringForAnalogActionName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetStringForAnalogActionName_Statics::SteamProInput_eventGetStringForAnalogActionName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetStringForAnalogActionName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetStringForAnalogActionName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetStringForAnalogActionName_Statics::SteamProInput_eventGetStringForAnalogActionName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetStringForAnalogActionName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetStringForAnalogActionName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetStringForAnalogActionName)
{
	P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_ActionHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProInput::GetStringForAnalogActionName(Z_Param_ActionHandle);
	P_NATIVE_END;
}
// End Class USteamProInput Function GetStringForAnalogActionName

// Begin Class USteamProInput Function GetStringForDigitalActionName
struct Z_Construct_UFunction_USteamProInput_GetStringForDigitalActionName_Statics
{
	struct SteamProInput_eventGetStringForDigitalActionName_Parms
	{
		FInputDigitalActionHandle ActionHandle;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09 * Returns a localized string (from Steam's language setting) for the user-facing action name corresponding to the specified handle\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns a localized string (from Steam's language setting) for the user-facing action name corresponding to the specified handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_GetStringForDigitalActionName_Statics::NewProp_ActionHandle = { "ActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetStringForDigitalActionName_Parms, ActionHandle), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(0, nullptr) }; // 3302225021
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProInput_GetStringForDigitalActionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetStringForDigitalActionName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetStringForDigitalActionName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetStringForDigitalActionName_Statics::NewProp_ActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetStringForDigitalActionName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetStringForDigitalActionName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetStringForDigitalActionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetStringForDigitalActionName", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetStringForDigitalActionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetStringForDigitalActionName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetStringForDigitalActionName_Statics::SteamProInput_eventGetStringForDigitalActionName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetStringForDigitalActionName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetStringForDigitalActionName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetStringForDigitalActionName_Statics::SteamProInput_eventGetStringForDigitalActionName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetStringForDigitalActionName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetStringForDigitalActionName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetStringForDigitalActionName)
{
	P_GET_STRUCT(FInputDigitalActionHandle,Z_Param_ActionHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProInput::GetStringForDigitalActionName(Z_Param_ActionHandle);
	P_NATIVE_END;
}
// End Class USteamProInput Function GetStringForDigitalActionName

// Begin Class USteamProInput Function GetStringForXboxOrigin
struct Z_Construct_UFunction_USteamProInput_GetStringForXboxOrigin_Statics
{
	struct SteamProInput_eventGetStringForXboxOrigin_Parms
	{
		ESteamCoreProXboxOrigin Origin;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\x09*\n\x09* @param\x09Origin\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\n@param        Origin" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_GetStringForXboxOrigin_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProInput_GetStringForXboxOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetStringForXboxOrigin_Parms, Origin), Z_Construct_UEnum_SteamCorePro_ESteamCoreProXboxOrigin, METADATA_PARAMS(0, nullptr) }; // 3735483929
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProInput_GetStringForXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventGetStringForXboxOrigin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_GetStringForXboxOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetStringForXboxOrigin_Statics::NewProp_Origin_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetStringForXboxOrigin_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_GetStringForXboxOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetStringForXboxOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_GetStringForXboxOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "GetStringForXboxOrigin", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_GetStringForXboxOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetStringForXboxOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_GetStringForXboxOrigin_Statics::SteamProInput_eventGetStringForXboxOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_GetStringForXboxOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_GetStringForXboxOrigin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_GetStringForXboxOrigin_Statics::SteamProInput_eventGetStringForXboxOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_GetStringForXboxOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_GetStringForXboxOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execGetStringForXboxOrigin)
{
	P_GET_ENUM(ESteamCoreProXboxOrigin,Z_Param_Origin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStringForXboxOrigin(ESteamCoreProXboxOrigin(Z_Param_Origin));
	P_NATIVE_END;
}
// End Class USteamProInput Function GetStringForXboxOrigin

// Begin Class USteamProInput Function Init
struct Z_Construct_UFunction_USteamProInput_Init_Statics
{
	struct SteamProInput_eventInit_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "// Init and Shutdown must be called when starting/ending use of this interface\n" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Init and Shutdown must be called when starting/ending use of this interface" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProInput_Init_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInput_eventInit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInput_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInput_eventInit_Parms), &Z_Construct_UFunction_USteamProInput_Init_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_Init_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_Init_Statics::SteamProInput_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_Init_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_Init_Statics::SteamProInput_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Init();
	P_NATIVE_END;
}
// End Class USteamProInput Function Init

// Begin Class USteamProInput Function Legacy_TriggerHapticPulse
struct Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse_Statics
{
	struct SteamProInput_eventLegacy_TriggerHapticPulse_Parms
	{
		FInputHandle Handle;
		ESteamCoreProControllerPad TargetPad;
		uint8 DurationMicroSec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Triggers a (low-level) haptic pulse on supported controllers.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The Handle of the controller to affect.\n\x09* @param\x09TargetPad\x09\x09\x09Which haptic touch pad to affect.\n\x09* @param\x09""DurationMicroSec\x09""Duration of the pulse, in microseconds (1/1,000,000th of a second)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Triggers a (low-level) haptic pulse on supported controllers.\n\n@param        Handle                          The Handle of the controller to affect.\n@param        TargetPad                       Which haptic touch pad to affect.\n@param        DurationMicroSec        Duration of the pulse, in microseconds (1/1,000,000th of a second)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetPad_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetPad;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DurationMicroSec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventLegacy_TriggerHapticPulse_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse_Statics::NewProp_TargetPad_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse_Statics::NewProp_TargetPad = { "TargetPad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventLegacy_TriggerHapticPulse_Parms, TargetPad), Z_Construct_UEnum_SteamCorePro_ESteamCoreProControllerPad, METADATA_PARAMS(0, nullptr) }; // 3556313679
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse_Statics::NewProp_DurationMicroSec = { "DurationMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventLegacy_TriggerHapticPulse_Parms, DurationMicroSec), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse_Statics::NewProp_TargetPad_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse_Statics::NewProp_TargetPad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse_Statics::NewProp_DurationMicroSec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "Legacy_TriggerHapticPulse", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse_Statics::SteamProInput_eventLegacy_TriggerHapticPulse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse_Statics::SteamProInput_eventLegacy_TriggerHapticPulse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execLegacy_TriggerHapticPulse)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_ENUM(ESteamCoreProControllerPad,Z_Param_TargetPad);
	P_GET_PROPERTY(FByteProperty,Z_Param_DurationMicroSec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Legacy_TriggerHapticPulse(Z_Param_Handle,ESteamCoreProControllerPad(Z_Param_TargetPad),Z_Param_DurationMicroSec);
	P_NATIVE_END;
}
// End Class USteamProInput Function Legacy_TriggerHapticPulse

// Begin Class USteamProInput Function Legacy_TriggerRepeatedHapticPulse
struct Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics
{
	struct SteamProInput_eventLegacy_TriggerRepeatedHapticPulse_Parms
	{
		FInputHandle Handle;
		ESteamCoreProControllerPad TargetPad;
		uint8 DurationMicroSec;
		uint8 OffMicroSec;
		uint8 Repeat;
		uint8 Flags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Triggers a repeated haptic pulse on supported controllers.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The Handle of the controller to affect.\n\x09* @param\x09TargetPad\x09\x09\x09Which haptic touch pad to affect.\n\x09* @param\x09""DurationMicroSec\x09""Duration of the pulse, in microseconds (1/1,000,000th of a second).\n\x09* @param\x09OffMicroSec\x09\x09\x09""Duration of the pause between pulses, in microseconds.\n\x09* @param\x09Repeat\x09\x09\x09\x09Number of times to repeat the usDurationMicroSec / usOffMicroSec duty cycle.\n\x09* @param\x09""Flags\x09\x09\x09\x09""Currently unused and reserved for future use.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Triggers a repeated haptic pulse on supported controllers.\n\n@param        Handle                          The Handle of the controller to affect.\n@param        TargetPad                       Which haptic touch pad to affect.\n@param        DurationMicroSec        Duration of the pulse, in microseconds (1/1,000,000th of a second).\n@param        OffMicroSec                     Duration of the pause between pulses, in microseconds.\n@param        Repeat                          Number of times to repeat the usDurationMicroSec / usOffMicroSec duty cycle.\n@param        Flags                           Currently unused and reserved for future use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetPad_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetPad;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DurationMicroSec;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OffMicroSec;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Repeat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventLegacy_TriggerRepeatedHapticPulse_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad = { "TargetPad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventLegacy_TriggerRepeatedHapticPulse_Parms, TargetPad), Z_Construct_UEnum_SteamCorePro_ESteamCoreProControllerPad, METADATA_PARAMS(0, nullptr) }; // 3556313679
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_DurationMicroSec = { "DurationMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventLegacy_TriggerRepeatedHapticPulse_Parms, DurationMicroSec), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_OffMicroSec = { "OffMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventLegacy_TriggerRepeatedHapticPulse_Parms, OffMicroSec), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventLegacy_TriggerRepeatedHapticPulse_Parms, Repeat), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventLegacy_TriggerRepeatedHapticPulse_Parms, Flags), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_DurationMicroSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_OffMicroSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_Repeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "Legacy_TriggerRepeatedHapticPulse", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::SteamProInput_eventLegacy_TriggerRepeatedHapticPulse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::SteamProInput_eventLegacy_TriggerRepeatedHapticPulse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execLegacy_TriggerRepeatedHapticPulse)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_ENUM(ESteamCoreProControllerPad,Z_Param_TargetPad);
	P_GET_PROPERTY(FByteProperty,Z_Param_DurationMicroSec);
	P_GET_PROPERTY(FByteProperty,Z_Param_OffMicroSec);
	P_GET_PROPERTY(FByteProperty,Z_Param_Repeat);
	P_GET_PROPERTY(FByteProperty,Z_Param_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Legacy_TriggerRepeatedHapticPulse(Z_Param_Handle,ESteamCoreProControllerPad(Z_Param_TargetPad),Z_Param_DurationMicroSec,Z_Param_OffMicroSec,Z_Param_Repeat,Z_Param_Flags);
	P_NATIVE_END;
}
// End Class USteamProInput Function Legacy_TriggerRepeatedHapticPulse

// Begin Class USteamProInput Function SetDualSenseTriggerEffect
struct Z_Construct_UFunction_USteamProInput_SetDualSenseTriggerEffect_Statics
{
	struct SteamProInput_eventSetDualSenseTriggerEffect_Parms
	{
		FInputHandle InputHandle;
		FScePadTriggerEffectCommand R2;
		FScePadTriggerEffectCommand L2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09 * Set the trigger effect for a DualSense controller\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Set the trigger effect for a DualSense controller" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_R2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_L2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_SetDualSenseTriggerEffect_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventSetDualSenseTriggerEffect_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_SetDualSenseTriggerEffect_Statics::NewProp_R2 = { "R2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventSetDualSenseTriggerEffect_Parms, R2), Z_Construct_UScriptStruct_FScePadTriggerEffectCommand, METADATA_PARAMS(0, nullptr) }; // 950609966
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_SetDualSenseTriggerEffect_Statics::NewProp_L2 = { "L2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventSetDualSenseTriggerEffect_Parms, L2), Z_Construct_UScriptStruct_FScePadTriggerEffectCommand, METADATA_PARAMS(0, nullptr) }; // 950609966
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_SetDualSenseTriggerEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_SetDualSenseTriggerEffect_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_SetDualSenseTriggerEffect_Statics::NewProp_R2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_SetDualSenseTriggerEffect_Statics::NewProp_L2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_SetDualSenseTriggerEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_SetDualSenseTriggerEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "SetDualSenseTriggerEffect", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_SetDualSenseTriggerEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_SetDualSenseTriggerEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_SetDualSenseTriggerEffect_Statics::SteamProInput_eventSetDualSenseTriggerEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_SetDualSenseTriggerEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_SetDualSenseTriggerEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_SetDualSenseTriggerEffect_Statics::SteamProInput_eventSetDualSenseTriggerEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_SetDualSenseTriggerEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_SetDualSenseTriggerEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execSetDualSenseTriggerEffect)
{
	P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
	P_GET_STRUCT(FScePadTriggerEffectCommand,Z_Param_R2);
	P_GET_STRUCT(FScePadTriggerEffectCommand,Z_Param_L2);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProInput::SetDualSenseTriggerEffect(Z_Param_InputHandle,Z_Param_R2,Z_Param_L2);
	P_NATIVE_END;
}
// End Class USteamProInput Function SetDualSenseTriggerEffect

// Begin Class USteamProInput Function SetLEDColor
struct Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics
{
	struct SteamProInput_eventSetLEDColor_Parms
	{
		FInputHandle Handle;
		uint8 ColorR;
		uint8 ColorG;
		uint8 ColorB;
		ESteamCoreProInputLEDFlag Flags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Set the controller LED color on supported controllers.\n\x09*\n\x09* @param\x09Handle\x09\x09The Handle of the controller to affect.\n\x09* @param\x09""ColorR\x09\x09The red component of the color to set (0-255).\n\x09* @param\x09""ColorG\x09\x09The green component of the color to set (0-255).\n\x09* @param\x09""ColorB\x09\x09The blue component of the color to set (0-255).\n\x09* @param\x09""Flags\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Set the controller LED color on supported controllers.\n\n@param        Handle          The Handle of the controller to affect.\n@param        ColorR          The red component of the color to set (0-255).\n@param        ColorG          The green component of the color to set (0-255).\n@param        ColorB          The blue component of the color to set (0-255).\n@param        Flags" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorR;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorG;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorB;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventSetLEDColor_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::NewProp_ColorR = { "ColorR", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventSetLEDColor_Parms, ColorR), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::NewProp_ColorG = { "ColorG", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventSetLEDColor_Parms, ColorG), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::NewProp_ColorB = { "ColorB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventSetLEDColor_Parms, ColorB), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventSetLEDColor_Parms, Flags), Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputLEDFlag, METADATA_PARAMS(0, nullptr) }; // 887432845
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::NewProp_ColorR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::NewProp_ColorG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::NewProp_ColorB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::NewProp_Flags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "SetLEDColor", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::SteamProInput_eventSetLEDColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::SteamProInput_eventSetLEDColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_SetLEDColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_SetLEDColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execSetLEDColor)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_PROPERTY(FByteProperty,Z_Param_ColorR);
	P_GET_PROPERTY(FByteProperty,Z_Param_ColorG);
	P_GET_PROPERTY(FByteProperty,Z_Param_ColorB);
	P_GET_ENUM(ESteamCoreProInputLEDFlag,Z_Param_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLEDColor(Z_Param_Handle,Z_Param_ColorR,Z_Param_ColorG,Z_Param_ColorB,ESteamCoreProInputLEDFlag(Z_Param_Flags));
	P_NATIVE_END;
}
// End Class USteamProInput Function SetLEDColor

// Begin Class USteamProInput Function ShowBindingPanel
struct Z_Construct_UFunction_USteamProInput_ShowBindingPanel_Statics
{
	struct SteamProInput_eventShowBindingPanel_Parms
	{
		FInputHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Invokes the Steam overlay and brings up the binding screen.\n\x09*\n\x09* @param\x09Handle\x09The Handle of the controller you want to bring up the binding screen for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Invokes the Steam overlay and brings up the binding screen.\n\n@param        Handle  The Handle of the controller you want to bring up the binding screen for." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_ShowBindingPanel_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventShowBindingPanel_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
void Z_Construct_UFunction_USteamProInput_ShowBindingPanel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInput_eventShowBindingPanel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInput_ShowBindingPanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInput_eventShowBindingPanel_Parms), &Z_Construct_UFunction_USteamProInput_ShowBindingPanel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_ShowBindingPanel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_ShowBindingPanel_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_ShowBindingPanel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_ShowBindingPanel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_ShowBindingPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "ShowBindingPanel", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_ShowBindingPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_ShowBindingPanel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_ShowBindingPanel_Statics::SteamProInput_eventShowBindingPanel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_ShowBindingPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_ShowBindingPanel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_ShowBindingPanel_Statics::SteamProInput_eventShowBindingPanel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_ShowBindingPanel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_ShowBindingPanel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execShowBindingPanel)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShowBindingPanel(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class USteamProInput Function ShowBindingPanel

// Begin Class USteamProInput Function Shutdown
struct Z_Construct_UFunction_USteamProInput_Shutdown_Statics
{
	struct SteamProInput_eventShutdown_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "// Init and Shutdown must be called when starting/ending use of this interface\n" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Init and Shutdown must be called when starting/ending use of this interface" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProInput_Shutdown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProInput_eventShutdown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProInput_Shutdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProInput_eventShutdown_Parms), &Z_Construct_UFunction_USteamProInput_Shutdown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_Shutdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_Shutdown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_Shutdown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "Shutdown", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_Shutdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_Shutdown_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_Shutdown_Statics::SteamProInput_eventShutdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_Shutdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_Shutdown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_Shutdown_Statics::SteamProInput_eventShutdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_Shutdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_Shutdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execShutdown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Shutdown();
	P_NATIVE_END;
}
// End Class USteamProInput Function Shutdown

// Begin Class USteamProInput Function StopAnalogActionMomentum
struct Z_Construct_UFunction_USteamProInput_StopAnalogActionMomentum_Statics
{
	struct SteamProInput_eventStopAnalogActionMomentum_Parms
	{
		FInputHandle Handle;
		FInputAnalogActionHandle EAction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Stops the momentum of an analog action (where applicable, ie a touchpad w/ virtual trackball settings).\n\x09*\n\x09* @param\x09Handle\x09\x09The Handle of the controller to affect.\n\x09* @param\x09""EAction\x09\x09The analog action to stop momentum for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Stops the momentum of an analog action (where applicable, ie a touchpad w/ virtual trackball settings).\n\n@param        Handle          The Handle of the controller to affect.\n@param        EAction         The analog action to stop momentum for." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_StopAnalogActionMomentum_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventStopAnalogActionMomentum_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_StopAnalogActionMomentum_Statics::NewProp_EAction = { "EAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventStopAnalogActionMomentum_Parms, EAction), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(0, nullptr) }; // 4029593120
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_StopAnalogActionMomentum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_StopAnalogActionMomentum_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_StopAnalogActionMomentum_Statics::NewProp_EAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_StopAnalogActionMomentum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_StopAnalogActionMomentum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "StopAnalogActionMomentum", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_StopAnalogActionMomentum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_StopAnalogActionMomentum_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_StopAnalogActionMomentum_Statics::SteamProInput_eventStopAnalogActionMomentum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_StopAnalogActionMomentum_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_StopAnalogActionMomentum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_StopAnalogActionMomentum_Statics::SteamProInput_eventStopAnalogActionMomentum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_StopAnalogActionMomentum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_StopAnalogActionMomentum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execStopAnalogActionMomentum)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_EAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAnalogActionMomentum(Z_Param_Handle,Z_Param_EAction);
	P_NATIVE_END;
}
// End Class USteamProInput Function StopAnalogActionMomentum

// Begin Class USteamProInput Function TranslateActionOrigin
struct Z_Construct_UFunction_USteamProInput_TranslateActionOrigin_Statics
{
	struct SteamProInput_eventTranslateActionOrigin_Parms
	{
		ESteamCoreProInputType DestinationInputType;
		TEnumAsByte<ESteamCoreProInputActionOrigin> SourceOrigin;
		TEnumAsByte<ESteamCoreProInputActionOrigin> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Convert an Origin to another controller type - for inputs not present on the other controller type this will return k_EInputActionOrigin_None\n\x09*\n\x09* When a new input type is added you will be able to pass in k_ESteamInputType_Unknown and the closest Origin that your version of the SDK recognized will be returned\n\x09* ex: if a Playstation 5 controller was released this function would return Playstation 4 Origins.\n\x09*\n\x09* @param\x09""DestinationInputType\n\x09* @param\x09SourceOrigin\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Convert an Origin to another controller type - for inputs not present on the other controller type this will return k_EInputActionOrigin_None\n\nWhen a new input type is added you will be able to pass in k_ESteamInputType_Unknown and the closest Origin that your version of the SDK recognized will be returned\nex: if a Playstation 5 controller was released this function would return Playstation 4 Origins.\n\n@param        DestinationInputType\n@param        SourceOrigin" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestinationInputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DestinationInputType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOrigin;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType = { "DestinationInputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventTranslateActionOrigin_Parms, DestinationInputType), Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputType, METADATA_PARAMS(0, nullptr) }; // 3147720343
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_TranslateActionOrigin_Statics::NewProp_SourceOrigin = { "SourceOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventTranslateActionOrigin_Parms, SourceOrigin), Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputActionOrigin, METADATA_PARAMS(0, nullptr) }; // 3685952530
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_TranslateActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventTranslateActionOrigin_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamCoreProInputActionOrigin, METADATA_PARAMS(0, nullptr) }; // 3685952530
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_TranslateActionOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_TranslateActionOrigin_Statics::NewProp_SourceOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_TranslateActionOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_TranslateActionOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_TranslateActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "TranslateActionOrigin", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_TranslateActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_TranslateActionOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_TranslateActionOrigin_Statics::SteamProInput_eventTranslateActionOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_TranslateActionOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_TranslateActionOrigin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_TranslateActionOrigin_Statics::SteamProInput_eventTranslateActionOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_TranslateActionOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_TranslateActionOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execTranslateActionOrigin)
{
	P_GET_ENUM(ESteamCoreProInputType,Z_Param_DestinationInputType);
	P_GET_PROPERTY(FByteProperty,Z_Param_SourceOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESteamCoreProInputActionOrigin>*)Z_Param__Result=P_THIS->TranslateActionOrigin(ESteamCoreProInputType(Z_Param_DestinationInputType),ESteamCoreProInputActionOrigin(Z_Param_SourceOrigin));
	P_NATIVE_END;
}
// End Class USteamProInput Function TranslateActionOrigin

// Begin Class USteamProInput Function TriggerVibration
struct Z_Construct_UFunction_USteamProInput_TriggerVibration_Statics
{
	struct SteamProInput_eventTriggerVibration_Parms
	{
		FInputHandle Handle;
		uint8 LeftSpeed;
		uint8 RightSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Trigger a vibration event on supported controllers.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The Handle of the controller to affect.\n\x09* @param\x09LeftSpeed\x09\x09The intensity value for the left rumble motor.\n\x09* @param\x09RightSpeed\x09\x09The intensity value of the right rumble motor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Trigger a vibration event on supported controllers.\n\n@param        Handle                  The Handle of the controller to affect.\n@param        LeftSpeed               The intensity value for the left rumble motor.\n@param        RightSpeed              The intensity value of the right rumble motor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeftSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RightSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProInput_TriggerVibration_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventTriggerVibration_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 66676253
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_TriggerVibration_Statics::NewProp_LeftSpeed = { "LeftSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventTriggerVibration_Parms, LeftSpeed), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProInput_TriggerVibration_Statics::NewProp_RightSpeed = { "RightSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProInput_eventTriggerVibration_Parms, RightSpeed), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProInput_TriggerVibration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_TriggerVibration_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_TriggerVibration_Statics::NewProp_LeftSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProInput_TriggerVibration_Statics::NewProp_RightSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_TriggerVibration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProInput_TriggerVibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProInput, nullptr, "TriggerVibration", nullptr, nullptr, Z_Construct_UFunction_USteamProInput_TriggerVibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_TriggerVibration_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProInput_TriggerVibration_Statics::SteamProInput_eventTriggerVibration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProInput_TriggerVibration_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProInput_TriggerVibration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProInput_TriggerVibration_Statics::SteamProInput_eventTriggerVibration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProInput_TriggerVibration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProInput_TriggerVibration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProInput::execTriggerVibration)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_PROPERTY(FByteProperty,Z_Param_LeftSpeed);
	P_GET_PROPERTY(FByteProperty,Z_Param_RightSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerVibration(Z_Param_Handle,Z_Param_LeftSpeed,Z_Param_RightSpeed);
	P_NATIVE_END;
}
// End Class USteamProInput Function TriggerVibration

// Begin Class USteamProInput
void USteamProInput::StaticRegisterNativesUSteamProInput()
{
	UClass* Class = USteamProInput::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateActionSet", &USteamProInput::execActivateActionSet },
		{ "ActivateActionSetLayer", &USteamProInput::execActivateActionSetLayer },
		{ "BNewDataAvailable", &USteamProInput::execBNewDataAvailable },
		{ "BWaitForData", &USteamProInput::execBWaitForData },
		{ "DeactivateActionSetLayer", &USteamProInput::execDeactivateActionSetLayer },
		{ "DeactivateAllActionSetLayers", &USteamProInput::execDeactivateAllActionSetLayers },
		{ "GetActionOriginFromXboxOrigin", &USteamProInput::execGetActionOriginFromXboxOrigin },
		{ "GetActionSetHandle", &USteamProInput::execGetActionSetHandle },
		{ "GetActiveActionSetLayers", &USteamProInput::execGetActiveActionSetLayers },
		{ "GetAnalogActionData", &USteamProInput::execGetAnalogActionData },
		{ "GetAnalogActionHandle", &USteamProInput::execGetAnalogActionHandle },
		{ "GetAnalogActionOrigins", &USteamProInput::execGetAnalogActionOrigins },
		{ "GetConnectedControllers", &USteamProInput::execGetConnectedControllers },
		{ "GetControllerForGamepadIndex", &USteamProInput::execGetControllerForGamepadIndex },
		{ "GetCurrentActionSet", &USteamProInput::execGetCurrentActionSet },
		{ "GetDeviceBindingRevision", &USteamProInput::execGetDeviceBindingRevision },
		{ "GetDigitalActionData", &USteamProInput::execGetDigitalActionData },
		{ "GetDigitalActionHandle", &USteamProInput::execGetDigitalActionHandle },
		{ "GetDigitalActionOrigins", &USteamProInput::execGetDigitalActionOrigins },
		{ "GetGamepadIndexForController", &USteamProInput::execGetGamepadIndexForController },
		{ "GetGlyphForActionOrigin_Legacy", &USteamProInput::execGetGlyphForActionOrigin_Legacy },
		{ "GetGlyphForXboxOrigin", &USteamProInput::execGetGlyphForXboxOrigin },
		{ "GetInputTypeForHandle", &USteamProInput::execGetInputTypeForHandle },
		{ "GetMotionData", &USteamProInput::execGetMotionData },
		{ "GetRemotePlaySessionID", &USteamProInput::execGetRemotePlaySessionID },
		{ "GetSessionInputConfigurationSettings", &USteamProInput::execGetSessionInputConfigurationSettings },
		{ "GetSteamInput", &USteamProInput::execGetSteamInput },
		{ "GetStringForActionOrigin", &USteamProInput::execGetStringForActionOrigin },
		{ "GetStringForAnalogActionName", &USteamProInput::execGetStringForAnalogActionName },
		{ "GetStringForDigitalActionName", &USteamProInput::execGetStringForDigitalActionName },
		{ "GetStringForXboxOrigin", &USteamProInput::execGetStringForXboxOrigin },
		{ "Init", &USteamProInput::execInit },
		{ "Legacy_TriggerHapticPulse", &USteamProInput::execLegacy_TriggerHapticPulse },
		{ "Legacy_TriggerRepeatedHapticPulse", &USteamProInput::execLegacy_TriggerRepeatedHapticPulse },
		{ "SetDualSenseTriggerEffect", &USteamProInput::execSetDualSenseTriggerEffect },
		{ "SetLEDColor", &USteamProInput::execSetLEDColor },
		{ "ShowBindingPanel", &USteamProInput::execShowBindingPanel },
		{ "Shutdown", &USteamProInput::execShutdown },
		{ "StopAnalogActionMomentum", &USteamProInput::execStopAnalogActionMomentum },
		{ "TranslateActionOrigin", &USteamProInput::execTranslateActionOrigin },
		{ "TriggerVibration", &USteamProInput::execTriggerVibration },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProInput);
UClass* Z_Construct_UClass_USteamProInput_NoRegister()
{
	return USteamProInput::StaticClass();
}
struct Z_Construct_UClass_USteamProInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamInput/SteamInput.h" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProInput_ActivateActionSet, "ActivateActionSet" }, // 3832315501
		{ &Z_Construct_UFunction_USteamProInput_ActivateActionSetLayer, "ActivateActionSetLayer" }, // 1313239771
		{ &Z_Construct_UFunction_USteamProInput_BNewDataAvailable, "BNewDataAvailable" }, // 208558265
		{ &Z_Construct_UFunction_USteamProInput_BWaitForData, "BWaitForData" }, // 2390467896
		{ &Z_Construct_UFunction_USteamProInput_DeactivateActionSetLayer, "DeactivateActionSetLayer" }, // 42448074
		{ &Z_Construct_UFunction_USteamProInput_DeactivateAllActionSetLayers, "DeactivateAllActionSetLayers" }, // 2170434421
		{ &Z_Construct_UFunction_USteamProInput_GetActionOriginFromXboxOrigin, "GetActionOriginFromXboxOrigin" }, // 2351241388
		{ &Z_Construct_UFunction_USteamProInput_GetActionSetHandle, "GetActionSetHandle" }, // 1756441298
		{ &Z_Construct_UFunction_USteamProInput_GetActiveActionSetLayers, "GetActiveActionSetLayers" }, // 2378750795
		{ &Z_Construct_UFunction_USteamProInput_GetAnalogActionData, "GetAnalogActionData" }, // 3672857598
		{ &Z_Construct_UFunction_USteamProInput_GetAnalogActionHandle, "GetAnalogActionHandle" }, // 62920331
		{ &Z_Construct_UFunction_USteamProInput_GetAnalogActionOrigins, "GetAnalogActionOrigins" }, // 1228670530
		{ &Z_Construct_UFunction_USteamProInput_GetConnectedControllers, "GetConnectedControllers" }, // 226803921
		{ &Z_Construct_UFunction_USteamProInput_GetControllerForGamepadIndex, "GetControllerForGamepadIndex" }, // 973878455
		{ &Z_Construct_UFunction_USteamProInput_GetCurrentActionSet, "GetCurrentActionSet" }, // 3448635267
		{ &Z_Construct_UFunction_USteamProInput_GetDeviceBindingRevision, "GetDeviceBindingRevision" }, // 289663914
		{ &Z_Construct_UFunction_USteamProInput_GetDigitalActionData, "GetDigitalActionData" }, // 904795977
		{ &Z_Construct_UFunction_USteamProInput_GetDigitalActionHandle, "GetDigitalActionHandle" }, // 4148442539
		{ &Z_Construct_UFunction_USteamProInput_GetDigitalActionOrigins, "GetDigitalActionOrigins" }, // 3018093323
		{ &Z_Construct_UFunction_USteamProInput_GetGamepadIndexForController, "GetGamepadIndexForController" }, // 2522325858
		{ &Z_Construct_UFunction_USteamProInput_GetGlyphForActionOrigin_Legacy, "GetGlyphForActionOrigin_Legacy" }, // 2289563203
		{ &Z_Construct_UFunction_USteamProInput_GetGlyphForXboxOrigin, "GetGlyphForXboxOrigin" }, // 1284358878
		{ &Z_Construct_UFunction_USteamProInput_GetInputTypeForHandle, "GetInputTypeForHandle" }, // 904290588
		{ &Z_Construct_UFunction_USteamProInput_GetMotionData, "GetMotionData" }, // 3620257654
		{ &Z_Construct_UFunction_USteamProInput_GetRemotePlaySessionID, "GetRemotePlaySessionID" }, // 3210777439
		{ &Z_Construct_UFunction_USteamProInput_GetSessionInputConfigurationSettings, "GetSessionInputConfigurationSettings" }, // 1830415249
		{ &Z_Construct_UFunction_USteamProInput_GetSteamInput, "GetSteamInput" }, // 1125035858
		{ &Z_Construct_UFunction_USteamProInput_GetStringForActionOrigin, "GetStringForActionOrigin" }, // 3867869536
		{ &Z_Construct_UFunction_USteamProInput_GetStringForAnalogActionName, "GetStringForAnalogActionName" }, // 3079542020
		{ &Z_Construct_UFunction_USteamProInput_GetStringForDigitalActionName, "GetStringForDigitalActionName" }, // 884820560
		{ &Z_Construct_UFunction_USteamProInput_GetStringForXboxOrigin, "GetStringForXboxOrigin" }, // 12813522
		{ &Z_Construct_UFunction_USteamProInput_Init, "Init" }, // 2561199699
		{ &Z_Construct_UFunction_USteamProInput_Legacy_TriggerHapticPulse, "Legacy_TriggerHapticPulse" }, // 3842463212
		{ &Z_Construct_UFunction_USteamProInput_Legacy_TriggerRepeatedHapticPulse, "Legacy_TriggerRepeatedHapticPulse" }, // 1405186046
		{ &Z_Construct_UFunction_USteamProInput_SetDualSenseTriggerEffect, "SetDualSenseTriggerEffect" }, // 146812216
		{ &Z_Construct_UFunction_USteamProInput_SetLEDColor, "SetLEDColor" }, // 386981131
		{ &Z_Construct_UFunction_USteamProInput_ShowBindingPanel, "ShowBindingPanel" }, // 2629714674
		{ &Z_Construct_UFunction_USteamProInput_Shutdown, "Shutdown" }, // 3711803591
		{ &Z_Construct_UFunction_USteamProInput_StopAnalogActionMomentum, "StopAnalogActionMomentum" }, // 651323437
		{ &Z_Construct_UFunction_USteamProInput_TranslateActionOrigin, "TranslateActionOrigin" }, // 1269482358
		{ &Z_Construct_UFunction_USteamProInput_TriggerVibration, "TriggerVibration" }, // 1774787714
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamProInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProInput_Statics::ClassParams = {
	&USteamProInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProInput_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProInput()
{
	if (!Z_Registration_Info_UClass_USteamProInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProInput.OuterSingleton, Z_Construct_UClass_USteamProInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProInput.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProInput>()
{
	return USteamProInput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProInput);
// End Class USteamProInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInput_SteamInput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProInput, USteamProInput::StaticClass, TEXT("USteamProInput"), &Z_Registration_Info_UClass_USteamProInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProInput), 3986876348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInput_SteamInput_h_19989090(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInput_SteamInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInput_SteamInput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
