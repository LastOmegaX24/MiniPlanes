// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamRemotePlay/SteamRemotePlayTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamRemotePlayTypes() {}

// Begin Cross Module References
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Enum ESteamCoreProDeviceFormFactor
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreProDeviceFormFactor;
static UEnum* ESteamCoreProDeviceFormFactor_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProDeviceFormFactor.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreProDeviceFormFactor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamCoreProDeviceFormFactor"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreProDeviceFormFactor.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCoreProDeviceFormFactor>()
{
	return ESteamCoreProDeviceFormFactor_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "Computer.Name", "ESteamCoreProDeviceFormFactor::Computer" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "Phone.Name", "ESteamCoreProDeviceFormFactor::Phone" },
		{ "Tablet.Name", "ESteamCoreProDeviceFormFactor::Tablet" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
		{ "TV.Name", "ESteamCoreProDeviceFormFactor::TV" },
		{ "Unknown.Name", "ESteamCoreProDeviceFormFactor::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreProDeviceFormFactor::Unknown", (int64)ESteamCoreProDeviceFormFactor::Unknown },
		{ "ESteamCoreProDeviceFormFactor::Phone", (int64)ESteamCoreProDeviceFormFactor::Phone },
		{ "ESteamCoreProDeviceFormFactor::Tablet", (int64)ESteamCoreProDeviceFormFactor::Tablet },
		{ "ESteamCoreProDeviceFormFactor::Computer", (int64)ESteamCoreProDeviceFormFactor::Computer },
		{ "ESteamCoreProDeviceFormFactor::TV", (int64)ESteamCoreProDeviceFormFactor::TV },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamCoreProDeviceFormFactor",
	"ESteamCoreProDeviceFormFactor",
	Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProDeviceFormFactor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreProDeviceFormFactor.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamCoreProDeviceFormFactor_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreProDeviceFormFactor.InnerSingleton;
}
// End Enum ESteamCoreProDeviceFormFactor

// Begin ScriptStruct FSteamRemotePlaySessionConnected
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected;
class UScriptStruct* FSteamRemotePlaySessionConnected::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamRemotePlaySessionConnected"));
	}
	return Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamRemotePlaySessionConnected>()
{
	return FSteamRemotePlaySessionConnected::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamRemotePlaySessionConnected>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamRemotePlaySessionConnected, SessionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionID_MetaData), NewProp_SessionID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewProp_SessionID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamRemotePlaySessionConnected",
	Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::PropPointers),
	sizeof(FSteamRemotePlaySessionConnected),
	alignof(FSteamRemotePlaySessionConnected),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected()
{
	if (!Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected.InnerSingleton, Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected.InnerSingleton;
}
// End ScriptStruct FSteamRemotePlaySessionConnected

// Begin ScriptStruct FSteamRemotePlaySessionDisconnected
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected;
class UScriptStruct* FSteamRemotePlaySessionDisconnected::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamRemotePlaySessionDisconnected"));
	}
	return Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamRemotePlaySessionDisconnected>()
{
	return FSteamRemotePlaySessionDisconnected::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamRemotePlaySessionDisconnected>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamRemotePlaySessionDisconnected, SessionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionID_MetaData), NewProp_SessionID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewProp_SessionID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamRemotePlaySessionDisconnected",
	Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::PropPointers),
	sizeof(FSteamRemotePlaySessionDisconnected),
	alignof(FSteamRemotePlaySessionDisconnected),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected()
{
	if (!Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected.InnerSingleton, Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected.InnerSingleton;
}
// End ScriptStruct FSteamRemotePlaySessionDisconnected

// Begin Delegate FOnSteamRemotePlaySessionConnected
struct Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnSteamRemotePlaySessionConnected_Parms
	{
		FSteamRemotePlaySessionConnected Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSteamRemotePlaySessionConnected_Parms, Data), Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3393517062
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnSteamRemotePlaySessionConnected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamRemotePlaySessionConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamRemotePlaySessionConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamRemotePlaySessionConnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionConnected, FSteamRemotePlaySessionConnected const& Data)
{
	struct _Script_SteamCorePro_eventOnSteamRemotePlaySessionConnected_Parms
	{
		FSteamRemotePlaySessionConnected Data;
	};
	_Script_SteamCorePro_eventOnSteamRemotePlaySessionConnected_Parms Parms;
	Parms.Data=Data;
	OnSteamRemotePlaySessionConnected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSteamRemotePlaySessionConnected

// Begin Delegate FOnSteamRemotePlaySessionDisconnected
struct Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnSteamRemotePlaySessionDisconnected_Parms
	{
		FSteamRemotePlaySessionDisconnected Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSteamRemotePlaySessionDisconnected_Parms, Data), Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3615686471
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnSteamRemotePlaySessionDisconnected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamRemotePlaySessionDisconnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamRemotePlaySessionDisconnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamRemotePlaySessionDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionDisconnected, FSteamRemotePlaySessionDisconnected const& Data)
{
	struct _Script_SteamCorePro_eventOnSteamRemotePlaySessionDisconnected_Parms
	{
		FSteamRemotePlaySessionDisconnected Data;
	};
	_Script_SteamCorePro_eventOnSteamRemotePlaySessionDisconnected_Parms Parms;
	Parms.Data=Data;
	OnSteamRemotePlaySessionDisconnected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSteamRemotePlaySessionDisconnected

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamCoreProDeviceFormFactor_StaticEnum, TEXT("ESteamCoreProDeviceFormFactor"), &Z_Registration_Info_UEnum_ESteamCoreProDeviceFormFactor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 638747326U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSteamRemotePlaySessionConnected::StaticStruct, Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewStructOps, TEXT("SteamRemotePlaySessionConnected"), &Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamRemotePlaySessionConnected), 3393517062U) },
		{ FSteamRemotePlaySessionDisconnected::StaticStruct, Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewStructOps, TEXT("SteamRemotePlaySessionDisconnected"), &Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamRemotePlaySessionDisconnected), 3615686471U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_3730082833(TEXT("/Script/SteamCorePro"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemotePlay_SteamRemotePlayTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
