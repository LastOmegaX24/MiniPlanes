// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamMusic/SteamMusic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamMusic() {}

// Begin Cross Module References
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProMusic();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProMusic_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamAudioPlaybackStatus();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnPlaybackStatusHasChanged__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnVolumeHasChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProMusic Function BIsEnabled
struct Z_Construct_UFunction_USteamProMusic_BIsEnabled_Statics
{
	struct SteamProMusic_eventBIsEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Checks if Steam Music is enabled.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Checks if Steam Music is enabled." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProMusic_BIsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProMusic_eventBIsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProMusic_BIsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProMusic_eventBIsEnabled_Parms), &Z_Construct_UFunction_USteamProMusic_BIsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMusic_BIsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMusic_BIsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_BIsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMusic_BIsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMusic, nullptr, "BIsEnabled", nullptr, nullptr, Z_Construct_UFunction_USteamProMusic_BIsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_BIsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMusic_BIsEnabled_Statics::SteamProMusic_eventBIsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_BIsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMusic_BIsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMusic_BIsEnabled_Statics::SteamProMusic_eventBIsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMusic_BIsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMusic_BIsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMusic::execBIsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsEnabled();
	P_NATIVE_END;
}
// End Class USteamProMusic Function BIsEnabled

// Begin Class USteamProMusic Function BIsPlaying
struct Z_Construct_UFunction_USteamProMusic_BIsPlaying_Statics
{
	struct SteamProMusic_eventBIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Checks if Steam Music is active. This does not necessarily a song is currently playing, it may be paused.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Checks if Steam Music is active. This does not necessarily a song is currently playing, it may be paused." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProMusic_BIsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProMusic_eventBIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProMusic_BIsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProMusic_eventBIsPlaying_Parms), &Z_Construct_UFunction_USteamProMusic_BIsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMusic_BIsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMusic_BIsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_BIsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMusic_BIsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMusic, nullptr, "BIsPlaying", nullptr, nullptr, Z_Construct_UFunction_USteamProMusic_BIsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_BIsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMusic_BIsPlaying_Statics::SteamProMusic_eventBIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_BIsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMusic_BIsPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMusic_BIsPlaying_Statics::SteamProMusic_eventBIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMusic_BIsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMusic_BIsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMusic::execBIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsPlaying();
	P_NATIVE_END;
}
// End Class USteamProMusic Function BIsPlaying

// Begin Class USteamProMusic Function GetPlaybackStatus
struct Z_Construct_UFunction_USteamProMusic_GetPlaybackStatus_Statics
{
	struct SteamProMusic_eventGetPlaybackStatus_Parms
	{
		ESteamAudioPlaybackStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Gets the current status of the Steam Music player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Gets the current status of the Steam Music player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMusic_eventGetPlaybackStatus_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamAudioPlaybackStatus, METADATA_PARAMS(0, nullptr) }; // 1313511681
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMusic_GetPlaybackStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_GetPlaybackStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMusic_GetPlaybackStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMusic, nullptr, "GetPlaybackStatus", nullptr, nullptr, Z_Construct_UFunction_USteamProMusic_GetPlaybackStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_GetPlaybackStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMusic_GetPlaybackStatus_Statics::SteamProMusic_eventGetPlaybackStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_GetPlaybackStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMusic_GetPlaybackStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMusic_GetPlaybackStatus_Statics::SteamProMusic_eventGetPlaybackStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMusic_GetPlaybackStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMusic_GetPlaybackStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMusic::execGetPlaybackStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamAudioPlaybackStatus*)Z_Param__Result=P_THIS->GetPlaybackStatus();
	P_NATIVE_END;
}
// End Class USteamProMusic Function GetPlaybackStatus

// Begin Class USteamProMusic Function GetSteamMusic
struct Z_Construct_UFunction_USteamProMusic_GetSteamMusic_Statics
{
	struct SteamProMusic_eventGetSteamMusic_Parms
	{
		USteamProMusic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProMusic_GetSteamMusic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMusic_eventGetSteamMusic_Parms, ReturnValue), Z_Construct_UClass_USteamProMusic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMusic_GetSteamMusic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMusic_GetSteamMusic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_GetSteamMusic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMusic_GetSteamMusic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMusic, nullptr, "GetSteamMusic", nullptr, nullptr, Z_Construct_UFunction_USteamProMusic_GetSteamMusic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_GetSteamMusic_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMusic_GetSteamMusic_Statics::SteamProMusic_eventGetSteamMusic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_GetSteamMusic_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMusic_GetSteamMusic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMusic_GetSteamMusic_Statics::SteamProMusic_eventGetSteamMusic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMusic_GetSteamMusic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMusic_GetSteamMusic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMusic::execGetSteamMusic)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProMusic**)Z_Param__Result=USteamProMusic::GetSteamMusic();
	P_NATIVE_END;
}
// End Class USteamProMusic Function GetSteamMusic

// Begin Class USteamProMusic Function GetVolume
struct Z_Construct_UFunction_USteamProMusic_GetVolume_Statics
{
	struct SteamProMusic_eventGetVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Gets the current volume of the Steam Music player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Gets the current volume of the Steam Music player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProMusic_GetVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMusic_eventGetVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMusic_GetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMusic_GetVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_GetVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMusic_GetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMusic, nullptr, "GetVolume", nullptr, nullptr, Z_Construct_UFunction_USteamProMusic_GetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_GetVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMusic_GetVolume_Statics::SteamProMusic_eventGetVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_GetVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMusic_GetVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMusic_GetVolume_Statics::SteamProMusic_eventGetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMusic_GetVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMusic_GetVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMusic::execGetVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVolume();
	P_NATIVE_END;
}
// End Class USteamProMusic Function GetVolume

// Begin Class USteamProMusic Function Pause
struct Z_Construct_UFunction_USteamProMusic_Pause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Pause the Steam Music player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Pause the Steam Music player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMusic_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMusic, nullptr, "Pause", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMusic_Pause_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamProMusic_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMusic_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMusic::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause();
	P_NATIVE_END;
}
// End Class USteamProMusic Function Pause

// Begin Class USteamProMusic Function Play
struct Z_Construct_UFunction_USteamProMusic_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Have the Steam Music player resume playing.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Have the Steam Music player resume playing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMusic_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMusic, nullptr, "Play", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMusic_Play_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamProMusic_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMusic_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMusic::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// End Class USteamProMusic Function Play

// Begin Class USteamProMusic Function PlayNext
struct Z_Construct_UFunction_USteamProMusic_PlayNext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Have the Steam Music player skip to the next song.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Have the Steam Music player skip to the next song." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMusic_PlayNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMusic, nullptr, "PlayNext", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_PlayNext_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMusic_PlayNext_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamProMusic_PlayNext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMusic_PlayNext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMusic::execPlayNext)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayNext();
	P_NATIVE_END;
}
// End Class USteamProMusic Function PlayNext

// Begin Class USteamProMusic Function PlayPrevious
struct Z_Construct_UFunction_USteamProMusic_PlayPrevious_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Have the Steam Music player play the previous song.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Have the Steam Music player play the previous song." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMusic_PlayPrevious_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMusic, nullptr, "PlayPrevious", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_PlayPrevious_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMusic_PlayPrevious_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamProMusic_PlayPrevious()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMusic_PlayPrevious_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMusic::execPlayPrevious)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayPrevious();
	P_NATIVE_END;
}
// End Class USteamProMusic Function PlayPrevious

// Begin Class USteamProMusic Function SetVolume
struct Z_Construct_UFunction_USteamProMusic_SetVolume_Statics
{
	struct SteamProMusic_eventSetVolume_Parms
	{
		float flVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Sets the volume of the Steam Music player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
		{ "ToolTip", "Sets the volume of the Steam Music player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_flVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProMusic_SetVolume_Statics::NewProp_flVolume = { "flVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMusic_eventSetVolume_Parms, flVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMusic_SetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMusic_SetVolume_Statics::NewProp_flVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_SetVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMusic_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMusic, nullptr, "SetVolume", nullptr, nullptr, Z_Construct_UFunction_USteamProMusic_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_SetVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMusic_SetVolume_Statics::SteamProMusic_eventSetVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMusic_SetVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMusic_SetVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMusic_SetVolume_Statics::SteamProMusic_eventSetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMusic_SetVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMusic_SetVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMusic::execSetVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_flVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVolume(Z_Param_flVolume);
	P_NATIVE_END;
}
// End Class USteamProMusic Function SetVolume

// Begin Class USteamProMusic
void USteamProMusic::StaticRegisterNativesUSteamProMusic()
{
	UClass* Class = USteamProMusic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BIsEnabled", &USteamProMusic::execBIsEnabled },
		{ "BIsPlaying", &USteamProMusic::execBIsPlaying },
		{ "GetPlaybackStatus", &USteamProMusic::execGetPlaybackStatus },
		{ "GetSteamMusic", &USteamProMusic::execGetSteamMusic },
		{ "GetVolume", &USteamProMusic::execGetVolume },
		{ "Pause", &USteamProMusic::execPause },
		{ "Play", &USteamProMusic::execPlay },
		{ "PlayNext", &USteamProMusic::execPlayNext },
		{ "PlayPrevious", &USteamProMusic::execPlayPrevious },
		{ "SetVolume", &USteamProMusic::execSetVolume },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProMusic);
UClass* Z_Construct_UClass_USteamProMusic_NoRegister()
{
	return USteamProMusic::StaticClass();
}
struct Z_Construct_UClass_USteamProMusic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamMusic/SteamMusic.h" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackStatusHasChanged_MetaData[] = {
		{ "Category", "SteamCore|Music|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeHasChanged_MetaData[] = {
		{ "Category", "SteamCore|Music|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlaybackStatusHasChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_VolumeHasChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProMusic_BIsEnabled, "BIsEnabled" }, // 3291774721
		{ &Z_Construct_UFunction_USteamProMusic_BIsPlaying, "BIsPlaying" }, // 1086975624
		{ &Z_Construct_UFunction_USteamProMusic_GetPlaybackStatus, "GetPlaybackStatus" }, // 3420683963
		{ &Z_Construct_UFunction_USteamProMusic_GetSteamMusic, "GetSteamMusic" }, // 1314551163
		{ &Z_Construct_UFunction_USteamProMusic_GetVolume, "GetVolume" }, // 4260259471
		{ &Z_Construct_UFunction_USteamProMusic_Pause, "Pause" }, // 3368392930
		{ &Z_Construct_UFunction_USteamProMusic_Play, "Play" }, // 2190325639
		{ &Z_Construct_UFunction_USteamProMusic_PlayNext, "PlayNext" }, // 2099048318
		{ &Z_Construct_UFunction_USteamProMusic_PlayPrevious, "PlayPrevious" }, // 2729167884
		{ &Z_Construct_UFunction_USteamProMusic_SetVolume, "SetVolume" }, // 31561829
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProMusic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProMusic_Statics::NewProp_PlaybackStatusHasChanged = { "PlaybackStatusHasChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProMusic, PlaybackStatusHasChanged), Z_Construct_UDelegateFunction_SteamCorePro_OnPlaybackStatusHasChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackStatusHasChanged_MetaData), NewProp_PlaybackStatusHasChanged_MetaData) }; // 1727797943
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProMusic_Statics::NewProp_VolumeHasChanged = { "VolumeHasChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProMusic, VolumeHasChanged), Z_Construct_UDelegateFunction_SteamCorePro_OnVolumeHasChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeHasChanged_MetaData), NewProp_VolumeHasChanged_MetaData) }; // 2425631674
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamProMusic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProMusic_Statics::NewProp_PlaybackStatusHasChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProMusic_Statics::NewProp_VolumeHasChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProMusic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamProMusic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProMusic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProMusic_Statics::ClassParams = {
	&USteamProMusic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamProMusic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamProMusic_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProMusic_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProMusic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProMusic()
{
	if (!Z_Registration_Info_UClass_USteamProMusic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProMusic.OuterSingleton, Z_Construct_UClass_USteamProMusic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProMusic.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProMusic>()
{
	return USteamProMusic::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProMusic);
// End Class USteamProMusic

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMusic_SteamMusic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProMusic, USteamProMusic::StaticClass, TEXT("USteamProMusic"), &Z_Registration_Info_UClass_USteamProMusic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProMusic), 3104904775U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMusic_SteamMusic_h_128449918(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMusic_SteamMusic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMusic_SteamMusic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
