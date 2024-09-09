// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamScreenshots/SteamScreenshots.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
#include "SteamCorePro/Public/SteamScreenshots/SteamScreenshotsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamScreenshots() {}

// Begin Cross Module References
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProScreenshots();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProScreenshots_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamVRScreenshotType();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotReady__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotRequested__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotHandle();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProScreenshots Function AddScreenshotToLibrary
struct Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics
{
	struct SteamProScreenshots_eventAddScreenshotToLibrary_Parms
	{
		FString FileName;
		FString ThumbnailFilename;
		int32 Width;
		int32 Height;
		FScreenshotHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
		{ "Comment", "/**\n\x09* Adds a screenshot to the user's Steam screenshot library from disk.\n\x09*\n\x09* @param\x09""FileName\x09\x09\x09\x09The absolute file path to the JPG, PNG, or TGA screenshot.\n\x09* @param\x09ThumbnailFilename\x09\x09The absolute file path to an optional thumbnail image. This must be 200px wide, as described by k_ScreenshotThumbWidth and the same aspect ratio. Pass NULL if there is no thumbnail, one will be created automatically.\n\x09* @param\x09Width\x09\x09\x09\x09\x09The width of the screenshot.\n\x09* @param\x09Height\x09\x09\x09\x09\x09The height of the screenshot.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
		{ "ToolTip", "Adds a screenshot to the user's Steam screenshot library from disk.\n\n@param        FileName                                The absolute file path to the JPG, PNG, or TGA screenshot.\n@param        ThumbnailFilename               The absolute file path to an optional thumbnail image. This must be 200px wide, as described by k_ScreenshotThumbWidth and the same aspect ratio. Pass NULL if there is no thumbnail, one will be created automatically.\n@param        Width                                   The width of the screenshot.\n@param        Height                                  The height of the screenshot." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ThumbnailFilename;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventAddScreenshotToLibrary_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::NewProp_ThumbnailFilename = { "ThumbnailFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventAddScreenshotToLibrary_Parms, ThumbnailFilename), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventAddScreenshotToLibrary_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventAddScreenshotToLibrary_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventAddScreenshotToLibrary_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(0, nullptr) }; // 2152941232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::NewProp_ThumbnailFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProScreenshots, nullptr, "AddScreenshotToLibrary", nullptr, nullptr, Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::SteamProScreenshots_eventAddScreenshotToLibrary_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::SteamProScreenshots_eventAddScreenshotToLibrary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProScreenshots::execAddScreenshotToLibrary)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ThumbnailFilename);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScreenshotHandle*)Z_Param__Result=USteamProScreenshots::AddScreenshotToLibrary(Z_Param_FileName,Z_Param_ThumbnailFilename,Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// End Class USteamProScreenshots Function AddScreenshotToLibrary

// Begin Class USteamProScreenshots Function AddVRScreenshotToLibrary
struct Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics
{
	struct SteamProScreenshots_eventAddVRScreenshotToLibrary_Parms
	{
		ESteamVRScreenshotType EType;
		FString FileName;
		FString VRFileName;
		FScreenshotHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
		{ "Comment", "/**\n\x09* Adds a VR screenshot to the user's Steam screenshot library from disk in the supported type.\n\x09*\n\x09* @param\x09""EType\x09\x09\x09The type of VR screenshot that this is.\n\x09* @param\x09""FileName\x09\x09The absolute file path to a 2D JPG, PNG, or TGA version of the screenshot for the library view.\n\x09* @param\x09VRFileName\x09\x09The absolute file path to the VR screenshot, this should be the same type of screenshot specified in eType.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
		{ "ToolTip", "Adds a VR screenshot to the user's Steam screenshot library from disk in the supported type.\n\n@param        EType                   The type of VR screenshot that this is.\n@param        FileName                The absolute file path to a 2D JPG, PNG, or TGA version of the screenshot for the library view.\n@param        VRFileName              The absolute file path to the VR screenshot, this should be the same type of screenshot specified in eType." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VRFileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_EType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_EType = { "EType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventAddVRScreenshotToLibrary_Parms, EType), Z_Construct_UEnum_SteamCorePro_ESteamVRScreenshotType, METADATA_PARAMS(0, nullptr) }; // 234097396
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventAddVRScreenshotToLibrary_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_VRFileName = { "VRFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventAddVRScreenshotToLibrary_Parms, VRFileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventAddVRScreenshotToLibrary_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(0, nullptr) }; // 2152941232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_EType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_EType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_VRFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProScreenshots, nullptr, "AddVRScreenshotToLibrary", nullptr, nullptr, Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::SteamProScreenshots_eventAddVRScreenshotToLibrary_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::SteamProScreenshots_eventAddVRScreenshotToLibrary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProScreenshots::execAddVRScreenshotToLibrary)
{
	P_GET_ENUM(ESteamVRScreenshotType,Z_Param_EType);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_PROPERTY(FStrProperty,Z_Param_VRFileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScreenshotHandle*)Z_Param__Result=USteamProScreenshots::AddVRScreenshotToLibrary(ESteamVRScreenshotType(Z_Param_EType),Z_Param_FileName,Z_Param_VRFileName);
	P_NATIVE_END;
}
// End Class USteamProScreenshots Function AddVRScreenshotToLibrary

// Begin Class USteamProScreenshots Function GetSteamScreenshots
struct Z_Construct_UFunction_USteamProScreenshots_GetSteamScreenshots_Statics
{
	struct SteamProScreenshots_eventGetSteamScreenshots_Parms
	{
		USteamProScreenshots* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProScreenshots_GetSteamScreenshots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventGetSteamScreenshots_Parms, ReturnValue), Z_Construct_UClass_USteamProScreenshots_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProScreenshots_GetSteamScreenshots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_GetSteamScreenshots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_GetSteamScreenshots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProScreenshots_GetSteamScreenshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProScreenshots, nullptr, "GetSteamScreenshots", nullptr, nullptr, Z_Construct_UFunction_USteamProScreenshots_GetSteamScreenshots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_GetSteamScreenshots_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProScreenshots_GetSteamScreenshots_Statics::SteamProScreenshots_eventGetSteamScreenshots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_GetSteamScreenshots_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProScreenshots_GetSteamScreenshots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProScreenshots_GetSteamScreenshots_Statics::SteamProScreenshots_eventGetSteamScreenshots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProScreenshots_GetSteamScreenshots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProScreenshots_GetSteamScreenshots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProScreenshots::execGetSteamScreenshots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProScreenshots**)Z_Param__Result=USteamProScreenshots::GetSteamScreenshots();
	P_NATIVE_END;
}
// End Class USteamProScreenshots Function GetSteamScreenshots

// Begin Class USteamProScreenshots Function HookScreenshots
struct Z_Construct_UFunction_USteamProScreenshots_HookScreenshots_Statics
{
	struct SteamProScreenshots_eventHookScreenshots_Parms
	{
		bool bHook;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
		{ "Comment", "/**\n\x09* Toggles whether the overlay handles screenshots when the user presses the screenshot hotkey, or if the game handles them.\n\x09*\n\x09* Hooking is disabled by default, and only ever enabled if you do so with this function.\n\x09* If the hooking is enabled, then the ScreenshotRequested_t callback will be sent if the user presses the hotkey or when TriggerScreenshot is called, and then the game is expected to call WriteScreenshot or AddScreenshotToLibrary in response.\n\x09* You can check if hooking is enabled with IsScreenshotsHooked.\n\x09*\n\x09* @param\x09""bHook\x09""Enable (true) or disable (false) hooking?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
		{ "ToolTip", "Toggles whether the overlay handles screenshots when the user presses the screenshot hotkey, or if the game handles them.\n\nHooking is disabled by default, and only ever enabled if you do so with this function.\nIf the hooking is enabled, then the ScreenshotRequested_t callback will be sent if the user presses the hotkey or when TriggerScreenshot is called, and then the game is expected to call WriteScreenshot or AddScreenshotToLibrary in response.\nYou can check if hooking is enabled with IsScreenshotsHooked.\n\n@param        bHook   Enable (true) or disable (false) hooking?" },
	};
#endif // WITH_METADATA
	static void NewProp_bHook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProScreenshots_HookScreenshots_Statics::NewProp_bHook_SetBit(void* Obj)
{
	((SteamProScreenshots_eventHookScreenshots_Parms*)Obj)->bHook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProScreenshots_HookScreenshots_Statics::NewProp_bHook = { "bHook", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProScreenshots_eventHookScreenshots_Parms), &Z_Construct_UFunction_USteamProScreenshots_HookScreenshots_Statics::NewProp_bHook_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProScreenshots_HookScreenshots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_HookScreenshots_Statics::NewProp_bHook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_HookScreenshots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProScreenshots_HookScreenshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProScreenshots, nullptr, "HookScreenshots", nullptr, nullptr, Z_Construct_UFunction_USteamProScreenshots_HookScreenshots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_HookScreenshots_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProScreenshots_HookScreenshots_Statics::SteamProScreenshots_eventHookScreenshots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_HookScreenshots_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProScreenshots_HookScreenshots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProScreenshots_HookScreenshots_Statics::SteamProScreenshots_eventHookScreenshots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProScreenshots_HookScreenshots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProScreenshots_HookScreenshots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProScreenshots::execHookScreenshots)
{
	P_GET_UBOOL(Z_Param_bHook);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProScreenshots::HookScreenshots(Z_Param_bHook);
	P_NATIVE_END;
}
// End Class USteamProScreenshots Function HookScreenshots

// Begin Class USteamProScreenshots Function IsScreenshotsHooked
struct Z_Construct_UFunction_USteamProScreenshots_IsScreenshotsHooked_Statics
{
	struct SteamProScreenshots_eventIsScreenshotsHooked_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
		{ "Comment", "/** \n\x09* Checks if the app is hooking screenshots, or if the Steam Overlay is handling them.\n\x09*\n\x09* This can be toggled with HookScreenshots.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
		{ "ToolTip", "Checks if the app is hooking screenshots, or if the Steam Overlay is handling them.\n\nThis can be toggled with HookScreenshots." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProScreenshots_eventIsScreenshotsHooked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProScreenshots_eventIsScreenshotsHooked_Parms), &Z_Construct_UFunction_USteamProScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProScreenshots_IsScreenshotsHooked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_IsScreenshotsHooked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProScreenshots_IsScreenshotsHooked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProScreenshots, nullptr, "IsScreenshotsHooked", nullptr, nullptr, Z_Construct_UFunction_USteamProScreenshots_IsScreenshotsHooked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_IsScreenshotsHooked_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProScreenshots_IsScreenshotsHooked_Statics::SteamProScreenshots_eventIsScreenshotsHooked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_IsScreenshotsHooked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProScreenshots_IsScreenshotsHooked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProScreenshots_IsScreenshotsHooked_Statics::SteamProScreenshots_eventIsScreenshotsHooked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProScreenshots_IsScreenshotsHooked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProScreenshots_IsScreenshotsHooked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProScreenshots::execIsScreenshotsHooked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProScreenshots::IsScreenshotsHooked();
	P_NATIVE_END;
}
// End Class USteamProScreenshots Function IsScreenshotsHooked

// Begin Class USteamProScreenshots Function SetLocation
struct Z_Construct_UFunction_USteamProScreenshots_SetLocation_Statics
{
	struct SteamProScreenshots_eventSetLocation_Parms
	{
		FScreenshotHandle Handle;
		FString Location;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
		{ "Comment", "/**\n\x09* Sets optional metadata about a screenshot's location. For example, the name of the map it was taken on.\n\x09*\n\x09* You can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\x09*\n\x09* @param\x09Handle\x09\x09The handle to the screenshot to tag.\n\x09* @param\x09Location\x09The location in the game where this screenshot was taken. This can not be longer than k_cubUFSTagValueMax.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
		{ "ToolTip", "Sets optional metadata about a screenshot's location. For example, the name of the map it was taken on.\n\nYou can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\n@param        Handle          The handle to the screenshot to tag.\n@param        Location        The location in the game where this screenshot was taken. This can not be longer than k_cubUFSTagValueMax." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Location;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProScreenshots_SetLocation_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventSetLocation_Parms, Handle), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(0, nullptr) }; // 2152941232
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProScreenshots_SetLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventSetLocation_Parms, Location), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProScreenshots_SetLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProScreenshots_eventSetLocation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProScreenshots_SetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProScreenshots_eventSetLocation_Parms), &Z_Construct_UFunction_USteamProScreenshots_SetLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProScreenshots_SetLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_SetLocation_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_SetLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_SetLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_SetLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProScreenshots_SetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProScreenshots, nullptr, "SetLocation", nullptr, nullptr, Z_Construct_UFunction_USteamProScreenshots_SetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_SetLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProScreenshots_SetLocation_Statics::SteamProScreenshots_eventSetLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_SetLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProScreenshots_SetLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProScreenshots_SetLocation_Statics::SteamProScreenshots_eventSetLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProScreenshots_SetLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProScreenshots_SetLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProScreenshots::execSetLocation)
{
	P_GET_STRUCT(FScreenshotHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProScreenshots::SetLocation(Z_Param_Handle,Z_Param_Location);
	P_NATIVE_END;
}
// End Class USteamProScreenshots Function SetLocation

// Begin Class USteamProScreenshots Function TagPublishedFile
struct Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile_Statics
{
	struct SteamProScreenshots_eventTagPublishedFile_Parms
	{
		FScreenshotHandle Handle;
		FPublishedFileID PublishedFileID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
		{ "Comment", "/**\n\x09* Tags a published file as being visible in the screenshot.\n\x09*\n\x09* You can tag up to the value declared by k_nScreenshotMaxTaggedPublishedFiles in a single screenshot. Tagging more items than that will just be discarded.\n\x09* This function has a built in delay before saving the tag which allows you to call it repeatedly for each item.\n\x09* You can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The handle to the screenshot to tag.\n\x09* @param\x09PublishedFileID\x09\x09The workshop item ID that is in the screenshot.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
		{ "ToolTip", "Tags a published file as being visible in the screenshot.\n\nYou can tag up to the value declared by k_nScreenshotMaxTaggedPublishedFiles in a single screenshot. Tagging more items than that will just be discarded.\nThis function has a built in delay before saving the tag which allows you to call it repeatedly for each item.\nYou can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\n@param        Handle                          The handle to the screenshot to tag.\n@param        PublishedFileID         The workshop item ID that is in the screenshot." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventTagPublishedFile_Parms, Handle), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(0, nullptr) }; // 2152941232
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventTagPublishedFile_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 3569413351
void Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProScreenshots_eventTagPublishedFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProScreenshots_eventTagPublishedFile_Parms), &Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProScreenshots, nullptr, "TagPublishedFile", nullptr, nullptr, Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile_Statics::SteamProScreenshots_eventTagPublishedFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile_Statics::SteamProScreenshots_eventTagPublishedFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProScreenshots::execTagPublishedFile)
{
	P_GET_STRUCT(FScreenshotHandle,Z_Param_Handle);
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProScreenshots::TagPublishedFile(Z_Param_Handle,Z_Param_PublishedFileID);
	P_NATIVE_END;
}
// End Class USteamProScreenshots Function TagPublishedFile

// Begin Class USteamProScreenshots Function TagUser
struct Z_Construct_UFunction_USteamProScreenshots_TagUser_Statics
{
	struct SteamProScreenshots_eventTagUser_Parms
	{
		FScreenshotHandle Handle;
		FSteamID SteamID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
		{ "Comment", "/**\n\x09* Tags a Steam user as being visible in the screenshot.\n\x09*\n\x09* You can tag up to the value declared by k_nScreenshotMaxTaggedUsers in a single screenshot. Tagging more users than that will just be discarded.\n\x09* This function has a built in delay before saving the tag which allows you to call it repeatedly for each item.\n\x09* You can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\x09*\n\x09* @param\x09Handle\x09\x09The handle to the screenshot to tag.\n\x09* @param\x09SteamID\x09\x09The Steam ID of a user that is in the screenshot.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
		{ "ToolTip", "Tags a Steam user as being visible in the screenshot.\n\nYou can tag up to the value declared by k_nScreenshotMaxTaggedUsers in a single screenshot. Tagging more users than that will just be discarded.\nThis function has a built in delay before saving the tag which allows you to call it repeatedly for each item.\nYou can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\n@param        Handle          The handle to the screenshot to tag.\n@param        SteamID         The Steam ID of a user that is in the screenshot." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProScreenshots_TagUser_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventTagUser_Parms, Handle), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(0, nullptr) }; // 2152941232
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProScreenshots_TagUser_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventTagUser_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProScreenshots_TagUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProScreenshots_eventTagUser_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProScreenshots_TagUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProScreenshots_eventTagUser_Parms), &Z_Construct_UFunction_USteamProScreenshots_TagUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProScreenshots_TagUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_TagUser_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_TagUser_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_TagUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_TagUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProScreenshots_TagUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProScreenshots, nullptr, "TagUser", nullptr, nullptr, Z_Construct_UFunction_USteamProScreenshots_TagUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_TagUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProScreenshots_TagUser_Statics::SteamProScreenshots_eventTagUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_TagUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProScreenshots_TagUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProScreenshots_TagUser_Statics::SteamProScreenshots_eventTagUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProScreenshots_TagUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProScreenshots_TagUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProScreenshots::execTagUser)
{
	P_GET_STRUCT(FScreenshotHandle,Z_Param_Handle);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProScreenshots::TagUser(Z_Param_Handle,Z_Param_SteamID);
	P_NATIVE_END;
}
// End Class USteamProScreenshots Function TagUser

// Begin Class USteamProScreenshots Function TriggerScreenshot
struct Z_Construct_UFunction_USteamProScreenshots_TriggerScreenshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
		{ "Comment", "/**\n\x09* Either causes the Steam Overlay to take a screenshot, or tells your screenshot manager that a screenshot needs to be taken. Depending on the value of IsScreenshotsHooked.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
		{ "ToolTip", "Either causes the Steam Overlay to take a screenshot, or tells your screenshot manager that a screenshot needs to be taken. Depending on the value of IsScreenshotsHooked." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProScreenshots_TriggerScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProScreenshots, nullptr, "TriggerScreenshot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_TriggerScreenshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProScreenshots_TriggerScreenshot_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamProScreenshots_TriggerScreenshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProScreenshots_TriggerScreenshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProScreenshots::execTriggerScreenshot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProScreenshots::TriggerScreenshot();
	P_NATIVE_END;
}
// End Class USteamProScreenshots Function TriggerScreenshot

// Begin Class USteamProScreenshots Function WriteScreenshot
struct Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics
{
	struct SteamProScreenshots_eventWriteScreenshot_Parms
	{
		TArray<uint8> PubRGB;
		int32 Width;
		int32 Height;
		FScreenshotHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
		{ "Comment", "/**\n\x09* Writes a screenshot to the user's Steam screenshot library given the raw image data, which must be in RGB format.\n\x09*\n\x09* @param\x09PubRGB\x09\x09The buffer containing the raw RGB data from the screenshot.\n\x09* @param\x09Width\x09\x09The width of the screenshot in pixels.\n\x09* @param\x09Height\x09\x09The height of the screenshot in pixels.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
		{ "ToolTip", "Writes a screenshot to the user's Steam screenshot library given the raw image data, which must be in RGB format.\n\n@param        PubRGB          The buffer containing the raw RGB data from the screenshot.\n@param        Width           The width of the screenshot in pixels.\n@param        Height          The height of the screenshot in pixels." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PubRGB_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PubRGB;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::NewProp_PubRGB_Inner = { "PubRGB", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::NewProp_PubRGB = { "PubRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventWriteScreenshot_Parms, PubRGB), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventWriteScreenshot_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventWriteScreenshot_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProScreenshots_eventWriteScreenshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(0, nullptr) }; // 2152941232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::NewProp_PubRGB_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::NewProp_PubRGB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProScreenshots, nullptr, "WriteScreenshot", nullptr, nullptr, Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::SteamProScreenshots_eventWriteScreenshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::SteamProScreenshots_eventWriteScreenshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProScreenshots::execWriteScreenshot)
{
	P_GET_TARRAY(uint8,Z_Param_PubRGB);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScreenshotHandle*)Z_Param__Result=USteamProScreenshots::WriteScreenshot(Z_Param_PubRGB,Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// End Class USteamProScreenshots Function WriteScreenshot

// Begin Class USteamProScreenshots
void USteamProScreenshots::StaticRegisterNativesUSteamProScreenshots()
{
	UClass* Class = USteamProScreenshots::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddScreenshotToLibrary", &USteamProScreenshots::execAddScreenshotToLibrary },
		{ "AddVRScreenshotToLibrary", &USteamProScreenshots::execAddVRScreenshotToLibrary },
		{ "GetSteamScreenshots", &USteamProScreenshots::execGetSteamScreenshots },
		{ "HookScreenshots", &USteamProScreenshots::execHookScreenshots },
		{ "IsScreenshotsHooked", &USteamProScreenshots::execIsScreenshotsHooked },
		{ "SetLocation", &USteamProScreenshots::execSetLocation },
		{ "TagPublishedFile", &USteamProScreenshots::execTagPublishedFile },
		{ "TagUser", &USteamProScreenshots::execTagUser },
		{ "TriggerScreenshot", &USteamProScreenshots::execTriggerScreenshot },
		{ "WriteScreenshot", &USteamProScreenshots::execWriteScreenshot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProScreenshots);
UClass* Z_Construct_UClass_USteamProScreenshots_NoRegister()
{
	return USteamProScreenshots::StaticClass();
}
struct Z_Construct_UClass_USteamProScreenshots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamScreenshots/SteamScreenshots.h" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotReady_MetaData[] = {
		{ "Category", "SteamCore|Screenshots|Delegates" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotRequested_MetaData[] = {
		{ "Category", "SteamCore|Screenshots|Delegates" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ScreenshotReady;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ScreenshotRequested;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProScreenshots_AddScreenshotToLibrary, "AddScreenshotToLibrary" }, // 2941244294
		{ &Z_Construct_UFunction_USteamProScreenshots_AddVRScreenshotToLibrary, "AddVRScreenshotToLibrary" }, // 1777947669
		{ &Z_Construct_UFunction_USteamProScreenshots_GetSteamScreenshots, "GetSteamScreenshots" }, // 1467693462
		{ &Z_Construct_UFunction_USteamProScreenshots_HookScreenshots, "HookScreenshots" }, // 631284389
		{ &Z_Construct_UFunction_USteamProScreenshots_IsScreenshotsHooked, "IsScreenshotsHooked" }, // 4000150831
		{ &Z_Construct_UFunction_USteamProScreenshots_SetLocation, "SetLocation" }, // 1973836586
		{ &Z_Construct_UFunction_USteamProScreenshots_TagPublishedFile, "TagPublishedFile" }, // 3644259373
		{ &Z_Construct_UFunction_USteamProScreenshots_TagUser, "TagUser" }, // 1255649698
		{ &Z_Construct_UFunction_USteamProScreenshots_TriggerScreenshot, "TriggerScreenshot" }, // 3312888402
		{ &Z_Construct_UFunction_USteamProScreenshots_WriteScreenshot, "WriteScreenshot" }, // 1292156299
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProScreenshots>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProScreenshots_Statics::NewProp_ScreenshotReady = { "ScreenshotReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProScreenshots, ScreenshotReady), Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotReady__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenshotReady_MetaData), NewProp_ScreenshotReady_MetaData) }; // 1056984628
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProScreenshots_Statics::NewProp_ScreenshotRequested = { "ScreenshotRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProScreenshots, ScreenshotRequested), Z_Construct_UDelegateFunction_SteamCorePro_OnScreenshotRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenshotRequested_MetaData), NewProp_ScreenshotRequested_MetaData) }; // 694025630
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamProScreenshots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProScreenshots_Statics::NewProp_ScreenshotReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProScreenshots_Statics::NewProp_ScreenshotRequested,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProScreenshots_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamProScreenshots_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProScreenshots_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProScreenshots_Statics::ClassParams = {
	&USteamProScreenshots::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamProScreenshots_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamProScreenshots_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProScreenshots_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProScreenshots_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProScreenshots()
{
	if (!Z_Registration_Info_UClass_USteamProScreenshots.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProScreenshots.OuterSingleton, Z_Construct_UClass_USteamProScreenshots_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProScreenshots.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProScreenshots>()
{
	return USteamProScreenshots::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProScreenshots);
// End Class USteamProScreenshots

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshots_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProScreenshots, USteamProScreenshots::StaticClass, TEXT("USteamProScreenshots"), &Z_Registration_Info_UClass_USteamProScreenshots, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProScreenshots), 3871310933U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshots_h_294263273(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshots_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamScreenshots_SteamScreenshots_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
