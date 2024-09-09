// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamParties/SteamPartiesTypes.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamPartiesTypes() {}

// Begin Cross Module References
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationData();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationType();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamResult();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnActiveBeaconsDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnAvailableBeaconLocationsDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnReservationNotificationDelegate__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FChangeNumOpenSlotsData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FCreateBeaconData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FJoinPartyData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FPartyBeaconID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FReservationNotificationData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamPartyBeaconLocation();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Enum ESteamPartiesBeaconLocationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationType;
static UEnum* ESteamPartiesBeaconLocationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationType, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamPartiesBeaconLocationType"));
	}
	return Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationType.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamPartiesBeaconLocationType>()
{
	return ESteamPartiesBeaconLocationType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChatGroup.Name", "ESteamPartiesBeaconLocationType::ChatGroup" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "Invalid.Name", "ESteamPartiesBeaconLocationType::Invalid" },
		{ "Max.Name", "ESteamPartiesBeaconLocationType::Max" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamPartiesBeaconLocationType::Invalid", (int64)ESteamPartiesBeaconLocationType::Invalid },
		{ "ESteamPartiesBeaconLocationType::ChatGroup", (int64)ESteamPartiesBeaconLocationType::ChatGroup },
		{ "ESteamPartiesBeaconLocationType::Max", (int64)ESteamPartiesBeaconLocationType::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamPartiesBeaconLocationType",
	"ESteamPartiesBeaconLocationType",
	Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationType()
{
	if (!Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationType.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationType.InnerSingleton;
}
// End Enum ESteamPartiesBeaconLocationType

// Begin Enum ESteamPartiesBeaconLocationData
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationData;
static UEnum* ESteamPartiesBeaconLocationData_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationData.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationData.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationData, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamPartiesBeaconLocationData"));
	}
	return Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationData.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamPartiesBeaconLocationData>()
{
	return ESteamPartiesBeaconLocationData_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IconURLLarge.Name", "ESteamPartiesBeaconLocationData::IconURLLarge" },
		{ "IconURLMedium.Name", "ESteamPartiesBeaconLocationData::IconURLMedium" },
		{ "IconURLSmall.Name", "ESteamPartiesBeaconLocationData::IconURLSmall" },
		{ "Invalid.Name", "ESteamPartiesBeaconLocationData::Invalid" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
		{ "Name.Name", "ESteamPartiesBeaconLocationData::Name" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamPartiesBeaconLocationData::Invalid", (int64)ESteamPartiesBeaconLocationData::Invalid },
		{ "ESteamPartiesBeaconLocationData::Name", (int64)ESteamPartiesBeaconLocationData::Name },
		{ "ESteamPartiesBeaconLocationData::IconURLSmall", (int64)ESteamPartiesBeaconLocationData::IconURLSmall },
		{ "ESteamPartiesBeaconLocationData::IconURLMedium", (int64)ESteamPartiesBeaconLocationData::IconURLMedium },
		{ "ESteamPartiesBeaconLocationData::IconURLLarge", (int64)ESteamPartiesBeaconLocationData::IconURLLarge },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationData_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamPartiesBeaconLocationData",
	"ESteamPartiesBeaconLocationData",
	Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationData_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationData_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationData_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationData_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationData()
{
	if (!Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationData.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationData_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationData.InnerSingleton;
}
// End Enum ESteamPartiesBeaconLocationData

// Begin ScriptStruct FSteamPartyBeaconLocation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamPartyBeaconLocation;
class UScriptStruct* FSteamPartyBeaconLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamPartyBeaconLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamPartyBeaconLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamPartyBeaconLocation"));
	}
	return Z_Registration_Info_UScriptStruct_SteamPartyBeaconLocation.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamPartyBeaconLocation>()
{
	return FSteamPartyBeaconLocation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationId_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocationId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamPartyBeaconLocation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamPartyBeaconLocation, Type), Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1100877351
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_LocationId = { "LocationId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamPartyBeaconLocation, LocationId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationId_MetaData), NewProp_LocationId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_LocationId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamPartyBeaconLocation",
	Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::PropPointers),
	sizeof(FSteamPartyBeaconLocation),
	alignof(FSteamPartyBeaconLocation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamPartyBeaconLocation()
{
	if (!Z_Registration_Info_UScriptStruct_SteamPartyBeaconLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamPartyBeaconLocation.InnerSingleton, Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamPartyBeaconLocation.InnerSingleton;
}
// End ScriptStruct FSteamPartyBeaconLocation

// Begin ScriptStruct FJoinPartyData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JoinPartyData;
class UScriptStruct* FJoinPartyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JoinPartyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JoinPartyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJoinPartyData, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("JoinPartyData"));
	}
	return Z_Registration_Info_UScriptStruct_JoinPartyData.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FJoinPartyData>()
{
	return FJoinPartyData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FJoinPartyData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeaconID_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDBeaconOwner_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectString_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDBeaconOwner;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoinPartyData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoinPartyData, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_BeaconID = { "BeaconID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoinPartyData, BeaconID), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeaconID_MetaData), NewProp_BeaconID_MetaData) }; // 2716630048
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_SteamIDBeaconOwner = { "SteamIDBeaconOwner", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoinPartyData, SteamIDBeaconOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDBeaconOwner_MetaData), NewProp_SteamIDBeaconOwner_MetaData) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoinPartyData, ConnectString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectString_MetaData), NewProp_ConnectString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoinPartyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_BeaconID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_SteamIDBeaconOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewProp_ConnectString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinPartyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoinPartyData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"JoinPartyData",
	Z_Construct_UScriptStruct_FJoinPartyData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinPartyData_Statics::PropPointers),
	sizeof(FJoinPartyData),
	alignof(FJoinPartyData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinPartyData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJoinPartyData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJoinPartyData()
{
	if (!Z_Registration_Info_UScriptStruct_JoinPartyData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JoinPartyData.InnerSingleton, Z_Construct_UScriptStruct_FJoinPartyData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_JoinPartyData.InnerSingleton;
}
// End ScriptStruct FJoinPartyData

// Begin ScriptStruct FCreateBeaconData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateBeaconData;
class UScriptStruct* FCreateBeaconData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateBeaconData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateBeaconData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateBeaconData, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("CreateBeaconData"));
	}
	return Z_Registration_Info_UScriptStruct_CreateBeaconData.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FCreateBeaconData>()
{
	return FCreateBeaconData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreateBeaconData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeaconID_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateBeaconData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateBeaconData, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_BeaconID = { "BeaconID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateBeaconData, BeaconID), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeaconID_MetaData), NewProp_BeaconID_MetaData) }; // 2716630048
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateBeaconData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_BeaconID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateBeaconData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateBeaconData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"CreateBeaconData",
	Z_Construct_UScriptStruct_FCreateBeaconData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateBeaconData_Statics::PropPointers),
	sizeof(FCreateBeaconData),
	alignof(FCreateBeaconData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateBeaconData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateBeaconData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateBeaconData()
{
	if (!Z_Registration_Info_UScriptStruct_CreateBeaconData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateBeaconData.InnerSingleton, Z_Construct_UScriptStruct_FCreateBeaconData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreateBeaconData.InnerSingleton;
}
// End ScriptStruct FCreateBeaconData

// Begin ScriptStruct FReservationNotificationData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReservationNotificationData;
class UScriptStruct* FReservationNotificationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReservationNotificationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReservationNotificationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReservationNotificationData, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ReservationNotificationData"));
	}
	return Z_Registration_Info_UScriptStruct_ReservationNotificationData.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FReservationNotificationData>()
{
	return FReservationNotificationData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FReservationNotificationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeaconId_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDJoiner_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDJoiner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReservationNotificationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewProp_BeaconId = { "BeaconId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReservationNotificationData, BeaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeaconId_MetaData), NewProp_BeaconId_MetaData) }; // 2716630048
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewProp_SteamIDJoiner = { "SteamIDJoiner", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReservationNotificationData, SteamIDJoiner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDJoiner_MetaData), NewProp_SteamIDJoiner_MetaData) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReservationNotificationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewProp_BeaconId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewProp_SteamIDJoiner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReservationNotificationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReservationNotificationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"ReservationNotificationData",
	Z_Construct_UScriptStruct_FReservationNotificationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReservationNotificationData_Statics::PropPointers),
	sizeof(FReservationNotificationData),
	alignof(FReservationNotificationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReservationNotificationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReservationNotificationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReservationNotificationData()
{
	if (!Z_Registration_Info_UScriptStruct_ReservationNotificationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReservationNotificationData.InnerSingleton, Z_Construct_UScriptStruct_FReservationNotificationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ReservationNotificationData.InnerSingleton;
}
// End ScriptStruct FReservationNotificationData

// Begin ScriptStruct FChangeNumOpenSlotsData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChangeNumOpenSlotsData;
class UScriptStruct* FChangeNumOpenSlotsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChangeNumOpenSlotsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChangeNumOpenSlotsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChangeNumOpenSlotsData, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ChangeNumOpenSlotsData"));
	}
	return Z_Registration_Info_UScriptStruct_ChangeNumOpenSlotsData.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FChangeNumOpenSlotsData>()
{
	return FChangeNumOpenSlotsData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChangeNumOpenSlotsData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChangeNumOpenSlotsData, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"ChangeNumOpenSlotsData",
	Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::PropPointers),
	sizeof(FChangeNumOpenSlotsData),
	alignof(FChangeNumOpenSlotsData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChangeNumOpenSlotsData()
{
	if (!Z_Registration_Info_UScriptStruct_ChangeNumOpenSlotsData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChangeNumOpenSlotsData.InnerSingleton, Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChangeNumOpenSlotsData.InnerSingleton;
}
// End ScriptStruct FChangeNumOpenSlotsData

// Begin Delegate FOnJoinPartyDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnJoinPartyDelegate_Parms
	{
		FJoinPartyData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnJoinPartyDelegate_Parms, Data), Z_Construct_UScriptStruct_FJoinPartyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2028239435
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnJoinPartyDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnJoinPartyDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnJoinPartyDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoinPartyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinPartyDelegate, FJoinPartyData const& Data)
{
	struct _Script_SteamCorePro_eventOnJoinPartyDelegate_Parms
	{
		FJoinPartyData Data;
	};
	_Script_SteamCorePro_eventOnJoinPartyDelegate_Parms Parms;
	Parms.Data=Data;
	OnJoinPartyDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnJoinPartyDelegate

// Begin Delegate FOnCreateBeaconDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnCreateBeaconDelegate_Parms
	{
		FCreateBeaconData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnCreateBeaconDelegate_Parms, Data), Z_Construct_UScriptStruct_FCreateBeaconData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2357902595
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnCreateBeaconDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnCreateBeaconDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnCreateBeaconDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCreateBeaconDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCreateBeaconDelegate, FCreateBeaconData const& Data)
{
	struct _Script_SteamCorePro_eventOnCreateBeaconDelegate_Parms
	{
		FCreateBeaconData Data;
	};
	_Script_SteamCorePro_eventOnCreateBeaconDelegate_Parms Parms;
	Parms.Data=Data;
	OnCreateBeaconDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCreateBeaconDelegate

// Begin Delegate FOnReservationNotificationDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnReservationNotificationDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnReservationNotificationDelegate_Parms
	{
		FReservationNotificationData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnReservationNotificationDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnReservationNotificationDelegate_Parms, Data), Z_Construct_UScriptStruct_FReservationNotificationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1192098904
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnReservationNotificationDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnReservationNotificationDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnReservationNotificationDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnReservationNotificationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnReservationNotificationDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnReservationNotificationDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnReservationNotificationDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnReservationNotificationDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnReservationNotificationDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnReservationNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnReservationNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnReservationNotificationDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnReservationNotificationDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnReservationNotificationDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnReservationNotificationDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnReservationNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnReservationNotificationDelegate, FReservationNotificationData const& Data)
{
	struct _Script_SteamCorePro_eventOnReservationNotificationDelegate_Parms
	{
		FReservationNotificationData Data;
	};
	_Script_SteamCorePro_eventOnReservationNotificationDelegate_Parms Parms;
	Parms.Data=Data;
	OnReservationNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnReservationNotificationDelegate

// Begin Delegate FOnChangeNumOpenSlotsDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnChangeNumOpenSlotsDelegate_Parms
	{
		FChangeNumOpenSlotsData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnChangeNumOpenSlotsDelegate_Parms, Data), Z_Construct_UScriptStruct_FChangeNumOpenSlotsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3651233754
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnChangeNumOpenSlotsDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnChangeNumOpenSlotsDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnChangeNumOpenSlotsDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChangeNumOpenSlotsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnChangeNumOpenSlotsDelegate, FChangeNumOpenSlotsData const& Data)
{
	struct _Script_SteamCorePro_eventOnChangeNumOpenSlotsDelegate_Parms
	{
		FChangeNumOpenSlotsData Data;
	};
	_Script_SteamCorePro_eventOnChangeNumOpenSlotsDelegate_Parms Parms;
	Parms.Data=Data;
	OnChangeNumOpenSlotsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnChangeNumOpenSlotsDelegate

// Begin Delegate FOnAvailableBeaconLocationsDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnAvailableBeaconLocationsDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnAvailableBeaconLocationsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnAvailableBeaconLocationsDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnAvailableBeaconLocationsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnAvailableBeaconLocationsDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnAvailableBeaconLocationsDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnAvailableBeaconLocationsDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAvailableBeaconLocationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAvailableBeaconLocationsDelegate)
{
	OnAvailableBeaconLocationsDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnAvailableBeaconLocationsDelegate

// Begin Delegate FOnActiveBeaconsDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnActiveBeaconsDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnActiveBeaconsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnActiveBeaconsDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnActiveBeaconsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnActiveBeaconsDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnActiveBeaconsDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnActiveBeaconsDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnActiveBeaconsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnActiveBeaconsDelegate)
{
	OnActiveBeaconsDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnActiveBeaconsDelegate

// Begin Delegate FOnJoinParty
struct Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnJoinParty_Parms
	{
		FJoinPartyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnJoinParty_Parms, Data), Z_Construct_UScriptStruct_FJoinPartyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2028239435
void Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnJoinParty_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnJoinParty_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnJoinParty__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature_Statics::_Script_SteamCorePro_eventOnJoinParty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature_Statics::_Script_SteamCorePro_eventOnJoinParty_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoinParty_DelegateWrapper(const FScriptDelegate& OnJoinParty, FJoinPartyData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnJoinParty_Parms
	{
		FJoinPartyData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnJoinParty_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnJoinParty.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnJoinParty

// Begin Delegate FOnCreateBeacon
struct Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnCreateBeacon_Parms
	{
		FCreateBeaconData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnCreateBeacon_Parms, Data), Z_Construct_UScriptStruct_FCreateBeaconData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2357902595
void Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnCreateBeacon_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnCreateBeacon_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnCreateBeacon__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature_Statics::_Script_SteamCorePro_eventOnCreateBeacon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature_Statics::_Script_SteamCorePro_eventOnCreateBeacon_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCreateBeacon_DelegateWrapper(const FScriptDelegate& OnCreateBeacon, FCreateBeaconData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnCreateBeacon_Parms
	{
		FCreateBeaconData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnCreateBeacon_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnCreateBeacon.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnCreateBeacon

// Begin Delegate FOnChangeNumOpenSlots
struct Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnChangeNumOpenSlots_Parms
	{
		FChangeNumOpenSlotsData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties/SteamPartiesTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnChangeNumOpenSlots_Parms, Data), Z_Construct_UScriptStruct_FChangeNumOpenSlotsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3651233754
void Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnChangeNumOpenSlots_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnChangeNumOpenSlots_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnChangeNumOpenSlots__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature_Statics::_Script_SteamCorePro_eventOnChangeNumOpenSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature_Statics::_Script_SteamCorePro_eventOnChangeNumOpenSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChangeNumOpenSlots_DelegateWrapper(const FScriptDelegate& OnChangeNumOpenSlots, FChangeNumOpenSlotsData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnChangeNumOpenSlots_Parms
	{
		FChangeNumOpenSlotsData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnChangeNumOpenSlots_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnChangeNumOpenSlots.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnChangeNumOpenSlots

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamPartiesBeaconLocationType_StaticEnum, TEXT("ESteamPartiesBeaconLocationType"), &Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1100877351U) },
		{ ESteamPartiesBeaconLocationData_StaticEnum, TEXT("ESteamPartiesBeaconLocationData"), &Z_Registration_Info_UEnum_ESteamPartiesBeaconLocationData, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1363549976U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSteamPartyBeaconLocation::StaticStruct, Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewStructOps, TEXT("SteamPartyBeaconLocation"), &Z_Registration_Info_UScriptStruct_SteamPartyBeaconLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamPartyBeaconLocation), 3205846201U) },
		{ FJoinPartyData::StaticStruct, Z_Construct_UScriptStruct_FJoinPartyData_Statics::NewStructOps, TEXT("JoinPartyData"), &Z_Registration_Info_UScriptStruct_JoinPartyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJoinPartyData), 2028239435U) },
		{ FCreateBeaconData::StaticStruct, Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewStructOps, TEXT("CreateBeaconData"), &Z_Registration_Info_UScriptStruct_CreateBeaconData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateBeaconData), 2357902595U) },
		{ FReservationNotificationData::StaticStruct, Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewStructOps, TEXT("ReservationNotificationData"), &Z_Registration_Info_UScriptStruct_ReservationNotificationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReservationNotificationData), 1192098904U) },
		{ FChangeNumOpenSlotsData::StaticStruct, Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::NewStructOps, TEXT("ChangeNumOpenSlotsData"), &Z_Registration_Info_UScriptStruct_ChangeNumOpenSlotsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChangeNumOpenSlotsData), 3651233754U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesTypes_h_2139661826(TEXT("/Script/SteamCorePro"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
