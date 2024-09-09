// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCCore/Public/Actors/GMCPlayerController.h"
#include "GMCCore/Public/Replication/Smoothing.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMCPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
GMCCORE_API UClass* Z_Construct_UClass_AGMC_Aggregator_NoRegister();
GMCCORE_API UClass* Z_Construct_UClass_AGMC_PlayerController();
GMCCORE_API UClass* Z_Construct_UClass_AGMC_PlayerController_NoRegister();
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket();
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket();
UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References

// Begin Class AGMC_PlayerController Function CL_GetAverageTimeDiscrepancy
struct Z_Construct_UFunction_AGMC_PlayerController_CL_GetAverageTimeDiscrepancy_Statics
{
	struct GMC_PlayerController_eventCL_GetAverageTimeDiscrepancy_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the average time discrepancy of the client that was calculated during the last time sync. If the value is greater/smaller than 0 the client is\n/// estimated to be behind/ahead.\n///\n/// @returns      double    The current estimated time discrepancy of the client.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCPlayerController.h" },
		{ "ToolTip", "Returns the average time discrepancy of the client that was calculated during the last time sync. If the value is greater/smaller than 0 the client is\nestimated to be behind/ahead.\n\n@returns      double    The current estimated time discrepancy of the client." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AGMC_PlayerController_CL_GetAverageTimeDiscrepancy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayerController_eventCL_GetAverageTimeDiscrepancy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_PlayerController_CL_GetAverageTimeDiscrepancy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_PlayerController_CL_GetAverageTimeDiscrepancy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_CL_GetAverageTimeDiscrepancy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_PlayerController_CL_GetAverageTimeDiscrepancy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_PlayerController, nullptr, "CL_GetAverageTimeDiscrepancy", nullptr, nullptr, Z_Construct_UFunction_AGMC_PlayerController_CL_GetAverageTimeDiscrepancy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_CL_GetAverageTimeDiscrepancy_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_PlayerController_CL_GetAverageTimeDiscrepancy_Statics::GMC_PlayerController_eventCL_GetAverageTimeDiscrepancy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_CL_GetAverageTimeDiscrepancy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_PlayerController_CL_GetAverageTimeDiscrepancy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_PlayerController_CL_GetAverageTimeDiscrepancy_Statics::GMC_PlayerController_eventCL_GetAverageTimeDiscrepancy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_PlayerController_CL_GetAverageTimeDiscrepancy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_PlayerController_CL_GetAverageTimeDiscrepancy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_PlayerController::execCL_GetAverageTimeDiscrepancy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->CL_GetAverageTimeDiscrepancy();
	P_NATIVE_END;
}
// End Class AGMC_PlayerController Function CL_GetAverageTimeDiscrepancy

// Begin Class AGMC_PlayerController Function CL_GetSyncedWorldTimeSeconds
struct Z_Construct_UFunction_AGMC_PlayerController_CL_GetSyncedWorldTimeSeconds_Statics
{
	struct GMC_PlayerController_eventCL_GetSyncedWorldTimeSeconds_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the synchronised server world time for a client. Considers network delay meaning the returned value will be nearly the same as the world time on\n/// the server at any given moment.\n///\n/// @returns      double    The current synchronised server world time.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCPlayerController.h" },
		{ "ToolTip", "Returns the synchronised server world time for a client. Considers network delay meaning the returned value will be nearly the same as the world time on\nthe server at any given moment.\n\n@returns      double    The current synchronised server world time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AGMC_PlayerController_CL_GetSyncedWorldTimeSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayerController_eventCL_GetSyncedWorldTimeSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_PlayerController_CL_GetSyncedWorldTimeSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_PlayerController_CL_GetSyncedWorldTimeSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_CL_GetSyncedWorldTimeSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_PlayerController_CL_GetSyncedWorldTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_PlayerController, nullptr, "CL_GetSyncedWorldTimeSeconds", nullptr, nullptr, Z_Construct_UFunction_AGMC_PlayerController_CL_GetSyncedWorldTimeSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_CL_GetSyncedWorldTimeSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_PlayerController_CL_GetSyncedWorldTimeSeconds_Statics::GMC_PlayerController_eventCL_GetSyncedWorldTimeSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_CL_GetSyncedWorldTimeSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_PlayerController_CL_GetSyncedWorldTimeSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_PlayerController_CL_GetSyncedWorldTimeSeconds_Statics::GMC_PlayerController_eventCL_GetSyncedWorldTimeSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_PlayerController_CL_GetSyncedWorldTimeSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_PlayerController_CL_GetSyncedWorldTimeSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_PlayerController::execCL_GetSyncedWorldTimeSeconds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->CL_GetSyncedWorldTimeSeconds();
	P_NATIVE_END;
}
// End Class AGMC_PlayerController Function CL_GetSyncedWorldTimeSeconds

// Begin Class AGMC_PlayerController Function CL_SendAdaptiveDelayParams
struct GMC_PlayerController_eventCL_SendAdaptiveDelayParams_Parms
{
	TArray<FGMC_AdaptiveDelayServerPacket> AdaptiveDelayParams;
};
static FName NAME_AGMC_PlayerController_CL_SendAdaptiveDelayParams = FName(TEXT("CL_SendAdaptiveDelayParams"));
void AGMC_PlayerController::CL_SendAdaptiveDelayParams(TArray<FGMC_AdaptiveDelayServerPacket> const& AdaptiveDelayParams)
{
	GMC_PlayerController_eventCL_SendAdaptiveDelayParams_Parms Parms;
	Parms.AdaptiveDelayParams=AdaptiveDelayParams;
	ProcessEvent(FindFunctionChecked(NAME_AGMC_PlayerController_CL_SendAdaptiveDelayParams),&Parms);
}
struct Z_Construct_UFunction_AGMC_PlayerController_CL_SendAdaptiveDelayParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/// Informs the client about new parameters when using an adaptive simulation delay for interpolation.\n///\n/// @param        AdaptiveDelayParams    All new adaptive delay parameters that should be applied.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCPlayerController.h" },
		{ "ToolTip", "Informs the client about new parameters when using an adaptive simulation delay for interpolation.\n\n@param        AdaptiveDelayParams    All new adaptive delay parameters that should be applied.\n@returns      void" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdaptiveDelayParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdaptiveDelayParams_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdaptiveDelayParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_PlayerController_CL_SendAdaptiveDelayParams_Statics::NewProp_AdaptiveDelayParams_Inner = { "AdaptiveDelayParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket, METADATA_PARAMS(0, nullptr) }; // 284842785
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGMC_PlayerController_CL_SendAdaptiveDelayParams_Statics::NewProp_AdaptiveDelayParams = { "AdaptiveDelayParams", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayerController_eventCL_SendAdaptiveDelayParams_Parms, AdaptiveDelayParams), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdaptiveDelayParams_MetaData), NewProp_AdaptiveDelayParams_MetaData) }; // 284842785
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_PlayerController_CL_SendAdaptiveDelayParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_PlayerController_CL_SendAdaptiveDelayParams_Statics::NewProp_AdaptiveDelayParams_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_PlayerController_CL_SendAdaptiveDelayParams_Statics::NewProp_AdaptiveDelayParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_CL_SendAdaptiveDelayParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_PlayerController_CL_SendAdaptiveDelayParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_PlayerController, nullptr, "CL_SendAdaptiveDelayParams", nullptr, nullptr, Z_Construct_UFunction_AGMC_PlayerController_CL_SendAdaptiveDelayParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_CL_SendAdaptiveDelayParams_Statics::PropPointers), sizeof(GMC_PlayerController_eventCL_SendAdaptiveDelayParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_CL_SendAdaptiveDelayParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_PlayerController_CL_SendAdaptiveDelayParams_Statics::Function_MetaDataParams) };
static_assert(sizeof(GMC_PlayerController_eventCL_SendAdaptiveDelayParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_PlayerController_CL_SendAdaptiveDelayParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_PlayerController_CL_SendAdaptiveDelayParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_PlayerController::execCL_SendAdaptiveDelayParams)
{
	P_GET_TARRAY(FGMC_AdaptiveDelayServerPacket,Z_Param_AdaptiveDelayParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CL_SendAdaptiveDelayParams_Implementation(Z_Param_AdaptiveDelayParams);
	P_NATIVE_END;
}
// End Class AGMC_PlayerController Function CL_SendAdaptiveDelayParams

// Begin Class AGMC_PlayerController Function GetPingInMilliseconds
struct Z_Construct_UFunction_AGMC_PlayerController_GetPingInMilliseconds_Statics
{
	struct GMC_PlayerController_eventGetPingInMilliseconds_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns exact ping from the player state if available (for local players or when running on the server) or the replicated compressed ping (converted back\n/// to milliseconds) otherwise. Make sure APlayerState::bShouldUpdateReplicatedPing is set to true.\n///\n/// @returns      float    The current ping in milliseconds.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCPlayerController.h" },
		{ "ToolTip", "Returns exact ping from the player state if available (for local players or when running on the server) or the replicated compressed ping (converted back\nto milliseconds) otherwise. Make sure APlayerState::bShouldUpdateReplicatedPing is set to true.\n\n@returns      float    The current ping in milliseconds." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGMC_PlayerController_GetPingInMilliseconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayerController_eventGetPingInMilliseconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_PlayerController_GetPingInMilliseconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_PlayerController_GetPingInMilliseconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_GetPingInMilliseconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_PlayerController_GetPingInMilliseconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_PlayerController, nullptr, "GetPingInMilliseconds", nullptr, nullptr, Z_Construct_UFunction_AGMC_PlayerController_GetPingInMilliseconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_GetPingInMilliseconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_PlayerController_GetPingInMilliseconds_Statics::GMC_PlayerController_eventGetPingInMilliseconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_GetPingInMilliseconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_PlayerController_GetPingInMilliseconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_PlayerController_GetPingInMilliseconds_Statics::GMC_PlayerController_eventGetPingInMilliseconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_PlayerController_GetPingInMilliseconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_PlayerController_GetPingInMilliseconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_PlayerController::execGetPingInMilliseconds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPingInMilliseconds();
	P_NATIVE_END;
}
// End Class AGMC_PlayerController Function GetPingInMilliseconds

// Begin Class AGMC_PlayerController Function GetRefNonPlayerPawn
struct Z_Construct_UFunction_AGMC_PlayerController_GetRefNonPlayerPawn_Statics
{
	struct GMC_PlayerController_eventGetRefNonPlayerPawn_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the non-player pawn that is currently being used to calculate the adaptive delay parameters. Only relevant when bCullNonPlayerServerPawnParams is\n/// enabled.\n///\n/// @returns      APawn*    The pawn that is being used to calculate the adaptive delay parameters for all non-player pawns.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCPlayerController.h" },
		{ "ToolTip", "Returns the non-player pawn that is currently being used to calculate the adaptive delay parameters. Only relevant when bCullNonPlayerServerPawnParams is\nenabled.\n\n@returns      APawn*    The pawn that is being used to calculate the adaptive delay parameters for all non-player pawns." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_PlayerController_GetRefNonPlayerPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayerController_eventGetRefNonPlayerPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_PlayerController_GetRefNonPlayerPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_PlayerController_GetRefNonPlayerPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_GetRefNonPlayerPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_PlayerController_GetRefNonPlayerPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_PlayerController, nullptr, "GetRefNonPlayerPawn", nullptr, nullptr, Z_Construct_UFunction_AGMC_PlayerController_GetRefNonPlayerPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_GetRefNonPlayerPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_PlayerController_GetRefNonPlayerPawn_Statics::GMC_PlayerController_eventGetRefNonPlayerPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_GetRefNonPlayerPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_PlayerController_GetRefNonPlayerPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_PlayerController_GetRefNonPlayerPawn_Statics::GMC_PlayerController_eventGetRefNonPlayerPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_PlayerController_GetRefNonPlayerPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_PlayerController_GetRefNonPlayerPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_PlayerController::execGetRefNonPlayerPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetRefNonPlayerPawn();
	P_NATIVE_END;
}
// End Class AGMC_PlayerController Function GetRefNonPlayerPawn

// Begin Class AGMC_PlayerController Function ManualUpdateCamera
struct GMC_PlayerController_eventManualUpdateCamera_Parms
{
	float DeltaTime;
};
static FName NAME_AGMC_PlayerController_ManualUpdateCamera = FName(TEXT("ManualUpdateCamera"));
void AGMC_PlayerController::ManualUpdateCamera(float DeltaTime)
{
	GMC_PlayerController_eventManualUpdateCamera_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	ProcessEvent(FindFunctionChecked(NAME_AGMC_PlayerController_ManualUpdateCamera),&Parms);
}
struct Z_Construct_UFunction_AGMC_PlayerController_ManualUpdateCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called to perform the camera manager update if it was deferred previously.\n///\n/// @param        DeltaTime    The current frame delta time.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCPlayerController.h" },
		{ "ToolTip", "Called to perform the camera manager update if it was deferred previously.\n\n@param        DeltaTime    The current frame delta time.\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGMC_PlayerController_ManualUpdateCamera_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayerController_eventManualUpdateCamera_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_PlayerController_ManualUpdateCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_PlayerController_ManualUpdateCamera_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_ManualUpdateCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_PlayerController_ManualUpdateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_PlayerController, nullptr, "ManualUpdateCamera", nullptr, nullptr, Z_Construct_UFunction_AGMC_PlayerController_ManualUpdateCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_ManualUpdateCamera_Statics::PropPointers), sizeof(GMC_PlayerController_eventManualUpdateCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_ManualUpdateCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_PlayerController_ManualUpdateCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(GMC_PlayerController_eventManualUpdateCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_PlayerController_ManualUpdateCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_PlayerController_ManualUpdateCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_PlayerController::execManualUpdateCamera)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ManualUpdateCamera_Implementation(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class AGMC_PlayerController Function ManualUpdateCamera

// Begin Class AGMC_PlayerController Function SV_OnPawnLeavingGame
static FName NAME_AGMC_PlayerController_SV_OnPawnLeavingGame = FName(TEXT("SV_OnPawnLeavingGame"));
void AGMC_PlayerController::SV_OnPawnLeavingGame()
{
	ProcessEvent(FindFunctionChecked(NAME_AGMC_PlayerController_SV_OnPawnLeavingGame),NULL);
}
struct Z_Construct_UFunction_AGMC_PlayerController_SV_OnPawnLeavingGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called on the server when a pawn's controlling player is leaving the game. The base implementation destroys the pawn.\n///\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCPlayerController.h" },
		{ "ToolTip", "Called on the server when a pawn's controlling player is leaving the game. The base implementation destroys the pawn.\n\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_PlayerController_SV_OnPawnLeavingGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_PlayerController, nullptr, "SV_OnPawnLeavingGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_SV_OnPawnLeavingGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_PlayerController_SV_OnPawnLeavingGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGMC_PlayerController_SV_OnPawnLeavingGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_PlayerController_SV_OnPawnLeavingGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_PlayerController::execSV_OnPawnLeavingGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SV_OnPawnLeavingGame_Implementation();
	P_NATIVE_END;
}
// End Class AGMC_PlayerController Function SV_OnPawnLeavingGame

// Begin Class AGMC_PlayerController Function SV_RequestAdaptiveDelayBufferTime
struct GMC_PlayerController_eventSV_RequestAdaptiveDelayBufferTime_Parms
{
	FGMC_AdaptiveDelayClientPacket NewBufferTime;
};
static FName NAME_AGMC_PlayerController_SV_RequestAdaptiveDelayBufferTime = FName(TEXT("SV_RequestAdaptiveDelayBufferTime"));
void AGMC_PlayerController::SV_RequestAdaptiveDelayBufferTime(FGMC_AdaptiveDelayClientPacket const& NewBufferTime) const
{
	GMC_PlayerController_eventSV_RequestAdaptiveDelayBufferTime_Parms Parms;
	Parms.NewBufferTime=NewBufferTime;
	const_cast<AGMC_PlayerController*>(this)->ProcessEvent(FindFunctionChecked(NAME_AGMC_PlayerController_SV_RequestAdaptiveDelayBufferTime),&Parms);
}
struct Z_Construct_UFunction_AGMC_PlayerController_SV_RequestAdaptiveDelayBufferTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/// Requests a new buffer time for the client's adaptive delay.\n///\n/// @param        NewBufferTime    The new buffer time that the client is requesting.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCPlayerController.h" },
		{ "ToolTip", "Requests a new buffer time for the client's adaptive delay.\n\n@param        NewBufferTime    The new buffer time that the client is requesting.\n@returns      void" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewBufferTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewBufferTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_PlayerController_SV_RequestAdaptiveDelayBufferTime_Statics::NewProp_NewBufferTime = { "NewBufferTime", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayerController_eventSV_RequestAdaptiveDelayBufferTime_Parms, NewBufferTime), Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewBufferTime_MetaData), NewProp_NewBufferTime_MetaData) }; // 1021100360
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_PlayerController_SV_RequestAdaptiveDelayBufferTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_PlayerController_SV_RequestAdaptiveDelayBufferTime_Statics::NewProp_NewBufferTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_SV_RequestAdaptiveDelayBufferTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_PlayerController_SV_RequestAdaptiveDelayBufferTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_PlayerController, nullptr, "SV_RequestAdaptiveDelayBufferTime", nullptr, nullptr, Z_Construct_UFunction_AGMC_PlayerController_SV_RequestAdaptiveDelayBufferTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_SV_RequestAdaptiveDelayBufferTime_Statics::PropPointers), sizeof(GMC_PlayerController_eventSV_RequestAdaptiveDelayBufferTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0xC0220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_SV_RequestAdaptiveDelayBufferTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_PlayerController_SV_RequestAdaptiveDelayBufferTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(GMC_PlayerController_eventSV_RequestAdaptiveDelayBufferTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_PlayerController_SV_RequestAdaptiveDelayBufferTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_PlayerController_SV_RequestAdaptiveDelayBufferTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_PlayerController::execSV_RequestAdaptiveDelayBufferTime)
{
	P_GET_STRUCT(FGMC_AdaptiveDelayClientPacket,Z_Param_NewBufferTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->SV_RequestAdaptiveDelayBufferTime_Validate(Z_Param_NewBufferTime))
	{
		RPC_ValidateFailed(TEXT("SV_RequestAdaptiveDelayBufferTime_Validate"));
		return;
	}
	P_THIS->SV_RequestAdaptiveDelayBufferTime_Implementation(Z_Param_NewBufferTime);
	P_NATIVE_END;
}
// End Class AGMC_PlayerController Function SV_RequestAdaptiveDelayBufferTime

// Begin Class AGMC_PlayerController Function WasCameraManagerUpdateDeferred
struct Z_Construct_UFunction_AGMC_PlayerController_WasCameraManagerUpdateDeferred_Statics
{
	struct GMC_PlayerController_eventWasCameraManagerUpdateDeferred_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The camera manager update is usually deferred to ensure the correct camera view for the player in all situations.\n///\n/// @returns      bool    True if the camera manager update was deferred, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCPlayerController.h" },
		{ "ToolTip", "The camera manager update is usually deferred to ensure the correct camera view for the player in all situations.\n\n@returns      bool    True if the camera manager update was deferred, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGMC_PlayerController_WasCameraManagerUpdateDeferred_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GMC_PlayerController_eventWasCameraManagerUpdateDeferred_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGMC_PlayerController_WasCameraManagerUpdateDeferred_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_PlayerController_eventWasCameraManagerUpdateDeferred_Parms), &Z_Construct_UFunction_AGMC_PlayerController_WasCameraManagerUpdateDeferred_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_PlayerController_WasCameraManagerUpdateDeferred_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_PlayerController_WasCameraManagerUpdateDeferred_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_WasCameraManagerUpdateDeferred_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_PlayerController_WasCameraManagerUpdateDeferred_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_PlayerController, nullptr, "WasCameraManagerUpdateDeferred", nullptr, nullptr, Z_Construct_UFunction_AGMC_PlayerController_WasCameraManagerUpdateDeferred_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_WasCameraManagerUpdateDeferred_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_PlayerController_WasCameraManagerUpdateDeferred_Statics::GMC_PlayerController_eventWasCameraManagerUpdateDeferred_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_PlayerController_WasCameraManagerUpdateDeferred_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_PlayerController_WasCameraManagerUpdateDeferred_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_PlayerController_WasCameraManagerUpdateDeferred_Statics::GMC_PlayerController_eventWasCameraManagerUpdateDeferred_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_PlayerController_WasCameraManagerUpdateDeferred()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_PlayerController_WasCameraManagerUpdateDeferred_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_PlayerController::execWasCameraManagerUpdateDeferred)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WasCameraManagerUpdateDeferred();
	P_NATIVE_END;
}
// End Class AGMC_PlayerController Function WasCameraManagerUpdateDeferred

// Begin Class AGMC_PlayerController
void AGMC_PlayerController::StaticRegisterNativesAGMC_PlayerController()
{
	UClass* Class = AGMC_PlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CL_GetAverageTimeDiscrepancy", &AGMC_PlayerController::execCL_GetAverageTimeDiscrepancy },
		{ "CL_GetSyncedWorldTimeSeconds", &AGMC_PlayerController::execCL_GetSyncedWorldTimeSeconds },
		{ "CL_SendAdaptiveDelayParams", &AGMC_PlayerController::execCL_SendAdaptiveDelayParams },
		{ "GetPingInMilliseconds", &AGMC_PlayerController::execGetPingInMilliseconds },
		{ "GetRefNonPlayerPawn", &AGMC_PlayerController::execGetRefNonPlayerPawn },
		{ "ManualUpdateCamera", &AGMC_PlayerController::execManualUpdateCamera },
		{ "SV_OnPawnLeavingGame", &AGMC_PlayerController::execSV_OnPawnLeavingGame },
		{ "SV_RequestAdaptiveDelayBufferTime", &AGMC_PlayerController::execSV_RequestAdaptiveDelayBufferTime },
		{ "WasCameraManagerUpdateDeferred", &AGMC_PlayerController::execWasCameraManagerUpdateDeferred },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGMC_PlayerController);
UClass* Z_Construct_UClass_AGMC_PlayerController_NoRegister()
{
	return AGMC_PlayerController::StaticClass();
}
struct Z_Construct_UClass_AGMC_PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// Player controller class intended to be used with UGMC_MovementReplicationComponent.\n" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Actors/GMCPlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actors/GMCPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Player controller class intended to be used with UGMC_MovementReplicationComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxExpectedPing_MetaData[] = {
		{ "Category", "Client Time Sync" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The max ping that a client is expected to have (in seconds). This is not enforced but if a client has a higher ping than this the local world time will\n/// desync which can create all sorts of problems. Do not set this arbitrarily high or low, it is recommended to leave this at the default value.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCPlayerController.h" },
		{ "ToolTip", "The max ping that a client is expected to have (in seconds). This is not enforced but if a client has a higher ping than this the local world time will\ndesync which can create all sorts of problems. Do not set this arbitrarily high or low, it is recommended to leave this at the default value." },
		{ "UIMax", "1" },
		{ "UIMin", "0.05" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxClientTimeDifferenceHardLimit_MetaData[] = {
		{ "Category", "Client Time Sync" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The maximum acceptable difference in seconds between the local client world time and the authoritative server world time. Syncing (i.e. overwriting) the\n/// local time with the server time can create inconsistencies for consecutive timestamps which can cause stutter for the client.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCPlayerController.h" },
		{ "ToolTip", "The maximum acceptable difference in seconds between the local client world time and the authoritative server world time. Syncing (i.e. overwriting) the\nlocal time with the server time can create inconsistencies for consecutive timestamps which can cause stutter for the client." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxClientTimeDifferenceSoftLimit_MetaData[] = {
		{ "Category", "Client Time Sync" },
		{ "ClampMin", "0" },
		{ "Comment", "/// If the difference in seconds between the local client world time and the authoritative server world time exceeds this threshold the client time will be\n/// adjusted towards the server time by increasing or shortening the local delta time value for the next update. This will prevent inconsistencies in the\n/// client time while still reducing the time deviation. Regardless of the configured value, the lower bound for the soft limit is always the current frame\n/// delta time.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCPlayerController.h" },
		{ "ToolTip", "If the difference in seconds between the local client world time and the authoritative server world time exceeds this threshold the client time will be\nadjusted towards the server time by increasing or shortening the local delta time value for the next update. This will prevent inconsistencies in the\nclient time while still reducing the time deviation. Regardless of the configured value, the lower bound for the soft limit is always the current frame\ndelta time." },
		{ "UIMax", "0.1" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCullNonPlayerServerPawnParams_MetaData[] = {
		{ "Category", "Adaptive Delay" },
		{ "Comment", "/// If true, one adaptive delay value will be used collectively for all non-player controlled pawns (experimental).\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCPlayerController.h" },
		{ "ToolTip", "If true, one adaptive delay value will be used collectively for all non-player controlled pawns (experimental)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GMCAggregator_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Cached reference to the GMC aggregator (if present).\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCPlayerController.h" },
		{ "ToolTip", "Cached reference to the GMC aggregator (if present)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxExpectedPing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxClientTimeDifferenceHardLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxClientTimeDifferenceSoftLimit;
	static void NewProp_bCullNonPlayerServerPawnParams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCullNonPlayerServerPawnParams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GMCAggregator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGMC_PlayerController_CL_GetAverageTimeDiscrepancy, "CL_GetAverageTimeDiscrepancy" }, // 3520892302
		{ &Z_Construct_UFunction_AGMC_PlayerController_CL_GetSyncedWorldTimeSeconds, "CL_GetSyncedWorldTimeSeconds" }, // 3251061968
		{ &Z_Construct_UFunction_AGMC_PlayerController_CL_SendAdaptiveDelayParams, "CL_SendAdaptiveDelayParams" }, // 2285611929
		{ &Z_Construct_UFunction_AGMC_PlayerController_GetPingInMilliseconds, "GetPingInMilliseconds" }, // 18365764
		{ &Z_Construct_UFunction_AGMC_PlayerController_GetRefNonPlayerPawn, "GetRefNonPlayerPawn" }, // 191603960
		{ &Z_Construct_UFunction_AGMC_PlayerController_ManualUpdateCamera, "ManualUpdateCamera" }, // 4129526809
		{ &Z_Construct_UFunction_AGMC_PlayerController_SV_OnPawnLeavingGame, "SV_OnPawnLeavingGame" }, // 4063436237
		{ &Z_Construct_UFunction_AGMC_PlayerController_SV_RequestAdaptiveDelayBufferTime, "SV_RequestAdaptiveDelayBufferTime" }, // 3158456774
		{ &Z_Construct_UFunction_AGMC_PlayerController_WasCameraManagerUpdateDeferred, "WasCameraManagerUpdateDeferred" }, // 3908058958
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMC_PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGMC_PlayerController_Statics::NewProp_MaxExpectedPing = { "MaxExpectedPing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_PlayerController, MaxExpectedPing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxExpectedPing_MetaData), NewProp_MaxExpectedPing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGMC_PlayerController_Statics::NewProp_MaxClientTimeDifferenceHardLimit = { "MaxClientTimeDifferenceHardLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_PlayerController, MaxClientTimeDifferenceHardLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxClientTimeDifferenceHardLimit_MetaData), NewProp_MaxClientTimeDifferenceHardLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGMC_PlayerController_Statics::NewProp_MaxClientTimeDifferenceSoftLimit = { "MaxClientTimeDifferenceSoftLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_PlayerController, MaxClientTimeDifferenceSoftLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxClientTimeDifferenceSoftLimit_MetaData), NewProp_MaxClientTimeDifferenceSoftLimit_MetaData) };
void Z_Construct_UClass_AGMC_PlayerController_Statics::NewProp_bCullNonPlayerServerPawnParams_SetBit(void* Obj)
{
	((AGMC_PlayerController*)Obj)->bCullNonPlayerServerPawnParams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGMC_PlayerController_Statics::NewProp_bCullNonPlayerServerPawnParams = { "bCullNonPlayerServerPawnParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGMC_PlayerController), &Z_Construct_UClass_AGMC_PlayerController_Statics::NewProp_bCullNonPlayerServerPawnParams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCullNonPlayerServerPawnParams_MetaData), NewProp_bCullNonPlayerServerPawnParams_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGMC_PlayerController_Statics::NewProp_GMCAggregator = { "GMCAggregator", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_PlayerController, GMCAggregator), Z_Construct_UClass_AGMC_Aggregator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GMCAggregator_MetaData), NewProp_GMCAggregator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMC_PlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_PlayerController_Statics::NewProp_MaxExpectedPing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_PlayerController_Statics::NewProp_MaxClientTimeDifferenceHardLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_PlayerController_Statics::NewProp_MaxClientTimeDifferenceSoftLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_PlayerController_Statics::NewProp_bCullNonPlayerServerPawnParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_PlayerController_Statics::NewProp_GMCAggregator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_PlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGMC_PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGMC_PlayerController_Statics::ClassParams = {
	&AGMC_PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGMC_PlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_PlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGMC_PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGMC_PlayerController()
{
	if (!Z_Registration_Info_UClass_AGMC_PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGMC_PlayerController.OuterSingleton, Z_Construct_UClass_AGMC_PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGMC_PlayerController.OuterSingleton;
}
template<> GMCCORE_API UClass* StaticClass<AGMC_PlayerController>()
{
	return AGMC_PlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGMC_PlayerController);
AGMC_PlayerController::~AGMC_PlayerController() {}
// End Class AGMC_PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGMC_PlayerController, AGMC_PlayerController::StaticClass, TEXT("AGMC_PlayerController"), &Z_Registration_Info_UClass_AGMC_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGMC_PlayerController), 2576839390U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPlayerController_h_1837817562(TEXT("/Script/GMCCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
