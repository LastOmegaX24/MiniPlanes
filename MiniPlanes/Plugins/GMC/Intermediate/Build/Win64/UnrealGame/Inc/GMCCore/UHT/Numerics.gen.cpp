// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCCore/Public/Replication/Numerics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNumerics() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_NumericType();
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_NumericValue();
UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References

// Begin Enum EGMC_NumericType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_NumericType;
static UEnum* EGMC_NumericType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGMC_NumericType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGMC_NumericType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_NumericType, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_NumericType"));
	}
	return Z_Registration_Info_UEnum_EGMC_NumericType.OuterSingleton;
}
template<> GMCCORE_API UEnum* StaticEnum<EGMC_NumericType>()
{
	return EGMC_NumericType_StaticEnum();
}
struct Z_Construct_UEnum_GMCCore_EGMC_NumericType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Float.Name", "EGMC_NumericType::Float" },
		{ "Int.Name", "EGMC_NumericType::Int" },
		{ "ModuleRelativePath", "Public/Replication/Numerics.h" },
		{ "None.Name", "EGMC_NumericType::None" },
		{ "Quat.Name", "EGMC_NumericType::Quat" },
		{ "Rotator.Name", "EGMC_NumericType::Rotator" },
		{ "Vector.Name", "EGMC_NumericType::Vector" },
		{ "Vector2D.Name", "EGMC_NumericType::Vector2D" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGMC_NumericType::None", (int64)EGMC_NumericType::None },
		{ "EGMC_NumericType::Int", (int64)EGMC_NumericType::Int },
		{ "EGMC_NumericType::Float", (int64)EGMC_NumericType::Float },
		{ "EGMC_NumericType::Vector2D", (int64)EGMC_NumericType::Vector2D },
		{ "EGMC_NumericType::Vector", (int64)EGMC_NumericType::Vector },
		{ "EGMC_NumericType::Rotator", (int64)EGMC_NumericType::Rotator },
		{ "EGMC_NumericType::Quat", (int64)EGMC_NumericType::Quat },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_NumericType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	"EGMC_NumericType",
	"EGMC_NumericType",
	Z_Construct_UEnum_GMCCore_EGMC_NumericType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_NumericType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_NumericType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_NumericType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GMCCore_EGMC_NumericType()
{
	if (!Z_Registration_Info_UEnum_EGMC_NumericType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_NumericType.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_NumericType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGMC_NumericType.InnerSingleton;
}
// End Enum EGMC_NumericType

// Begin ScriptStruct FGMC_NumericValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_NumericValue;
class UScriptStruct* FGMC_NumericValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_NumericValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_NumericValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_NumericValue, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_NumericValue"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_NumericValue.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_NumericValue>()
{
	return FGMC_NumericValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGMC_NumericValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/Numerics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Numerics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value0_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Numerics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Numerics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Numerics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value3_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Numerics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Numerics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Numerics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector2D_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Numerics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Numerics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Replication/Numerics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value0;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value1;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value2;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value3;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Int;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Float;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2D;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_NumericValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_NumericValue, Type), Z_Construct_UEnum_GMCCore_EGMC_NumericType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3082061993
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Value0 = { "Value0", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_NumericValue, Value0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value0_MetaData), NewProp_Value0_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Value1 = { "Value1", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_NumericValue, Value1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value1_MetaData), NewProp_Value1_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Value2 = { "Value2", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_NumericValue, Value2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value2_MetaData), NewProp_Value2_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Value3 = { "Value3", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_NumericValue, Value3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value3_MetaData), NewProp_Value3_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Int = { "Int", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_NumericValue, Int), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int_MetaData), NewProp_Int_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_NumericValue, Float), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float_MetaData), NewProp_Float_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Vector2D = { "Vector2D", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_NumericValue, Vector2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector2D_MetaData), NewProp_Vector2D_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_NumericValue, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_NumericValue, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotator_MetaData), NewProp_Rotator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Value0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Value1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Value2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Value3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Int,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Float,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Vector2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewProp_Rotator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	&NewStructOps,
	"GMC_NumericValue",
	Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::PropPointers),
	sizeof(FGMC_NumericValue),
	alignof(FGMC_NumericValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGMC_NumericValue()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_NumericValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_NumericValue.InnerSingleton, Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GMC_NumericValue.InnerSingleton;
}
// End ScriptStruct FGMC_NumericValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Numerics_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGMC_NumericType_StaticEnum, TEXT("EGMC_NumericType"), &Z_Registration_Info_UEnum_EGMC_NumericType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3082061993U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGMC_NumericValue::StaticStruct, Z_Construct_UScriptStruct_FGMC_NumericValue_Statics::NewStructOps, TEXT("GMC_NumericValue"), &Z_Registration_Info_UScriptStruct_GMC_NumericValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_NumericValue), 369796875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Numerics_h_3479570879(TEXT("/Script/GMCCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Numerics_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Numerics_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Numerics_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Numerics_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
