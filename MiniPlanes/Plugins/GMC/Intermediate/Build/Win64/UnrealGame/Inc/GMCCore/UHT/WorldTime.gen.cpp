// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCCore/Public/Replication/WorldTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldTime() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AInfo();
GMCCORE_API UClass* Z_Construct_UClass_AGMC_WorldTimeReplicator();
GMCCORE_API UClass* Z_Construct_UClass_AGMC_WorldTimeReplicator_NoRegister();
UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References

// Begin Class AGMC_WorldTimeReplicator Function CL_OnRepRealWorldTimeSecondsReplicated
struct Z_Construct_UFunction_AGMC_WorldTimeReplicator_CL_OnRepRealWorldTimeSecondsReplicated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/// Called when the client receives an updated value for RealWorldTimeSecondsReplicated which triggers the time synchronisation process.\n///\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Replication/WorldTime.h" },
		{ "ToolTip", "Called when the client receives an updated value for RealWorldTimeSecondsReplicated which triggers the time synchronisation process.\n\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_WorldTimeReplicator_CL_OnRepRealWorldTimeSecondsReplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_WorldTimeReplicator, nullptr, "CL_OnRepRealWorldTimeSecondsReplicated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_WorldTimeReplicator_CL_OnRepRealWorldTimeSecondsReplicated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_WorldTimeReplicator_CL_OnRepRealWorldTimeSecondsReplicated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGMC_WorldTimeReplicator_CL_OnRepRealWorldTimeSecondsReplicated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_WorldTimeReplicator_CL_OnRepRealWorldTimeSecondsReplicated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_WorldTimeReplicator::execCL_OnRepRealWorldTimeSecondsReplicated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CL_OnRepRealWorldTimeSecondsReplicated();
	P_NATIVE_END;
}
// End Class AGMC_WorldTimeReplicator Function CL_OnRepRealWorldTimeSecondsReplicated

// Begin Class AGMC_WorldTimeReplicator Function GetRealWorldTimeSecondsReplicated
struct Z_Construct_UFunction_AGMC_WorldTimeReplicator_GetRealWorldTimeSecondsReplicated_Statics
{
	struct GMC_WorldTimeReplicator_eventGetRealWorldTimeSecondsReplicated_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the value of the last replicated world time value received from the server.\n///\n/// @returns      double    The replicated server world time in seconds (not dilated or paused).\n" },
		{ "ModuleRelativePath", "Public/Replication/WorldTime.h" },
		{ "ToolTip", "Returns the value of the last replicated world time value received from the server.\n\n@returns      double    The replicated server world time in seconds (not dilated or paused)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AGMC_WorldTimeReplicator_GetRealWorldTimeSecondsReplicated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_WorldTimeReplicator_eventGetRealWorldTimeSecondsReplicated_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_WorldTimeReplicator_GetRealWorldTimeSecondsReplicated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_WorldTimeReplicator_GetRealWorldTimeSecondsReplicated_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_WorldTimeReplicator_GetRealWorldTimeSecondsReplicated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_WorldTimeReplicator_GetRealWorldTimeSecondsReplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_WorldTimeReplicator, nullptr, "GetRealWorldTimeSecondsReplicated", nullptr, nullptr, Z_Construct_UFunction_AGMC_WorldTimeReplicator_GetRealWorldTimeSecondsReplicated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_WorldTimeReplicator_GetRealWorldTimeSecondsReplicated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_WorldTimeReplicator_GetRealWorldTimeSecondsReplicated_Statics::GMC_WorldTimeReplicator_eventGetRealWorldTimeSecondsReplicated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_WorldTimeReplicator_GetRealWorldTimeSecondsReplicated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_WorldTimeReplicator_GetRealWorldTimeSecondsReplicated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_WorldTimeReplicator_GetRealWorldTimeSecondsReplicated_Statics::GMC_WorldTimeReplicator_eventGetRealWorldTimeSecondsReplicated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_WorldTimeReplicator_GetRealWorldTimeSecondsReplicated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_WorldTimeReplicator_GetRealWorldTimeSecondsReplicated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_WorldTimeReplicator::execGetRealWorldTimeSecondsReplicated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetRealWorldTimeSecondsReplicated();
	P_NATIVE_END;
}
// End Class AGMC_WorldTimeReplicator Function GetRealWorldTimeSecondsReplicated

// Begin Class AGMC_WorldTimeReplicator Function SV_ResetUpdateTimer
struct Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_ResetUpdateTimer_Statics
{
	struct GMC_WorldTimeReplicator_eventSV_ResetUpdateTimer_Parms
	{
		float UpdateInterval;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Restarts the timer for periodically updating the world time on the server.\n///\n/// @param        UpdateInterval    The interval at which the timer should run.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Replication/WorldTime.h" },
		{ "ToolTip", "Restarts the timer for periodically updating the world time on the server.\n\n@param        UpdateInterval    The interval at which the timer should run.\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_ResetUpdateTimer_Statics::NewProp_UpdateInterval = { "UpdateInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_WorldTimeReplicator_eventSV_ResetUpdateTimer_Parms, UpdateInterval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_ResetUpdateTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_ResetUpdateTimer_Statics::NewProp_UpdateInterval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_ResetUpdateTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_ResetUpdateTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_WorldTimeReplicator, nullptr, "SV_ResetUpdateTimer", nullptr, nullptr, Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_ResetUpdateTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_ResetUpdateTimer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_ResetUpdateTimer_Statics::GMC_WorldTimeReplicator_eventSV_ResetUpdateTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_ResetUpdateTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_ResetUpdateTimer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_ResetUpdateTimer_Statics::GMC_WorldTimeReplicator_eventSV_ResetUpdateTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_ResetUpdateTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_ResetUpdateTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_WorldTimeReplicator::execSV_ResetUpdateTimer)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_UpdateInterval);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SV_ResetUpdateTimer(Z_Param_UpdateInterval);
	P_NATIVE_END;
}
// End Class AGMC_WorldTimeReplicator Function SV_ResetUpdateTimer

// Begin Class AGMC_WorldTimeReplicator Function SV_StartUpdateTimer
struct Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StartUpdateTimer_Statics
{
	struct GMC_WorldTimeReplicator_eventSV_StartUpdateTimer_Parms
	{
		float UpdateInterval;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Starts the timer for periodically updating the world time on the server.\n///\n/// @param        UpdateInterval    The interval at which the timer should run.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Replication/WorldTime.h" },
		{ "ToolTip", "Starts the timer for periodically updating the world time on the server.\n\n@param        UpdateInterval    The interval at which the timer should run.\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StartUpdateTimer_Statics::NewProp_UpdateInterval = { "UpdateInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_WorldTimeReplicator_eventSV_StartUpdateTimer_Parms, UpdateInterval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StartUpdateTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StartUpdateTimer_Statics::NewProp_UpdateInterval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StartUpdateTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StartUpdateTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_WorldTimeReplicator, nullptr, "SV_StartUpdateTimer", nullptr, nullptr, Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StartUpdateTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StartUpdateTimer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StartUpdateTimer_Statics::GMC_WorldTimeReplicator_eventSV_StartUpdateTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StartUpdateTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StartUpdateTimer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StartUpdateTimer_Statics::GMC_WorldTimeReplicator_eventSV_StartUpdateTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StartUpdateTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StartUpdateTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_WorldTimeReplicator::execSV_StartUpdateTimer)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_UpdateInterval);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SV_StartUpdateTimer(Z_Param_UpdateInterval);
	P_NATIVE_END;
}
// End Class AGMC_WorldTimeReplicator Function SV_StartUpdateTimer

// Begin Class AGMC_WorldTimeReplicator Function SV_StopUpdateTimer
struct Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StopUpdateTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Clears the timer for periodically updating the world time on the server.\n///\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Replication/WorldTime.h" },
		{ "ToolTip", "Clears the timer for periodically updating the world time on the server.\n\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StopUpdateTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_WorldTimeReplicator, nullptr, "SV_StopUpdateTimer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StopUpdateTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StopUpdateTimer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StopUpdateTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StopUpdateTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_WorldTimeReplicator::execSV_StopUpdateTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SV_StopUpdateTimer();
	P_NATIVE_END;
}
// End Class AGMC_WorldTimeReplicator Function SV_StopUpdateTimer

// Begin Class AGMC_WorldTimeReplicator
void AGMC_WorldTimeReplicator::StaticRegisterNativesAGMC_WorldTimeReplicator()
{
	UClass* Class = AGMC_WorldTimeReplicator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CL_OnRepRealWorldTimeSecondsReplicated", &AGMC_WorldTimeReplicator::execCL_OnRepRealWorldTimeSecondsReplicated },
		{ "GetRealWorldTimeSecondsReplicated", &AGMC_WorldTimeReplicator::execGetRealWorldTimeSecondsReplicated },
		{ "SV_ResetUpdateTimer", &AGMC_WorldTimeReplicator::execSV_ResetUpdateTimer },
		{ "SV_StartUpdateTimer", &AGMC_WorldTimeReplicator::execSV_StartUpdateTimer },
		{ "SV_StopUpdateTimer", &AGMC_WorldTimeReplicator::execSV_StopUpdateTimer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGMC_WorldTimeReplicator);
UClass* Z_Construct_UClass_AGMC_WorldTimeReplicator_NoRegister()
{
	return AGMC_WorldTimeReplicator::StaticClass();
}
struct Z_Construct_UClass_AGMC_WorldTimeReplicator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// Used in connection with AGMC_PlayerController to ensure accurate synchronisation of the server world time on the client. There should only ever be exactly\n/// one actor of this type per world.\n" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Replication/WorldTime.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Replication/WorldTime.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Used in connection with AGMC_PlayerController to ensure accurate synchronisation of the server world time on the client. There should only ever be exactly\none actor of this type per world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldTimeUpdateInterval_MetaData[] = {
		{ "Category", "Client Time Sync" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The interval in seconds at which the server world time should be replicated to the client. If changed at runtime, the update timer must be reset.\n" },
		{ "ModuleRelativePath", "Public/Replication/WorldTime.h" },
		{ "ToolTip", "The interval in seconds at which the server world time should be replicated to the client. If changed at runtime, the update timer must be reset." },
		{ "UIMax", "0.2" },
		{ "UIMin", "0.02" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealWorldTimeSecondsReplicated_MetaData[] = {
		{ "ModuleRelativePath", "Public/Replication/WorldTime.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldTimeUpdateInterval;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RealWorldTimeSecondsReplicated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGMC_WorldTimeReplicator_CL_OnRepRealWorldTimeSecondsReplicated, "CL_OnRepRealWorldTimeSecondsReplicated" }, // 1326891127
		{ &Z_Construct_UFunction_AGMC_WorldTimeReplicator_GetRealWorldTimeSecondsReplicated, "GetRealWorldTimeSecondsReplicated" }, // 1911994331
		{ &Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_ResetUpdateTimer, "SV_ResetUpdateTimer" }, // 1786820925
		{ &Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StartUpdateTimer, "SV_StartUpdateTimer" }, // 905539238
		{ &Z_Construct_UFunction_AGMC_WorldTimeReplicator_SV_StopUpdateTimer, "SV_StopUpdateTimer" }, // 1763406427
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMC_WorldTimeReplicator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGMC_WorldTimeReplicator_Statics::NewProp_WorldTimeUpdateInterval = { "WorldTimeUpdateInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_WorldTimeReplicator, WorldTimeUpdateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldTimeUpdateInterval_MetaData), NewProp_WorldTimeUpdateInterval_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AGMC_WorldTimeReplicator_Statics::NewProp_RealWorldTimeSecondsReplicated = { "RealWorldTimeSecondsReplicated", "CL_OnRepRealWorldTimeSecondsReplicated", (EPropertyFlags)0x0040000100002020, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_WorldTimeReplicator, RealWorldTimeSecondsReplicated), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealWorldTimeSecondsReplicated_MetaData), NewProp_RealWorldTimeSecondsReplicated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMC_WorldTimeReplicator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_WorldTimeReplicator_Statics::NewProp_WorldTimeUpdateInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_WorldTimeReplicator_Statics::NewProp_RealWorldTimeSecondsReplicated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_WorldTimeReplicator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGMC_WorldTimeReplicator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_WorldTimeReplicator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGMC_WorldTimeReplicator_Statics::ClassParams = {
	&AGMC_WorldTimeReplicator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGMC_WorldTimeReplicator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_WorldTimeReplicator_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_WorldTimeReplicator_Statics::Class_MetaDataParams), Z_Construct_UClass_AGMC_WorldTimeReplicator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGMC_WorldTimeReplicator()
{
	if (!Z_Registration_Info_UClass_AGMC_WorldTimeReplicator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGMC_WorldTimeReplicator.OuterSingleton, Z_Construct_UClass_AGMC_WorldTimeReplicator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGMC_WorldTimeReplicator.OuterSingleton;
}
template<> GMCCORE_API UClass* StaticClass<AGMC_WorldTimeReplicator>()
{
	return AGMC_WorldTimeReplicator::StaticClass();
}
void AGMC_WorldTimeReplicator::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_RealWorldTimeSecondsReplicated(TEXT("RealWorldTimeSecondsReplicated"));
	const bool bIsValid = true
		&& Name_RealWorldTimeSecondsReplicated == ClassReps[(int32)ENetFields_Private::RealWorldTimeSecondsReplicated].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGMC_WorldTimeReplicator"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGMC_WorldTimeReplicator);
AGMC_WorldTimeReplicator::~AGMC_WorldTimeReplicator() {}
// End Class AGMC_WorldTimeReplicator

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_WorldTime_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGMC_WorldTimeReplicator, AGMC_WorldTimeReplicator::StaticClass, TEXT("AGMC_WorldTimeReplicator"), &Z_Registration_Info_UClass_AGMC_WorldTimeReplicator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGMC_WorldTimeReplicator), 774846268U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_WorldTime_h_2751818872(TEXT("/Script/GMCCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_WorldTime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_WorldTime_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
