// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamScreenshots/SteamScreenshotsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamScreenshotsTypes() {}

// Begin Cross Module References
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamResult();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamVRScreenshotType();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotReady__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotRequested__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotHandle();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotReady();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotRequested();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Enum ESteamVRScreenshotType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamVRScreenshotType;
static UEnum* ESteamVRScreenshotType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamVRScreenshotType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamVRScreenshotType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamVRScreenshotType, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamVRScreenshotType"));
	}
	return Z_Registration_Info_UEnum_ESteamVRScreenshotType.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamVRScreenshotType>()
{
	return ESteamVRScreenshotType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamVRScreenshotType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
		{ "Mono.Name", "ESteamVRScreenshotType::Mono" },
		{ "MonoCubemap.Name", "ESteamVRScreenshotType::MonoCubemap" },
		{ "MonoPanorama.Name", "ESteamVRScreenshotType::MonoPanorama" },
		{ "None.Name", "ESteamVRScreenshotType::None" },
		{ "Stereo.Name", "ESteamVRScreenshotType::Stereo" },
		{ "StereoPanorama.Name", "ESteamVRScreenshotType::StereoPanorama" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamVRScreenshotType::None", (int64)ESteamVRScreenshotType::None },
		{ "ESteamVRScreenshotType::Mono", (int64)ESteamVRScreenshotType::Mono },
		{ "ESteamVRScreenshotType::Stereo", (int64)ESteamVRScreenshotType::Stereo },
		{ "ESteamVRScreenshotType::MonoCubemap", (int64)ESteamVRScreenshotType::MonoCubemap },
		{ "ESteamVRScreenshotType::MonoPanorama", (int64)ESteamVRScreenshotType::MonoPanorama },
		{ "ESteamVRScreenshotType::StereoPanorama", (int64)ESteamVRScreenshotType::StereoPanorama },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamVRScreenshotType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamVRScreenshotType",
	"ESteamVRScreenshotType",
	Z_Construct_UEnum_SteamCorePro_ESteamVRScreenshotType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamVRScreenshotType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamVRScreenshotType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamVRScreenshotType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamVRScreenshotType()
{
	if (!Z_Registration_Info_UEnum_ESteamVRScreenshotType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamVRScreenshotType.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamVRScreenshotType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamVRScreenshotType.InnerSingleton;
}
// End Enum ESteamVRScreenshotType

// Begin ScriptStruct FScreenshotHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScreenshotHandle;
class UScriptStruct* FScreenshotHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenshotHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScreenshotHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenshotHandle, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ScreenshotHandle"));
	}
	return Z_Registration_Info_UScriptStruct_ScreenshotHandle.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FScreenshotHandle>()
{
	return FScreenshotHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScreenshotHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenshotHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenshotHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"ScreenshotHandle",
	nullptr,
	0,
	sizeof(FScreenshotHandle),
	alignof(FScreenshotHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScreenshotHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScreenshotHandle()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenshotHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScreenshotHandle.InnerSingleton, Z_Construct_UScriptStruct_FScreenshotHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScreenshotHandle.InnerSingleton;
}
// End ScriptStruct FScreenshotHandle

// Begin ScriptStruct FScreenshotReady
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScreenshotReady;
class UScriptStruct* FScreenshotReady::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenshotReady.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScreenshotReady.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenshotReady, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ScreenshotReady"));
	}
	return Z_Registration_Info_UScriptStruct_ScreenshotReady.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FScreenshotReady>()
{
	return FScreenshotReady::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScreenshotReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "Category", "Screenshots" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Screenshots" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenshotReady>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenshotReady, Handle), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 2152941232
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenshotReady, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScreenshotReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenshotReady_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"ScreenshotReady",
	Z_Construct_UScriptStruct_FScreenshotReady_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotReady_Statics::PropPointers),
	sizeof(FScreenshotReady),
	alignof(FScreenshotReady),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotReady_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScreenshotReady_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScreenshotReady()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenshotReady.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScreenshotReady.InnerSingleton, Z_Construct_UScriptStruct_FScreenshotReady_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScreenshotReady.InnerSingleton;
}
// End ScriptStruct FScreenshotReady

// Begin ScriptStruct FScreenshotRequested
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScreenshotRequested;
class UScriptStruct* FScreenshotRequested::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenshotRequested.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScreenshotRequested.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenshotRequested, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ScreenshotRequested"));
	}
	return Z_Registration_Info_UScriptStruct_ScreenshotRequested.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FScreenshotRequested>()
{
	return FScreenshotRequested::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScreenshotRequested_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenshotRequested>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenshotRequested_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"ScreenshotRequested",
	nullptr,
	0,
	sizeof(FScreenshotRequested),
	alignof(FScreenshotRequested),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotRequested_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScreenshotRequested_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScreenshotRequested()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenshotRequested.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScreenshotRequested.InnerSingleton, Z_Construct_UScriptStruct_FScreenshotRequested_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScreenshotRequested.InnerSingleton;
}
// End ScriptStruct FScreenshotRequested

// Begin Delegate FOnScreenshotReady
struct Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotReady__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnScreenshotReady_Parms
	{
		FScreenshotReady Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotReady__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnScreenshotReady_Parms, Data), Z_Construct_UScriptStruct_FScreenshotReady, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2540966793
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotReady__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotReady__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotReady__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotReady__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnScreenshotReady__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotReady__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotReady__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotReady__DelegateSignature_Statics::_Script_SteamCorePro_eventOnScreenshotReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotReady__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotReady__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotReady__DelegateSignature_Statics::_Script_SteamCorePro_eventOnScreenshotReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotReady__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotReady__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnScreenshotReady_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotReady, FScreenshotReady const& Data)
{
	struct _Script_SteamCorePro_eventOnScreenshotReady_Parms
	{
		FScreenshotReady Data;
	};
	_Script_SteamCorePro_eventOnScreenshotReady_Parms Parms;
	Parms.Data=Data;
	OnScreenshotReady.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnScreenshotReady

// Begin Delegate FOnScreenshotRequested
struct Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotRequested__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnScreenshotRequested_Parms
	{
		FScreenshotRequested Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotRequested__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnScreenshotRequested_Parms, Data), Z_Construct_UScriptStruct_FScreenshotRequested, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2834131060
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotRequested__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotRequested__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotRequested__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotRequested__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnScreenshotRequested__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotRequested__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotRequested__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotRequested__DelegateSignature_Statics::_Script_SteamCorePro_eventOnScreenshotRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotRequested__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotRequested__DelegateSignature_Statics::_Script_SteamCorePro_eventOnScreenshotRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnScreenshotRequested_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotRequested, FScreenshotRequested const& Data)
{
	struct _Script_SteamCorePro_eventOnScreenshotRequested_Parms
	{
		FScreenshotRequested Data;
	};
	_Script_SteamCorePro_eventOnScreenshotRequested_Parms Parms;
	Parms.Data=Data;
	OnScreenshotRequested.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnScreenshotRequested

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshotsTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamVRScreenshotType_StaticEnum, TEXT("ESteamVRScreenshotType"), &Z_Registration_Info_UEnum_ESteamVRScreenshotType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 234097396U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FScreenshotHandle::StaticStruct, Z_Construct_UScriptStruct_FScreenshotHandle_Statics::NewStructOps, TEXT("ScreenshotHandle"), &Z_Registration_Info_UScriptStruct_ScreenshotHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScreenshotHandle), 2152941232U) },
		{ FScreenshotReady::StaticStruct, Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewStructOps, TEXT("ScreenshotReady"), &Z_Registration_Info_UScriptStruct_ScreenshotReady, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScreenshotReady), 2540966793U) },
		{ FScreenshotRequested::StaticStruct, Z_Construct_UScriptStruct_FScreenshotRequested_Statics::NewStructOps, TEXT("ScreenshotRequested"), &Z_Registration_Info_UScriptStruct_ScreenshotRequested, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScreenshotRequested), 2834131060U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshotsTypes_h_1869649783(TEXT("/Script/SteamCorePro"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshotsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshotsTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshotsTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshotsTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
