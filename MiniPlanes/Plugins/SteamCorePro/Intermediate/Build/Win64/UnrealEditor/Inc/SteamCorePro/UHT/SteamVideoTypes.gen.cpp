// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamVideo/SteamVideoTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVideoTypes() {}

// Begin Cross Module References
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamBroadcastUploadResult();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamResult();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGetOPFSettingsResult__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGetVideoURLResult__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FGetOPFSettingsResult();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FGetVideoURLResult();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Enum ESteamBroadcastUploadResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamBroadcastUploadResult;
static UEnum* ESteamBroadcastUploadResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamBroadcastUploadResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamBroadcastUploadResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamBroadcastUploadResult, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamBroadcastUploadResult"));
	}
	return Z_Registration_Info_UEnum_ESteamBroadcastUploadResult.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamBroadcastUploadResult>()
{
	return ESteamBroadcastUploadResult_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamBroadcastUploadResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BandwidthExceeded.Name", "ESteamBroadcastUploadResult::BandwidthExceeded" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "FrameFailed.Name", "ESteamBroadcastUploadResult::FrameFailed" },
		{ "InitFailed.Name", "ESteamBroadcastUploadResult::InitFailed" },
		{ "LowFPS.Name", "ESteamBroadcastUploadResult::LowFPS" },
		{ "MissingAudio.Name", "ESteamBroadcastUploadResult::MissingAudio" },
		{ "MissingKeyFrames.Name", "ESteamBroadcastUploadResult::MissingKeyFrames" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
		{ "NoConnection.Name", "ESteamBroadcastUploadResult::NoConnection" },
		{ "None.Name", "ESteamBroadcastUploadResult::None" },
		{ "OK.Name", "ESteamBroadcastUploadResult::OK" },
		{ "RelayFailed.Name", "ESteamBroadcastUploadResult::RelayFailed" },
		{ "SettingsChanged.Name", "ESteamBroadcastUploadResult::SettingsChanged" },
		{ "Timeout.Name", "ESteamBroadcastUploadResult::Timeout" },
		{ "TooFarBehind.Name", "ESteamBroadcastUploadResult::TooFarBehind" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
		{ "TranscodeBehind.Name", "ESteamBroadcastUploadResult::TranscodeBehind" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamBroadcastUploadResult::None", (int64)ESteamBroadcastUploadResult::None },
		{ "ESteamBroadcastUploadResult::OK", (int64)ESteamBroadcastUploadResult::OK },
		{ "ESteamBroadcastUploadResult::InitFailed", (int64)ESteamBroadcastUploadResult::InitFailed },
		{ "ESteamBroadcastUploadResult::FrameFailed", (int64)ESteamBroadcastUploadResult::FrameFailed },
		{ "ESteamBroadcastUploadResult::Timeout", (int64)ESteamBroadcastUploadResult::Timeout },
		{ "ESteamBroadcastUploadResult::BandwidthExceeded", (int64)ESteamBroadcastUploadResult::BandwidthExceeded },
		{ "ESteamBroadcastUploadResult::LowFPS", (int64)ESteamBroadcastUploadResult::LowFPS },
		{ "ESteamBroadcastUploadResult::MissingKeyFrames", (int64)ESteamBroadcastUploadResult::MissingKeyFrames },
		{ "ESteamBroadcastUploadResult::NoConnection", (int64)ESteamBroadcastUploadResult::NoConnection },
		{ "ESteamBroadcastUploadResult::RelayFailed", (int64)ESteamBroadcastUploadResult::RelayFailed },
		{ "ESteamBroadcastUploadResult::SettingsChanged", (int64)ESteamBroadcastUploadResult::SettingsChanged },
		{ "ESteamBroadcastUploadResult::MissingAudio", (int64)ESteamBroadcastUploadResult::MissingAudio },
		{ "ESteamBroadcastUploadResult::TooFarBehind", (int64)ESteamBroadcastUploadResult::TooFarBehind },
		{ "ESteamBroadcastUploadResult::TranscodeBehind", (int64)ESteamBroadcastUploadResult::TranscodeBehind },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamBroadcastUploadResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamBroadcastUploadResult",
	"ESteamBroadcastUploadResult",
	Z_Construct_UEnum_SteamCorePro_ESteamBroadcastUploadResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamBroadcastUploadResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamBroadcastUploadResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamBroadcastUploadResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamBroadcastUploadResult()
{
	if (!Z_Registration_Info_UEnum_ESteamBroadcastUploadResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamBroadcastUploadResult.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamBroadcastUploadResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamBroadcastUploadResult.InnerSingleton;
}
// End Enum ESteamBroadcastUploadResult

// Begin ScriptStruct FGetOPFSettingsResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetOPFSettingsResult;
class UScriptStruct* FGetOPFSettingsResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetOPFSettingsResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetOPFSettingsResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetOPFSettingsResult, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("GetOPFSettingsResult"));
	}
	return Z_Registration_Info_UScriptStruct_GetOPFSettingsResult.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FGetOPFSettingsResult>()
{
	return FGetOPFSettingsResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetOPFSettingsResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetOPFSettingsResult, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetOPFSettingsResult, AppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppID_MetaData), NewProp_AppID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"GetOPFSettingsResult",
	Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::PropPointers),
	sizeof(FGetOPFSettingsResult),
	alignof(FGetOPFSettingsResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetOPFSettingsResult()
{
	if (!Z_Registration_Info_UScriptStruct_GetOPFSettingsResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetOPFSettingsResult.InnerSingleton, Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetOPFSettingsResult.InnerSingleton;
}
// End ScriptStruct FGetOPFSettingsResult

// Begin ScriptStruct FGetVideoURLResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetVideoURLResult;
class UScriptStruct* FGetVideoURLResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetVideoURLResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetVideoURLResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetVideoURLResult, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("GetVideoURLResult"));
	}
	return Z_Registration_Info_UScriptStruct_GetVideoURLResult.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FGetVideoURLResult>()
{
	return FGetVideoURLResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetVideoURLResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetVideoURLResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetVideoURLResult, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetVideoURLResult, AppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppID_MetaData), NewProp_AppID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetVideoURLResult, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_URL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"GetVideoURLResult",
	Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::PropPointers),
	sizeof(FGetVideoURLResult),
	alignof(FGetVideoURLResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetVideoURLResult()
{
	if (!Z_Registration_Info_UScriptStruct_GetVideoURLResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetVideoURLResult.InnerSingleton, Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetVideoURLResult.InnerSingleton;
}
// End ScriptStruct FGetVideoURLResult

// Begin Delegate FOnGetOPFSettingsResult
struct Z_Construct_UDelegateFunction_SteamCorePro_OnGetOPFSettingsResult__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnGetOPFSettingsResult_Parms
	{
		FGetOPFSettingsResult Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnGetOPFSettingsResult__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnGetOPFSettingsResult_Parms, Data), Z_Construct_UScriptStruct_FGetOPFSettingsResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2599116658
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnGetOPFSettingsResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnGetOPFSettingsResult__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnGetOPFSettingsResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnGetOPFSettingsResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnGetOPFSettingsResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnGetOPFSettingsResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnGetOPFSettingsResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnGetOPFSettingsResult__DelegateSignature_Statics::_Script_SteamCorePro_eventOnGetOPFSettingsResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnGetOPFSettingsResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnGetOPFSettingsResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnGetOPFSettingsResult__DelegateSignature_Statics::_Script_SteamCorePro_eventOnGetOPFSettingsResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGetOPFSettingsResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnGetOPFSettingsResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetOPFSettingsResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetOPFSettingsResult, FGetOPFSettingsResult const& Data)
{
	struct _Script_SteamCorePro_eventOnGetOPFSettingsResult_Parms
	{
		FGetOPFSettingsResult Data;
	};
	_Script_SteamCorePro_eventOnGetOPFSettingsResult_Parms Parms;
	Parms.Data=Data;
	OnGetOPFSettingsResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGetOPFSettingsResult

// Begin Delegate FOnGetVideoURLResult
struct Z_Construct_UDelegateFunction_SteamCorePro_OnGetVideoURLResult__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnGetVideoURLResult_Parms
	{
		FGetVideoURLResult Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnGetVideoURLResult__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnGetVideoURLResult_Parms, Data), Z_Construct_UScriptStruct_FGetVideoURLResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 221932151
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnGetVideoURLResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnGetVideoURLResult__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnGetVideoURLResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnGetVideoURLResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnGetVideoURLResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnGetVideoURLResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnGetVideoURLResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnGetVideoURLResult__DelegateSignature_Statics::_Script_SteamCorePro_eventOnGetVideoURLResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnGetVideoURLResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnGetVideoURLResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnGetVideoURLResult__DelegateSignature_Statics::_Script_SteamCorePro_eventOnGetVideoURLResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGetVideoURLResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnGetVideoURLResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetVideoURLResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetVideoURLResult, FGetVideoURLResult const& Data)
{
	struct _Script_SteamCorePro_eventOnGetVideoURLResult_Parms
	{
		FGetVideoURLResult Data;
	};
	_Script_SteamCorePro_eventOnGetVideoURLResult_Parms Parms;
	Parms.Data=Data;
	OnGetVideoURLResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGetVideoURLResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamVideo_SteamVideoTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamBroadcastUploadResult_StaticEnum, TEXT("ESteamBroadcastUploadResult"), &Z_Registration_Info_UEnum_ESteamBroadcastUploadResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2176776283U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGetOPFSettingsResult::StaticStruct, Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewStructOps, TEXT("GetOPFSettingsResult"), &Z_Registration_Info_UScriptStruct_GetOPFSettingsResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetOPFSettingsResult), 2599116658U) },
		{ FGetVideoURLResult::StaticStruct, Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewStructOps, TEXT("GetVideoURLResult"), &Z_Registration_Info_UScriptStruct_GetVideoURLResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetVideoURLResult), 221932151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamVideo_SteamVideoTypes_h_2057250118(TEXT("/Script/SteamCorePro"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamVideo_SteamVideoTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamVideo_SteamVideoTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamVideo_SteamVideoTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamVideo_SteamVideoTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
