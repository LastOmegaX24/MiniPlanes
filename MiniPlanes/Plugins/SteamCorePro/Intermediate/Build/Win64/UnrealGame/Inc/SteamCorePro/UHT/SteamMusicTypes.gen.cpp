// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamMusic/SteamMusicTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamMusicTypes() {}

// Begin Cross Module References
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamAudioPlaybackStatus();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnPlaybackStatusHasChanged__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnVolumeHasChanged__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FPlaybackStatusHasChanged();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FVolumeHasChanged();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Enum ESteamAudioPlaybackStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus;
static UEnum* ESteamAudioPlaybackStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamAudioPlaybackStatus, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamAudioPlaybackStatus"));
	}
	return Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamAudioPlaybackStatus>()
{
	return ESteamAudioPlaybackStatus_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamAudioPlaybackStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "Idle.Name", "ESteamAudioPlaybackStatus::Idle" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusicTypes.h" },
		{ "Paused.Name", "ESteamAudioPlaybackStatus::Paused" },
		{ "Playing.Name", "ESteamAudioPlaybackStatus::Playing" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
		{ "Undefined.Name", "ESteamAudioPlaybackStatus::Undefined" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamAudioPlaybackStatus::Undefined", (int64)ESteamAudioPlaybackStatus::Undefined },
		{ "ESteamAudioPlaybackStatus::Playing", (int64)ESteamAudioPlaybackStatus::Playing },
		{ "ESteamAudioPlaybackStatus::Paused", (int64)ESteamAudioPlaybackStatus::Paused },
		{ "ESteamAudioPlaybackStatus::Idle", (int64)ESteamAudioPlaybackStatus::Idle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamAudioPlaybackStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamAudioPlaybackStatus",
	"ESteamAudioPlaybackStatus",
	Z_Construct_UEnum_SteamCorePro_ESteamAudioPlaybackStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamAudioPlaybackStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamAudioPlaybackStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamAudioPlaybackStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamAudioPlaybackStatus()
{
	if (!Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamAudioPlaybackStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus.InnerSingleton;
}
// End Enum ESteamAudioPlaybackStatus

// Begin ScriptStruct FPlaybackStatusHasChanged
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlaybackStatusHasChanged;
class UScriptStruct* FPlaybackStatusHasChanged::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlaybackStatusHasChanged.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlaybackStatusHasChanged.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlaybackStatusHasChanged, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("PlaybackStatusHasChanged"));
	}
	return Z_Registration_Info_UScriptStruct_PlaybackStatusHasChanged.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FPlaybackStatusHasChanged>()
{
	return FPlaybackStatusHasChanged::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusicTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlaybackStatusHasChanged>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"PlaybackStatusHasChanged",
	nullptr,
	0,
	sizeof(FPlaybackStatusHasChanged),
	alignof(FPlaybackStatusHasChanged),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlaybackStatusHasChanged()
{
	if (!Z_Registration_Info_UScriptStruct_PlaybackStatusHasChanged.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlaybackStatusHasChanged.InnerSingleton, Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlaybackStatusHasChanged.InnerSingleton;
}
// End ScriptStruct FPlaybackStatusHasChanged

// Begin ScriptStruct FVolumeHasChanged
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VolumeHasChanged;
class UScriptStruct* FVolumeHasChanged::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VolumeHasChanged.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VolumeHasChanged.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVolumeHasChanged, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("VolumeHasChanged"));
	}
	return Z_Registration_Info_UScriptStruct_VolumeHasChanged.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FVolumeHasChanged>()
{
	return FVolumeHasChanged::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVolumeHasChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusicTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusicTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVolumeHasChanged>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumeHasChanged, Volume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"VolumeHasChanged",
	Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::PropPointers),
	sizeof(FVolumeHasChanged),
	alignof(FVolumeHasChanged),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVolumeHasChanged()
{
	if (!Z_Registration_Info_UScriptStruct_VolumeHasChanged.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VolumeHasChanged.InnerSingleton, Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VolumeHasChanged.InnerSingleton;
}
// End ScriptStruct FVolumeHasChanged

// Begin Delegate FOnPlaybackStatusHasChanged
struct Z_Construct_UDelegateFunction_SteamCorePro_OnPlaybackStatusHasChanged__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnPlaybackStatusHasChanged_Parms
	{
		FPlaybackStatusHasChanged Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusicTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnPlaybackStatusHasChanged__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnPlaybackStatusHasChanged_Parms, Data), Z_Construct_UScriptStruct_FPlaybackStatusHasChanged, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1015725839
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnPlaybackStatusHasChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnPlaybackStatusHasChanged__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnPlaybackStatusHasChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnPlaybackStatusHasChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnPlaybackStatusHasChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnPlaybackStatusHasChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnPlaybackStatusHasChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnPlaybackStatusHasChanged__DelegateSignature_Statics::_Script_SteamCorePro_eventOnPlaybackStatusHasChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnPlaybackStatusHasChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnPlaybackStatusHasChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnPlaybackStatusHasChanged__DelegateSignature_Statics::_Script_SteamCorePro_eventOnPlaybackStatusHasChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnPlaybackStatusHasChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnPlaybackStatusHasChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlaybackStatusHasChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackStatusHasChanged, FPlaybackStatusHasChanged const& Data)
{
	struct _Script_SteamCorePro_eventOnPlaybackStatusHasChanged_Parms
	{
		FPlaybackStatusHasChanged Data;
	};
	_Script_SteamCorePro_eventOnPlaybackStatusHasChanged_Parms Parms;
	Parms.Data=Data;
	OnPlaybackStatusHasChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlaybackStatusHasChanged

// Begin Delegate FOnVolumeHasChanged
struct Z_Construct_UDelegateFunction_SteamCorePro_OnVolumeHasChanged__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnVolumeHasChanged_Parms
	{
		FVolumeHasChanged Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusicTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnVolumeHasChanged__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnVolumeHasChanged_Parms, Data), Z_Construct_UScriptStruct_FVolumeHasChanged, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1121121072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnVolumeHasChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnVolumeHasChanged__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnVolumeHasChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnVolumeHasChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnVolumeHasChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnVolumeHasChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnVolumeHasChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnVolumeHasChanged__DelegateSignature_Statics::_Script_SteamCorePro_eventOnVolumeHasChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnVolumeHasChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnVolumeHasChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnVolumeHasChanged__DelegateSignature_Statics::_Script_SteamCorePro_eventOnVolumeHasChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnVolumeHasChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnVolumeHasChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnVolumeHasChanged_DelegateWrapper(const FMulticastScriptDelegate& OnVolumeHasChanged, FVolumeHasChanged const& Data)
{
	struct _Script_SteamCorePro_eventOnVolumeHasChanged_Parms
	{
		FVolumeHasChanged Data;
	};
	_Script_SteamCorePro_eventOnVolumeHasChanged_Parms Parms;
	Parms.Data=Data;
	OnVolumeHasChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnVolumeHasChanged

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMusic_SteamMusicTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamAudioPlaybackStatus_StaticEnum, TEXT("ESteamAudioPlaybackStatus"), &Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1313511681U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlaybackStatusHasChanged::StaticStruct, Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::NewStructOps, TEXT("PlaybackStatusHasChanged"), &Z_Registration_Info_UScriptStruct_PlaybackStatusHasChanged, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlaybackStatusHasChanged), 1015725839U) },
		{ FVolumeHasChanged::StaticStruct, Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::NewStructOps, TEXT("VolumeHasChanged"), &Z_Registration_Info_UScriptStruct_VolumeHasChanged, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVolumeHasChanged), 1121121072U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMusic_SteamMusicTypes_h_1486205254(TEXT("/Script/SteamCorePro"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMusic_SteamMusicTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMusic_SteamMusicTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMusic_SteamMusicTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMusic_SteamMusicTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
