// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamRemoteStorage/SteamRemoteStorageTypes.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamRemoteStorageTypes() {}

// Begin Cross Module References
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamRemoteStoragePlatform();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamResult();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamUGCReadAction();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileSubscribed__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileShareResult();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Enum ESteamRemoteStoragePlatform
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamRemoteStoragePlatform;
static UEnum* ESteamRemoteStoragePlatform_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamRemoteStoragePlatform.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamRemoteStoragePlatform.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamRemoteStoragePlatform, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamRemoteStoragePlatform"));
	}
	return Z_Registration_Info_UEnum_ESteamRemoteStoragePlatform.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamRemoteStoragePlatform>()
{
	return ESteamRemoteStoragePlatform_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamRemoteStoragePlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Name", "ESteamRemoteStoragePlatform::All" },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "Linux.Name", "ESteamRemoteStoragePlatform::Linux" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
		{ "None.Name", "ESteamRemoteStoragePlatform::None" },
		{ "OSX.Name", "ESteamRemoteStoragePlatform::OSX" },
		{ "PS3.Name", "ESteamRemoteStoragePlatform::PS3" },
		{ "Reserved2.Name", "ESteamRemoteStoragePlatform::Reserved2" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
		{ "Windows.Name", "ESteamRemoteStoragePlatform::Windows" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamRemoteStoragePlatform::None", (int64)ESteamRemoteStoragePlatform::None },
		{ "ESteamRemoteStoragePlatform::Windows", (int64)ESteamRemoteStoragePlatform::Windows },
		{ "ESteamRemoteStoragePlatform::OSX", (int64)ESteamRemoteStoragePlatform::OSX },
		{ "ESteamRemoteStoragePlatform::PS3", (int64)ESteamRemoteStoragePlatform::PS3 },
		{ "ESteamRemoteStoragePlatform::Linux", (int64)ESteamRemoteStoragePlatform::Linux },
		{ "ESteamRemoteStoragePlatform::Reserved2", (int64)ESteamRemoteStoragePlatform::Reserved2 },
		{ "ESteamRemoteStoragePlatform::All", (int64)ESteamRemoteStoragePlatform::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamRemoteStoragePlatform_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamRemoteStoragePlatform",
	"ESteamRemoteStoragePlatform",
	Z_Construct_UEnum_SteamCorePro_ESteamRemoteStoragePlatform_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamRemoteStoragePlatform_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamRemoteStoragePlatform_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamRemoteStoragePlatform_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamRemoteStoragePlatform()
{
	if (!Z_Registration_Info_UEnum_ESteamRemoteStoragePlatform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamRemoteStoragePlatform.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamRemoteStoragePlatform_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamRemoteStoragePlatform.InnerSingleton;
}
// End Enum ESteamRemoteStoragePlatform

// Begin Enum ESteamUGCReadAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamUGCReadAction;
static UEnum* ESteamUGCReadAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamUGCReadAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamUGCReadAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamUGCReadAction, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamUGCReadAction"));
	}
	return Z_Registration_Info_UEnum_ESteamUGCReadAction.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamUGCReadAction>()
{
	return ESteamUGCReadAction_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamUGCReadAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "k_EUGCRead_Close.Comment", "// Frees the file handle.  Use this when you're done reading the content.  \n// To read the file from Steam again you will need to call UGCDownload again. \n" },
		{ "k_EUGCRead_Close.Name", "ESteamUGCReadAction::k_EUGCRead_Close" },
		{ "k_EUGCRead_Close.ToolTip", "Frees the file handle.  Use this when you're done reading the content.\nTo read the file from Steam again you will need to call UGCDownload again." },
		{ "k_EUGCRead_ContinueReading.Comment", "// Keeps the file handle open.  Use this when using UGCRead to seek to different parts of the file.\n// When you are done seeking around the file, make a final call with k_EUGCRead_Close to close it.\n" },
		{ "k_EUGCRead_ContinueReading.Name", "ESteamUGCReadAction::k_EUGCRead_ContinueReading" },
		{ "k_EUGCRead_ContinueReading.ToolTip", "Keeps the file handle open.  Use this when using UGCRead to seek to different parts of the file.\nWhen you are done seeking around the file, make a final call with k_EUGCRead_Close to close it." },
		{ "k_EUGCRead_ContinueReadingUntilFinished.Comment", "// Keeps the file handle open unless the last byte is read.  You can use this when reading large files (over 100MB) in sequential chunks.\n// If the last byte is read, this will behave the same as k_EUGCRead_Close.  Otherwise, it behaves the same as k_EUGCRead_ContinueReading.\n// This value maintains the same behavior as before the EUGCReadAction parameter was introduced.\n" },
		{ "k_EUGCRead_ContinueReadingUntilFinished.Name", "ESteamUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished" },
		{ "k_EUGCRead_ContinueReadingUntilFinished.ToolTip", "Keeps the file handle open unless the last byte is read.  You can use this when reading large files (over 100MB) in sequential chunks.\nIf the last byte is read, this will behave the same as k_EUGCRead_Close.  Otherwise, it behaves the same as k_EUGCRead_ContinueReading.\nThis value maintains the same behavior as before the EUGCReadAction parameter was introduced." },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished", (int64)ESteamUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished },
		{ "ESteamUGCReadAction::k_EUGCRead_ContinueReading", (int64)ESteamUGCReadAction::k_EUGCRead_ContinueReading },
		{ "ESteamUGCReadAction::k_EUGCRead_Close", (int64)ESteamUGCReadAction::k_EUGCRead_Close },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamUGCReadAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamUGCReadAction",
	"ESteamUGCReadAction",
	Z_Construct_UEnum_SteamCorePro_ESteamUGCReadAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamUGCReadAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamUGCReadAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamUGCReadAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamUGCReadAction()
{
	if (!Z_Registration_Info_UEnum_ESteamUGCReadAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamUGCReadAction.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamUGCReadAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamUGCReadAction.InnerSingleton;
}
// End Enum ESteamUGCReadAction

// Begin ScriptStruct FUGCFileWriteStreamHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UGCFileWriteStreamHandle;
class UScriptStruct* FUGCFileWriteStreamHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UGCFileWriteStreamHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UGCFileWriteStreamHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("UGCFileWriteStreamHandle"));
	}
	return Z_Registration_Info_UScriptStruct_UGCFileWriteStreamHandle.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FUGCFileWriteStreamHandle>()
{
	return FUGCFileWriteStreamHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUGCFileWriteStreamHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"UGCFileWriteStreamHandle",
	nullptr,
	0,
	sizeof(FUGCFileWriteStreamHandle),
	alignof(FUGCFileWriteStreamHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle()
{
	if (!Z_Registration_Info_UScriptStruct_UGCFileWriteStreamHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UGCFileWriteStreamHandle.InnerSingleton, Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UGCFileWriteStreamHandle.InnerSingleton;
}
// End ScriptStruct FUGCFileWriteStreamHandle

// Begin ScriptStruct FRemoteStorageFileWriteAsyncComplete
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteStorageFileWriteAsyncComplete;
class UScriptStruct* FRemoteStorageFileWriteAsyncComplete::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStorageFileWriteAsyncComplete.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteStorageFileWriteAsyncComplete.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("RemoteStorageFileWriteAsyncComplete"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteStorageFileWriteAsyncComplete.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FRemoteStorageFileWriteAsyncComplete>()
{
	return FRemoteStorageFileWriteAsyncComplete::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStorageFileWriteAsyncComplete>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStorageFileWriteAsyncComplete, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"RemoteStorageFileWriteAsyncComplete",
	Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::PropPointers),
	sizeof(FRemoteStorageFileWriteAsyncComplete),
	alignof(FRemoteStorageFileWriteAsyncComplete),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStorageFileWriteAsyncComplete.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteStorageFileWriteAsyncComplete.InnerSingleton, Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemoteStorageFileWriteAsyncComplete.InnerSingleton;
}
// End ScriptStruct FRemoteStorageFileWriteAsyncComplete

// Begin ScriptStruct FRemoteStorageFileReadAsyncComplete
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteStorageFileReadAsyncComplete;
class UScriptStruct* FRemoteStorageFileReadAsyncComplete::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStorageFileReadAsyncComplete.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteStorageFileReadAsyncComplete.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("RemoteStorageFileReadAsyncComplete"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteStorageFileReadAsyncComplete.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FRemoteStorageFileReadAsyncComplete>()
{
	return FRemoteStorageFileReadAsyncComplete::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Read_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Read;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStorageFileReadAsyncComplete>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStorageFileReadAsyncComplete, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStorageFileReadAsyncComplete, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Read = { "Read", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStorageFileReadAsyncComplete, Read), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Read_MetaData), NewProp_Read_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Read,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"RemoteStorageFileReadAsyncComplete",
	Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::PropPointers),
	sizeof(FRemoteStorageFileReadAsyncComplete),
	alignof(FRemoteStorageFileReadAsyncComplete),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStorageFileReadAsyncComplete.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteStorageFileReadAsyncComplete.InnerSingleton, Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemoteStorageFileReadAsyncComplete.InnerSingleton;
}
// End ScriptStruct FRemoteStorageFileReadAsyncComplete

// Begin ScriptStruct FRemoteStorageFileShareResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteStorageFileShareResult;
class UScriptStruct* FRemoteStorageFileShareResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStorageFileShareResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteStorageFileShareResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("RemoteStorageFileShareResult"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteStorageFileShareResult.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FRemoteStorageFileShareResult>()
{
	return FRemoteStorageFileShareResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_File;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStorageFileShareResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStorageFileShareResult, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStorageFileShareResult, File), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_File_MetaData), NewProp_File_MetaData) }; // 3978973746
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStorageFileShareResult, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Filename,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"RemoteStorageFileShareResult",
	Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::PropPointers),
	sizeof(FRemoteStorageFileShareResult),
	alignof(FRemoteStorageFileShareResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileShareResult()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStorageFileShareResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteStorageFileShareResult.InnerSingleton, Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemoteStorageFileShareResult.InnerSingleton;
}
// End ScriptStruct FRemoteStorageFileShareResult

// Begin ScriptStruct FRemoteStorageUnsubscribePublishedFileResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteStorageUnsubscribePublishedFileResult;
class UScriptStruct* FRemoteStorageUnsubscribePublishedFileResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStorageUnsubscribePublishedFileResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteStorageUnsubscribePublishedFileResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("RemoteStorageUnsubscribePublishedFileResult"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteStorageUnsubscribePublishedFileResult.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FRemoteStorageUnsubscribePublishedFileResult>()
{
	return FRemoteStorageUnsubscribePublishedFileResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublishedFileId_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStorageUnsubscribePublishedFileResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStorageUnsubscribePublishedFileResult, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStorageUnsubscribePublishedFileResult, PublishedFileId), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublishedFileId_MetaData), NewProp_PublishedFileId_MetaData) }; // 3569413351
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_PublishedFileId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"RemoteStorageUnsubscribePublishedFileResult",
	Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::PropPointers),
	sizeof(FRemoteStorageUnsubscribePublishedFileResult),
	alignof(FRemoteStorageUnsubscribePublishedFileResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStorageUnsubscribePublishedFileResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteStorageUnsubscribePublishedFileResult.InnerSingleton, Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemoteStorageUnsubscribePublishedFileResult.InnerSingleton;
}
// End ScriptStruct FRemoteStorageUnsubscribePublishedFileResult

// Begin ScriptStruct FRemoteStoragePublishedFileUnsubscribed
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileUnsubscribed;
class UScriptStruct* FRemoteStoragePublishedFileUnsubscribed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileUnsubscribed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileUnsubscribed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("RemoteStoragePublishedFileUnsubscribed"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileUnsubscribed.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FRemoteStoragePublishedFileUnsubscribed>()
{
	return FRemoteStoragePublishedFileUnsubscribed::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublishedFileId_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStoragePublishedFileUnsubscribed>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStoragePublishedFileUnsubscribed, PublishedFileId), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublishedFileId_MetaData), NewProp_PublishedFileId_MetaData) }; // 3569413351
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStoragePublishedFileUnsubscribed, AppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppID_MetaData), NewProp_AppID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"RemoteStoragePublishedFileUnsubscribed",
	Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::PropPointers),
	sizeof(FRemoteStoragePublishedFileUnsubscribed),
	alignof(FRemoteStoragePublishedFileUnsubscribed),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileUnsubscribed.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileUnsubscribed.InnerSingleton, Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileUnsubscribed.InnerSingleton;
}
// End ScriptStruct FRemoteStoragePublishedFileUnsubscribed

// Begin ScriptStruct FRemoteStoragePublishedFileSubscribed
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileSubscribed;
class UScriptStruct* FRemoteStoragePublishedFileSubscribed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileSubscribed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileSubscribed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("RemoteStoragePublishedFileSubscribed"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileSubscribed.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FRemoteStoragePublishedFileSubscribed>()
{
	return FRemoteStoragePublishedFileSubscribed::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublishedFileId_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStoragePublishedFileSubscribed>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStoragePublishedFileSubscribed, PublishedFileId), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublishedFileId_MetaData), NewProp_PublishedFileId_MetaData) }; // 3569413351
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStoragePublishedFileSubscribed, AppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppID_MetaData), NewProp_AppID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"RemoteStoragePublishedFileSubscribed",
	Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::PropPointers),
	sizeof(FRemoteStoragePublishedFileSubscribed),
	alignof(FRemoteStoragePublishedFileSubscribed),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileSubscribed.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileSubscribed.InnerSingleton, Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileSubscribed.InnerSingleton;
}
// End ScriptStruct FRemoteStoragePublishedFileSubscribed

// Begin ScriptStruct FRemoteStorageDownloadUGCResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteStorageDownloadUGCResult;
class UScriptStruct* FRemoteStorageDownloadUGCResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStorageDownloadUGCResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteStorageDownloadUGCResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("RemoteStorageDownloadUGCResult"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteStorageDownloadUGCResult.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FRemoteStorageDownloadUGCResult>()
{
	return FRemoteStorageDownloadUGCResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileHandle_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "Comment", "// The handle to the file that was attempted to be downloaded.\n" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
		{ "ToolTip", "The handle to the file that was attempted to be downloaded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeInBytes_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "Comment", "// ID of the app that created this file.\n" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
		{ "ToolTip", "ID of the app that created this file." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "Comment", "// The size of the file that was downloaded, in bytes.\n" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
		{ "ToolTip", "The size of the file that was downloaded, in bytes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDOwner_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "Comment", "// The name of the file that was downloaded. \n" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
		{ "ToolTip", "The name of the file that was downloaded." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FileHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeInBytes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStorageDownloadUGCResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStorageDownloadUGCResult, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_FileHandle = { "FileHandle", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStorageDownloadUGCResult, FileHandle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileHandle_MetaData), NewProp_FileHandle_MetaData) }; // 3978973746
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStorageDownloadUGCResult, AppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppID_MetaData), NewProp_AppID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SizeInBytes = { "SizeInBytes", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStorageDownloadUGCResult, SizeInBytes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeInBytes_MetaData), NewProp_SizeInBytes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStorageDownloadUGCResult, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SteamIDOwner = { "SteamIDOwner", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteStorageDownloadUGCResult, SteamIDOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDOwner_MetaData), NewProp_SteamIDOwner_MetaData) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_FileHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SizeInBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SteamIDOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"RemoteStorageDownloadUGCResult",
	Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::PropPointers),
	sizeof(FRemoteStorageDownloadUGCResult),
	alignof(FRemoteStorageDownloadUGCResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStorageDownloadUGCResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteStorageDownloadUGCResult.InnerSingleton, Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemoteStorageDownloadUGCResult.InnerSingleton;
}
// End ScriptStruct FRemoteStorageDownloadUGCResult

// Begin Delegate FOnRemoteStorageUnsubscribePublishedFileResult
struct Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms
	{
		FRemoteStorageUnsubscribePublishedFileResult Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms, Data), Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4242672284
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoteStorageUnsubscribePublishedFileResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageUnsubscribePublishedFileResult, FRemoteStorageUnsubscribePublishedFileResult const& Data)
{
	struct _Script_SteamCorePro_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms
	{
		FRemoteStorageUnsubscribePublishedFileResult Data;
	};
	_Script_SteamCorePro_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms Parms;
	Parms.Data=Data;
	OnRemoteStorageUnsubscribePublishedFileResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRemoteStorageUnsubscribePublishedFileResult

// Begin Delegate FOnRemoteStorageSubscribePublishedFileResult
struct Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnRemoteStorageSubscribePublishedFileResult_Parms
	{
		FRemoteStorageSubscribePublishedFileResult Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnRemoteStorageSubscribePublishedFileResult_Parms, Data), Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4220809347
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnRemoteStorageSubscribePublishedFileResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRemoteStorageSubscribePublishedFileResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRemoteStorageSubscribePublishedFileResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoteStorageSubscribePublishedFileResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageSubscribePublishedFileResult, FRemoteStorageSubscribePublishedFileResult const& Data)
{
	struct _Script_SteamCorePro_eventOnRemoteStorageSubscribePublishedFileResult_Parms
	{
		FRemoteStorageSubscribePublishedFileResult Data;
	};
	_Script_SteamCorePro_eventOnRemoteStorageSubscribePublishedFileResult_Parms Parms;
	Parms.Data=Data;
	OnRemoteStorageSubscribePublishedFileResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRemoteStorageSubscribePublishedFileResult

// Begin Delegate FOnRemoteStoragePublishedFileUnsubscribed
struct Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnRemoteStoragePublishedFileUnsubscribed_Parms
	{
		FRemoteStoragePublishedFileUnsubscribed Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnRemoteStoragePublishedFileUnsubscribed_Parms, Data), Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1290953055
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRemoteStoragePublishedFileUnsubscribed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRemoteStoragePublishedFileUnsubscribed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoteStoragePublishedFileUnsubscribed_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileUnsubscribed, FRemoteStoragePublishedFileUnsubscribed const& Data)
{
	struct _Script_SteamCorePro_eventOnRemoteStoragePublishedFileUnsubscribed_Parms
	{
		FRemoteStoragePublishedFileUnsubscribed Data;
	};
	_Script_SteamCorePro_eventOnRemoteStoragePublishedFileUnsubscribed_Parms Parms;
	Parms.Data=Data;
	OnRemoteStoragePublishedFileUnsubscribed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRemoteStoragePublishedFileUnsubscribed

// Begin Delegate FOnRemoteStoragePublishedFileSubscribed
struct Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnRemoteStoragePublishedFileSubscribed_Parms
	{
		FRemoteStoragePublishedFileSubscribed Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnRemoteStoragePublishedFileSubscribed_Parms, Data), Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 136458450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnRemoteStoragePublishedFileSubscribed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRemoteStoragePublishedFileSubscribed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRemoteStoragePublishedFileSubscribed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileSubscribed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoteStoragePublishedFileSubscribed_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileSubscribed, FRemoteStoragePublishedFileSubscribed const& Data)
{
	struct _Script_SteamCorePro_eventOnRemoteStoragePublishedFileSubscribed_Parms
	{
		FRemoteStoragePublishedFileSubscribed Data;
	};
	_Script_SteamCorePro_eventOnRemoteStoragePublishedFileSubscribed_Parms Parms;
	Parms.Data=Data;
	OnRemoteStoragePublishedFileSubscribed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRemoteStoragePublishedFileSubscribed

// Begin Delegate FOnFileWriteAsync
struct Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnFileWriteAsync_Parms
	{
		FRemoteStorageFileWriteAsyncComplete Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnFileWriteAsync_Parms, Data), Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 355496680
void Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnFileWriteAsync_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnFileWriteAsync_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnFileWriteAsync__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFileWriteAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFileWriteAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFileWriteAsync_DelegateWrapper(const FScriptDelegate& OnFileWriteAsync, FRemoteStorageFileWriteAsyncComplete const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnFileWriteAsync_Parms
	{
		FRemoteStorageFileWriteAsyncComplete Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnFileWriteAsync_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFileWriteAsync.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnFileWriteAsync

// Begin Delegate FOnFileReadAsync
struct Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnFileReadAsync_Parms
	{
		FRemoteStorageFileReadAsyncComplete Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnFileReadAsync_Parms, Data), Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 521954502
void Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnFileReadAsync_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnFileReadAsync_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnFileReadAsync__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFileReadAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFileReadAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFileReadAsync_DelegateWrapper(const FScriptDelegate& OnFileReadAsync, FRemoteStorageFileReadAsyncComplete const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnFileReadAsync_Parms
	{
		FRemoteStorageFileReadAsyncComplete Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnFileReadAsync_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFileReadAsync.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnFileReadAsync

// Begin Delegate FOnUGCDownloadAsync
struct Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnUGCDownloadAsync_Parms
	{
		FRemoteStorageDownloadUGCResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnUGCDownloadAsync_Parms, Data), Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1893188802
void Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnUGCDownloadAsync_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnUGCDownloadAsync_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnUGCDownloadAsync__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature_Statics::_Script_SteamCorePro_eventOnUGCDownloadAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature_Statics::_Script_SteamCorePro_eventOnUGCDownloadAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUGCDownloadAsync_DelegateWrapper(const FScriptDelegate& OnUGCDownloadAsync, FRemoteStorageDownloadUGCResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnUGCDownloadAsync_Parms
	{
		FRemoteStorageDownloadUGCResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnUGCDownloadAsync_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnUGCDownloadAsync.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnUGCDownloadAsync

// Begin Delegate FOnUGCDownloadToLocationAsync
struct Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnUGCDownloadToLocationAsync_Parms
	{
		FRemoteStorageDownloadUGCResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnUGCDownloadToLocationAsync_Parms, Data), Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1893188802
void Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnUGCDownloadToLocationAsync_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnUGCDownloadToLocationAsync_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnUGCDownloadToLocationAsync__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::_Script_SteamCorePro_eventOnUGCDownloadToLocationAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::_Script_SteamCorePro_eventOnUGCDownloadToLocationAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUGCDownloadToLocationAsync_DelegateWrapper(const FScriptDelegate& OnUGCDownloadToLocationAsync, FRemoteStorageDownloadUGCResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnUGCDownloadToLocationAsync_Parms
	{
		FRemoteStorageDownloadUGCResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnUGCDownloadToLocationAsync_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnUGCDownloadToLocationAsync.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnUGCDownloadToLocationAsync

// Begin Delegate FOnFileShareAsync
struct Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnFileShareAsync_Parms
	{
		FRemoteStorageFileShareResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnFileShareAsync_Parms, Data), Z_Construct_UScriptStruct_FRemoteStorageFileShareResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1043826138
void Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnFileShareAsync_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnFileShareAsync_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnFileShareAsync__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFileShareAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFileShareAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFileShareAsync_DelegateWrapper(const FScriptDelegate& OnFileShareAsync, FRemoteStorageFileShareResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnFileShareAsync_Parms
	{
		FRemoteStorageFileShareResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnFileShareAsync_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFileShareAsync.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnFileShareAsync

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamRemoteStoragePlatform_StaticEnum, TEXT("ESteamRemoteStoragePlatform"), &Z_Registration_Info_UEnum_ESteamRemoteStoragePlatform, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2171091221U) },
		{ ESteamUGCReadAction_StaticEnum, TEXT("ESteamUGCReadAction"), &Z_Registration_Info_UEnum_ESteamUGCReadAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2129117321U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUGCFileWriteStreamHandle::StaticStruct, Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::NewStructOps, TEXT("UGCFileWriteStreamHandle"), &Z_Registration_Info_UScriptStruct_UGCFileWriteStreamHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUGCFileWriteStreamHandle), 4109924574U) },
		{ FRemoteStorageFileWriteAsyncComplete::StaticStruct, Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewStructOps, TEXT("RemoteStorageFileWriteAsyncComplete"), &Z_Registration_Info_UScriptStruct_RemoteStorageFileWriteAsyncComplete, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteStorageFileWriteAsyncComplete), 355496680U) },
		{ FRemoteStorageFileReadAsyncComplete::StaticStruct, Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewStructOps, TEXT("RemoteStorageFileReadAsyncComplete"), &Z_Registration_Info_UScriptStruct_RemoteStorageFileReadAsyncComplete, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteStorageFileReadAsyncComplete), 521954502U) },
		{ FRemoteStorageFileShareResult::StaticStruct, Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewStructOps, TEXT("RemoteStorageFileShareResult"), &Z_Registration_Info_UScriptStruct_RemoteStorageFileShareResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteStorageFileShareResult), 1043826138U) },
		{ FRemoteStorageUnsubscribePublishedFileResult::StaticStruct, Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewStructOps, TEXT("RemoteStorageUnsubscribePublishedFileResult"), &Z_Registration_Info_UScriptStruct_RemoteStorageUnsubscribePublishedFileResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteStorageUnsubscribePublishedFileResult), 4242672284U) },
		{ FRemoteStoragePublishedFileUnsubscribed::StaticStruct, Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewStructOps, TEXT("RemoteStoragePublishedFileUnsubscribed"), &Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileUnsubscribed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteStoragePublishedFileUnsubscribed), 1290953055U) },
		{ FRemoteStoragePublishedFileSubscribed::StaticStruct, Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewStructOps, TEXT("RemoteStoragePublishedFileSubscribed"), &Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileSubscribed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteStoragePublishedFileSubscribed), 136458450U) },
		{ FRemoteStorageDownloadUGCResult::StaticStruct, Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewStructOps, TEXT("RemoteStorageDownloadUGCResult"), &Z_Registration_Info_UScriptStruct_RemoteStorageDownloadUGCResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteStorageDownloadUGCResult), 1893188802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_3866361720(TEXT("/Script/SteamCorePro"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
