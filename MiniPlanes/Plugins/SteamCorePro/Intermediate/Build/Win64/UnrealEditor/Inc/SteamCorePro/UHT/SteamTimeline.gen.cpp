// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamTimeline/SteamTimeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamTimeline() {}

// Begin Cross Module References
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProTimeline();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProTimeline_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamTimelineEventClipPriority();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamTimelineGameMode();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProTimeline Function AddTimelineEvent
struct Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics
{
	struct SteamProTimeline_eventAddTimelineEvent_Parms
	{
		FString Icon;
		FString Title;
		FString Description;
		int32 Priority;
		float StartOffsetSeconds;
		float DurationSeconds;
		ESteamTimelineEventClipPriority PossibleClip;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline" },
		{ "Comment", "/**\n\x09* Use this to mark an event on the Timeline. The event can be instantaneous or take some amount of time to complete, depending on the value passed in flDurationSeconds\n\x09* \n\x09* Examples could include:\n    * a boss battle\n    * a cut scene\n    * a large team fight\n    * picking up a new weapon or ammunition\n    * scoring a goal\n    *\n\x09* @param  Icon\x09\x09\x09\x09        Specify the name of the icon uploaded through the Steamworks Partner Site for your title or one of the provided icons that start with steam_\n\x09* @param  Title\x09\x09\x09\x09        Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()\n\x09* @param  Description\x09\x09        Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()\n\x09* @param  Priority\x09\x09\x09        Specify how important this range is compared to other markers provided by the game. Ranges with larger priority values will be displayed more prominently in the UI. This value may be between 0 and k_unMaxTimelinePriority.\n\x09* @param  StartOffsetSeconds\x09\x09The time that this range started relative to now. Negative times indicate an event that happened in the past.\n\x09* @param  DurationSeconds\x09\x09\x09How long the time range should be in seconds. For instantaneous events, this should be 0\n\x09* @param  PossibleClip\x09\x09\x09\x09""By setting this parameter to Featured or Standard, the game indicates to Steam that it would be appropriate to offer this range as a clip to the user. For instantaneous events, the suggested clip will be for a short time before and after the event itself.\n\x09* \n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
		{ "ToolTip", "Use this to mark an event on the Timeline. The event can be instantaneous or take some amount of time to complete, depending on the value passed in flDurationSeconds\n\nExamples could include:\na boss battle\na cut scene\na large team fight\npicking up a new weapon or ammunition\nscoring a goal\n\n@param  Icon                                  Specify the name of the icon uploaded through the Steamworks Partner Site for your title or one of the provided icons that start with steam_\n@param  Title                                 Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()\n@param  Description                   Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()\n@param  Priority                              Specify how important this range is compared to other markers provided by the game. Ranges with larger priority values will be displayed more prominently in the UI. This value may be between 0 and k_unMaxTimelinePriority.\n@param  StartOffsetSeconds            The time that this range started relative to now. Negative times indicate an event that happened in the past.\n@param  DurationSeconds                       How long the time range should be in seconds. For instantaneous events, this should be 0\n@param  PossibleClip                          By setting this parameter to Featured or Standard, the game indicates to Steam that it would be appropriate to offer this range as a clip to the user. For instantaneous events, the suggested clip will be for a short time before and after the event itself." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOffsetSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationSeconds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PossibleClip_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PossibleClip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddTimelineEvent_Parms, Icon), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddTimelineEvent_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddTimelineEvent_Parms, Description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddTimelineEvent_Parms, Priority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::NewProp_StartOffsetSeconds = { "StartOffsetSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddTimelineEvent_Parms, StartOffsetSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::NewProp_DurationSeconds = { "DurationSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddTimelineEvent_Parms, DurationSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::NewProp_PossibleClip_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::NewProp_PossibleClip = { "PossibleClip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventAddTimelineEvent_Parms, PossibleClip), Z_Construct_UEnum_SteamCorePro_ESteamTimelineEventClipPriority, METADATA_PARAMS(0, nullptr) }; // 1994647307
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::NewProp_StartOffsetSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::NewProp_DurationSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::NewProp_PossibleClip_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::NewProp_PossibleClip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimeline, nullptr, "AddTimelineEvent", nullptr, nullptr, Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::SteamProTimeline_eventAddTimelineEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::SteamProTimeline_eventAddTimelineEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimeline::execAddTimelineEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Icon);
	P_GET_PROPERTY(FStrProperty,Z_Param_Title);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartOffsetSeconds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DurationSeconds);
	P_GET_ENUM(ESteamTimelineEventClipPriority,Z_Param_PossibleClip);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProTimeline::AddTimelineEvent(Z_Param_Icon,Z_Param_Title,Z_Param_Description,Z_Param_Priority,Z_Param_StartOffsetSeconds,Z_Param_DurationSeconds,ESteamTimelineEventClipPriority(Z_Param_PossibleClip));
	P_NATIVE_END;
}
// End Class USteamProTimeline Function AddTimelineEvent

// Begin Class USteamProTimeline Function ClearTimelineStateDescription
struct Z_Construct_UFunction_USteamProTimeline_ClearTimelineStateDescription_Statics
{
	struct SteamProTimeline_eventClearTimelineStateDescription_Parms
	{
		float Delta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProTimeline_ClearTimelineStateDescription_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventClearTimelineStateDescription_Parms, Delta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimeline_ClearTimelineStateDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_ClearTimelineStateDescription_Statics::NewProp_Delta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_ClearTimelineStateDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimeline_ClearTimelineStateDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimeline, nullptr, "ClearTimelineStateDescription", nullptr, nullptr, Z_Construct_UFunction_USteamProTimeline_ClearTimelineStateDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_ClearTimelineStateDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimeline_ClearTimelineStateDescription_Statics::SteamProTimeline_eventClearTimelineStateDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_ClearTimelineStateDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimeline_ClearTimelineStateDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimeline_ClearTimelineStateDescription_Statics::SteamProTimeline_eventClearTimelineStateDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimeline_ClearTimelineStateDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimeline_ClearTimelineStateDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimeline::execClearTimelineStateDescription)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProTimeline::ClearTimelineStateDescription(Z_Param_Delta);
	P_NATIVE_END;
}
// End Class USteamProTimeline Function ClearTimelineStateDescription

// Begin Class USteamProTimeline Function GetSteamTimeline
struct Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics
{
	struct SteamProTimeline_eventGetSteamTimeline_Parms
	{
		USteamProTimeline* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventGetSteamTimeline_Parms, ReturnValue), Z_Construct_UClass_USteamProTimeline_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimeline, nullptr, "GetSteamTimeline", nullptr, nullptr, Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::SteamProTimeline_eventGetSteamTimeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::SteamProTimeline_eventGetSteamTimeline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimeline::execGetSteamTimeline)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProTimeline**)Z_Param__Result=USteamProTimeline::GetSteamTimeline();
	P_NATIVE_END;
}
// End Class USteamProTimeline Function GetSteamTimeline

// Begin Class USteamProTimeline Function SetTimelineGameMode
struct Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics
{
	struct SteamProTimeline_eventSetTimelineGameMode_Parms
	{
		ESteamTimelineGameMode Mode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline" },
		{ "Comment", "/*\n\x09 * Changes the color of the timeline bar. See ETimelineGameMode comments for how to use each value\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
		{ "ToolTip", "* Changes the color of the timeline bar. See ETimelineGameMode comments for how to use each value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventSetTimelineGameMode_Parms, Mode), Z_Construct_UEnum_SteamCorePro_ESteamTimelineGameMode, METADATA_PARAMS(0, nullptr) }; // 3202774101
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimeline, nullptr, "SetTimelineGameMode", nullptr, nullptr, Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::SteamProTimeline_eventSetTimelineGameMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::SteamProTimeline_eventSetTimelineGameMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimeline::execSetTimelineGameMode)
{
	P_GET_ENUM(ESteamTimelineGameMode,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProTimeline::SetTimelineGameMode(ESteamTimelineGameMode(Z_Param_Mode));
	P_NATIVE_END;
}
// End Class USteamProTimeline Function SetTimelineGameMode

// Begin Class USteamProTimeline Function SetTimelineStateDescription
struct Z_Construct_UFunction_USteamProTimeline_SetTimelineStateDescription_Statics
{
	struct SteamProTimeline_eventSetTimelineStateDescription_Parms
	{
		FString Description;
		float Delta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Timeline" },
		{ "Comment", "/**\n\x09* Sets a description for the current game state in the timeline. These help the user to find specific moments in the timeline when saving clips. Setting a new state description replaces any previous description.\n\x09* \n\x09* Examples could include:\n    * Where the user is in the world in a single player game\n    * Which round is happening in a multiplayer game\n    * The current score for a sports game\n    * \n\x09* @param\x09""Description\x09\x09Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()\n\x09* @param\x09""Delta\x09\x09\x09The time offset in seconds to apply to this event. Negative times indicate an event that happened in the past.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
		{ "ToolTip", "Sets a description for the current game state in the timeline. These help the user to find specific moments in the timeline when saving clips. Setting a new state description replaces any previous description.\n\nExamples could include:\nWhere the user is in the world in a single player game\nWhich round is happening in a multiplayer game\nThe current score for a sports game\n\n@param        Description             Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()\n@param        Delta                   The time offset in seconds to apply to this event. Negative times indicate an event that happened in the past." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProTimeline_SetTimelineStateDescription_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventSetTimelineStateDescription_Parms, Description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProTimeline_SetTimelineStateDescription_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProTimeline_eventSetTimelineStateDescription_Parms, Delta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProTimeline_SetTimelineStateDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_SetTimelineStateDescription_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProTimeline_SetTimelineStateDescription_Statics::NewProp_Delta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_SetTimelineStateDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProTimeline_SetTimelineStateDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProTimeline, nullptr, "SetTimelineStateDescription", nullptr, nullptr, Z_Construct_UFunction_USteamProTimeline_SetTimelineStateDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_SetTimelineStateDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProTimeline_SetTimelineStateDescription_Statics::SteamProTimeline_eventSetTimelineStateDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProTimeline_SetTimelineStateDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProTimeline_SetTimelineStateDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProTimeline_SetTimelineStateDescription_Statics::SteamProTimeline_eventSetTimelineStateDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProTimeline_SetTimelineStateDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProTimeline_SetTimelineStateDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProTimeline::execSetTimelineStateDescription)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProTimeline::SetTimelineStateDescription(Z_Param_Description,Z_Param_Delta);
	P_NATIVE_END;
}
// End Class USteamProTimeline Function SetTimelineStateDescription

// Begin Class USteamProTimeline
void USteamProTimeline::StaticRegisterNativesUSteamProTimeline()
{
	UClass* Class = USteamProTimeline::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTimelineEvent", &USteamProTimeline::execAddTimelineEvent },
		{ "ClearTimelineStateDescription", &USteamProTimeline::execClearTimelineStateDescription },
		{ "GetSteamTimeline", &USteamProTimeline::execGetSteamTimeline },
		{ "SetTimelineGameMode", &USteamProTimeline::execSetTimelineGameMode },
		{ "SetTimelineStateDescription", &USteamProTimeline::execSetTimelineStateDescription },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProTimeline);
UClass* Z_Construct_UClass_USteamProTimeline_NoRegister()
{
	return USteamProTimeline::StaticClass();
}
struct Z_Construct_UClass_USteamProTimeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamTimeline/SteamTimeline.h" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimeline.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProTimeline_AddTimelineEvent, "AddTimelineEvent" }, // 1658764765
		{ &Z_Construct_UFunction_USteamProTimeline_ClearTimelineStateDescription, "ClearTimelineStateDescription" }, // 2913819788
		{ &Z_Construct_UFunction_USteamProTimeline_GetSteamTimeline, "GetSteamTimeline" }, // 344544505
		{ &Z_Construct_UFunction_USteamProTimeline_SetTimelineGameMode, "SetTimelineGameMode" }, // 356825210
		{ &Z_Construct_UFunction_USteamProTimeline_SetTimelineStateDescription, "SetTimelineStateDescription" }, // 1783097704
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProTimeline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamProTimeline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProTimeline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProTimeline_Statics::ClassParams = {
	&USteamProTimeline::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProTimeline_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProTimeline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProTimeline()
{
	if (!Z_Registration_Info_UClass_USteamProTimeline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProTimeline.OuterSingleton, Z_Construct_UClass_USteamProTimeline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProTimeline.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProTimeline>()
{
	return USteamProTimeline::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProTimeline);
// End Class USteamProTimeline

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimeline_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProTimeline, USteamProTimeline::StaticClass, TEXT("USteamProTimeline"), &Z_Registration_Info_UClass_USteamProTimeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProTimeline), 3793206484U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimeline_h_695438393(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimeline_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
