// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamRemoteStorage/SteamRemoteStorage.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
#include "SteamCorePro/Public/SteamRemoteStorage/SteamRemoteStorageTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamRemoteStorage() {}

// Begin Cross Module References
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProRemoteStorage();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProRemoteStorage_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamRemoteStoragePlatform();
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
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProRemoteStorage Function BeginFileWriteBatch
struct Z_Construct_UFunction_USteamProRemoteStorage_BeginFileWriteBatch_Statics
{
	struct SteamProRemoteStorage_eventBeginFileWriteBatch_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09 * Indicate to Steam the beginning / end of a set of local file\n\x09 * operations - for example, writing a game save that requires updating two files.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Indicate to Steam the beginning / end of a set of local file\noperations - for example, writing a game save that requires updating two files." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProRemoteStorage_BeginFileWriteBatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemoteStorage_eventBeginFileWriteBatch_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_BeginFileWriteBatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemoteStorage_eventBeginFileWriteBatch_Parms), &Z_Construct_UFunction_USteamProRemoteStorage_BeginFileWriteBatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_BeginFileWriteBatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_BeginFileWriteBatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_BeginFileWriteBatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_BeginFileWriteBatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "BeginFileWriteBatch", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_BeginFileWriteBatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_BeginFileWriteBatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_BeginFileWriteBatch_Statics::SteamProRemoteStorage_eventBeginFileWriteBatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_BeginFileWriteBatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_BeginFileWriteBatch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_BeginFileWriteBatch_Statics::SteamProRemoteStorage_eventBeginFileWriteBatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_BeginFileWriteBatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_BeginFileWriteBatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execBeginFileWriteBatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProRemoteStorage::BeginFileWriteBatch();
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function BeginFileWriteBatch

// Begin Class USteamProRemoteStorage Function EndFileWriteBatch
struct Z_Construct_UFunction_USteamProRemoteStorage_EndFileWriteBatch_Statics
{
	struct SteamProRemoteStorage_eventEndFileWriteBatch_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09 * Indicate to Steam the beginning / end of a set of local file\n\x09 * operations - for example, writing a game save that requires updating two files.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Indicate to Steam the beginning / end of a set of local file\noperations - for example, writing a game save that requires updating two files." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProRemoteStorage_EndFileWriteBatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemoteStorage_eventEndFileWriteBatch_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_EndFileWriteBatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemoteStorage_eventEndFileWriteBatch_Parms), &Z_Construct_UFunction_USteamProRemoteStorage_EndFileWriteBatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_EndFileWriteBatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_EndFileWriteBatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_EndFileWriteBatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_EndFileWriteBatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "EndFileWriteBatch", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_EndFileWriteBatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_EndFileWriteBatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_EndFileWriteBatch_Statics::SteamProRemoteStorage_eventEndFileWriteBatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_EndFileWriteBatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_EndFileWriteBatch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_EndFileWriteBatch_Statics::SteamProRemoteStorage_eventEndFileWriteBatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_EndFileWriteBatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_EndFileWriteBatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execEndFileWriteBatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProRemoteStorage::EndFileWriteBatch();
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function EndFileWriteBatch

// Begin Class USteamProRemoteStorage Function FileDelete
struct Z_Construct_UFunction_USteamProRemoteStorage_FileDelete_Statics
{
	struct SteamProRemoteStorage_eventFileDelete_Parms
	{
		FString File;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Deletes a file from the local disk, and propagates that delete to the cloud.\n\x09*\n\x09* This is meant to be used when a user actively deletes a file. Use FileForget if you want to remove a file from the Steam Cloud but retain it on the users local disk.\n\x09* When a file has been deleted it can be re-written with FileWrite to reupload it to the Steam Cloud.\n\x09*\n\x09* @param\x09""File\x09The name of the file that will be deleted.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Deletes a file from the local disk, and propagates that delete to the cloud.\n\nThis is meant to be used when a user actively deletes a file. Use FileForget if you want to remove a file from the Steam Cloud but retain it on the users local disk.\nWhen a file has been deleted it can be re-written with FileWrite to reupload it to the Steam Cloud.\n\n@param        File    The name of the file that will be deleted." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_File;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileDelete_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileDelete_Parms, File), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProRemoteStorage_FileDelete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemoteStorage_eventFileDelete_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileDelete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemoteStorage_eventFileDelete_Parms), &Z_Construct_UFunction_USteamProRemoteStorage_FileDelete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_FileDelete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileDelete_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileDelete_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileDelete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_FileDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "FileDelete", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_FileDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileDelete_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileDelete_Statics::SteamProRemoteStorage_eventFileDelete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileDelete_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_FileDelete_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileDelete_Statics::SteamProRemoteStorage_eventFileDelete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_FileDelete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_FileDelete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execFileDelete)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_File);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProRemoteStorage::FileDelete(Z_Param_File);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function FileDelete

// Begin Class USteamProRemoteStorage Function FileExists
struct Z_Construct_UFunction_USteamProRemoteStorage_FileExists_Statics
{
	struct SteamProRemoteStorage_eventFileExists_Parms
	{
		FString File;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Checks whether the specified file exists.\n\x09*\n\x09* @param\x09""File\x09The name of the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Checks whether the specified file exists.\n\n@param        File    The name of the file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_File;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileExists_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileExists_Parms, File), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProRemoteStorage_FileExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemoteStorage_eventFileExists_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemoteStorage_eventFileExists_Parms), &Z_Construct_UFunction_USteamProRemoteStorage_FileExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_FileExists_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileExists_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileExists_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileExists_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_FileExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "FileExists", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_FileExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileExists_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileExists_Statics::SteamProRemoteStorage_eventFileExists_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileExists_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_FileExists_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileExists_Statics::SteamProRemoteStorage_eventFileExists_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_FileExists()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_FileExists_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execFileExists)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_File);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProRemoteStorage::FileExists(Z_Param_File);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function FileExists

// Begin Class USteamProRemoteStorage Function FileForget
struct Z_Construct_UFunction_USteamProRemoteStorage_FileForget_Statics
{
	struct SteamProRemoteStorage_eventFileForget_Parms
	{
		FString File;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Deletes the file from remote storage, but leaves it on the local disk and remains accessible from the API.\n\x09*\n\x09* When you are out of Cloud space, this can be used to allow calls to FileWrite to keep working without needing to make the user delete files.\n\x09* How you decide which files to forget are up to you. It could be a simple Least Recently Used (LRU) queue or something more complicated.\n\x09* Requiring the user to manage their Cloud-ized files for a game, while is possible to do, it is never recommended. \n\x09* For instance, \"Which file would you like to delete so that you may store this new one?\" removes a significant advantage of using the Cloud in the first place: its transparency.\n\x09* Once a file has been deleted or forgotten, calling FileWrite will resynchronize it in the Cloud. Rewriting a forgotten file is the only way to make it persisted again.\n\x09*\n\x09* @param\x09""File\x09The name of the file that will be forgotten.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Deletes the file from remote storage, but leaves it on the local disk and remains accessible from the API.\n\nWhen you are out of Cloud space, this can be used to allow calls to FileWrite to keep working without needing to make the user delete files.\nHow you decide which files to forget are up to you. It could be a simple Least Recently Used (LRU) queue or something more complicated.\nRequiring the user to manage their Cloud-ized files for a game, while is possible to do, it is never recommended.\nFor instance, \"Which file would you like to delete so that you may store this new one?\" removes a significant advantage of using the Cloud in the first place: its transparency.\nOnce a file has been deleted or forgotten, calling FileWrite will resynchronize it in the Cloud. Rewriting a forgotten file is the only way to make it persisted again.\n\n@param        File    The name of the file that will be forgotten." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_File;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileForget_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileForget_Parms, File), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProRemoteStorage_FileForget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemoteStorage_eventFileForget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileForget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemoteStorage_eventFileForget_Parms), &Z_Construct_UFunction_USteamProRemoteStorage_FileForget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_FileForget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileForget_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileForget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileForget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_FileForget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "FileForget", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_FileForget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileForget_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileForget_Statics::SteamProRemoteStorage_eventFileForget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileForget_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_FileForget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileForget_Statics::SteamProRemoteStorage_eventFileForget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_FileForget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_FileForget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execFileForget)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_File);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProRemoteStorage::FileForget(Z_Param_File);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function FileForget

// Begin Class USteamProRemoteStorage Function FilePersisted
struct Z_Construct_UFunction_USteamProRemoteStorage_FilePersisted_Statics
{
	struct SteamProRemoteStorage_eventFilePersisted_Parms
	{
		FString File;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Checks if a specific file is persisted in the steam cloud.\n\x09*\n\x09* @param\x09""File\x09The name of the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Checks if a specific file is persisted in the steam cloud.\n\n@param        File    The name of the file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_File;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FilePersisted_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFilePersisted_Parms, File), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProRemoteStorage_FilePersisted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemoteStorage_eventFilePersisted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FilePersisted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemoteStorage_eventFilePersisted_Parms), &Z_Construct_UFunction_USteamProRemoteStorage_FilePersisted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_FilePersisted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FilePersisted_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FilePersisted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FilePersisted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_FilePersisted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "FilePersisted", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_FilePersisted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FilePersisted_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FilePersisted_Statics::SteamProRemoteStorage_eventFilePersisted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FilePersisted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_FilePersisted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FilePersisted_Statics::SteamProRemoteStorage_eventFilePersisted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_FilePersisted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_FilePersisted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execFilePersisted)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_File);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProRemoteStorage::FilePersisted(Z_Param_File);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function FilePersisted

// Begin Class USteamProRemoteStorage Function FileRead
struct Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics
{
	struct SteamProRemoteStorage_eventFileRead_Parms
	{
		FString File;
		TArray<uint8> Buffer;
		int32 DataToRead;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Opens a binary file, reads the contents of the file into a byte array, and then closes the file.\n\x09*\n\x09* NOTE: This is a synchronous call and as such is a will block your calling thread on the disk IO, and will also block the SteamAPI, which can cause other threads in your application to block.\n\x09* To avoid \"hitching\" due to a busy disk on the client machine using FileReadAsync, the asynchronous version of this API is recommended.\n\x09*\n\x09* @param\x09""File\x09\x09\x09The name of the file to read from.\n\x09* @param\x09""Buffer\x09\x09\x09The buffer that the file will be read into. This buffer must be at least the same size provided to cubDataToRead.\n\x09* @param\x09""DataToRead\x09\x09The amount of bytes to read. Generally obtained from GetFileSize or GetFileTimestamp.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Opens a binary file, reads the contents of the file into a byte array, and then closes the file.\n\nNOTE: This is a synchronous call and as such is a will block your calling thread on the disk IO, and will also block the SteamAPI, which can cause other threads in your application to block.\nTo avoid \"hitching\" due to a busy disk on the client machine using FileReadAsync, the asynchronous version of this API is recommended.\n\n@param        File                    The name of the file to read from.\n@param        Buffer                  The buffer that the file will be read into. This buffer must be at least the same size provided to cubDataToRead.\n@param        DataToRead              The amount of bytes to read. Generally obtained from GetFileSize or GetFileTimestamp." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_File;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataToRead;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileRead_Parms, File), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileRead_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::NewProp_DataToRead = { "DataToRead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileRead_Parms, DataToRead), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileRead_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::NewProp_Buffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::NewProp_Buffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::NewProp_DataToRead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "FileRead", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::SteamProRemoteStorage_eventFileRead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::SteamProRemoteStorage_eventFileRead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_FileRead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_FileRead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execFileRead)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_File);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
	P_GET_PROPERTY(FIntProperty,Z_Param_DataToRead);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProRemoteStorage::FileRead(Z_Param_File,Z_Param_Out_Buffer,Z_Param_DataToRead);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function FileRead

// Begin Class USteamProRemoteStorage Function FileReadAsync
struct Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync_Statics
{
	struct SteamProRemoteStorage_eventFileReadAsync_Parms
	{
		FScriptDelegate Callback;
		FString File;
		int32 Offset;
		int32 BytesToRead;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Starts an asynchronous read from a file.\n\x09*\n\x09* The offset and amount to read should be valid for the size of the file, as indicated by GetFileSize or GetFileTimestamp.\n\x09*\n\x09* Returns k_uAPICallInvalid under the following conditions:\n\x09* You tried to read from invalid path or filename. Because Steam Cloud is cross platform the files need to have valid names on all supported OSes and file systems. See Microsoft's documentation on Naming Files, Paths, and Namespaces.\n\x09* The file doesn't exist.\n\x09* cubDataToRead is <= 0 bytes. You need to be able to read something!\n\x09* The combination of pvData and cubDataToRead would read past the end of the file.\n\x09* You have an async read in progress on this file already.\n\x09*\n\x09* Upon completion of the read request you will receive the call result, if the value of m_eResult within the call result is k_EResultOK you can then call FileReadAsyncComplete to read the requested data into your buffer.\n\x09* The hReadCall parameter should match the return value of this function, and the amount to read should generally be equal to the amount requested as indicated by m_nOffset and m_cubRead.\n\x09*\n\x09* @param\x09""File\x09\x09\x09\x09The name of the file to read from.\n\x09* @param\x09Offset\x09\x09\x09\x09The offset in bytes into the file where the read will start from. 0 if you're reading the whole file in one chunk.\n\x09* @param\x09""BytesToRead\x09\x09\x09The amount of bytes to read starting from nOffset.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Starts an asynchronous read from a file.\n\nThe offset and amount to read should be valid for the size of the file, as indicated by GetFileSize or GetFileTimestamp.\n\nReturns k_uAPICallInvalid under the following conditions:\nYou tried to read from invalid path or filename. Because Steam Cloud is cross platform the files need to have valid names on all supported OSes and file systems. See Microsoft's documentation on Naming Files, Paths, and Namespaces.\nThe file doesn't exist.\ncubDataToRead is <= 0 bytes. You need to be able to read something!\nThe combination of pvData and cubDataToRead would read past the end of the file.\nYou have an async read in progress on this file already.\n\nUpon completion of the read request you will receive the call result, if the value of m_eResult within the call result is k_EResultOK you can then call FileReadAsyncComplete to read the requested data into your buffer.\nThe hReadCall parameter should match the return value of this function, and the amount to read should generally be equal to the amount requested as indicated by m_nOffset and m_cubRead.\n\n@param        File                            The name of the file to read from.\n@param        Offset                          The offset in bytes into the file where the read will start from. 0 if you're reading the whole file in one chunk.\n@param        BytesToRead                     The amount of bytes to read starting from nOffset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_File;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesToRead;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileReadAsync_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnFileReadAsync__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2738443465
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileReadAsync_Parms, File), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileReadAsync_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync_Statics::NewProp_BytesToRead = { "BytesToRead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileReadAsync_Parms, BytesToRead), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync_Statics::NewProp_BytesToRead,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "FileReadAsync", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync_Statics::SteamProRemoteStorage_eventFileReadAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync_Statics::SteamProRemoteStorage_eventFileReadAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execFileReadAsync)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_File);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_PROPERTY(FIntProperty,Z_Param_BytesToRead);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FileReadAsync(FOnFileReadAsync(Z_Param_Out_Callback),Z_Param_File,Z_Param_Offset,Z_Param_BytesToRead);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function FileReadAsync

// Begin Class USteamProRemoteStorage Function FileReadAsyncComplete
struct Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics
{
	struct SteamProRemoteStorage_eventFileReadAsyncComplete_Parms
	{
		FRemoteStorageFileReadAsyncComplete ReadCall;
		TArray<uint8> Buffer;
		int32 BytesToRead;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Copies the bytes from a file which was asynchronously read with FileReadAsync into a byte array.\n\x09*\n\x09* This should never be called outside of the context of a RemoteStorageFileReadAsyncComplete_t call result.\n\x09*\n\x09* @param\x09ReadCall\x09\x09\x09The call result handle obtained from RemoteStorageFileReadAsyncComplete_t.\n\x09* @param\x09""Buffer\x09\x09\x09\x09The buffer that the file will be read into.\n\x09* @param\x09""BytesToRead\x09\x09\x09The number of bytes to copy. This should usually be the m_cubRead value from RemoteStorageFileReadAsyncComplete_t\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Copies the bytes from a file which was asynchronously read with FileReadAsync into a byte array.\n\nThis should never be called outside of the context of a RemoteStorageFileReadAsyncComplete_t call result.\n\n@param        ReadCall                        The call result handle obtained from RemoteStorageFileReadAsyncComplete_t.\n@param        Buffer                          The buffer that the file will be read into.\n@param        BytesToRead                     The number of bytes to copy. This should usually be the m_cubRead value from RemoteStorageFileReadAsyncComplete_t" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReadCall;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesToRead;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReadCall = { "ReadCall", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileReadAsyncComplete_Parms, ReadCall), Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete, METADATA_PARAMS(0, nullptr) }; // 521954502
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileReadAsyncComplete_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::NewProp_BytesToRead = { "BytesToRead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileReadAsyncComplete_Parms, BytesToRead), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemoteStorage_eventFileReadAsyncComplete_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemoteStorage_eventFileReadAsyncComplete_Parms), &Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReadCall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::NewProp_Buffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::NewProp_Buffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::NewProp_BytesToRead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "FileReadAsyncComplete", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::SteamProRemoteStorage_eventFileReadAsyncComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::SteamProRemoteStorage_eventFileReadAsyncComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execFileReadAsyncComplete)
{
	P_GET_STRUCT(FRemoteStorageFileReadAsyncComplete,Z_Param_ReadCall);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
	P_GET_PROPERTY(FIntProperty,Z_Param_BytesToRead);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProRemoteStorage::FileReadAsyncComplete(Z_Param_ReadCall,Z_Param_Out_Buffer,Z_Param_BytesToRead);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function FileReadAsyncComplete

// Begin Class USteamProRemoteStorage Function FileShare
struct Z_Construct_UFunction_USteamProRemoteStorage_FileShare_Statics
{
	struct SteamProRemoteStorage_eventFileShare_Parms
	{
		FScriptDelegate Callback;
		FString File;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Copies the bytes from a file which was asynchronously read with FileReadAsync into a byte array.\n\x09*\n\x09* This should never be called outside of the context of a RemoteStorageFileReadAsyncComplete_t call result.\n\x09*\n\x09* @param\x09""File\x09\x09\x09The name of the file to share.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Copies the bytes from a file which was asynchronously read with FileReadAsync into a byte array.\n\nThis should never be called outside of the context of a RemoteStorageFileReadAsyncComplete_t call result.\n\n@param        File                    The name of the file to share." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_File;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileShare_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileShare_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnFileShareAsync__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2575762460
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileShare_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileShare_Parms, File), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_FileShare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileShare_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileShare_Statics::NewProp_File,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileShare_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_FileShare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "FileShare", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_FileShare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileShare_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileShare_Statics::SteamProRemoteStorage_eventFileShare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileShare_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_FileShare_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileShare_Statics::SteamProRemoteStorage_eventFileShare_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_FileShare()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_FileShare_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execFileShare)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_File);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FileShare(FOnFileShareAsync(Z_Param_Out_Callback),Z_Param_File);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function FileShare

// Begin Class USteamProRemoteStorage Function FileWrite
struct Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics
{
	struct SteamProRemoteStorage_eventFileWrite_Parms
	{
		FString File;
		TArray<uint8> Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Creates a new file, writes the bytes to the file, and then closes the file. If the target file already exists, it is overwritten.\n\x09*\n\x09* NOTE: This is a synchronous call and as such is a will block your calling thread on the disk IO, and will also block the SteamAPI, which can cause other threads in your application to block. \n\x09* To avoid \"hitching\" due to a busy disk on the client machine using FileWriteAsync, the asynchronous version of this API is recommended.\n\x09*\n\x09* @param\x09""File\x09\x09The name of the file to write to.\n\x09* @param\x09""Data\x09\x09The bytes to write to the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Creates a new file, writes the bytes to the file, and then closes the file. If the target file already exists, it is overwritten.\n\nNOTE: This is a synchronous call and as such is a will block your calling thread on the disk IO, and will also block the SteamAPI, which can cause other threads in your application to block.\nTo avoid \"hitching\" due to a busy disk on the client machine using FileWriteAsync, the asynchronous version of this API is recommended.\n\n@param        File            The name of the file to write to.\n@param        Data            The bytes to write to the file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_File;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileWrite_Parms, File), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileWrite_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemoteStorage_eventFileWrite_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemoteStorage_eventFileWrite_Parms), &Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "FileWrite", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::SteamProRemoteStorage_eventFileWrite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::SteamProRemoteStorage_eventFileWrite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_FileWrite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_FileWrite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execFileWrite)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_File);
	P_GET_TARRAY(uint8,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProRemoteStorage::FileWrite(Z_Param_File,Z_Param_Data);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function FileWrite

// Begin Class USteamProRemoteStorage Function FileWriteAsync
struct Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync_Statics
{
	struct SteamProRemoteStorage_eventFileWriteAsync_Parms
	{
		FScriptDelegate Callback;
		FString File;
		TArray<uint8> Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Creates a new file and asynchronously writes the raw byte data to the Steam Cloud, and then closes the file. If the target file already exists, it is overwritten.\n\x09*\n\x09* @param\x09""File\x09\x09The name of the file to write to.\n\x09* @param\x09""Data\x09\x09The bytes to write to the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Creates a new file and asynchronously writes the raw byte data to the Steam Cloud, and then closes the file. If the target file already exists, it is overwritten.\n\n@param        File            The name of the file to write to.\n@param        Data            The bytes to write to the file." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_File;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileWriteAsync_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnFileWriteAsync__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3253679383
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileWriteAsync_Parms, File), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileWriteAsync_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "FileWriteAsync", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync_Statics::SteamProRemoteStorage_eventFileWriteAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync_Statics::SteamProRemoteStorage_eventFileWriteAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execFileWriteAsync)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_File);
	P_GET_TARRAY(uint8,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FileWriteAsync(FOnFileWriteAsync(Z_Param_Out_Callback),Z_Param_File,Z_Param_Data);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function FileWriteAsync

// Begin Class USteamProRemoteStorage Function FileWriteStreamCancel
struct Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamCancel_Statics
{
	struct SteamProRemoteStorage_eventFileWriteStreamCancel_Parms
	{
		FUGCFileWriteStreamHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Cancels a file write stream that was started by FileWriteStreamOpen.\n\x09*\n\x09* This trashes all of the data written and closes the write stream, but if there was an existing file with this name, it remains untouched.\n\x09*\n\x09* @param\x09Handle\x09\x09The file write stream to cancel.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Cancels a file write stream that was started by FileWriteStreamOpen.\n\nThis trashes all of the data written and closes the write stream, but if there was an existing file with this name, it remains untouched.\n\n@param        Handle          The file write stream to cancel." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamCancel_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileWriteStreamCancel_Parms, Handle), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(0, nullptr) }; // 4109924574
void Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemoteStorage_eventFileWriteStreamCancel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemoteStorage_eventFileWriteStreamCancel_Parms), &Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamCancel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamCancel_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamCancel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "FileWriteStreamCancel", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamCancel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamCancel_Statics::SteamProRemoteStorage_eventFileWriteStreamCancel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamCancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamCancel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamCancel_Statics::SteamProRemoteStorage_eventFileWriteStreamCancel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamCancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamCancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execFileWriteStreamCancel)
{
	P_GET_STRUCT(FUGCFileWriteStreamHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProRemoteStorage::FileWriteStreamCancel(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function FileWriteStreamCancel

// Begin Class USteamProRemoteStorage Function FileWriteStreamClose
struct Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamClose_Statics
{
	struct SteamProRemoteStorage_eventFileWriteStreamClose_Parms
	{
		FUGCFileWriteStreamHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Closes a file write stream that was started by FileWriteStreamOpen.\n\x09*\n\x09* This flushes the stream to the disk, overwriting the existing file if there was one.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The file write stream to close.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Closes a file write stream that was started by FileWriteStreamOpen.\n\nThis flushes the stream to the disk, overwriting the existing file if there was one.\n\n@param        Handle                  The file write stream to close." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamClose_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileWriteStreamClose_Parms, Handle), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(0, nullptr) }; // 4109924574
void Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemoteStorage_eventFileWriteStreamClose_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemoteStorage_eventFileWriteStreamClose_Parms), &Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamClose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamClose_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamClose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "FileWriteStreamClose", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamClose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamClose_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamClose_Statics::SteamProRemoteStorage_eventFileWriteStreamClose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamClose_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamClose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamClose_Statics::SteamProRemoteStorage_eventFileWriteStreamClose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamClose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamClose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execFileWriteStreamClose)
{
	P_GET_STRUCT(FUGCFileWriteStreamHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProRemoteStorage::FileWriteStreamClose(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function FileWriteStreamClose

// Begin Class USteamProRemoteStorage Function FileWriteStreamOpen
struct Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamOpen_Statics
{
	struct SteamProRemoteStorage_eventFileWriteStreamOpen_Parms
	{
		FString File;
		FUGCFileWriteStreamHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Creates a new file output stream allowing you to stream out data to the Steam Cloud file in chunks. If the target file already exists, it is not overwritten until FileWriteStreamClose has been called.\n\x09*\n\x09* To write data out to this stream you can use FileWriteStreamWriteChunk, and then to close or cancel you use FileWriteStreamClose and FileWriteStreamCancel respectively.\n\x09*\n\x09* @param\x09""File\x09The name of the file to write to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Creates a new file output stream allowing you to stream out data to the Steam Cloud file in chunks. If the target file already exists, it is not overwritten until FileWriteStreamClose has been called.\n\nTo write data out to this stream you can use FileWriteStreamWriteChunk, and then to close or cancel you use FileWriteStreamClose and FileWriteStreamCancel respectively.\n\n@param        File    The name of the file to write to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_File;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamOpen_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileWriteStreamOpen_Parms, File), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileWriteStreamOpen_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(0, nullptr) }; // 4109924574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamOpen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamOpen_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamOpen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamOpen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "FileWriteStreamOpen", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamOpen_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamOpen_Statics::SteamProRemoteStorage_eventFileWriteStreamOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamOpen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamOpen_Statics::SteamProRemoteStorage_eventFileWriteStreamOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execFileWriteStreamOpen)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_File);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FUGCFileWriteStreamHandle*)Z_Param__Result=USteamProRemoteStorage::FileWriteStreamOpen(Z_Param_File);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function FileWriteStreamOpen

// Begin Class USteamProRemoteStorage Function FileWriteStreamWriteChunk
struct Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics
{
	struct SteamProRemoteStorage_eventFileWriteStreamWriteChunk_Parms
	{
		FUGCFileWriteStreamHandle Handle;
		TArray<uint8> Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Writes a blob of data to the file write stream.\n\x09*\n\x09* @param\x09Handle\x09\x09The file write stream to write to.\n\x09* @param\x09""Data\x09\x09The data to write to the stream.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Writes a blob of data to the file write stream.\n\n@param        Handle          The file write stream to write to.\n@param        Data            The data to write to the stream." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileWriteStreamWriteChunk_Parms, Handle), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(0, nullptr) }; // 4109924574
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventFileWriteStreamWriteChunk_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemoteStorage_eventFileWriteStreamWriteChunk_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemoteStorage_eventFileWriteStreamWriteChunk_Parms), &Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "FileWriteStreamWriteChunk", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::SteamProRemoteStorage_eventFileWriteStreamWriteChunk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::SteamProRemoteStorage_eventFileWriteStreamWriteChunk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execFileWriteStreamWriteChunk)
{
	P_GET_STRUCT(FUGCFileWriteStreamHandle,Z_Param_Handle);
	P_GET_TARRAY(uint8,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProRemoteStorage::FileWriteStreamWriteChunk(Z_Param_Handle,Z_Param_Data);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function FileWriteStreamWriteChunk

// Begin Class USteamProRemoteStorage Function GetCachedUGCCount
struct Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCCount_Statics
{
	struct SteamProRemoteStorage_eventGetCachedUGCCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetCachedUGCCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "GetCachedUGCCount", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCCount_Statics::SteamProRemoteStorage_eventGetCachedUGCCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCCount_Statics::SteamProRemoteStorage_eventGetCachedUGCCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execGetCachedUGCCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProRemoteStorage::GetCachedUGCCount();
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function GetCachedUGCCount

// Begin Class USteamProRemoteStorage Function GetCachedUGCHandle
struct Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCHandle_Statics
{
	struct SteamProRemoteStorage_eventGetCachedUGCHandle_Parms
	{
		int32 ICachedContent;
		FSteamUGCHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ICachedContent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCHandle_Statics::NewProp_ICachedContent = { "ICachedContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetCachedUGCHandle_Parms, ICachedContent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetCachedUGCHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(0, nullptr) }; // 3978973746
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCHandle_Statics::NewProp_ICachedContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "GetCachedUGCHandle", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCHandle_Statics::SteamProRemoteStorage_eventGetCachedUGCHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCHandle_Statics::SteamProRemoteStorage_eventGetCachedUGCHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execGetCachedUGCHandle)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ICachedContent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamUGCHandle*)Z_Param__Result=USteamProRemoteStorage::GetCachedUGCHandle(Z_Param_ICachedContent);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function GetCachedUGCHandle

// Begin Class USteamProRemoteStorage Function GetFileCount
struct Z_Construct_UFunction_USteamProRemoteStorage_GetFileCount_Statics
{
	struct SteamProRemoteStorage_eventGetFileCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets the total number of local files synchronized by Steam Cloud.\n\x09*\n\x09* Used for enumeration with GetFileNameAndSize.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Gets the total number of local files synchronized by Steam Cloud.\n\nUsed for enumeration with GetFileNameAndSize." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetFileCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetFileCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_GetFileCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetFileCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetFileCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_GetFileCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "GetFileCount", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_GetFileCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetFileCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetFileCount_Statics::SteamProRemoteStorage_eventGetFileCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetFileCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_GetFileCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetFileCount_Statics::SteamProRemoteStorage_eventGetFileCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_GetFileCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_GetFileCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execGetFileCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProRemoteStorage::GetFileCount();
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function GetFileCount

// Begin Class USteamProRemoteStorage Function GetFileNameAndSize
struct Z_Construct_UFunction_USteamProRemoteStorage_GetFileNameAndSize_Statics
{
	struct SteamProRemoteStorage_eventGetFileNameAndSize_Parms
	{
		int32 File;
		int32 FileSizeInBytes;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets the file name and size of a file from the index.\n\x09*\n\x09* @param\x09""File\x09\x09\x09\x09The index of the file, this should be between 0 and GetFileCount.\n\x09* @param\x09""FileSizeInBytes\x09\x09Returns the file size in bytes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Gets the file name and size of a file from the index.\n\n@param        File                            The index of the file, this should be between 0 and GetFileCount.\n@param        FileSizeInBytes         Returns the file size in bytes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_File;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileSizeInBytes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetFileNameAndSize_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetFileNameAndSize_Parms, File), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetFileNameAndSize_Statics::NewProp_FileSizeInBytes = { "FileSizeInBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetFileNameAndSize_Parms, FileSizeInBytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetFileNameAndSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetFileNameAndSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_GetFileNameAndSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetFileNameAndSize_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetFileNameAndSize_Statics::NewProp_FileSizeInBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetFileNameAndSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetFileNameAndSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_GetFileNameAndSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "GetFileNameAndSize", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_GetFileNameAndSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetFileNameAndSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetFileNameAndSize_Statics::SteamProRemoteStorage_eventGetFileNameAndSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetFileNameAndSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_GetFileNameAndSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetFileNameAndSize_Statics::SteamProRemoteStorage_eventGetFileNameAndSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_GetFileNameAndSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_GetFileNameAndSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execGetFileNameAndSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_File);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FileSizeInBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProRemoteStorage::GetFileNameAndSize(Z_Param_File,Z_Param_Out_FileSizeInBytes);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function GetFileNameAndSize

// Begin Class USteamProRemoteStorage Function GetFileSize
struct Z_Construct_UFunction_USteamProRemoteStorage_GetFileSize_Statics
{
	struct SteamProRemoteStorage_eventGetFileSize_Parms
	{
		FString File;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets the specified files size in bytes.\n\x09*\n\x09* @param\x09""File\x09\x09The name of the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Gets the specified files size in bytes.\n\n@param        File            The name of the file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_File;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetFileSize_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetFileSize_Parms, File), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetFileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetFileSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_GetFileSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetFileSize_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetFileSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetFileSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_GetFileSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "GetFileSize", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_GetFileSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetFileSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetFileSize_Statics::SteamProRemoteStorage_eventGetFileSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetFileSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_GetFileSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetFileSize_Statics::SteamProRemoteStorage_eventGetFileSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_GetFileSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_GetFileSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execGetFileSize)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_File);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProRemoteStorage::GetFileSize(Z_Param_File);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function GetFileSize

// Begin Class USteamProRemoteStorage Function GetFileTimestamp
struct Z_Construct_UFunction_USteamProRemoteStorage_GetFileTimestamp_Statics
{
	struct SteamProRemoteStorage_eventGetFileTimestamp_Parms
	{
		FString File;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets the specified file's last modified timestamp in Unix epoch format (seconds since Jan 1st 1970).\n\x09*\n\x09* @param\x09""File\x09\x09The name of the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Gets the specified file's last modified timestamp in Unix epoch format (seconds since Jan 1st 1970).\n\n@param        File            The name of the file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_File;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetFileTimestamp_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetFileTimestamp_Parms, File), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetFileTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetFileTimestamp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_GetFileTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetFileTimestamp_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetFileTimestamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetFileTimestamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_GetFileTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "GetFileTimestamp", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_GetFileTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetFileTimestamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetFileTimestamp_Statics::SteamProRemoteStorage_eventGetFileTimestamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetFileTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_GetFileTimestamp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetFileTimestamp_Statics::SteamProRemoteStorage_eventGetFileTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_GetFileTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_GetFileTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execGetFileTimestamp)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_File);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProRemoteStorage::GetFileTimestamp(Z_Param_File);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function GetFileTimestamp

// Begin Class USteamProRemoteStorage Function GetLocalFileChangeCount
struct Z_Construct_UFunction_USteamProRemoteStorage_GetLocalFileChangeCount_Statics
{
	struct SteamProRemoteStorage_eventGetLocalFileChangeCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09 * Cloud dynamic state change notification\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Cloud dynamic state change notification" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetLocalFileChangeCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetLocalFileChangeCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_GetLocalFileChangeCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetLocalFileChangeCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetLocalFileChangeCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_GetLocalFileChangeCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "GetLocalFileChangeCount", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_GetLocalFileChangeCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetLocalFileChangeCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetLocalFileChangeCount_Statics::SteamProRemoteStorage_eventGetLocalFileChangeCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetLocalFileChangeCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_GetLocalFileChangeCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetLocalFileChangeCount_Statics::SteamProRemoteStorage_eventGetLocalFileChangeCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_GetLocalFileChangeCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_GetLocalFileChangeCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execGetLocalFileChangeCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProRemoteStorage::GetLocalFileChangeCount();
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function GetLocalFileChangeCount

// Begin Class USteamProRemoteStorage Function GetQuota
struct Z_Construct_UFunction_USteamProRemoteStorage_GetQuota_Statics
{
	struct SteamProRemoteStorage_eventGetQuota_Parms
	{
		int32 TotalBytes;
		int32 AvailableBytes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets the number of bytes available, and used on the users Steam Cloud storage.\n\x09*\n\x09* @param\x09TotalBytes\n\x09* @param\x09""AvailableBytes\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Gets the number of bytes available, and used on the users Steam Cloud storage.\n\n@param        TotalBytes\n@param        AvailableBytes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalBytes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AvailableBytes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetQuota_Statics::NewProp_TotalBytes = { "TotalBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetQuota_Parms, TotalBytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetQuota_Statics::NewProp_AvailableBytes = { "AvailableBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetQuota_Parms, AvailableBytes), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProRemoteStorage_GetQuota_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemoteStorage_eventGetQuota_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetQuota_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemoteStorage_eventGetQuota_Parms), &Z_Construct_UFunction_USteamProRemoteStorage_GetQuota_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_GetQuota_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetQuota_Statics::NewProp_TotalBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetQuota_Statics::NewProp_AvailableBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetQuota_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetQuota_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_GetQuota_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "GetQuota", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_GetQuota_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetQuota_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetQuota_Statics::SteamProRemoteStorage_eventGetQuota_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetQuota_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_GetQuota_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetQuota_Statics::SteamProRemoteStorage_eventGetQuota_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_GetQuota()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_GetQuota_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execGetQuota)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TotalBytes);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AvailableBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProRemoteStorage::GetQuota(Z_Param_Out_TotalBytes,Z_Param_Out_AvailableBytes);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function GetQuota

// Begin Class USteamProRemoteStorage Function GetSteamRemoteStorage
struct Z_Construct_UFunction_USteamProRemoteStorage_GetSteamRemoteStorage_Statics
{
	struct SteamProRemoteStorage_eventGetSteamRemoteStorage_Parms
	{
		USteamProRemoteStorage* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetSteamRemoteStorage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetSteamRemoteStorage_Parms, ReturnValue), Z_Construct_UClass_USteamProRemoteStorage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_GetSteamRemoteStorage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetSteamRemoteStorage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetSteamRemoteStorage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_GetSteamRemoteStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "GetSteamRemoteStorage", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_GetSteamRemoteStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetSteamRemoteStorage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetSteamRemoteStorage_Statics::SteamProRemoteStorage_eventGetSteamRemoteStorage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetSteamRemoteStorage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_GetSteamRemoteStorage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetSteamRemoteStorage_Statics::SteamProRemoteStorage_eventGetSteamRemoteStorage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_GetSteamRemoteStorage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_GetSteamRemoteStorage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execGetSteamRemoteStorage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProRemoteStorage**)Z_Param__Result=USteamProRemoteStorage::GetSteamRemoteStorage();
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function GetSteamRemoteStorage

// Begin Class USteamProRemoteStorage Function GetSyncPlatforms
struct Z_Construct_UFunction_USteamProRemoteStorage_GetSyncPlatforms_Statics
{
	struct SteamProRemoteStorage_eventGetSyncPlatforms_Parms
	{
		FString File;
		ESteamRemoteStoragePlatform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Obtains the platforms that the specified file will syncronize to.\n\x09*\n\x09* @param\x09""File\x09The name of the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Obtains the platforms that the specified file will syncronize to.\n\n@param        File    The name of the file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_File;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetSyncPlatforms_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetSyncPlatforms_Parms, File), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetSyncPlatforms_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamRemoteStoragePlatform, METADATA_PARAMS(0, nullptr) }; // 2171091221
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_GetSyncPlatforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetSyncPlatforms_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetSyncPlatforms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_GetSyncPlatforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "GetSyncPlatforms", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_GetSyncPlatforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetSyncPlatforms_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetSyncPlatforms_Statics::SteamProRemoteStorage_eventGetSyncPlatforms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetSyncPlatforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_GetSyncPlatforms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetSyncPlatforms_Statics::SteamProRemoteStorage_eventGetSyncPlatforms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_GetSyncPlatforms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_GetSyncPlatforms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execGetSyncPlatforms)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_File);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamRemoteStoragePlatform*)Z_Param__Result=USteamProRemoteStorage::GetSyncPlatforms(Z_Param_File);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function GetSyncPlatforms

// Begin Class USteamProRemoteStorage Function GetUGCDetails
struct Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics
{
	struct SteamProRemoteStorage_eventGetUGCDetails_Parms
	{
		FSteamUGCHandle Handle;
		int32 AppID;
		FString Name;
		int32 FileSizeInBytes;
		FSteamID SteamIDOwner;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets metadata for a file after it has been downloaded. \n\x09*\n\x09* This is the same metadata given in the RemoteStorageDownloadUGCResult_t call result\n\x09*\n\x09* @param\x09Handle\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Gets metadata for a file after it has been downloaded.\n\nThis is the same metadata given in the RemoteStorageDownloadUGCResult_t call result\n\n@param        Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileSizeInBytes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDOwner;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetUGCDetails_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(0, nullptr) }; // 3978973746
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetUGCDetails_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetUGCDetails_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::NewProp_FileSizeInBytes = { "FileSizeInBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetUGCDetails_Parms, FileSizeInBytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::NewProp_SteamIDOwner = { "SteamIDOwner", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetUGCDetails_Parms, SteamIDOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemoteStorage_eventGetUGCDetails_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemoteStorage_eventGetUGCDetails_Parms), &Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::NewProp_FileSizeInBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::NewProp_SteamIDOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "GetUGCDetails", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::SteamProRemoteStorage_eventGetUGCDetails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::SteamProRemoteStorage_eventGetUGCDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execGetUGCDetails)
{
	P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FileSizeInBytes);
	P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProRemoteStorage::GetUGCDetails(Z_Param_Handle,Z_Param_Out_AppID,Z_Param_Out_Name,Z_Param_Out_FileSizeInBytes,Z_Param_Out_SteamIDOwner);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function GetUGCDetails

// Begin Class USteamProRemoteStorage Function GetUGCDownloadProgress
struct Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics
{
	struct SteamProRemoteStorage_eventGetUGCDownloadProgress_Parms
	{
		FSteamUGCHandle Handle;
		int32 BytesDownloaded;
		int32 BytesExpected;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets the amount of data downloaded so far for a piece of content. pnBytesExpected can be 0 if function returns false\n\x09* or if the transfer hasn't started yet, so be careful to check for that before dividing to get a percentage\n\x09*\n\x09* @param\x09Handle\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Gets the amount of data downloaded so far for a piece of content. pnBytesExpected can be 0 if function returns false\nor if the transfer hasn't started yet, so be careful to check for that before dividing to get a percentage\n\n@param        Handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesDownloaded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesExpected;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetUGCDownloadProgress_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(0, nullptr) }; // 3978973746
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_BytesDownloaded = { "BytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetUGCDownloadProgress_Parms, BytesDownloaded), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_BytesExpected = { "BytesExpected", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventGetUGCDownloadProgress_Parms, BytesExpected), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemoteStorage_eventGetUGCDownloadProgress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemoteStorage_eventGetUGCDownloadProgress_Parms), &Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_BytesDownloaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_BytesExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "GetUGCDownloadProgress", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::SteamProRemoteStorage_eventGetUGCDownloadProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::SteamProRemoteStorage_eventGetUGCDownloadProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execGetUGCDownloadProgress)
{
	P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesDownloaded);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesExpected);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProRemoteStorage::GetUGCDownloadProgress(Z_Param_Handle,Z_Param_Out_BytesDownloaded,Z_Param_Out_BytesExpected);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function GetUGCDownloadProgress

// Begin Class USteamProRemoteStorage Function IsCloudEnabledForAccount
struct Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForAccount_Statics
{
	struct SteamProRemoteStorage_eventIsCloudEnabledForAccount_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Checks if the account wide Steam Cloud setting is enabled for this user; or if they disabled it in the Settings->Cloud dialog.\n\x09*\n\x09* Ensure that you are also checking IsCloudEnabledForApp, as these two options are mutually exclusive.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Checks if the account wide Steam Cloud setting is enabled for this user; or if they disabled it in the Settings->Cloud dialog.\n\nEnsure that you are also checking IsCloudEnabledForApp, as these two options are mutually exclusive." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemoteStorage_eventIsCloudEnabledForAccount_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemoteStorage_eventIsCloudEnabledForAccount_Parms), &Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForAccount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForAccount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "IsCloudEnabledForAccount", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForAccount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForAccount_Statics::SteamProRemoteStorage_eventIsCloudEnabledForAccount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForAccount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForAccount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForAccount_Statics::SteamProRemoteStorage_eventIsCloudEnabledForAccount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForAccount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForAccount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execIsCloudEnabledForAccount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProRemoteStorage::IsCloudEnabledForAccount();
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function IsCloudEnabledForAccount

// Begin Class USteamProRemoteStorage Function IsCloudEnabledForApp
struct Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForApp_Statics
{
	struct SteamProRemoteStorage_eventIsCloudEnabledForApp_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Checks if the per game Steam Cloud setting is enabled for this user; or if they disabled it in the Game Properties->Update dialog.\n\x09*\n\x09* Ensure that you are also checking IsCloudEnabledForAccount, as these two options are mutually exclusive.\n\x09* It's generally recommended that you allow the user to toggle this setting within your in-game options, you can toggle it with SetCloudEnabledForApp.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Checks if the per game Steam Cloud setting is enabled for this user; or if they disabled it in the Game Properties->Update dialog.\n\nEnsure that you are also checking IsCloudEnabledForAccount, as these two options are mutually exclusive.\nIt's generally recommended that you allow the user to toggle this setting within your in-game options, you can toggle it with SetCloudEnabledForApp." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemoteStorage_eventIsCloudEnabledForApp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemoteStorage_eventIsCloudEnabledForApp_Parms), &Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForApp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "IsCloudEnabledForApp", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForApp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForApp_Statics::SteamProRemoteStorage_eventIsCloudEnabledForApp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForApp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForApp_Statics::SteamProRemoteStorage_eventIsCloudEnabledForApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execIsCloudEnabledForApp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProRemoteStorage::IsCloudEnabledForApp();
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function IsCloudEnabledForApp

// Begin Class USteamProRemoteStorage Function SetCloudEnabledForApp
struct Z_Construct_UFunction_USteamProRemoteStorage_SetCloudEnabledForApp_Statics
{
	struct SteamProRemoteStorage_eventSetCloudEnabledForApp_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Toggles whether the Steam Cloud is enabled for your application.\n\x09*\n\x09* This setting can be queried with IsCloudEnabledForApp.\n\x09*\n\x09* @param\x09""bEnabled\x09""Enable (true) or disable (false) the Steam Cloud for this application?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Toggles whether the Steam Cloud is enabled for your application.\n\nThis setting can be queried with IsCloudEnabledForApp.\n\n@param        bEnabled        Enable (true) or disable (false) the Steam Cloud for this application?" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProRemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((SteamProRemoteStorage_eventSetCloudEnabledForApp_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemoteStorage_eventSetCloudEnabledForApp_Parms), &Z_Construct_UFunction_USteamProRemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_SetCloudEnabledForApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_SetCloudEnabledForApp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_SetCloudEnabledForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "SetCloudEnabledForApp", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_SetCloudEnabledForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_SetCloudEnabledForApp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_SetCloudEnabledForApp_Statics::SteamProRemoteStorage_eventSetCloudEnabledForApp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_SetCloudEnabledForApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_SetCloudEnabledForApp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_SetCloudEnabledForApp_Statics::SteamProRemoteStorage_eventSetCloudEnabledForApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_SetCloudEnabledForApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_SetCloudEnabledForApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execSetCloudEnabledForApp)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProRemoteStorage::SetCloudEnabledForApp(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function SetCloudEnabledForApp

// Begin Class USteamProRemoteStorage Function SetSyncPlatforms
struct Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics
{
	struct SteamProRemoteStorage_eventSetSyncPlatforms_Parms
	{
		FString File;
		ESteamRemoteStoragePlatform RemoteStoragePlatform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Allows you to specify which operating systems a file will be synchronized to.\n\x09*\n\x09* Use this if you have a multiplatform game but have data which is incompatible between platforms.\n\x09* Files default to k_ERemoteStoragePlatformAll when they are first created. You can use the bitwise OR operator, \"|\" to specify multiple platforms.\n\x09*\n\x09* @param\x09""File\x09\x09\x09\x09\x09\x09The name of the file.\n\x09* @param\x09RemoteStoragePlatform\x09\x09The platforms that the file will be syncronized to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Allows you to specify which operating systems a file will be synchronized to.\n\nUse this if you have a multiplatform game but have data which is incompatible between platforms.\nFiles default to k_ERemoteStoragePlatformAll when they are first created. You can use the bitwise OR operator, \"|\" to specify multiple platforms.\n\n@param        File                                            The name of the file.\n@param        RemoteStoragePlatform           The platforms that the file will be syncronized to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_File;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RemoteStoragePlatform_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RemoteStoragePlatform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventSetSyncPlatforms_Parms, File), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform = { "RemoteStoragePlatform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventSetSyncPlatforms_Parms, RemoteStoragePlatform), Z_Construct_UEnum_SteamCorePro_ESteamRemoteStoragePlatform, METADATA_PARAMS(0, nullptr) }; // 2171091221
void Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProRemoteStorage_eventSetSyncPlatforms_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProRemoteStorage_eventSetSyncPlatforms_Parms), &Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "SetSyncPlatforms", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::SteamProRemoteStorage_eventSetSyncPlatforms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::SteamProRemoteStorage_eventSetSyncPlatforms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execSetSyncPlatforms)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_File);
	P_GET_ENUM(ESteamRemoteStoragePlatform,Z_Param_RemoteStoragePlatform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProRemoteStorage::SetSyncPlatforms(Z_Param_File,ESteamRemoteStoragePlatform(Z_Param_RemoteStoragePlatform));
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function SetSyncPlatforms

// Begin Class USteamProRemoteStorage Function UGCDownload
struct Z_Construct_UFunction_USteamProRemoteStorage_UGCDownload_Statics
{
	struct SteamProRemoteStorage_eventUGCDownload_Parms
	{
		FScriptDelegate Callback;
		FSteamUGCHandle Content;
		int32 Priority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Downloads a UGC file.  A priority value of 0 will download the file immediately,\n\x09* otherwise it will wait to download the file until all downloads with a lower priority\n\x09* value are completed.  Downloads with equal priority will occur simultaneously.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Downloads a UGC file.  A priority value of 0 will download the file immediately,\notherwise it will wait to download the file until all downloads with a lower priority\nvalue are completed.  Downloads with equal priority will occur simultaneously." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Content;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProRemoteStorage_UGCDownload_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventUGCDownload_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadAsync__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2925968417
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_UGCDownload_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventUGCDownload_Parms, Content), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(0, nullptr) }; // 3978973746
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_UGCDownload_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventUGCDownload_Parms, Priority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_UGCDownload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_UGCDownload_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_UGCDownload_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_UGCDownload_Statics::NewProp_Priority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_UGCDownload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_UGCDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "UGCDownload", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_UGCDownload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_UGCDownload_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_UGCDownload_Statics::SteamProRemoteStorage_eventUGCDownload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_UGCDownload_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_UGCDownload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_UGCDownload_Statics::SteamProRemoteStorage_eventUGCDownload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_UGCDownload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_UGCDownload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execUGCDownload)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamUGCHandle,Z_Param_Content);
	P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UGCDownload(FOnUGCDownloadAsync(Z_Param_Out_Callback),Z_Param_Content,Z_Param_Priority);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function UGCDownload

// Begin Class USteamProRemoteStorage Function UGCDownloadToLocation
struct Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation_Statics
{
	struct SteamProRemoteStorage_eventUGCDownloadToLocation_Parms
	{
		FScriptDelegate Callback;
		FSteamUGCHandle Content;
		FString Location;
		int32 Priority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Content;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Location;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventUGCDownloadToLocation_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnUGCDownloadToLocationAsync__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 95075926
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventUGCDownloadToLocation_Parms, Content), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(0, nullptr) }; // 3978973746
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventUGCDownloadToLocation_Parms, Location), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventUGCDownloadToLocation_Parms, Priority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation_Statics::NewProp_Priority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "UGCDownloadToLocation", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation_Statics::SteamProRemoteStorage_eventUGCDownloadToLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation_Statics::SteamProRemoteStorage_eventUGCDownloadToLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execUGCDownloadToLocation)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamUGCHandle,Z_Param_Content);
	P_GET_PROPERTY(FStrProperty,Z_Param_Location);
	P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UGCDownloadToLocation(FOnUGCDownloadToLocationAsync(Z_Param_Out_Callback),Z_Param_Content,Z_Param_Location,Z_Param_Priority);
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function UGCDownloadToLocation

// Begin Class USteamProRemoteStorage Function UGCRead
struct Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics
{
	struct SteamProRemoteStorage_eventUGCRead_Parms
	{
		FSteamUGCHandle Content;
		TArray<uint8> OutData;
		int32 DataToRead;
		int32 Offset;
		ESteamUGCReadAction Action;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* After download, gets the content of the file.\n\x09* Small files can be read all at once by calling this function with an offset of 0 and cubDataToRead equal to the size of the file.\n\x09* Larger files can be read in chunks to reduce memory usage (since both sides of the IPC client and the game itself must allocate\n\x09* enough memory for each chunk).  Once the last byte is read, the file is implicitly closed and further calls to UGCRead will fail unless UGCDownload is called again.\n\x09* \n\x09* For especially large files (anything over 100MB) it is a requirement that the file is read in chunks.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "After download, gets the content of the file.\nSmall files can be read all at once by calling this function with an offset of 0 and cubDataToRead equal to the size of the file.\nLarger files can be read in chunks to reduce memory usage (since both sides of the IPC client and the game itself must allocate\nenough memory for each chunk).  Once the last byte is read, the file is implicitly closed and further calls to UGCRead will fail unless UGCDownload is called again.\n\nFor especially large files (anything over 100MB) it is a requirement that the file is read in chunks." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Content;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataToRead;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventUGCRead_Parms, Content), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(0, nullptr) }; // 3978973746
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::NewProp_OutData_Inner = { "OutData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventUGCRead_Parms, OutData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::NewProp_DataToRead = { "DataToRead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventUGCRead_Parms, DataToRead), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventUGCRead_Parms, Offset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventUGCRead_Parms, Action), Z_Construct_UEnum_SteamCorePro_ESteamUGCReadAction, METADATA_PARAMS(0, nullptr) }; // 2129117321
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProRemoteStorage_eventUGCRead_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::NewProp_OutData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::NewProp_OutData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::NewProp_DataToRead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::NewProp_Action_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProRemoteStorage, nullptr, "UGCRead", nullptr, nullptr, Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::SteamProRemoteStorage_eventUGCRead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::SteamProRemoteStorage_eventUGCRead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProRemoteStorage_UGCRead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProRemoteStorage_UGCRead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProRemoteStorage::execUGCRead)
{
	P_GET_STRUCT(FSteamUGCHandle,Z_Param_Content);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_OutData);
	P_GET_PROPERTY(FIntProperty,Z_Param_DataToRead);
	P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
	P_GET_ENUM(ESteamUGCReadAction,Z_Param_Action);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProRemoteStorage::UGCRead(Z_Param_Content,Z_Param_Out_OutData,Z_Param_DataToRead,Z_Param_Offset,ESteamUGCReadAction(Z_Param_Action));
	P_NATIVE_END;
}
// End Class USteamProRemoteStorage Function UGCRead

// Begin Class USteamProRemoteStorage
void USteamProRemoteStorage::StaticRegisterNativesUSteamProRemoteStorage()
{
	UClass* Class = USteamProRemoteStorage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginFileWriteBatch", &USteamProRemoteStorage::execBeginFileWriteBatch },
		{ "EndFileWriteBatch", &USteamProRemoteStorage::execEndFileWriteBatch },
		{ "FileDelete", &USteamProRemoteStorage::execFileDelete },
		{ "FileExists", &USteamProRemoteStorage::execFileExists },
		{ "FileForget", &USteamProRemoteStorage::execFileForget },
		{ "FilePersisted", &USteamProRemoteStorage::execFilePersisted },
		{ "FileRead", &USteamProRemoteStorage::execFileRead },
		{ "FileReadAsync", &USteamProRemoteStorage::execFileReadAsync },
		{ "FileReadAsyncComplete", &USteamProRemoteStorage::execFileReadAsyncComplete },
		{ "FileShare", &USteamProRemoteStorage::execFileShare },
		{ "FileWrite", &USteamProRemoteStorage::execFileWrite },
		{ "FileWriteAsync", &USteamProRemoteStorage::execFileWriteAsync },
		{ "FileWriteStreamCancel", &USteamProRemoteStorage::execFileWriteStreamCancel },
		{ "FileWriteStreamClose", &USteamProRemoteStorage::execFileWriteStreamClose },
		{ "FileWriteStreamOpen", &USteamProRemoteStorage::execFileWriteStreamOpen },
		{ "FileWriteStreamWriteChunk", &USteamProRemoteStorage::execFileWriteStreamWriteChunk },
		{ "GetCachedUGCCount", &USteamProRemoteStorage::execGetCachedUGCCount },
		{ "GetCachedUGCHandle", &USteamProRemoteStorage::execGetCachedUGCHandle },
		{ "GetFileCount", &USteamProRemoteStorage::execGetFileCount },
		{ "GetFileNameAndSize", &USteamProRemoteStorage::execGetFileNameAndSize },
		{ "GetFileSize", &USteamProRemoteStorage::execGetFileSize },
		{ "GetFileTimestamp", &USteamProRemoteStorage::execGetFileTimestamp },
		{ "GetLocalFileChangeCount", &USteamProRemoteStorage::execGetLocalFileChangeCount },
		{ "GetQuota", &USteamProRemoteStorage::execGetQuota },
		{ "GetSteamRemoteStorage", &USteamProRemoteStorage::execGetSteamRemoteStorage },
		{ "GetSyncPlatforms", &USteamProRemoteStorage::execGetSyncPlatforms },
		{ "GetUGCDetails", &USteamProRemoteStorage::execGetUGCDetails },
		{ "GetUGCDownloadProgress", &USteamProRemoteStorage::execGetUGCDownloadProgress },
		{ "IsCloudEnabledForAccount", &USteamProRemoteStorage::execIsCloudEnabledForAccount },
		{ "IsCloudEnabledForApp", &USteamProRemoteStorage::execIsCloudEnabledForApp },
		{ "SetCloudEnabledForApp", &USteamProRemoteStorage::execSetCloudEnabledForApp },
		{ "SetSyncPlatforms", &USteamProRemoteStorage::execSetSyncPlatforms },
		{ "UGCDownload", &USteamProRemoteStorage::execUGCDownload },
		{ "UGCDownloadToLocation", &USteamProRemoteStorage::execUGCDownloadToLocation },
		{ "UGCRead", &USteamProRemoteStorage::execUGCRead },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProRemoteStorage);
UClass* Z_Construct_UClass_USteamProRemoteStorage_NoRegister()
{
	return USteamProRemoteStorage::StaticClass();
}
struct Z_Construct_UClass_USteamProRemoteStorage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteStorageUnsubscribePublishedFileResult_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteStorageSubscribePublishedFileResult_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteStoragePublishedFileUnsubscribed_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteStoragePublishedFileSubscribed_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RemoteStorageUnsubscribePublishedFileResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RemoteStorageSubscribePublishedFileResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RemoteStoragePublishedFileUnsubscribed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RemoteStoragePublishedFileSubscribed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProRemoteStorage_BeginFileWriteBatch, "BeginFileWriteBatch" }, // 1623862394
		{ &Z_Construct_UFunction_USteamProRemoteStorage_EndFileWriteBatch, "EndFileWriteBatch" }, // 3665285270
		{ &Z_Construct_UFunction_USteamProRemoteStorage_FileDelete, "FileDelete" }, // 314821587
		{ &Z_Construct_UFunction_USteamProRemoteStorage_FileExists, "FileExists" }, // 2739327622
		{ &Z_Construct_UFunction_USteamProRemoteStorage_FileForget, "FileForget" }, // 854733715
		{ &Z_Construct_UFunction_USteamProRemoteStorage_FilePersisted, "FilePersisted" }, // 4008052847
		{ &Z_Construct_UFunction_USteamProRemoteStorage_FileRead, "FileRead" }, // 3568961939
		{ &Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsync, "FileReadAsync" }, // 4029079471
		{ &Z_Construct_UFunction_USteamProRemoteStorage_FileReadAsyncComplete, "FileReadAsyncComplete" }, // 1498289044
		{ &Z_Construct_UFunction_USteamProRemoteStorage_FileShare, "FileShare" }, // 3690848429
		{ &Z_Construct_UFunction_USteamProRemoteStorage_FileWrite, "FileWrite" }, // 1435222876
		{ &Z_Construct_UFunction_USteamProRemoteStorage_FileWriteAsync, "FileWriteAsync" }, // 2408636098
		{ &Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamCancel, "FileWriteStreamCancel" }, // 4252151555
		{ &Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamClose, "FileWriteStreamClose" }, // 2374133333
		{ &Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamOpen, "FileWriteStreamOpen" }, // 3793640354
		{ &Z_Construct_UFunction_USteamProRemoteStorage_FileWriteStreamWriteChunk, "FileWriteStreamWriteChunk" }, // 2219013562
		{ &Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCCount, "GetCachedUGCCount" }, // 3364152348
		{ &Z_Construct_UFunction_USteamProRemoteStorage_GetCachedUGCHandle, "GetCachedUGCHandle" }, // 2662888284
		{ &Z_Construct_UFunction_USteamProRemoteStorage_GetFileCount, "GetFileCount" }, // 1034730125
		{ &Z_Construct_UFunction_USteamProRemoteStorage_GetFileNameAndSize, "GetFileNameAndSize" }, // 352661088
		{ &Z_Construct_UFunction_USteamProRemoteStorage_GetFileSize, "GetFileSize" }, // 2401847321
		{ &Z_Construct_UFunction_USteamProRemoteStorage_GetFileTimestamp, "GetFileTimestamp" }, // 1782787111
		{ &Z_Construct_UFunction_USteamProRemoteStorage_GetLocalFileChangeCount, "GetLocalFileChangeCount" }, // 2469052043
		{ &Z_Construct_UFunction_USteamProRemoteStorage_GetQuota, "GetQuota" }, // 3091173512
		{ &Z_Construct_UFunction_USteamProRemoteStorage_GetSteamRemoteStorage, "GetSteamRemoteStorage" }, // 3339684612
		{ &Z_Construct_UFunction_USteamProRemoteStorage_GetSyncPlatforms, "GetSyncPlatforms" }, // 513990304
		{ &Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDetails, "GetUGCDetails" }, // 3424820532
		{ &Z_Construct_UFunction_USteamProRemoteStorage_GetUGCDownloadProgress, "GetUGCDownloadProgress" }, // 4256057335
		{ &Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForAccount, "IsCloudEnabledForAccount" }, // 228710542
		{ &Z_Construct_UFunction_USteamProRemoteStorage_IsCloudEnabledForApp, "IsCloudEnabledForApp" }, // 2687566107
		{ &Z_Construct_UFunction_USteamProRemoteStorage_SetCloudEnabledForApp, "SetCloudEnabledForApp" }, // 515395244
		{ &Z_Construct_UFunction_USteamProRemoteStorage_SetSyncPlatforms, "SetSyncPlatforms" }, // 691408782
		{ &Z_Construct_UFunction_USteamProRemoteStorage_UGCDownload, "UGCDownload" }, // 3545167738
		{ &Z_Construct_UFunction_USteamProRemoteStorage_UGCDownloadToLocation, "UGCDownloadToLocation" }, // 1738484102
		{ &Z_Construct_UFunction_USteamProRemoteStorage_UGCRead, "UGCRead" }, // 2137048831
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProRemoteStorage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProRemoteStorage_Statics::NewProp_RemoteStorageUnsubscribePublishedFileResult = { "RemoteStorageUnsubscribePublishedFileResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProRemoteStorage, RemoteStorageUnsubscribePublishedFileResult), Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteStorageUnsubscribePublishedFileResult_MetaData), NewProp_RemoteStorageUnsubscribePublishedFileResult_MetaData) }; // 2970585796
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProRemoteStorage_Statics::NewProp_RemoteStorageSubscribePublishedFileResult = { "RemoteStorageSubscribePublishedFileResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProRemoteStorage, RemoteStorageSubscribePublishedFileResult), Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteStorageSubscribePublishedFileResult_MetaData), NewProp_RemoteStorageSubscribePublishedFileResult_MetaData) }; // 2728490703
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProRemoteStorage_Statics::NewProp_RemoteStoragePublishedFileUnsubscribed = { "RemoteStoragePublishedFileUnsubscribed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProRemoteStorage, RemoteStoragePublishedFileUnsubscribed), Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteStoragePublishedFileUnsubscribed_MetaData), NewProp_RemoteStoragePublishedFileUnsubscribed_MetaData) }; // 1280415718
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProRemoteStorage_Statics::NewProp_RemoteStoragePublishedFileSubscribed = { "RemoteStoragePublishedFileSubscribed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProRemoteStorage, RemoteStoragePublishedFileSubscribed), Z_Construct_UDelegateFunction_SteamCorePro_OnRemoteStoragePublishedFileSubscribed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteStoragePublishedFileSubscribed_MetaData), NewProp_RemoteStoragePublishedFileSubscribed_MetaData) }; // 846410081
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamProRemoteStorage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProRemoteStorage_Statics::NewProp_RemoteStorageUnsubscribePublishedFileResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProRemoteStorage_Statics::NewProp_RemoteStorageSubscribePublishedFileResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProRemoteStorage_Statics::NewProp_RemoteStoragePublishedFileUnsubscribed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProRemoteStorage_Statics::NewProp_RemoteStoragePublishedFileSubscribed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProRemoteStorage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamProRemoteStorage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProRemoteStorage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProRemoteStorage_Statics::ClassParams = {
	&USteamProRemoteStorage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamProRemoteStorage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamProRemoteStorage_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProRemoteStorage_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProRemoteStorage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProRemoteStorage()
{
	if (!Z_Registration_Info_UClass_USteamProRemoteStorage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProRemoteStorage.OuterSingleton, Z_Construct_UClass_USteamProRemoteStorage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProRemoteStorage.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProRemoteStorage>()
{
	return USteamProRemoteStorage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProRemoteStorage);
// End Class USteamProRemoteStorage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemoteStorage_SteamRemoteStorage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProRemoteStorage, USteamProRemoteStorage::StaticClass, TEXT("USteamProRemoteStorage"), &Z_Registration_Info_UClass_USteamProRemoteStorage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProRemoteStorage), 3268239856U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemoteStorage_SteamRemoteStorage_h_609584942(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemoteStorage_SteamRemoteStorage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamRemoteStorage_SteamRemoteStorage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
