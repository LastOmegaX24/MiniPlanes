// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCCore/Public/Replication/Physics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysics() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMethod();
GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMode();
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings();
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_PhysicsInterpState();
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings();
UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References

// Begin Enum EGMC_PhysicsInterpolationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_PhysicsInterpolationMode;
static UEnum* EGMC_PhysicsInterpolationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGMC_PhysicsInterpolationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGMC_PhysicsInterpolationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMode, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_PhysicsInterpolationMode"));
	}
	return Z_Registration_Info_UEnum_EGMC_PhysicsInterpolationMode.OuterSingleton;
}
template<> GMCCORE_API UEnum* StaticEnum<EGMC_PhysicsInterpolationMode>()
{
	return EGMC_PhysicsInterpolationMode_StaticEnum();
}
struct Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AdaptiveDelay.Name", "EGMC_PhysicsInterpolationMode::AdaptiveDelay" },
		{ "BlueprintType", "true" },
		{ "FixedDelay.Name", "EGMC_PhysicsInterpolationMode::FixedDelay" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EGMC_PhysicsInterpolationMode::MAX" },
		{ "ModuleRelativePath", "Public/Replication/Physics.h" },
		{ "None.Name", "EGMC_PhysicsInterpolationMode::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGMC_PhysicsInterpolationMode::None", (int64)EGMC_PhysicsInterpolationMode::None },
		{ "EGMC_PhysicsInterpolationMode::FixedDelay", (int64)EGMC_PhysicsInterpolationMode::FixedDelay },
		{ "EGMC_PhysicsInterpolationMode::AdaptiveDelay", (int64)EGMC_PhysicsInterpolationMode::AdaptiveDelay },
		{ "EGMC_PhysicsInterpolationMode::MAX", (int64)EGMC_PhysicsInterpolationMode::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	"EGMC_PhysicsInterpolationMode",
	"EGMC_PhysicsInterpolationMode",
	Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMode()
{
	if (!Z_Registration_Info_UEnum_EGMC_PhysicsInterpolationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_PhysicsInterpolationMode.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGMC_PhysicsInterpolationMode.InnerSingleton;
}
// End Enum EGMC_PhysicsInterpolationMode

// Begin Enum EGMC_PhysicsInterpolationMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_PhysicsInterpolationMethod;
static UEnum* EGMC_PhysicsInterpolationMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGMC_PhysicsInterpolationMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGMC_PhysicsInterpolationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMethod, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_PhysicsInterpolationMethod"));
	}
	return Z_Registration_Info_UEnum_EGMC_PhysicsInterpolationMethod.OuterSingleton;
}
template<> GMCCORE_API UEnum* StaticEnum<EGMC_PhysicsInterpolationMethod>()
{
	return EGMC_PhysicsInterpolationMethod_StaticEnum();
}
struct Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom1.Name", "EGMC_PhysicsInterpolationMethod::Custom1" },
		{ "Custom2.Name", "EGMC_PhysicsInterpolationMethod::Custom2" },
		{ "Custom3.Name", "EGMC_PhysicsInterpolationMethod::Custom3" },
		{ "Custom4.Name", "EGMC_PhysicsInterpolationMethod::Custom4" },
		{ "Custom5.Name", "EGMC_PhysicsInterpolationMethod::Custom5" },
		{ "Custom6.Name", "EGMC_PhysicsInterpolationMethod::Custom6" },
		{ "Custom7.Name", "EGMC_PhysicsInterpolationMethod::Custom7" },
		{ "Custom8.Name", "EGMC_PhysicsInterpolationMethod::Custom8" },
		{ "Default.Name", "EGMC_PhysicsInterpolationMethod::Default" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EGMC_PhysicsInterpolationMethod::MAX" },
		{ "ModuleRelativePath", "Public/Replication/Physics.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGMC_PhysicsInterpolationMethod::Default", (int64)EGMC_PhysicsInterpolationMethod::Default },
		{ "EGMC_PhysicsInterpolationMethod::Custom1", (int64)EGMC_PhysicsInterpolationMethod::Custom1 },
		{ "EGMC_PhysicsInterpolationMethod::Custom2", (int64)EGMC_PhysicsInterpolationMethod::Custom2 },
		{ "EGMC_PhysicsInterpolationMethod::Custom3", (int64)EGMC_PhysicsInterpolationMethod::Custom3 },
		{ "EGMC_PhysicsInterpolationMethod::Custom4", (int64)EGMC_PhysicsInterpolationMethod::Custom4 },
		{ "EGMC_PhysicsInterpolationMethod::Custom5", (int64)EGMC_PhysicsInterpolationMethod::Custom5 },
		{ "EGMC_PhysicsInterpolationMethod::Custom6", (int64)EGMC_PhysicsInterpolationMethod::Custom6 },
		{ "EGMC_PhysicsInterpolationMethod::Custom7", (int64)EGMC_PhysicsInterpolationMethod::Custom7 },
		{ "EGMC_PhysicsInterpolationMethod::Custom8", (int64)EGMC_PhysicsInterpolationMethod::Custom8 },
		{ "EGMC_PhysicsInterpolationMethod::MAX", (int64)EGMC_PhysicsInterpolationMethod::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	"EGMC_PhysicsInterpolationMethod",
	"EGMC_PhysicsInterpolationMethod",
	Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMethod()
{
	if (!Z_Registration_Info_UEnum_EGMC_PhysicsInterpolationMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_PhysicsInterpolationMethod.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGMC_PhysicsInterpolationMethod.InnerSingleton;
}
// End Enum EGMC_PhysicsInterpolationMethod

// Begin ScriptStruct FGMC_PhysicsInterpState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_PhysicsInterpState;
class UScriptStruct* FGMC_PhysicsInterpState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_PhysicsInterpState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_PhysicsInterpState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_PhysicsInterpState, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_PhysicsInterpState"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_PhysicsInterpState.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_PhysicsInterpState>()
{
	return FGMC_PhysicsInterpState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/Physics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Physics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Physics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorLocation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Physics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorRotation_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Physics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Physics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorRotation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_PhysicsInterpState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_PhysicsInterpState, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearVelocity_MetaData), NewProp_LinearVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_PhysicsInterpState, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics::NewProp_ActorLocation = { "ActorLocation", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_PhysicsInterpState, ActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorLocation_MetaData), NewProp_ActorLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics::NewProp_ActorRotation = { "ActorRotation", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_PhysicsInterpState, ActorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorRotation_MetaData), NewProp_ActorRotation_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_PhysicsInterpState, Timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timestamp_MetaData), NewProp_Timestamp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics::NewProp_LinearVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics::NewProp_ActorLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics::NewProp_ActorRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics::NewProp_Timestamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	&NewStructOps,
	"GMC_PhysicsInterpState",
	Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics::PropPointers),
	sizeof(FGMC_PhysicsInterpState),
	alignof(FGMC_PhysicsInterpState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGMC_PhysicsInterpState()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_PhysicsInterpState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_PhysicsInterpState.InnerSingleton, Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GMC_PhysicsInterpState.InnerSingleton;
}
// End ScriptStruct FGMC_PhysicsInterpState

// Begin ScriptStruct FGMC_ServerAuthPhysicsSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_ServerAuthPhysicsSettings;
class UScriptStruct* FGMC_ServerAuthPhysicsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_ServerAuthPhysicsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_ServerAuthPhysicsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_ServerAuthPhysicsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_ServerAuthPhysicsSettings.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_ServerAuthPhysicsSettings>()
{
	return FGMC_ServerAuthPhysicsSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/Physics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientInterpolationMode_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Physics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientInterpolationMethod_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Physics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClientInterpolationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClientInterpolationMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClientInterpolationMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClientInterpolationMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_ServerAuthPhysicsSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings_Statics::NewProp_ClientInterpolationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings_Statics::NewProp_ClientInterpolationMode = { "ClientInterpolationMode", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_ServerAuthPhysicsSettings, ClientInterpolationMode), Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientInterpolationMode_MetaData), NewProp_ClientInterpolationMode_MetaData) }; // 1495316728
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings_Statics::NewProp_ClientInterpolationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings_Statics::NewProp_ClientInterpolationMethod = { "ClientInterpolationMethod", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_ServerAuthPhysicsSettings, ClientInterpolationMethod), Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientInterpolationMethod_MetaData), NewProp_ClientInterpolationMethod_MetaData) }; // 2297700641
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings_Statics::NewProp_ClientInterpolationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings_Statics::NewProp_ClientInterpolationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings_Statics::NewProp_ClientInterpolationMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings_Statics::NewProp_ClientInterpolationMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	&NewStructOps,
	"GMC_ServerAuthPhysicsSettings",
	Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings_Statics::PropPointers),
	sizeof(FGMC_ServerAuthPhysicsSettings),
	alignof(FGMC_ServerAuthPhysicsSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_ServerAuthPhysicsSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_ServerAuthPhysicsSettings.InnerSingleton, Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GMC_ServerAuthPhysicsSettings.InnerSingleton;
}
// End ScriptStruct FGMC_ServerAuthPhysicsSettings

// Begin ScriptStruct FGMC_ClientAuthPhysicsSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_ClientAuthPhysicsSettings;
class UScriptStruct* FGMC_ClientAuthPhysicsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_ClientAuthPhysicsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_ClientAuthPhysicsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_ClientAuthPhysicsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_ClientAuthPhysicsSettings.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_ClientAuthPhysicsSettings>()
{
	return FGMC_ClientAuthPhysicsSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/Physics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerInterpolationMode_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Physics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerInterpolationMethod_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Physics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRollbackServerPawns_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Physics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRollbackClientPawns_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Physics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRollbackGenericServerActors_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Physics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRollbackGenericClientActors_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Physics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ServerInterpolationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ServerInterpolationMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ServerInterpolationMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ServerInterpolationMethod;
	static void NewProp_bRollbackServerPawns_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRollbackServerPawns;
	static void NewProp_bRollbackClientPawns_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRollbackClientPawns;
	static void NewProp_bRollbackGenericServerActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRollbackGenericServerActors;
	static void NewProp_bRollbackGenericClientActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRollbackGenericClientActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_ClientAuthPhysicsSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_ServerInterpolationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_ServerInterpolationMode = { "ServerInterpolationMode", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_ClientAuthPhysicsSettings, ServerInterpolationMode), Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerInterpolationMode_MetaData), NewProp_ServerInterpolationMode_MetaData) }; // 1495316728
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_ServerInterpolationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_ServerInterpolationMethod = { "ServerInterpolationMethod", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_ClientAuthPhysicsSettings, ServerInterpolationMethod), Z_Construct_UEnum_GMCCore_EGMC_PhysicsInterpolationMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerInterpolationMethod_MetaData), NewProp_ServerInterpolationMethod_MetaData) }; // 2297700641
void Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_bRollbackServerPawns_SetBit(void* Obj)
{
	((FGMC_ClientAuthPhysicsSettings*)Obj)->bRollbackServerPawns = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_bRollbackServerPawns = { "bRollbackServerPawns", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_ClientAuthPhysicsSettings), &Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_bRollbackServerPawns_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRollbackServerPawns_MetaData), NewProp_bRollbackServerPawns_MetaData) };
void Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_bRollbackClientPawns_SetBit(void* Obj)
{
	((FGMC_ClientAuthPhysicsSettings*)Obj)->bRollbackClientPawns = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_bRollbackClientPawns = { "bRollbackClientPawns", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_ClientAuthPhysicsSettings), &Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_bRollbackClientPawns_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRollbackClientPawns_MetaData), NewProp_bRollbackClientPawns_MetaData) };
void Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_bRollbackGenericServerActors_SetBit(void* Obj)
{
	((FGMC_ClientAuthPhysicsSettings*)Obj)->bRollbackGenericServerActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_bRollbackGenericServerActors = { "bRollbackGenericServerActors", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_ClientAuthPhysicsSettings), &Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_bRollbackGenericServerActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRollbackGenericServerActors_MetaData), NewProp_bRollbackGenericServerActors_MetaData) };
void Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_bRollbackGenericClientActors_SetBit(void* Obj)
{
	((FGMC_ClientAuthPhysicsSettings*)Obj)->bRollbackGenericClientActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_bRollbackGenericClientActors = { "bRollbackGenericClientActors", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGMC_ClientAuthPhysicsSettings), &Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_bRollbackGenericClientActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRollbackGenericClientActors_MetaData), NewProp_bRollbackGenericClientActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_ServerInterpolationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_ServerInterpolationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_ServerInterpolationMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_ServerInterpolationMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_bRollbackServerPawns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_bRollbackClientPawns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_bRollbackGenericServerActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewProp_bRollbackGenericClientActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	&NewStructOps,
	"GMC_ClientAuthPhysicsSettings",
	Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::PropPointers),
	sizeof(FGMC_ClientAuthPhysicsSettings),
	alignof(FGMC_ClientAuthPhysicsSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_ClientAuthPhysicsSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_ClientAuthPhysicsSettings.InnerSingleton, Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GMC_ClientAuthPhysicsSettings.InnerSingleton;
}
// End ScriptStruct FGMC_ClientAuthPhysicsSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Physics_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGMC_PhysicsInterpolationMode_StaticEnum, TEXT("EGMC_PhysicsInterpolationMode"), &Z_Registration_Info_UEnum_EGMC_PhysicsInterpolationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1495316728U) },
		{ EGMC_PhysicsInterpolationMethod_StaticEnum, TEXT("EGMC_PhysicsInterpolationMethod"), &Z_Registration_Info_UEnum_EGMC_PhysicsInterpolationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2297700641U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGMC_PhysicsInterpState::StaticStruct, Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics::NewStructOps, TEXT("GMC_PhysicsInterpState"), &Z_Registration_Info_UScriptStruct_GMC_PhysicsInterpState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_PhysicsInterpState), 2669864755U) },
		{ FGMC_ServerAuthPhysicsSettings::StaticStruct, Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings_Statics::NewStructOps, TEXT("GMC_ServerAuthPhysicsSettings"), &Z_Registration_Info_UScriptStruct_GMC_ServerAuthPhysicsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_ServerAuthPhysicsSettings), 2210163444U) },
		{ FGMC_ClientAuthPhysicsSettings::StaticStruct, Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics::NewStructOps, TEXT("GMC_ClientAuthPhysicsSettings"), &Z_Registration_Info_UScriptStruct_GMC_ClientAuthPhysicsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_ClientAuthPhysicsSettings), 3894151861U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Physics_h_2197610435(TEXT("/Script/GMCCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Physics_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Physics_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Physics_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Physics_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
