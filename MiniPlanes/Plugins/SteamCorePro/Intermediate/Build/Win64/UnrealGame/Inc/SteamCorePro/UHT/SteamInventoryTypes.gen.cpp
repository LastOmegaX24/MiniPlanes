// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamInventory/SteamInventoryTypes.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamInventoryTypes() {}

// Begin Cross Module References
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProItemFlags();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamResult();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryDefinitionUpdate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryFullUpdate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryResultReady__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryFullUpdate();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResult();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResultReady();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDef();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDetails();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemInstanceID();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Enum ESteamCoreProItemFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreProItemFlags;
static UEnum* ESteamCoreProItemFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProItemFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreProItemFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamCoreProItemFlags, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamCoreProItemFlags"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreProItemFlags.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCoreProItemFlags>()
{
	return ESteamCoreProItemFlags_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamCoreProItemFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "EConsumed.Name", "EConsumed" },
		{ "ENoTrade.Name", "ENoTrade" },
		{ "ERemoved.Name", "ERemoved" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENoTrade", (int64)ENoTrade },
		{ "ERemoved", (int64)ERemoved },
		{ "EConsumed", (int64)EConsumed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamCoreProItemFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamCoreProItemFlags",
	"ESteamCoreProItemFlags",
	Z_Construct_UEnum_SteamCorePro_ESteamCoreProItemFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProItemFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProItemFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamCoreProItemFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProItemFlags()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProItemFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreProItemFlags.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamCoreProItemFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreProItemFlags.InnerSingleton;
}
// End Enum ESteamCoreProItemFlags

// Begin ScriptStruct FSteamItemInstanceID
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamItemInstanceID;
class UScriptStruct* FSteamItemInstanceID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamItemInstanceID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamItemInstanceID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamItemInstanceID, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamItemInstanceID"));
	}
	return Z_Registration_Info_UScriptStruct_SteamItemInstanceID.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamItemInstanceID>()
{
	return FSteamItemInstanceID::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "HasNativeBreak", "/Script/SteamCorePro.SteamUtilities:BreakSteamItemInstanceID" },
		{ "HasNativeMake", "/Script/SteamCorePro.SteamUtilities:MakeSteamItemInstanceID" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamItemInstanceID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamItemInstanceID",
	nullptr,
	0,
	sizeof(FSteamItemInstanceID),
	alignof(FSteamItemInstanceID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamItemInstanceID()
{
	if (!Z_Registration_Info_UScriptStruct_SteamItemInstanceID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamItemInstanceID.InnerSingleton, Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamItemInstanceID.InnerSingleton;
}
// End ScriptStruct FSteamItemInstanceID

// Begin ScriptStruct FSteamItemDef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamItemDef;
class UScriptStruct* FSteamItemDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamItemDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamItemDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamItemDef, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamItemDef"));
	}
	return Z_Registration_Info_UScriptStruct_SteamItemDef.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamItemDef>()
{
	return FSteamItemDef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamItemDef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamItemDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamItemDef_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamItemDef, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamItemDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDef_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamItemDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamItemDef",
	Z_Construct_UScriptStruct_FSteamItemDef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDef_Statics::PropPointers),
	sizeof(FSteamItemDef),
	alignof(FSteamItemDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamItemDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDef()
{
	if (!Z_Registration_Info_UScriptStruct_SteamItemDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamItemDef.InnerSingleton, Z_Construct_UScriptStruct_FSteamItemDef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamItemDef.InnerSingleton;
}
// End ScriptStruct FSteamItemDef

// Begin ScriptStruct FSteamItemDetails
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamItemDetails;
class UScriptStruct* FSteamItemDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamItemDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamItemDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamItemDetails, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamItemDetails"));
	}
	return Z_Registration_Info_UScriptStruct_SteamItemDetails.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamItemDetails>()
{
	return FSteamItemDetails::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamItemDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceID_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Definition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamItemDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_InstanceID = { "InstanceID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamItemDetails, InstanceID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceID_MetaData), NewProp_InstanceID_MetaData) }; // 2669364223
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamItemDetails, Definition), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Definition_MetaData), NewProp_Definition_MetaData) }; // 342357027
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamItemDetails, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCorePro_ESteamCoreProItemFlags, METADATA_PARAMS(0, nullptr) }; // 102501857
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamItemDetails, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) }; // 102501857
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamItemDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_InstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Definition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamItemDetails",
	Z_Construct_UScriptStruct_FSteamItemDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::PropPointers),
	sizeof(FSteamItemDetails),
	alignof(FSteamItemDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamItemDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDetails()
{
	if (!Z_Registration_Info_UScriptStruct_SteamItemDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamItemDetails.InnerSingleton, Z_Construct_UScriptStruct_FSteamItemDetails_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamItemDetails.InnerSingleton;
}
// End ScriptStruct FSteamItemDetails

// Begin ScriptStruct FSteamInventoryResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamInventoryResult;
class UScriptStruct* FSteamInventoryResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamInventoryResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamInventoryResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryResult, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamInventoryResult"));
	}
	return Z_Registration_Info_UScriptStruct_SteamInventoryResult.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamInventoryResult>()
{
	return FSteamInventoryResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamInventoryResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryResult, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamInventoryResult",
	Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::PropPointers),
	sizeof(FSteamInventoryResult),
	alignof(FSteamInventoryResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResult()
{
	if (!Z_Registration_Info_UScriptStruct_SteamInventoryResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamInventoryResult.InnerSingleton, Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamInventoryResult.InnerSingleton;
}
// End ScriptStruct FSteamInventoryResult

// Begin ScriptStruct FSteamInventoryEligiblePromoItemDefIDs
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamInventoryEligiblePromoItemDefIDs;
class UScriptStruct* FSteamInventoryEligiblePromoItemDefIDs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamInventoryEligiblePromoItemDefIDs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamInventoryEligiblePromoItemDefIDs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamInventoryEligiblePromoItemDefIDs"));
	}
	return Z_Registration_Info_UScriptStruct_SteamInventoryEligiblePromoItemDefIDs.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamInventoryEligiblePromoItemDefIDs>()
{
	return FSteamInventoryEligiblePromoItemDefIDs::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumEligiblePromoItemDefs_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCachedData_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumEligiblePromoItemDefs;
	static void NewProp_bCachedData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryEligiblePromoItemDefIDs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryEligiblePromoItemDefIDs, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryEligiblePromoItemDefIDs, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamID_MetaData), NewProp_SteamID_MetaData) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_NumEligiblePromoItemDefs = { "NumEligiblePromoItemDefs", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryEligiblePromoItemDefIDs, NumEligiblePromoItemDefs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumEligiblePromoItemDefs_MetaData), NewProp_NumEligiblePromoItemDefs_MetaData) };
void Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_bCachedData_SetBit(void* Obj)
{
	((FSteamInventoryEligiblePromoItemDefIDs*)Obj)->bCachedData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_bCachedData = { "bCachedData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSteamInventoryEligiblePromoItemDefIDs), &Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_bCachedData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCachedData_MetaData), NewProp_bCachedData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_NumEligiblePromoItemDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewProp_bCachedData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamInventoryEligiblePromoItemDefIDs",
	Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::PropPointers),
	sizeof(FSteamInventoryEligiblePromoItemDefIDs),
	alignof(FSteamInventoryEligiblePromoItemDefIDs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs()
{
	if (!Z_Registration_Info_UScriptStruct_SteamInventoryEligiblePromoItemDefIDs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamInventoryEligiblePromoItemDefIDs.InnerSingleton, Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamInventoryEligiblePromoItemDefIDs.InnerSingleton;
}
// End ScriptStruct FSteamInventoryEligiblePromoItemDefIDs

// Begin ScriptStruct FSteamInventoryResultReady
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamInventoryResultReady;
class UScriptStruct* FSteamInventoryResultReady::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamInventoryResultReady.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamInventoryResultReady.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryResultReady, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamInventoryResultReady"));
	}
	return Z_Registration_Info_UScriptStruct_SteamInventoryResultReady.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamInventoryResultReady>()
{
	return FSteamInventoryResultReady::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryResultReady>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryResultReady, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 277898169
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryResultReady, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamInventoryResultReady",
	Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::PropPointers),
	sizeof(FSteamInventoryResultReady),
	alignof(FSteamInventoryResultReady),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResultReady()
{
	if (!Z_Registration_Info_UScriptStruct_SteamInventoryResultReady.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamInventoryResultReady.InnerSingleton, Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamInventoryResultReady.InnerSingleton;
}
// End ScriptStruct FSteamInventoryResultReady

// Begin ScriptStruct FSteamInventoryFullUpdate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamInventoryFullUpdate;
class UScriptStruct* FSteamInventoryFullUpdate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamInventoryFullUpdate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamInventoryFullUpdate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryFullUpdate, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamInventoryFullUpdate"));
	}
	return Z_Registration_Info_UScriptStruct_SteamInventoryFullUpdate.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamInventoryFullUpdate>()
{
	return FSteamInventoryFullUpdate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryFullUpdate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryFullUpdate, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 277898169
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamInventoryFullUpdate",
	Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::PropPointers),
	sizeof(FSteamInventoryFullUpdate),
	alignof(FSteamInventoryFullUpdate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryFullUpdate()
{
	if (!Z_Registration_Info_UScriptStruct_SteamInventoryFullUpdate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamInventoryFullUpdate.InnerSingleton, Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamInventoryFullUpdate.InnerSingleton;
}
// End ScriptStruct FSteamInventoryFullUpdate

// Begin ScriptStruct FSteamInventoryRequestPricesResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamInventoryRequestPricesResult;
class UScriptStruct* FSteamInventoryRequestPricesResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamInventoryRequestPricesResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamInventoryRequestPricesResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamInventoryRequestPricesResult"));
	}
	return Z_Registration_Info_UScriptStruct_SteamInventoryRequestPricesResult.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamInventoryRequestPricesResult>()
{
	return FSteamInventoryRequestPricesResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryRequestPricesResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryRequestPricesResult, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryRequestPricesResult, Currency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Currency_MetaData), NewProp_Currency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Currency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamInventoryRequestPricesResult",
	Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::PropPointers),
	sizeof(FSteamInventoryRequestPricesResult),
	alignof(FSteamInventoryRequestPricesResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult()
{
	if (!Z_Registration_Info_UScriptStruct_SteamInventoryRequestPricesResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamInventoryRequestPricesResult.InnerSingleton, Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamInventoryRequestPricesResult.InnerSingleton;
}
// End ScriptStruct FSteamInventoryRequestPricesResult

// Begin ScriptStruct FSteamInventoryStartPurchaseResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamInventoryStartPurchaseResult;
class UScriptStruct* FSteamInventoryStartPurchaseResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamInventoryStartPurchaseResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamInventoryStartPurchaseResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamInventoryStartPurchaseResult"));
	}
	return Z_Registration_Info_UScriptStruct_SteamInventoryStartPurchaseResult.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamInventoryStartPurchaseResult>()
{
	return FSteamInventoryStartPurchaseResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderId_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrderId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TransactionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryStartPurchaseResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryStartPurchaseResult, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryStartPurchaseResult, OrderId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderId_MetaData), NewProp_OrderId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamInventoryStartPurchaseResult, TransactionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransactionId_MetaData), NewProp_TransactionId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_OrderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_TransactionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamInventoryStartPurchaseResult",
	Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::PropPointers),
	sizeof(FSteamInventoryStartPurchaseResult),
	alignof(FSteamInventoryStartPurchaseResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult()
{
	if (!Z_Registration_Info_UScriptStruct_SteamInventoryStartPurchaseResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamInventoryStartPurchaseResult.InnerSingleton, Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamInventoryStartPurchaseResult.InnerSingleton;
}
// End ScriptStruct FSteamInventoryStartPurchaseResult

// Begin Delegate FOnSteamInventoryResultReady
struct Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryResultReady__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnSteamInventoryResultReady_Parms
	{
		FSteamInventoryResultReady Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryResultReady__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSteamInventoryResultReady_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryResultReady, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3557691637
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryResultReady__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryResultReady__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryResultReady__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryResultReady__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnSteamInventoryResultReady__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryResultReady__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryResultReady__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryResultReady__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamInventoryResultReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryResultReady__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryResultReady__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryResultReady__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamInventoryResultReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryResultReady__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryResultReady__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryResultReady_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryResultReady, FSteamInventoryResultReady const& Data)
{
	struct _Script_SteamCorePro_eventOnSteamInventoryResultReady_Parms
	{
		FSteamInventoryResultReady Data;
	};
	_Script_SteamCorePro_eventOnSteamInventoryResultReady_Parms Parms;
	Parms.Data=Data;
	OnSteamInventoryResultReady.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSteamInventoryResultReady

// Begin Delegate FOnSteamInventoryFullUpdate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryFullUpdate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnSteamInventoryFullUpdate_Parms
	{
		FSteamInventoryFullUpdate Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryFullUpdate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSteamInventoryFullUpdate_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryFullUpdate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 174372217
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryFullUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryFullUpdate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryFullUpdate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryFullUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnSteamInventoryFullUpdate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryFullUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryFullUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryFullUpdate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamInventoryFullUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryFullUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryFullUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryFullUpdate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamInventoryFullUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryFullUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryFullUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryFullUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryFullUpdate, FSteamInventoryFullUpdate const& Data)
{
	struct _Script_SteamCorePro_eventOnSteamInventoryFullUpdate_Parms
	{
		FSteamInventoryFullUpdate Data;
	};
	_Script_SteamCorePro_eventOnSteamInventoryFullUpdate_Parms Parms;
	Parms.Data=Data;
	OnSteamInventoryFullUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSteamInventoryFullUpdate

// Begin Delegate FOnSteamInventoryStartPurchaseResultDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResultDelegate_Parms
	{
		FSteamInventoryStartPurchaseResult Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResultDelegate_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 65692934
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResultDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryStartPurchaseResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryStartPurchaseResultDelegate, FSteamInventoryStartPurchaseResult const& Data)
{
	struct _Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResultDelegate_Parms
	{
		FSteamInventoryStartPurchaseResult Data;
	};
	_Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResultDelegate_Parms Parms;
	Parms.Data=Data;
	OnSteamInventoryStartPurchaseResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSteamInventoryStartPurchaseResultDelegate

// Begin Delegate FOnSteamInventoryRequestPricesResultDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnSteamInventoryRequestPricesResultDelegate_Parms
	{
		FSteamInventoryRequestPricesResult Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSteamInventoryRequestPricesResultDelegate_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2729181900
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnSteamInventoryRequestPricesResultDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamInventoryRequestPricesResultDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamInventoryRequestPricesResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryRequestPricesResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryRequestPricesResultDelegate, FSteamInventoryRequestPricesResult const& Data)
{
	struct _Script_SteamCorePro_eventOnSteamInventoryRequestPricesResultDelegate_Parms
	{
		FSteamInventoryRequestPricesResult Data;
	};
	_Script_SteamCorePro_eventOnSteamInventoryRequestPricesResultDelegate_Parms Parms;
	Parms.Data=Data;
	OnSteamInventoryRequestPricesResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSteamInventoryRequestPricesResultDelegate

// Begin Delegate FOnSteamInventoryEligiblePromoItemDefIDs
struct Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnSteamInventoryEligiblePromoItemDefIDs_Parms
	{
		FSteamInventoryEligiblePromoItemDefIDs Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSteamInventoryEligiblePromoItemDefIDs_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 488628953
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamInventoryEligiblePromoItemDefIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamInventoryEligiblePromoItemDefIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryEligiblePromoItemDefIDs_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryEligiblePromoItemDefIDs, FSteamInventoryEligiblePromoItemDefIDs const& Data)
{
	struct _Script_SteamCorePro_eventOnSteamInventoryEligiblePromoItemDefIDs_Parms
	{
		FSteamInventoryEligiblePromoItemDefIDs Data;
	};
	_Script_SteamCorePro_eventOnSteamInventoryEligiblePromoItemDefIDs_Parms Parms;
	Parms.Data=Data;
	OnSteamInventoryEligiblePromoItemDefIDs.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSteamInventoryEligiblePromoItemDefIDs

// Begin Delegate FOnSteamInventoryDefinitionUpdate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryDefinitionUpdate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryDefinitionUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnSteamInventoryDefinitionUpdate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryDefinitionUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryDefinitionUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryDefinitionUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryDefinitionUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryDefinitionUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryDefinitionUpdate)
{
	OnSteamInventoryDefinitionUpdate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnSteamInventoryDefinitionUpdate

// Begin Delegate FOnRequestEligiblePromoItemDefinitionsIDs
struct Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms
	{
		FSteamInventoryEligiblePromoItemDefIDs Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 488628953
void Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestEligiblePromoItemDefinitionsIDs_DelegateWrapper(const FScriptDelegate& OnRequestEligiblePromoItemDefinitionsIDs, FSteamInventoryEligiblePromoItemDefIDs const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms
	{
		FSteamInventoryEligiblePromoItemDefIDs Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestEligiblePromoItemDefinitionsIDs.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnRequestEligiblePromoItemDefinitionsIDs

// Begin Delegate FOnSteamInventoryRequestPricesResult
struct Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnSteamInventoryRequestPricesResult_Parms
	{
		FSteamInventoryRequestPricesResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSteamInventoryRequestPricesResult_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2729181900
void Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnSteamInventoryRequestPricesResult_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnSteamInventoryRequestPricesResult_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnSteamInventoryRequestPricesResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamInventoryRequestPricesResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamInventoryRequestPricesResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryRequestPricesResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryRequestPricesResult_DelegateWrapper(const FScriptDelegate& OnSteamInventoryRequestPricesResult, FSteamInventoryRequestPricesResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnSteamInventoryRequestPricesResult_Parms
	{
		FSteamInventoryRequestPricesResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnSteamInventoryRequestPricesResult_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnSteamInventoryRequestPricesResult.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnSteamInventoryRequestPricesResult

// Begin Delegate FOnSteamInventoryStartPurchaseResult
struct Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResult_Parms
	{
		FSteamInventoryStartPurchaseResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamInventory/SteamInventoryTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResult_Parms, Data), Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 65692934
void Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResult_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResult_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnSteamInventoryStartPurchaseResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamInventoryStartPurchaseResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamInventoryStartPurchaseResult_DelegateWrapper(const FScriptDelegate& OnSteamInventoryStartPurchaseResult, FSteamInventoryStartPurchaseResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResult_Parms
	{
		FSteamInventoryStartPurchaseResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnSteamInventoryStartPurchaseResult_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnSteamInventoryStartPurchaseResult.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnSteamInventoryStartPurchaseResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventoryTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamCoreProItemFlags_StaticEnum, TEXT("ESteamCoreProItemFlags"), &Z_Registration_Info_UEnum_ESteamCoreProItemFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 102501857U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSteamItemInstanceID::StaticStruct, Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics::NewStructOps, TEXT("SteamItemInstanceID"), &Z_Registration_Info_UScriptStruct_SteamItemInstanceID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamItemInstanceID), 2669364223U) },
		{ FSteamItemDef::StaticStruct, Z_Construct_UScriptStruct_FSteamItemDef_Statics::NewStructOps, TEXT("SteamItemDef"), &Z_Registration_Info_UScriptStruct_SteamItemDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamItemDef), 342357027U) },
		{ FSteamItemDetails::StaticStruct, Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewStructOps, TEXT("SteamItemDetails"), &Z_Registration_Info_UScriptStruct_SteamItemDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamItemDetails), 3639696997U) },
		{ FSteamInventoryResult::StaticStruct, Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::NewStructOps, TEXT("SteamInventoryResult"), &Z_Registration_Info_UScriptStruct_SteamInventoryResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamInventoryResult), 277898169U) },
		{ FSteamInventoryEligiblePromoItemDefIDs::StaticStruct, Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics::NewStructOps, TEXT("SteamInventoryEligiblePromoItemDefIDs"), &Z_Registration_Info_UScriptStruct_SteamInventoryEligiblePromoItemDefIDs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamInventoryEligiblePromoItemDefIDs), 488628953U) },
		{ FSteamInventoryResultReady::StaticStruct, Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics::NewStructOps, TEXT("SteamInventoryResultReady"), &Z_Registration_Info_UScriptStruct_SteamInventoryResultReady, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamInventoryResultReady), 3557691637U) },
		{ FSteamInventoryFullUpdate::StaticStruct, Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics::NewStructOps, TEXT("SteamInventoryFullUpdate"), &Z_Registration_Info_UScriptStruct_SteamInventoryFullUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamInventoryFullUpdate), 174372217U) },
		{ FSteamInventoryRequestPricesResult::StaticStruct, Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewStructOps, TEXT("SteamInventoryRequestPricesResult"), &Z_Registration_Info_UScriptStruct_SteamInventoryRequestPricesResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamInventoryRequestPricesResult), 2729181900U) },
		{ FSteamInventoryStartPurchaseResult::StaticStruct, Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewStructOps, TEXT("SteamInventoryStartPurchaseResult"), &Z_Registration_Info_UScriptStruct_SteamInventoryStartPurchaseResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamInventoryStartPurchaseResult), 65692934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventoryTypes_h_859121942(TEXT("/Script/SteamCorePro"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventoryTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventoryTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventoryTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInventory_SteamInventoryTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
