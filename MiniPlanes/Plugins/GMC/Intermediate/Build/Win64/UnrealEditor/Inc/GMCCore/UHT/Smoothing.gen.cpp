// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCCore/Public/Replication/Smoothing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmoothing() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETeleportType();
GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode();
GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction();
GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode();
GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates();
GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance();
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket();
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams();
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket();
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams();
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams();
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams();
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_SimulationThrottle();
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_SmoothComponentParams();
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_SmoothCorrection();
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams();
UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References

// Begin Enum EGMC_InterpolationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_InterpolationMode;
static UEnum* EGMC_InterpolationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGMC_InterpolationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGMC_InterpolationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_InterpolationMode"));
	}
	return Z_Registration_Info_UEnum_EGMC_InterpolationMode.OuterSingleton;
}
template<> GMCCORE_API UEnum* StaticEnum<EGMC_InterpolationMode>()
{
	return EGMC_InterpolationMode_StaticEnum();
}
struct Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AdaptiveDelay.Name", "EGMC_InterpolationMode::AdaptiveDelay" },
		{ "BlueprintType", "true" },
		{ "CumulativeSimulation.Name", "EGMC_InterpolationMode::CumulativeSimulation" },
		{ "FixedDelay.Name", "EGMC_InterpolationMode::FixedDelay" },
		{ "MatchLatest.Name", "EGMC_InterpolationMode::MatchLatest" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "None.Name", "EGMC_InterpolationMode::None" },
		{ "UniformSimulation.Name", "EGMC_InterpolationMode::UniformSimulation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGMC_InterpolationMode::None", (int64)EGMC_InterpolationMode::None },
		{ "EGMC_InterpolationMode::MatchLatest", (int64)EGMC_InterpolationMode::MatchLatest },
		{ "EGMC_InterpolationMode::FixedDelay", (int64)EGMC_InterpolationMode::FixedDelay },
		{ "EGMC_InterpolationMode::AdaptiveDelay", (int64)EGMC_InterpolationMode::AdaptiveDelay },
		{ "EGMC_InterpolationMode::UniformSimulation", (int64)EGMC_InterpolationMode::UniformSimulation },
		{ "EGMC_InterpolationMode::CumulativeSimulation", (int64)EGMC_InterpolationMode::CumulativeSimulation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	"EGMC_InterpolationMode",
	"EGMC_InterpolationMode",
	Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode()
{
	if (!Z_Registration_Info_UEnum_EGMC_InterpolationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_InterpolationMode.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_InterpolationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGMC_InterpolationMode.InnerSingleton;
}
// End Enum EGMC_InterpolationMode

// Begin Enum EGMC_InterpolationStates
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_InterpolationStates;
static UEnum* EGMC_InterpolationStates_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGMC_InterpolationStates.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGMC_InterpolationStates.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_InterpolationStates"));
	}
	return Z_Registration_Info_UEnum_EGMC_InterpolationStates.OuterSingleton;
}
template<> GMCCORE_API UEnum* StaticEnum<EGMC_InterpolationStates>()
{
	return EGMC_InterpolationStates_StaticEnum();
}
struct Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Input.Name", "EGMC_InterpolationStates::Input" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "Output.Name", "EGMC_InterpolationStates::Output" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGMC_InterpolationStates::Input", (int64)EGMC_InterpolationStates::Input },
		{ "EGMC_InterpolationStates::Output", (int64)EGMC_InterpolationStates::Output },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	"EGMC_InterpolationStates",
	"EGMC_InterpolationStates",
	Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates()
{
	if (!Z_Registration_Info_UEnum_EGMC_InterpolationStates.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_InterpolationStates.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGMC_InterpolationStates.InnerSingleton;
}
// End Enum EGMC_InterpolationStates

// Begin Enum EGMC_NetworkTolerance
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_NetworkTolerance;
static UEnum* EGMC_NetworkTolerance_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGMC_NetworkTolerance.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGMC_NetworkTolerance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_NetworkTolerance"));
	}
	return Z_Registration_Info_UEnum_EGMC_NetworkTolerance.OuterSingleton;
}
template<> GMCCORE_API UEnum* StaticEnum<EGMC_NetworkTolerance>()
{
	return EGMC_NetworkTolerance_StaticEnum();
}
struct Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.Name", "EGMC_NetworkTolerance::Auto" },
		{ "BlueprintType", "true" },
		{ "High.Name", "EGMC_NetworkTolerance::High" },
		{ "Low.Name", "EGMC_NetworkTolerance::Low" },
		{ "Manual.Name", "EGMC_NetworkTolerance::Manual" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "Normal.Name", "EGMC_NetworkTolerance::Normal" },
		{ "VeryHigh.Name", "EGMC_NetworkTolerance::VeryHigh" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGMC_NetworkTolerance::Auto", (int64)EGMC_NetworkTolerance::Auto },
		{ "EGMC_NetworkTolerance::Low", (int64)EGMC_NetworkTolerance::Low },
		{ "EGMC_NetworkTolerance::Normal", (int64)EGMC_NetworkTolerance::Normal },
		{ "EGMC_NetworkTolerance::High", (int64)EGMC_NetworkTolerance::High },
		{ "EGMC_NetworkTolerance::VeryHigh", (int64)EGMC_NetworkTolerance::VeryHigh },
		{ "EGMC_NetworkTolerance::Manual", (int64)EGMC_NetworkTolerance::Manual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	"EGMC_NetworkTolerance",
	"EGMC_NetworkTolerance",
	Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance()
{
	if (!Z_Registration_Info_UEnum_EGMC_NetworkTolerance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_NetworkTolerance.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_NetworkTolerance_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGMC_NetworkTolerance.InnerSingleton;
}
// End Enum EGMC_NetworkTolerance

// Begin Enum EGMC_ExtrapolationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_ExtrapolationMode;
static UEnum* EGMC_ExtrapolationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGMC_ExtrapolationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGMC_ExtrapolationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_ExtrapolationMode"));
	}
	return Z_Registration_Info_UEnum_EGMC_ExtrapolationMode.OuterSingleton;
}
template<> GMCCORE_API UEnum* StaticEnum<EGMC_ExtrapolationMode>()
{
	return EGMC_ExtrapolationMode_StaticEnum();
}
struct Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CumulativeSimulation.Name", "EGMC_ExtrapolationMode::CumulativeSimulation" },
		{ "DeadReckoning.Name", "EGMC_ExtrapolationMode::DeadReckoning" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "None.Name", "EGMC_ExtrapolationMode::None" },
		{ "UniformSimulation.Name", "EGMC_ExtrapolationMode::UniformSimulation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGMC_ExtrapolationMode::None", (int64)EGMC_ExtrapolationMode::None },
		{ "EGMC_ExtrapolationMode::DeadReckoning", (int64)EGMC_ExtrapolationMode::DeadReckoning },
		{ "EGMC_ExtrapolationMode::UniformSimulation", (int64)EGMC_ExtrapolationMode::UniformSimulation },
		{ "EGMC_ExtrapolationMode::CumulativeSimulation", (int64)EGMC_ExtrapolationMode::CumulativeSimulation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	"EGMC_ExtrapolationMode",
	"EGMC_ExtrapolationMode",
	Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode()
{
	if (!Z_Registration_Info_UEnum_EGMC_ExtrapolationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_ExtrapolationMode.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_ExtrapolationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGMC_ExtrapolationMode.InnerSingleton;
}
// End Enum EGMC_ExtrapolationMode

// Begin Enum EGMC_InterpolationFunction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_InterpolationFunction;
static UEnum* EGMC_InterpolationFunction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGMC_InterpolationFunction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGMC_InterpolationFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_InterpolationFunction"));
	}
	return Z_Registration_Info_UEnum_EGMC_InterpolationFunction.OuterSingleton;
}
template<> GMCCORE_API UEnum* StaticEnum<EGMC_InterpolationFunction>()
{
	return EGMC_InterpolationFunction_StaticEnum();
}
struct Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cubic.Name", "EGMC_InterpolationFunction::Cubic" },
		{ "Custom1.Name", "EGMC_InterpolationFunction::Custom1" },
		{ "Custom2.Name", "EGMC_InterpolationFunction::Custom2" },
		{ "Custom3.Name", "EGMC_InterpolationFunction::Custom3" },
		{ "Custom4.Name", "EGMC_InterpolationFunction::Custom4" },
		{ "Custom5.Name", "EGMC_InterpolationFunction::Custom5" },
		{ "Custom6.Name", "EGMC_InterpolationFunction::Custom6" },
		{ "Custom7.Name", "EGMC_InterpolationFunction::Custom7" },
		{ "Custom8.Name", "EGMC_InterpolationFunction::Custom8" },
		{ "Linear.Name", "EGMC_InterpolationFunction::Linear" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "NearestNeighbour.Name", "EGMC_InterpolationFunction::NearestNeighbour" },
		{ "StartValue.Name", "EGMC_InterpolationFunction::StartValue" },
		{ "TargetValue.Name", "EGMC_InterpolationFunction::TargetValue" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGMC_InterpolationFunction::NearestNeighbour", (int64)EGMC_InterpolationFunction::NearestNeighbour },
		{ "EGMC_InterpolationFunction::StartValue", (int64)EGMC_InterpolationFunction::StartValue },
		{ "EGMC_InterpolationFunction::TargetValue", (int64)EGMC_InterpolationFunction::TargetValue },
		{ "EGMC_InterpolationFunction::Linear", (int64)EGMC_InterpolationFunction::Linear },
		{ "EGMC_InterpolationFunction::Cubic", (int64)EGMC_InterpolationFunction::Cubic },
		{ "EGMC_InterpolationFunction::Custom1", (int64)EGMC_InterpolationFunction::Custom1 },
		{ "EGMC_InterpolationFunction::Custom2", (int64)EGMC_InterpolationFunction::Custom2 },
		{ "EGMC_InterpolationFunction::Custom3", (int64)EGMC_InterpolationFunction::Custom3 },
		{ "EGMC_InterpolationFunction::Custom4", (int64)EGMC_InterpolationFunction::Custom4 },
		{ "EGMC_InterpolationFunction::Custom5", (int64)EGMC_InterpolationFunction::Custom5 },
		{ "EGMC_InterpolationFunction::Custom6", (int64)EGMC_InterpolationFunction::Custom6 },
		{ "EGMC_InterpolationFunction::Custom7", (int64)EGMC_InterpolationFunction::Custom7 },
		{ "EGMC_InterpolationFunction::Custom8", (int64)EGMC_InterpolationFunction::Custom8 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	"EGMC_InterpolationFunction",
	"EGMC_InterpolationFunction",
	Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction()
{
	if (!Z_Registration_Info_UEnum_EGMC_InterpolationFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_InterpolationFunction.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_InterpolationFunction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGMC_InterpolationFunction.InnerSingleton;
}
// End Enum EGMC_InterpolationFunction

// Begin ScriptStruct FGMC_MatchLatestPersistentParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_MatchLatestPersistentParams;
class UScriptStruct* FGMC_MatchLatestPersistentParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_MatchLatestPersistentParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_MatchLatestPersistentParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_MatchLatestPersistentParams"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_MatchLatestPersistentParams.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_MatchLatestPersistentParams>()
{
	return FGMC_MatchLatestPersistentParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDeltaTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The max time delta over which the smoothing algorithm is allowed to interpolate between two server state updates.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The max time delta over which the smoothing algorithm is allowed to interpolate between two server state updates." },
		{ "UIMax", "0.2" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDeltaTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The min time delta over which the smoothing algorithm must interpolate between two server state updates.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The min time delta over which the smoothing algorithm must interpolate between two server state updates." },
		{ "UIMax", "0.1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTimeDilation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "/// Scaling factor for the time delta to interpolate over. Will be clamped to the configured min/max values.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Scaling factor for the time delta to interpolate over. Will be clamped to the configured min/max values." },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportThreshold_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "-1" },
		{ "Comment", "/// The min required distance between the interpolation states to teleport to the target state directly. Set to -1 to disable this functionality.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The min required distance between the interpolation states to teleport to the target state directly. Set to -1 to disable this functionality." },
		{ "UIMax", "2500" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpStates_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether interpolation should be based on input or output states.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether interpolation should be based on input or output states." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetStateTimestamp_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The timestamp of the interpolation target state.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The timestamp of the interpolation target state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The current simulation time.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The current simulation time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDelta_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The current target delta to move.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The current target delta to move." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimeDilation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpStates_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpStates;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TargetStateTimestamp;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SimTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_MatchLatestPersistentParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_MaxDeltaTime = { "MaxDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MatchLatestPersistentParams, MaxDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDeltaTime_MetaData), NewProp_MaxDeltaTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_MinDeltaTime = { "MinDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MatchLatestPersistentParams, MinDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDeltaTime_MetaData), NewProp_MinDeltaTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_DeltaTimeDilation = { "DeltaTimeDilation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MatchLatestPersistentParams, DeltaTimeDilation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTimeDilation_MetaData), NewProp_DeltaTimeDilation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TeleportThreshold = { "TeleportThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MatchLatestPersistentParams, TeleportThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportThreshold_MetaData), NewProp_TeleportThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_InterpStates_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_InterpStates = { "InterpStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MatchLatestPersistentParams, InterpStates), Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpStates_MetaData), NewProp_InterpStates_MetaData) }; // 1232230218
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TargetStateTimestamp = { "TargetStateTimestamp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MatchLatestPersistentParams, TargetStateTimestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetStateTimestamp_MetaData), NewProp_TargetStateTimestamp_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_SimTime = { "SimTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MatchLatestPersistentParams, SimTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimTime_MetaData), NewProp_SimTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TargetDelta = { "TargetDelta", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_MatchLatestPersistentParams, TargetDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDelta_MetaData), NewProp_TargetDelta_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_MaxDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_MinDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_DeltaTimeDilation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TeleportThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_InterpStates_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_InterpStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TargetStateTimestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_SimTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewProp_TargetDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	&NewStructOps,
	"GMC_MatchLatestPersistentParams",
	Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::PropPointers),
	sizeof(FGMC_MatchLatestPersistentParams),
	alignof(FGMC_MatchLatestPersistentParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_MatchLatestPersistentParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_MatchLatestPersistentParams.InnerSingleton, Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GMC_MatchLatestPersistentParams.InnerSingleton;
}
// End ScriptStruct FGMC_MatchLatestPersistentParams

// Begin ScriptStruct FGMC_FixedDelayPersistentParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_FixedDelayPersistentParams;
class UScriptStruct* FGMC_FixedDelayPersistentParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_FixedDelayPersistentParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_FixedDelayPersistentParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_FixedDelayPersistentParams"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_FixedDelayPersistentParams.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_FixedDelayPersistentParams>()
{
	return FGMC_FixedDelayPersistentParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedDelay_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "/// How far back in time (in seconds) simulated pawns are displayed on the local machine. Lower values are more \"real-time\" but may produce unsatisfactory\n/// results with bad network conditions. Larger values enable a greater tolerance for packet loss, latency spikes and higher ping but simulated pawns are\n/// farther in the past on the local machine. Since timestamps are based on the world time of the machine where the original move was created you need to\n/// consider the longest time it can take for one packet to get from one client to another (i.e. the two highest client latencies added up) as well as the\n/// frame times of all machines involved. When running a server that accepts only one client connection (e.g. co-op games where one player hosts as a listen\n/// server and only one other player can join as a client) you only have to consider the latency of that one connection.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "How far back in time (in seconds) simulated pawns are displayed on the local machine. Lower values are more \"real-time\" but may produce unsatisfactory\nresults with bad network conditions. Larger values enable a greater tolerance for packet loss, latency spikes and higher ping but simulated pawns are\nfarther in the past on the local machine. Since timestamps are based on the world time of the machine where the original move was created you need to\nconsider the longest time it can take for one packet to get from one client to another (i.e. the two highest client latencies added up) as well as the\nframe times of all machines involved. When running a server that accepts only one client connection (e.g. co-op games where one player hosts as a listen\nserver and only one other player can join as a client) you only have to consider the latency of that one connection." },
		{ "UIMax", "2" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtrapolationRecoveryTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The time over which to smoothly return to an interpolated pawn state after extrapolation.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The time over which to smoothly return to an interpolated pawn state after extrapolation." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPhysicsExtrapolation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether extrapolation should be allowed when simulating physics.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether extrapolation should be allowed when simulating physics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportThreshold_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "-1" },
		{ "Comment", "/// The min required distance between the interpolation states to teleport to the target state directly. Set to -1 to disable this functionality.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The min required distance between the interpolation states to teleport to the target state directly. Set to -1 to disable this functionality." },
		{ "UIMax", "2500" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpStates_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether interpolation should be based on input or output states.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether interpolation should be based on input or output states." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtrapolationRecoveryTime;
	static void NewProp_bAllowPhysicsExtrapolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPhysicsExtrapolation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpStates_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpStates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_FixedDelayPersistentParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_FixedDelay = { "FixedDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_FixedDelayPersistentParams, FixedDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedDelay_MetaData), NewProp_FixedDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_ExtrapolationRecoveryTime = { "ExtrapolationRecoveryTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_FixedDelayPersistentParams, ExtrapolationRecoveryTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtrapolationRecoveryTime_MetaData), NewProp_ExtrapolationRecoveryTime_MetaData) };
void Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation_SetBit(void* Obj)
{
	((FGMC_FixedDelayPersistentParams*)Obj)->bAllowPhysicsExtrapolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation = { "bAllowPhysicsExtrapolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_FixedDelayPersistentParams), &Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowPhysicsExtrapolation_MetaData), NewProp_bAllowPhysicsExtrapolation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_TeleportThreshold = { "TeleportThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_FixedDelayPersistentParams, TeleportThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportThreshold_MetaData), NewProp_TeleportThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_InterpStates_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_InterpStates = { "InterpStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_FixedDelayPersistentParams, InterpStates), Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpStates_MetaData), NewProp_InterpStates_MetaData) }; // 1232230218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_FixedDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_ExtrapolationRecoveryTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_TeleportThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_InterpStates_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewProp_InterpStates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	&NewStructOps,
	"GMC_FixedDelayPersistentParams",
	Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::PropPointers),
	sizeof(FGMC_FixedDelayPersistentParams),
	alignof(FGMC_FixedDelayPersistentParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_FixedDelayPersistentParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_FixedDelayPersistentParams.InnerSingleton, Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GMC_FixedDelayPersistentParams.InnerSingleton;
}
// End ScriptStruct FGMC_FixedDelayPersistentParams

// Begin ScriptStruct FGMC_AdaptiveDelayPersistentParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayPersistentParams;
class UScriptStruct* FGMC_AdaptiveDelayPersistentParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayPersistentParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayPersistentParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_AdaptiveDelayPersistentParams"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayPersistentParams.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_AdaptiveDelayPersistentParams>()
{
	return FGMC_AdaptiveDelayPersistentParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncInterval_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/// The interval at which the adaptive delay is synced between server and client. Regardless of this setting, new parameters may still get transmitted more\n/// than once per interval if they change by more than the set tolerance or when using a dynamic buffer time.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The interval at which the adaptive delay is synced between server and client. Regardless of this setting, new parameters may still get transmitted more\nthan once per interval if they change by more than the set tolerance or when using a dynamic buffer time." },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDynamicBufferTime_MetaData[] = {
		{ "Category", "Networking" },
		{ "ClampMin", "0" },
		{ "Comment", "/// If true, the client will request the buffer time dynamically from the server based on the current network conditions. Works best for good connections\n/// (little packet loss) and higher net update frequencies.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "If true, the client will request the buffer time dynamically from the server based on the current network conditions. Works best for good connections\n(little packet loss) and higher net update frequencies." },
		{ "UIMax", "5" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "/// How much additional time should be added to the calculated base simulation delay to account for variable network conditions, packet loss, frame rate, etc.\n/// When using a dynamic buffer time this will merely determine the initial value.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "How much additional time should be added to the calculated base simulation delay to account for variable network conditions, packet loss, frame rate, etc.\nWhen using a dynamic buffer time this will merely determine the initial value." },
		{ "UIMax", "2" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/// Tolerance within which a newly calculated simulation delay will be considered equal to the current one. Only if the new delay value differs by more than\n/// the set tolerance the simulation delay will be updated.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Tolerance within which a newly calculated simulation delay will be considered equal to the current one. Only if the new delay value differs by more than\nthe set tolerance the simulation delay will be updated." },
		{ "UIMax", "0.2" },
		{ "UIMin", "0.05" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtrapolationRecoveryTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The time over which to smoothly return to an interpolated pawn state after extrapolation.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The time over which to smoothly return to an interpolated pawn state after extrapolation." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPhysicsExtrapolation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether extrapolation should be allowed when simulating physics.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether extrapolation should be allowed when simulating physics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportThreshold_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "-1" },
		{ "Comment", "/// The min required distance between the interpolation states to teleport to the target state directly. Set to -1 to disable this functionality.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The min required distance between the interpolation states to teleport to the target state directly. Set to -1 to disable this functionality." },
		{ "UIMax", "2500" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpStates_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether interpolation should be based on input or output states.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether interpolation should be based on input or output states." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDelay_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The current simulation delay. Automatically adapts to the client's ping.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The current simulation delay. Automatically adapts to the client's ping." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SyncInterval;
	static void NewProp_bUseDynamicBufferTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDynamicBufferTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BufferTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtrapolationRecoveryTime;
	static void NewProp_bAllowPhysicsExtrapolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPhysicsExtrapolation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpStates_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpStates;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_AdaptiveDelayPersistentParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_SyncInterval = { "SyncInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_AdaptiveDelayPersistentParams, SyncInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncInterval_MetaData), NewProp_SyncInterval_MetaData) };
void Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bUseDynamicBufferTime_SetBit(void* Obj)
{
	((FGMC_AdaptiveDelayPersistentParams*)Obj)->bUseDynamicBufferTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bUseDynamicBufferTime = { "bUseDynamicBufferTime", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_AdaptiveDelayPersistentParams), &Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bUseDynamicBufferTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDynamicBufferTime_MetaData), NewProp_bUseDynamicBufferTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_BufferTime = { "BufferTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_AdaptiveDelayPersistentParams, BufferTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferTime_MetaData), NewProp_BufferTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_AdaptiveDelayPersistentParams, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_ExtrapolationRecoveryTime = { "ExtrapolationRecoveryTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_AdaptiveDelayPersistentParams, ExtrapolationRecoveryTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtrapolationRecoveryTime_MetaData), NewProp_ExtrapolationRecoveryTime_MetaData) };
void Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation_SetBit(void* Obj)
{
	((FGMC_AdaptiveDelayPersistentParams*)Obj)->bAllowPhysicsExtrapolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation = { "bAllowPhysicsExtrapolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_AdaptiveDelayPersistentParams), &Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowPhysicsExtrapolation_MetaData), NewProp_bAllowPhysicsExtrapolation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_TeleportThreshold = { "TeleportThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_AdaptiveDelayPersistentParams, TeleportThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportThreshold_MetaData), NewProp_TeleportThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_InterpStates_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_InterpStates = { "InterpStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_AdaptiveDelayPersistentParams, InterpStates), Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpStates_MetaData), NewProp_InterpStates_MetaData) }; // 1232230218
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_CurrentDelay = { "CurrentDelay", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_AdaptiveDelayPersistentParams, CurrentDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDelay_MetaData), NewProp_CurrentDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_SyncInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bUseDynamicBufferTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_BufferTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_ExtrapolationRecoveryTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_bAllowPhysicsExtrapolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_TeleportThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_InterpStates_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_InterpStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewProp_CurrentDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	&NewStructOps,
	"GMC_AdaptiveDelayPersistentParams",
	Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::PropPointers),
	sizeof(FGMC_AdaptiveDelayPersistentParams),
	alignof(FGMC_AdaptiveDelayPersistentParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayPersistentParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayPersistentParams.InnerSingleton, Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayPersistentParams.InnerSingleton;
}
// End ScriptStruct FGMC_AdaptiveDelayPersistentParams

// Begin ScriptStruct FGMC_AdaptiveDelayServerPacket
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayServerPacket;
class UScriptStruct* FGMC_AdaptiveDelayServerPacket::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayServerPacket.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayServerPacket.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_AdaptiveDelayServerPacket"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayServerPacket.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_AdaptiveDelayServerPacket>()
{
	return FGMC_AdaptiveDelayServerPacket::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_AdaptiveDelayServerPacket>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	&NewStructOps,
	"GMC_AdaptiveDelayServerPacket",
	nullptr,
	0,
	sizeof(FGMC_AdaptiveDelayServerPacket),
	alignof(FGMC_AdaptiveDelayServerPacket),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayServerPacket.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayServerPacket.InnerSingleton, Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayServerPacket.InnerSingleton;
}
// End ScriptStruct FGMC_AdaptiveDelayServerPacket

// Begin ScriptStruct FGMC_AdaptiveDelayClientPacket
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayClientPacket;
class UScriptStruct* FGMC_AdaptiveDelayClientPacket::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayClientPacket.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayClientPacket.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_AdaptiveDelayClientPacket"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayClientPacket.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_AdaptiveDelayClientPacket>()
{
	return FGMC_AdaptiveDelayClientPacket::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_AdaptiveDelayClientPacket>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	&NewStructOps,
	"GMC_AdaptiveDelayClientPacket",
	nullptr,
	0,
	sizeof(FGMC_AdaptiveDelayClientPacket),
	alignof(FGMC_AdaptiveDelayClientPacket),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayClientPacket.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayClientPacket.InnerSingleton, Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayClientPacket.InnerSingleton;
}
// End ScriptStruct FGMC_AdaptiveDelayClientPacket

// Begin ScriptStruct FGMC_UniformSimulationPersistentParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_UniformSimulationPersistentParams;
class UScriptStruct* FGMC_UniformSimulationPersistentParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_UniformSimulationPersistentParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_UniformSimulationPersistentParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_UniformSimulationPersistentParams"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_UniformSimulationPersistentParams.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_UniformSimulationPersistentParams>()
{
	return FGMC_UniformSimulationPersistentParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpTolerance_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// How much tolerance in seconds there should be before switching to extrapolation when simulated interpolation is also used.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "How much tolerance in seconds there should be before switching to extrapolation when simulated interpolation is also used." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTimeStep_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/// The time interval in which to subdivide the delta time of a move for simulated pawns.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The time interval in which to subdivide the delta time of a move for simulated pawns." },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "1" },
		{ "Comment", "/// How many iterations of a sub-stepped move execution are allowed at most for simulation.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "How many iterations of a sub-stepped move execution are allowed at most for simulation." },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimStates_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether simulation should be based on input or output states.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether simulation should be based on input or output states." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousMoveTimestamp_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The timestamp of the previous move simulation.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The timestamp of the previous move simulation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSinceLastNewMove_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The time since we last got a new move for simulation.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The time since we last got a new move for simulation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTimeStep;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SimStates_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SimStates;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PreviousMoveTimestamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSinceLastNewMove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_UniformSimulationPersistentParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_InterpTolerance = { "InterpTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_UniformSimulationPersistentParams, InterpTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpTolerance_MetaData), NewProp_InterpTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_MaxTimeStep = { "MaxTimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_UniformSimulationPersistentParams, MaxTimeStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTimeStep_MetaData), NewProp_MaxTimeStep_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_UniformSimulationPersistentParams, MaxIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIterations_MetaData), NewProp_MaxIterations_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_SimStates_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_SimStates = { "SimStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_UniformSimulationPersistentParams, SimStates), Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimStates_MetaData), NewProp_SimStates_MetaData) }; // 1232230218
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_PreviousMoveTimestamp = { "PreviousMoveTimestamp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_UniformSimulationPersistentParams, PreviousMoveTimestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousMoveTimestamp_MetaData), NewProp_PreviousMoveTimestamp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_TimeSinceLastNewMove = { "TimeSinceLastNewMove", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_UniformSimulationPersistentParams, TimeSinceLastNewMove), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSinceLastNewMove_MetaData), NewProp_TimeSinceLastNewMove_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_InterpTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_MaxTimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_MaxIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_SimStates_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_SimStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_PreviousMoveTimestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewProp_TimeSinceLastNewMove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	&NewStructOps,
	"GMC_UniformSimulationPersistentParams",
	Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::PropPointers),
	sizeof(FGMC_UniformSimulationPersistentParams),
	alignof(FGMC_UniformSimulationPersistentParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_UniformSimulationPersistentParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_UniformSimulationPersistentParams.InnerSingleton, Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GMC_UniformSimulationPersistentParams.InnerSingleton;
}
// End ScriptStruct FGMC_UniformSimulationPersistentParams

// Begin ScriptStruct FGMC_CumulativeSimulationPersistentParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_CumulativeSimulationPersistentParams;
class UScriptStruct* FGMC_CumulativeSimulationPersistentParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_CumulativeSimulationPersistentParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_CumulativeSimulationPersistentParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_CumulativeSimulationPersistentParams"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_CumulativeSimulationPersistentParams.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_CumulativeSimulationPersistentParams>()
{
	return FGMC_CumulativeSimulationPersistentParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpTolerance_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// How much tolerance in seconds there should be before switching to extrapolation when simulated interpolation is also used.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "How much tolerance in seconds there should be before switching to extrapolation when simulated interpolation is also used." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTimeStep_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/// The time interval in which to subdivide the delta time of a move for simulated pawns.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The time interval in which to subdivide the delta time of a move for simulated pawns." },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "1" },
		{ "Comment", "/// How many iterations of a sub-stepped move execution are allowed at most for simulation.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "How many iterations of a sub-stepped move execution are allowed at most for simulation." },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDissociativeExtrapolation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// If true, the local simulation will continue to run on its own while extrapolating until we have a recent enough state available again to interpolate.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "If true, the local simulation will continue to run on its own while extrapolating until we have a recent enough state available again to interpolate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimStates_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether simulation should be based on input or output states.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether simulation should be based on input or output states." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousMoveTimestamp_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The timestamp of the previous move simulation.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The timestamp of the previous move simulation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSinceLastNewMove_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The time since we last got a new move for simulation.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The time since we last got a new move for simulation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccDeltaTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The accumulated delta time since the last new move.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The accumulated delta time since the last new move." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTimeStep;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
	static void NewProp_bUseDissociativeExtrapolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDissociativeExtrapolation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SimStates_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SimStates;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PreviousMoveTimestamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSinceLastNewMove;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AccDeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_CumulativeSimulationPersistentParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_InterpTolerance = { "InterpTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_CumulativeSimulationPersistentParams, InterpTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpTolerance_MetaData), NewProp_InterpTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_MaxTimeStep = { "MaxTimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_CumulativeSimulationPersistentParams, MaxTimeStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTimeStep_MetaData), NewProp_MaxTimeStep_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_CumulativeSimulationPersistentParams, MaxIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIterations_MetaData), NewProp_MaxIterations_MetaData) };
void Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_bUseDissociativeExtrapolation_SetBit(void* Obj)
{
	((FGMC_CumulativeSimulationPersistentParams*)Obj)->bUseDissociativeExtrapolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_bUseDissociativeExtrapolation = { "bUseDissociativeExtrapolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_CumulativeSimulationPersistentParams), &Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_bUseDissociativeExtrapolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDissociativeExtrapolation_MetaData), NewProp_bUseDissociativeExtrapolation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_SimStates_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_SimStates = { "SimStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_CumulativeSimulationPersistentParams, SimStates), Z_Construct_UEnum_GMCCore_EGMC_InterpolationStates, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimStates_MetaData), NewProp_SimStates_MetaData) }; // 1232230218
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_PreviousMoveTimestamp = { "PreviousMoveTimestamp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_CumulativeSimulationPersistentParams, PreviousMoveTimestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousMoveTimestamp_MetaData), NewProp_PreviousMoveTimestamp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_TimeSinceLastNewMove = { "TimeSinceLastNewMove", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_CumulativeSimulationPersistentParams, TimeSinceLastNewMove), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSinceLastNewMove_MetaData), NewProp_TimeSinceLastNewMove_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_AccDeltaTime = { "AccDeltaTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_CumulativeSimulationPersistentParams, AccDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccDeltaTime_MetaData), NewProp_AccDeltaTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_InterpTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_MaxTimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_MaxIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_bUseDissociativeExtrapolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_SimStates_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_SimStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_PreviousMoveTimestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_TimeSinceLastNewMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewProp_AccDeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	&NewStructOps,
	"GMC_CumulativeSimulationPersistentParams",
	Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::PropPointers),
	sizeof(FGMC_CumulativeSimulationPersistentParams),
	alignof(FGMC_CumulativeSimulationPersistentParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_CumulativeSimulationPersistentParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_CumulativeSimulationPersistentParams.InnerSingleton, Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GMC_CumulativeSimulationPersistentParams.InnerSingleton;
}
// End ScriptStruct FGMC_CumulativeSimulationPersistentParams

// Begin ScriptStruct FGMC_SmoothComponentParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_SmoothComponentParams;
class UScriptStruct* FGMC_SmoothComponentParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_SmoothComponentParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_SmoothComponentParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_SmoothComponentParams, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_SmoothComponentParams"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_SmoothComponentParams.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_SmoothComponentParams>()
{
	return FGMC_SmoothComponentParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The scene component to smooth. Set through the replication component, not directly.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The scene component to smooth. Set through the replication component, not directly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDeltaTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The max time delta over which the smoothing algorithm is allowed to interpolate between two transforms.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The max time delta over which the smoothing algorithm is allowed to interpolate between two transforms." },
		{ "UIMax", "0.1" },
		{ "UIMin", "0.05" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDeltaTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The min time delta over which the smoothing algorithm must interpolate between two transforms.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The min time delta over which the smoothing algorithm must interpolate between two transforms." },
		{ "UIMax", "0.05" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTimeDilation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "/// Scaling factor for the time delta to interpolate over. Will be clamped to the configured min/max values.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Scaling factor for the time delta to interpolate over. Will be clamped to the configured min/max values." },
		{ "UIMax", "5" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportThreshold_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "-1" },
		{ "Comment", "/// The min required distance between two location values to teleport to the target transform directly. Set to -1 to disable this functionality.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The min required distance between two location values to teleport to the target transform directly. Set to -1 to disable this functionality." },
		{ "UIMax", "2500" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipBoneUpdate_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether we should skip updating kinematic bones if the component is a skeletal mesh with a physics state.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether we should skip updating kinematic bones if the component is a skeletal mesh with a physics state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportPhysics_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The teleport type to use for the physics state of the component.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The teleport type to use for the physics state of the component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentOffset_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The relative offset of the component to the owning actor's root component without any smoothing applied.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The relative offset of the component to the owning actor's root component without any smoothing applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTransformTimestamp_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The timestamp of the interpolation target transform.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The timestamp of the interpolation target transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The current simulation time.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The current simulation time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDelta_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The current target delta to move.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The current target delta to move." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimeDilation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportThreshold;
	static void NewProp_bSkipBoneUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipBoneUpdate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TeleportPhysics_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TeleportPhysics;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TargetTransformTimestamp;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SimTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_SmoothComponentParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_SmoothComponentParams, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_MaxDeltaTime = { "MaxDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_SmoothComponentParams, MaxDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDeltaTime_MetaData), NewProp_MaxDeltaTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_MinDeltaTime = { "MinDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_SmoothComponentParams, MinDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDeltaTime_MetaData), NewProp_MinDeltaTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_DeltaTimeDilation = { "DeltaTimeDilation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_SmoothComponentParams, DeltaTimeDilation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTimeDilation_MetaData), NewProp_DeltaTimeDilation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_TeleportThreshold = { "TeleportThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_SmoothComponentParams, TeleportThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportThreshold_MetaData), NewProp_TeleportThreshold_MetaData) };
void Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_bSkipBoneUpdate_SetBit(void* Obj)
{
	((FGMC_SmoothComponentParams*)Obj)->bSkipBoneUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_bSkipBoneUpdate = { "bSkipBoneUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_SmoothComponentParams), &Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_bSkipBoneUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipBoneUpdate_MetaData), NewProp_bSkipBoneUpdate_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_TeleportPhysics_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_TeleportPhysics = { "TeleportPhysics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_SmoothComponentParams, TeleportPhysics), Z_Construct_UEnum_Engine_ETeleportType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportPhysics_MetaData), NewProp_TeleportPhysics_MetaData) }; // 1982391065
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_ComponentOffset = { "ComponentOffset", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_SmoothComponentParams, ComponentOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentOffset_MetaData), NewProp_ComponentOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_TargetTransformTimestamp = { "TargetTransformTimestamp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_SmoothComponentParams, TargetTransformTimestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTransformTimestamp_MetaData), NewProp_TargetTransformTimestamp_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_SimTime = { "SimTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_SmoothComponentParams, SimTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimTime_MetaData), NewProp_SimTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_TargetDelta = { "TargetDelta", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_SmoothComponentParams, TargetDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDelta_MetaData), NewProp_TargetDelta_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_MaxDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_MinDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_DeltaTimeDilation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_TeleportThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_bSkipBoneUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_TeleportPhysics_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_TeleportPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_ComponentOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_TargetTransformTimestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_SimTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewProp_TargetDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	&NewStructOps,
	"GMC_SmoothComponentParams",
	Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::PropPointers),
	sizeof(FGMC_SmoothComponentParams),
	alignof(FGMC_SmoothComponentParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGMC_SmoothComponentParams()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_SmoothComponentParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_SmoothComponentParams.InnerSingleton, Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GMC_SmoothComponentParams.InnerSingleton;
}
// End ScriptStruct FGMC_SmoothComponentParams

// Begin ScriptStruct FGMC_SmoothCorrection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_SmoothCorrection;
class UScriptStruct* FGMC_SmoothCorrection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_SmoothCorrection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_SmoothCorrection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_SmoothCorrection, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_SmoothCorrection"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_SmoothCorrection.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_SmoothCorrection>()
{
	return FGMC_SmoothCorrection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// Whether smoothed client corrections should be used.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether smoothed client corrections should be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationTime_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0.01" },
		{ "Comment", "// The time to interpolate over during a correction.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The time to interpolate over during a correction." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothActorLocation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// Whether to smooth a correction of the actor location.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether to smooth a correction of the actor location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothActorRotation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// Whether to smooth a correction of the actor rotation.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether to smooth a correction of the actor rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothActorScale_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// Whether to smooth a correction of the actor scale.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether to smooth a correction of the actor scale." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothControlRotation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// Whether to smooth a correction of the control rotation.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether to smooth a correction of the control rotation." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationTime;
	static void NewProp_bSmoothActorLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothActorLocation;
	static void NewProp_bSmoothActorRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothActorRotation;
	static void NewProp_bSmoothActorScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothActorScale;
	static void NewProp_bSmoothControlRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothControlRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_SmoothCorrection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((FGMC_SmoothCorrection*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_SmoothCorrection), &Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_InterpolationTime = { "InterpolationTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_SmoothCorrection, InterpolationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationTime_MetaData), NewProp_InterpolationTime_MetaData) };
void Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bSmoothActorLocation_SetBit(void* Obj)
{
	((FGMC_SmoothCorrection*)Obj)->bSmoothActorLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bSmoothActorLocation = { "bSmoothActorLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_SmoothCorrection), &Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bSmoothActorLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSmoothActorLocation_MetaData), NewProp_bSmoothActorLocation_MetaData) };
void Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bSmoothActorRotation_SetBit(void* Obj)
{
	((FGMC_SmoothCorrection*)Obj)->bSmoothActorRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bSmoothActorRotation = { "bSmoothActorRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_SmoothCorrection), &Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bSmoothActorRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSmoothActorRotation_MetaData), NewProp_bSmoothActorRotation_MetaData) };
void Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bSmoothActorScale_SetBit(void* Obj)
{
	((FGMC_SmoothCorrection*)Obj)->bSmoothActorScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bSmoothActorScale = { "bSmoothActorScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_SmoothCorrection), &Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bSmoothActorScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSmoothActorScale_MetaData), NewProp_bSmoothActorScale_MetaData) };
void Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bSmoothControlRotation_SetBit(void* Obj)
{
	((FGMC_SmoothCorrection*)Obj)->bSmoothControlRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bSmoothControlRotation = { "bSmoothControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_SmoothCorrection), &Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bSmoothControlRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSmoothControlRotation_MetaData), NewProp_bSmoothControlRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_InterpolationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bSmoothActorLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bSmoothActorRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bSmoothActorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewProp_bSmoothControlRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	&NewStructOps,
	"GMC_SmoothCorrection",
	Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::PropPointers),
	sizeof(FGMC_SmoothCorrection),
	alignof(FGMC_SmoothCorrection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGMC_SmoothCorrection()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_SmoothCorrection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_SmoothCorrection.InnerSingleton, Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GMC_SmoothCorrection.InnerSingleton;
}
// End ScriptStruct FGMC_SmoothCorrection

// Begin ScriptStruct FGMC_SimulationThrottle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_SimulationThrottle;
class UScriptStruct* FGMC_SimulationThrottle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_SimulationThrottle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_SimulationThrottle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_SimulationThrottle, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_SimulationThrottle"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_SimulationThrottle.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_SimulationThrottle>()
{
	return FGMC_SimulationThrottle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "// Whether simulation throttling should be used.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "Whether simulation throttling should be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSmoothingDistance_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "// The distance from the local player up to which simulated pawns will still be smoothed every frame.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The distance from the local player up to which simulated pawns will still be smoothed every frame." },
		{ "UIMax", "10000" },
		{ "UIMin", "1000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingFallOffDistance_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "0" },
		{ "Comment", "// The distance over which simulation frequency will drop exponentially once the max smoothing distance has been exceeded.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "The distance over which simulation frequency will drop exponentially once the max smoothing distance has been exceeded." },
		{ "UIMax", "10000" },
		{ "UIMin", "1000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSkippedSmoothingFrames_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ClampMin", "1" },
		{ "Comment", "// How many frames should be skipped at most between simulations.\n" },
		{ "ModuleRelativePath", "Public/Replication/Smoothing.h" },
		{ "ToolTip", "How many frames should be skipped at most between simulations." },
		{ "UIMax", "100" },
		{ "UIMin", "5" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxSmoothingDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SmoothingFallOffDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSkippedSmoothingFrames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_SimulationThrottle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((FGMC_SimulationThrottle*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_SimulationThrottle), &Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics::NewProp_MaxSmoothingDistance = { "MaxSmoothingDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_SimulationThrottle, MaxSmoothingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSmoothingDistance_MetaData), NewProp_MaxSmoothingDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics::NewProp_SmoothingFallOffDistance = { "SmoothingFallOffDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_SimulationThrottle, SmoothingFallOffDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingFallOffDistance_MetaData), NewProp_SmoothingFallOffDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics::NewProp_MaxSkippedSmoothingFrames = { "MaxSkippedSmoothingFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_SimulationThrottle, MaxSkippedSmoothingFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSkippedSmoothingFrames_MetaData), NewProp_MaxSkippedSmoothingFrames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics::NewProp_MaxSmoothingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics::NewProp_SmoothingFallOffDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics::NewProp_MaxSkippedSmoothingFrames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	&NewStructOps,
	"GMC_SimulationThrottle",
	Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics::PropPointers),
	sizeof(FGMC_SimulationThrottle),
	alignof(FGMC_SimulationThrottle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGMC_SimulationThrottle()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_SimulationThrottle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_SimulationThrottle.InnerSingleton, Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GMC_SimulationThrottle.InnerSingleton;
}
// End ScriptStruct FGMC_SimulationThrottle

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Smoothing_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGMC_InterpolationMode_StaticEnum, TEXT("EGMC_InterpolationMode"), &Z_Registration_Info_UEnum_EGMC_InterpolationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2023705042U) },
		{ EGMC_InterpolationStates_StaticEnum, TEXT("EGMC_InterpolationStates"), &Z_Registration_Info_UEnum_EGMC_InterpolationStates, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1232230218U) },
		{ EGMC_NetworkTolerance_StaticEnum, TEXT("EGMC_NetworkTolerance"), &Z_Registration_Info_UEnum_EGMC_NetworkTolerance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2155226070U) },
		{ EGMC_ExtrapolationMode_StaticEnum, TEXT("EGMC_ExtrapolationMode"), &Z_Registration_Info_UEnum_EGMC_ExtrapolationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 890381373U) },
		{ EGMC_InterpolationFunction_StaticEnum, TEXT("EGMC_InterpolationFunction"), &Z_Registration_Info_UEnum_EGMC_InterpolationFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2518462192U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGMC_MatchLatestPersistentParams::StaticStruct, Z_Construct_UScriptStruct_FGMC_MatchLatestPersistentParams_Statics::NewStructOps, TEXT("GMC_MatchLatestPersistentParams"), &Z_Registration_Info_UScriptStruct_GMC_MatchLatestPersistentParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_MatchLatestPersistentParams), 192470687U) },
		{ FGMC_FixedDelayPersistentParams::StaticStruct, Z_Construct_UScriptStruct_FGMC_FixedDelayPersistentParams_Statics::NewStructOps, TEXT("GMC_FixedDelayPersistentParams"), &Z_Registration_Info_UScriptStruct_GMC_FixedDelayPersistentParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_FixedDelayPersistentParams), 4024069800U) },
		{ FGMC_AdaptiveDelayPersistentParams::StaticStruct, Z_Construct_UScriptStruct_FGMC_AdaptiveDelayPersistentParams_Statics::NewStructOps, TEXT("GMC_AdaptiveDelayPersistentParams"), &Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayPersistentParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_AdaptiveDelayPersistentParams), 3227698840U) },
		{ FGMC_AdaptiveDelayServerPacket::StaticStruct, Z_Construct_UScriptStruct_FGMC_AdaptiveDelayServerPacket_Statics::NewStructOps, TEXT("GMC_AdaptiveDelayServerPacket"), &Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayServerPacket, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_AdaptiveDelayServerPacket), 284842785U) },
		{ FGMC_AdaptiveDelayClientPacket::StaticStruct, Z_Construct_UScriptStruct_FGMC_AdaptiveDelayClientPacket_Statics::NewStructOps, TEXT("GMC_AdaptiveDelayClientPacket"), &Z_Registration_Info_UScriptStruct_GMC_AdaptiveDelayClientPacket, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_AdaptiveDelayClientPacket), 1021100360U) },
		{ FGMC_UniformSimulationPersistentParams::StaticStruct, Z_Construct_UScriptStruct_FGMC_UniformSimulationPersistentParams_Statics::NewStructOps, TEXT("GMC_UniformSimulationPersistentParams"), &Z_Registration_Info_UScriptStruct_GMC_UniformSimulationPersistentParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_UniformSimulationPersistentParams), 1660047997U) },
		{ FGMC_CumulativeSimulationPersistentParams::StaticStruct, Z_Construct_UScriptStruct_FGMC_CumulativeSimulationPersistentParams_Statics::NewStructOps, TEXT("GMC_CumulativeSimulationPersistentParams"), &Z_Registration_Info_UScriptStruct_GMC_CumulativeSimulationPersistentParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_CumulativeSimulationPersistentParams), 3716896615U) },
		{ FGMC_SmoothComponentParams::StaticStruct, Z_Construct_UScriptStruct_FGMC_SmoothComponentParams_Statics::NewStructOps, TEXT("GMC_SmoothComponentParams"), &Z_Registration_Info_UScriptStruct_GMC_SmoothComponentParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_SmoothComponentParams), 2078761342U) },
		{ FGMC_SmoothCorrection::StaticStruct, Z_Construct_UScriptStruct_FGMC_SmoothCorrection_Statics::NewStructOps, TEXT("GMC_SmoothCorrection"), &Z_Registration_Info_UScriptStruct_GMC_SmoothCorrection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_SmoothCorrection), 3726971456U) },
		{ FGMC_SimulationThrottle::StaticStruct, Z_Construct_UScriptStruct_FGMC_SimulationThrottle_Statics::NewStructOps, TEXT("GMC_SimulationThrottle"), &Z_Registration_Info_UScriptStruct_GMC_SimulationThrottle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_SimulationThrottle), 2261685750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Smoothing_h_3436005561(TEXT("/Script/GMCCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Smoothing_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Smoothing_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Smoothing_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Smoothing_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
