// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamUtils/SteamUtils.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamUtils() {}

// Begin Cross Module References
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProUtils();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProUtils_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityProtocol();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityState();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamFloatingGamepadTextInputMode();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputLineMode();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputMode();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamNotificationPosition();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamTextFilteringContext();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamUniverse();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnAppResumingFromSuspend__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnCheckFileSignature__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFloatingGamepadTextInputDismissed__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGamepadTextInputDismissed__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnIPCountry__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLowBatteryPower__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamShutdown__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProUtils Function BOverlayNeedsPresent
struct Z_Construct_UFunction_USteamProUtils_BOverlayNeedsPresent_Statics
{
	struct SteamProUtils_eventBOverlayNeedsPresent_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Checks if the Overlay needs a present. Only required if using event driven render updates.\n\x09*\n\x09* Typically this call is unneeded if your game has a constantly running frame loop that calls the D3D Present API, \n\x09* or OGL SwapBuffers API every frame as is the case in most games. \n\x09* However, if you have a game that only refreshes the screen on an event driven basis then that can break the overlay, as it uses your \n\x09* Present/SwapBuffers calls to drive it's internal frame loop and it may also need to Present() to the screen any time a \n\x09* notification happens or when the overlay is brought up over the game by a user. You can use this API to ask the overlay if it \n\x09* currently need a present in that case, and then you can check for this periodically (roughly 33hz is desirable) and make \n\x09* sure you refresh the screen with Present or SwapBuffers to allow the overlay to do it's work.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Checks if the Overlay needs a present. Only required if using event driven render updates.\n\nTypically this call is unneeded if your game has a constantly running frame loop that calls the D3D Present API,\nor OGL SwapBuffers API every frame as is the case in most games.\nHowever, if you have a game that only refreshes the screen on an event driven basis then that can break the overlay, as it uses your\nPresent/SwapBuffers calls to drive it's internal frame loop and it may also need to Present() to the screen any time a\nnotification happens or when the overlay is brought up over the game by a user. You can use this API to ask the overlay if it\ncurrently need a present in that case, and then you can check for this periodically (roughly 33hz is desirable) and make\nsure you refresh the screen with Present or SwapBuffers to allow the overlay to do it's work." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUtils_eventBOverlayNeedsPresent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUtils_eventBOverlayNeedsPresent_Parms), &Z_Construct_UFunction_USteamProUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_BOverlayNeedsPresent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_BOverlayNeedsPresent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_BOverlayNeedsPresent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "BOverlayNeedsPresent", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_BOverlayNeedsPresent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_BOverlayNeedsPresent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_BOverlayNeedsPresent_Statics::SteamProUtils_eventBOverlayNeedsPresent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_BOverlayNeedsPresent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_BOverlayNeedsPresent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_BOverlayNeedsPresent_Statics::SteamProUtils_eventBOverlayNeedsPresent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_BOverlayNeedsPresent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_BOverlayNeedsPresent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execBOverlayNeedsPresent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUtils::BOverlayNeedsPresent();
	P_NATIVE_END;
}
// End Class USteamProUtils Function BOverlayNeedsPresent

// Begin Class USteamProUtils Function DismissFloatingGamepadTextInput
struct Z_Construct_UFunction_USteamProUtils_DismissFloatingGamepadTextInput_Statics
{
	struct SteamProUtils_eventDismissFloatingGamepadTextInput_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Dismisses the floating keyboard.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Dismisses the floating keyboard." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUtils_DismissFloatingGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUtils_eventDismissFloatingGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUtils_DismissFloatingGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUtils_eventDismissFloatingGamepadTextInput_Parms), &Z_Construct_UFunction_USteamProUtils_DismissFloatingGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_DismissFloatingGamepadTextInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_DismissFloatingGamepadTextInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_DismissFloatingGamepadTextInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_DismissFloatingGamepadTextInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "DismissFloatingGamepadTextInput", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_DismissFloatingGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_DismissFloatingGamepadTextInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_DismissFloatingGamepadTextInput_Statics::SteamProUtils_eventDismissFloatingGamepadTextInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_DismissFloatingGamepadTextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_DismissFloatingGamepadTextInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_DismissFloatingGamepadTextInput_Statics::SteamProUtils_eventDismissFloatingGamepadTextInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_DismissFloatingGamepadTextInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_DismissFloatingGamepadTextInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execDismissFloatingGamepadTextInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUtils::DismissFloatingGamepadTextInput();
	P_NATIVE_END;
}
// End Class USteamProUtils Function DismissFloatingGamepadTextInput

// Begin Class USteamProUtils Function DismissGamepadTextInput
struct Z_Construct_UFunction_USteamProUtils_DismissGamepadTextInput_Statics
{
	struct SteamProUtils_eventDismissGamepadTextInput_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Dismisses the full-screen text input dialog.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Dismisses the full-screen text input dialog." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUtils_DismissGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUtils_eventDismissGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUtils_DismissGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUtils_eventDismissGamepadTextInput_Parms), &Z_Construct_UFunction_USteamProUtils_DismissGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_DismissGamepadTextInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_DismissGamepadTextInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_DismissGamepadTextInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_DismissGamepadTextInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "DismissGamepadTextInput", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_DismissGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_DismissGamepadTextInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_DismissGamepadTextInput_Statics::SteamProUtils_eventDismissGamepadTextInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_DismissGamepadTextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_DismissGamepadTextInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_DismissGamepadTextInput_Statics::SteamProUtils_eventDismissGamepadTextInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_DismissGamepadTextInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_DismissGamepadTextInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execDismissGamepadTextInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUtils::DismissGamepadTextInput();
	P_NATIVE_END;
}
// End Class USteamProUtils Function DismissGamepadTextInput

// Begin Class USteamProUtils Function FilterText
struct Z_Construct_UFunction_USteamProUtils_FilterText_Statics
{
	struct SteamProUtils_eventFilterText_Parms
	{
		ESteamTextFilteringContext Context;
		FSteamID SourceSteamID;
		FString InputMessage;
		FString OutFilteredText;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/*\n\x09*  Filters the provided input message and places the filtered result into pchOutFilteredText, using legally required filtering and additional filtering based on the context and user settings\n\x09*  eContext is the type of content in the input string sourceSteamID is the Steam ID that is the source of the input string (e.g. the player with the name, or who said the chat text)\n\x09*  pchInputText is the input string that should be filtered, which can be ASCII or UTF-8\n\x09*  pchOutFilteredText is where the output will be placed, even if no filtering is performed\n\x09*  Returns the number of characters (not bytes) filtered \n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "*  Filters the provided input message and places the filtered result into pchOutFilteredText, using legally required filtering and additional filtering based on the context and user settings\n*  eContext is the type of content in the input string sourceSteamID is the Steam ID that is the source of the input string (e.g. the player with the name, or who said the chat text)\n*  pchInputText is the input string that should be filtered, which can be ASCII or UTF-8\n*  pchOutFilteredText is where the output will be placed, even if no filtering is performed\n*  Returns the number of characters (not bytes) filtered" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceSteamID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutFilteredText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUtils_FilterText_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProUtils_FilterText_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventFilterText_Parms, Context), Z_Construct_UEnum_SteamCorePro_ESteamTextFilteringContext, METADATA_PARAMS(0, nullptr) }; // 3695255668
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUtils_FilterText_Statics::NewProp_SourceSteamID = { "SourceSteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventFilterText_Parms, SourceSteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUtils_FilterText_Statics::NewProp_InputMessage = { "InputMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventFilterText_Parms, InputMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUtils_FilterText_Statics::NewProp_OutFilteredText = { "OutFilteredText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventFilterText_Parms, OutFilteredText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_FilterText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventFilterText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_FilterText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_FilterText_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_FilterText_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_FilterText_Statics::NewProp_SourceSteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_FilterText_Statics::NewProp_InputMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_FilterText_Statics::NewProp_OutFilteredText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_FilterText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_FilterText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_FilterText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "FilterText", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_FilterText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_FilterText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_FilterText_Statics::SteamProUtils_eventFilterText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_FilterText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_FilterText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_FilterText_Statics::SteamProUtils_eventFilterText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_FilterText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_FilterText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execFilterText)
{
	P_GET_ENUM(ESteamTextFilteringContext,Z_Param_Context);
	P_GET_STRUCT(FSteamID,Z_Param_SourceSteamID);
	P_GET_PROPERTY(FStrProperty,Z_Param_InputMessage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutFilteredText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProUtils::FilterText(ESteamTextFilteringContext(Z_Param_Context),Z_Param_SourceSteamID,Z_Param_InputMessage,Z_Param_Out_OutFilteredText);
	P_NATIVE_END;
}
// End Class USteamProUtils Function FilterText

// Begin Class USteamProUtils Function GetAppID
struct Z_Construct_UFunction_USteamProUtils_GetAppID_Statics
{
	struct SteamProUtils_eventGetAppID_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the App ID of the current process.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Gets the App ID of the current process." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_GetAppID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetAppID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_GetAppID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetAppID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetAppID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_GetAppID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "GetAppID", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_GetAppID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetAppID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_GetAppID_Statics::SteamProUtils_eventGetAppID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetAppID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_GetAppID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_GetAppID_Statics::SteamProUtils_eventGetAppID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_GetAppID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_GetAppID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execGetAppID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProUtils::GetAppID();
	P_NATIVE_END;
}
// End Class USteamProUtils Function GetAppID

// Begin Class USteamProUtils Function GetAppID_Pure
struct Z_Construct_UFunction_USteamProUtils_GetAppID_Pure_Statics
{
	struct SteamProUtils_eventGetAppID_Pure_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils|Pure" },
		{ "Comment", "/**\n\x09* Gets the App ID of the current process.\n\x09*/" },
		{ "DisplayName", "Get App ID (Pure)" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Gets the App ID of the current process." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_GetAppID_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetAppID_Pure_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_GetAppID_Pure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetAppID_Pure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetAppID_Pure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_GetAppID_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "GetAppID_Pure", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_GetAppID_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetAppID_Pure_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_GetAppID_Pure_Statics::SteamProUtils_eventGetAppID_Pure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetAppID_Pure_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_GetAppID_Pure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_GetAppID_Pure_Statics::SteamProUtils_eventGetAppID_Pure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_GetAppID_Pure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_GetAppID_Pure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execGetAppID_Pure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProUtils::GetAppID_Pure();
	P_NATIVE_END;
}
// End Class USteamProUtils Function GetAppID_Pure

// Begin Class USteamProUtils Function GetConnectedUniverse
struct Z_Construct_UFunction_USteamProUtils_GetConnectedUniverse_Statics
{
	struct SteamProUtils_eventGetConnectedUniverse_Parms
	{
		ESteamUniverse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the universe that the current client is connecting to. (Valve use only.)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Gets the universe that the current client is connecting to. (Valve use only.)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetConnectedUniverse_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamUniverse, METADATA_PARAMS(0, nullptr) }; // 3638976026
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_GetConnectedUniverse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetConnectedUniverse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_GetConnectedUniverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "GetConnectedUniverse", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_GetConnectedUniverse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetConnectedUniverse_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_GetConnectedUniverse_Statics::SteamProUtils_eventGetConnectedUniverse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetConnectedUniverse_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_GetConnectedUniverse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_GetConnectedUniverse_Statics::SteamProUtils_eventGetConnectedUniverse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_GetConnectedUniverse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_GetConnectedUniverse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execGetConnectedUniverse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamUniverse*)Z_Param__Result=USteamProUtils::GetConnectedUniverse();
	P_NATIVE_END;
}
// End Class USteamProUtils Function GetConnectedUniverse

// Begin Class USteamProUtils Function GetCurrentBatteryPower
struct Z_Construct_UFunction_USteamProUtils_GetCurrentBatteryPower_Statics
{
	struct SteamProUtils_eventGetCurrentBatteryPower_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the current amount of battery power on the computer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Gets the current amount of battery power on the computer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_GetCurrentBatteryPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetCurrentBatteryPower_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_GetCurrentBatteryPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetCurrentBatteryPower_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetCurrentBatteryPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_GetCurrentBatteryPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "GetCurrentBatteryPower", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_GetCurrentBatteryPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetCurrentBatteryPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_GetCurrentBatteryPower_Statics::SteamProUtils_eventGetCurrentBatteryPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetCurrentBatteryPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_GetCurrentBatteryPower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_GetCurrentBatteryPower_Statics::SteamProUtils_eventGetCurrentBatteryPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_GetCurrentBatteryPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_GetCurrentBatteryPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execGetCurrentBatteryPower)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProUtils::GetCurrentBatteryPower();
	P_NATIVE_END;
}
// End Class USteamProUtils Function GetCurrentBatteryPower

// Begin Class USteamProUtils Function GetEnteredGamepadTextInput
struct Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextInput_Statics
{
	struct SteamProUtils_eventGetEnteredGamepadTextInput_Parms
	{
		FString Text;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the gamepad text input from the Big Picture overlay.\n\x09*\n\x09* This must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.\n\x09*\n\x09* @param\x09Text\x09\x09""A preallocated buffer to copy the text input string into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Gets the gamepad text input from the Big Picture overlay.\n\nThis must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.\n\n@param        Text            A preallocated buffer to copy the text input string into." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextInput_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetEnteredGamepadTextInput_Parms, Text), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUtils_eventGetEnteredGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUtils_eventGetEnteredGamepadTextInput_Parms), &Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextInput_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "GetEnteredGamepadTextInput", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextInput_Statics::SteamProUtils_eventGetEnteredGamepadTextInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextInput_Statics::SteamProUtils_eventGetEnteredGamepadTextInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execGetEnteredGamepadTextInput)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUtils::GetEnteredGamepadTextInput(Z_Param_Out_Text);
	P_NATIVE_END;
}
// End Class USteamProUtils Function GetEnteredGamepadTextInput

// Begin Class USteamProUtils Function GetEnteredGamepadTextLength
struct Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextLength_Statics
{
	struct SteamProUtils_eventGetEnteredGamepadTextLength_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the length of the gamepad text input from the Big Picture overlay.\n\x09*\n\x09* This must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Gets the length of the gamepad text input from the Big Picture overlay.\n\nThis must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetEnteredGamepadTextLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "GetEnteredGamepadTextLength", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextLength_Statics::SteamProUtils_eventGetEnteredGamepadTextLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextLength_Statics::SteamProUtils_eventGetEnteredGamepadTextLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execGetEnteredGamepadTextLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProUtils::GetEnteredGamepadTextLength();
	P_NATIVE_END;
}
// End Class USteamProUtils Function GetEnteredGamepadTextLength

// Begin Class USteamProUtils Function GetImageRGBA
struct Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics
{
	struct SteamProUtils_eventGetImageRGBA_Parms
	{
		int32 iImage;
		TArray<uint8> OutBuffer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the image bytes from an image handle.\n\x09* \n\x09* Prior to calling this you must get the size of the image by calling GetImageSize so that you can create your buffer with an appropriate size. You can then allocate your buffer with the width and height as: width * height * 4. The image is provided in RGBA format. This call can be somewhat expensive as it converts from the compressed type (JPG, PNG, TGA) and provides no internal caching of returned buffer, thus it is highly recommended to only call this once per image handle and cache the result. This function is only used for Steam Avatars and Achievement images and those are not expected to change mid game.\n\x09*\n\x09* @param\x09iImage\x09\x09The handle to the image that will be obtained.\n\x09* @param\x09OutBuffer\x09\x09The buffer that will be filled.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Gets the image bytes from an image handle.\n\nPrior to calling this you must get the size of the image by calling GetImageSize so that you can create your buffer with an appropriate size. You can then allocate your buffer with the width and height as: width * height * 4. The image is provided in RGBA format. This call can be somewhat expensive as it converts from the compressed type (JPG, PNG, TGA) and provides no internal caching of returned buffer, thus it is highly recommended to only call this once per image handle and cache the result. This function is only used for Steam Avatars and Achievement images and those are not expected to change mid game.\n\n@param        iImage          The handle to the image that will be obtained.\n@param        OutBuffer               The buffer that will be filled." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_iImage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutBuffer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::NewProp_iImage = { "iImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetImageRGBA_Parms, iImage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::NewProp_OutBuffer_Inner = { "OutBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::NewProp_OutBuffer = { "OutBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetImageRGBA_Parms, OutBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUtils_eventGetImageRGBA_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUtils_eventGetImageRGBA_Parms), &Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::NewProp_iImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::NewProp_OutBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::NewProp_OutBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "GetImageRGBA", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::SteamProUtils_eventGetImageRGBA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::SteamProUtils_eventGetImageRGBA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_GetImageRGBA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_GetImageRGBA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execGetImageRGBA)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_iImage);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBuffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUtils::GetImageRGBA(Z_Param_iImage,Z_Param_Out_OutBuffer);
	P_NATIVE_END;
}
// End Class USteamProUtils Function GetImageRGBA

// Begin Class USteamProUtils Function GetImageSize
struct Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics
{
	struct SteamProUtils_eventGetImageSize_Parms
	{
		int32 iImage;
		int32 Width;
		int32 Height;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the size of a Steam image handle.\n\x09*\n\x09* This must be called before calling GetImageRGBA to create an appropriately sized buffer that will be filled with the raw image data.\n\x09*\n\x09* @param\x09iImage\x09\x09The image handle to get the size for.\n\x09* @param\x09Width\x09\x09Returns the width of the image.\n\x09* @param\x09Height\x09\x09Returns the height of the image.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Gets the size of a Steam image handle.\n\nThis must be called before calling GetImageRGBA to create an appropriately sized buffer that will be filled with the raw image data.\n\n@param        iImage          The image handle to get the size for.\n@param        Width           Returns the width of the image.\n@param        Height          Returns the height of the image." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_iImage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::NewProp_iImage = { "iImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetImageSize_Parms, iImage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetImageSize_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetImageSize_Parms, Height), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUtils_eventGetImageSize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUtils_eventGetImageSize_Parms), &Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::NewProp_iImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "GetImageSize", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::SteamProUtils_eventGetImageSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::SteamProUtils_eventGetImageSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_GetImageSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_GetImageSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execGetImageSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_iImage);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Width);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUtils::GetImageSize(Z_Param_iImage,Z_Param_Out_Width,Z_Param_Out_Height);
	P_NATIVE_END;
}
// End Class USteamProUtils Function GetImageSize

// Begin Class USteamProUtils Function GetIPCCallCount
struct Z_Construct_UFunction_USteamProUtils_GetIPCCallCount_Statics
{
	struct SteamProUtils_eventGetIPCCallCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns the number of IPC calls made since the last time this function was called.\n\x09*\n\x09* Used for perf debugging so you can determine how many IPC (Inter-Process Communication) calls your game makes per frame\n\x09* Every IPC call is at minimum a thread context switch if not a process one so you want to rate control how often you do them.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Returns the number of IPC calls made since the last time this function was called.\n\nUsed for perf debugging so you can determine how many IPC (Inter-Process Communication) calls your game makes per frame\nEvery IPC call is at minimum a thread context switch if not a process one so you want to rate control how often you do them." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_GetIPCCallCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetIPCCallCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_GetIPCCallCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetIPCCallCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetIPCCallCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_GetIPCCallCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "GetIPCCallCount", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_GetIPCCallCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetIPCCallCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_GetIPCCallCount_Statics::SteamProUtils_eventGetIPCCallCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetIPCCallCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_GetIPCCallCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_GetIPCCallCount_Statics::SteamProUtils_eventGetIPCCallCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_GetIPCCallCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_GetIPCCallCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execGetIPCCallCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProUtils::GetIPCCallCount();
	P_NATIVE_END;
}
// End Class USteamProUtils Function GetIPCCallCount

// Begin Class USteamProUtils Function GetIPCountry
struct Z_Construct_UFunction_USteamProUtils_GetIPCountry_Statics
{
	struct SteamProUtils_eventGetIPCountry_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns the 2 digit ISO 3166-1-alpha-2 format country code which client is running in. e.g \"US\" or \"UK\".\n\x09*\n\x09* This is looked up via an IP-to-location database.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Returns the 2 digit ISO 3166-1-alpha-2 format country code which client is running in. e.g \"US\" or \"UK\".\n\nThis is looked up via an IP-to-location database." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUtils_GetIPCountry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetIPCountry_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_GetIPCountry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetIPCountry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetIPCountry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_GetIPCountry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "GetIPCountry", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_GetIPCountry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetIPCountry_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_GetIPCountry_Statics::SteamProUtils_eventGetIPCountry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetIPCountry_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_GetIPCountry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_GetIPCountry_Statics::SteamProUtils_eventGetIPCountry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_GetIPCountry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_GetIPCountry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execGetIPCountry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProUtils::GetIPCountry();
	P_NATIVE_END;
}
// End Class USteamProUtils Function GetIPCountry

// Begin Class USteamProUtils Function GetIPv6ConnectivityState
struct Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState_Statics
{
	struct SteamProUtils_eventGetIPv6ConnectivityState_Parms
	{
		ESteamCoreIPv6ConnectivityProtocol Protocol;
		ESteamCoreIPv6ConnectivityState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Return what we believe your current ipv6 connectivity to \"the internet\" is on the specified protocol.\n\x09* This does NOT tell you if the Steam client is currently connected to Steam via ipv6.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Return what we believe your current ipv6 connectivity to \"the internet\" is on the specified protocol.\nThis does NOT tell you if the Steam client is currently connected to Steam via ipv6." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Protocol_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Protocol;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState_Statics::NewProp_Protocol_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetIPv6ConnectivityState_Parms, Protocol), Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityProtocol, METADATA_PARAMS(0, nullptr) }; // 825146868
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetIPv6ConnectivityState_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityState, METADATA_PARAMS(0, nullptr) }; // 1582326631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState_Statics::NewProp_Protocol_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState_Statics::NewProp_Protocol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "GetIPv6ConnectivityState", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState_Statics::SteamProUtils_eventGetIPv6ConnectivityState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState_Statics::SteamProUtils_eventGetIPv6ConnectivityState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execGetIPv6ConnectivityState)
{
	P_GET_ENUM(ESteamCoreIPv6ConnectivityProtocol,Z_Param_Protocol);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamCoreIPv6ConnectivityState*)Z_Param__Result=USteamProUtils::GetIPv6ConnectivityState(ESteamCoreIPv6ConnectivityProtocol(Z_Param_Protocol));
	P_NATIVE_END;
}
// End Class USteamProUtils Function GetIPv6ConnectivityState

// Begin Class USteamProUtils Function GetSecondsSinceAppActive
struct Z_Construct_UFunction_USteamProUtils_GetSecondsSinceAppActive_Statics
{
	struct SteamProUtils_eventGetSecondsSinceAppActive_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns the number of seconds since the application was active.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Returns the number of seconds since the application was active." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_GetSecondsSinceAppActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetSecondsSinceAppActive_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_GetSecondsSinceAppActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetSecondsSinceAppActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetSecondsSinceAppActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_GetSecondsSinceAppActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "GetSecondsSinceAppActive", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_GetSecondsSinceAppActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetSecondsSinceAppActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_GetSecondsSinceAppActive_Statics::SteamProUtils_eventGetSecondsSinceAppActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetSecondsSinceAppActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_GetSecondsSinceAppActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_GetSecondsSinceAppActive_Statics::SteamProUtils_eventGetSecondsSinceAppActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_GetSecondsSinceAppActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_GetSecondsSinceAppActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execGetSecondsSinceAppActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProUtils::GetSecondsSinceAppActive();
	P_NATIVE_END;
}
// End Class USteamProUtils Function GetSecondsSinceAppActive

// Begin Class USteamProUtils Function GetSecondsSinceComputerActive
struct Z_Construct_UFunction_USteamProUtils_GetSecondsSinceComputerActive_Statics
{
	struct SteamProUtils_eventGetSecondsSinceComputerActive_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns the number of seconds since the user last moved the mouse.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Returns the number of seconds since the user last moved the mouse." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_GetSecondsSinceComputerActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetSecondsSinceComputerActive_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_GetSecondsSinceComputerActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetSecondsSinceComputerActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetSecondsSinceComputerActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_GetSecondsSinceComputerActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "GetSecondsSinceComputerActive", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_GetSecondsSinceComputerActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetSecondsSinceComputerActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_GetSecondsSinceComputerActive_Statics::SteamProUtils_eventGetSecondsSinceComputerActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_GetSecondsSinceComputerActive_Statics::SteamProUtils_eventGetSecondsSinceComputerActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_GetSecondsSinceComputerActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_GetSecondsSinceComputerActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execGetSecondsSinceComputerActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProUtils::GetSecondsSinceComputerActive();
	P_NATIVE_END;
}
// End Class USteamProUtils Function GetSecondsSinceComputerActive

// Begin Class USteamProUtils Function GetServerRealTime
struct Z_Construct_UFunction_USteamProUtils_GetServerRealTime_Statics
{
	struct SteamProUtils_eventGetServerRealTime_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns the Steam server time in Unix epoch format. (Number of seconds since Jan 1, 1970 UTC)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Returns the Steam server time in Unix epoch format. (Number of seconds since Jan 1, 1970 UTC)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_GetServerRealTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetServerRealTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_GetServerRealTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetServerRealTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetServerRealTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_GetServerRealTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "GetServerRealTime", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_GetServerRealTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetServerRealTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_GetServerRealTime_Statics::SteamProUtils_eventGetServerRealTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetServerRealTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_GetServerRealTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_GetServerRealTime_Statics::SteamProUtils_eventGetServerRealTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_GetServerRealTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_GetServerRealTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execGetServerRealTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProUtils::GetServerRealTime();
	P_NATIVE_END;
}
// End Class USteamProUtils Function GetServerRealTime

// Begin Class USteamProUtils Function GetSteamUILanguage
struct Z_Construct_UFunction_USteamProUtils_GetSteamUILanguage_Statics
{
	struct SteamProUtils_eventGetSteamUILanguage_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns the language the steam client is running in.\n\x09*\n\x09* You probably want ISteamApps::GetCurrentGameLanguage instead, this should only be used in very special cases.\n\x09* For a full list of languages see Supported Languages.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Returns the language the steam client is running in.\n\nYou probably want ISteamApps::GetCurrentGameLanguage instead, this should only be used in very special cases.\nFor a full list of languages see Supported Languages." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUtils_GetSteamUILanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetSteamUILanguage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_GetSteamUILanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetSteamUILanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetSteamUILanguage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_GetSteamUILanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "GetSteamUILanguage", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_GetSteamUILanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetSteamUILanguage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_GetSteamUILanguage_Statics::SteamProUtils_eventGetSteamUILanguage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetSteamUILanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_GetSteamUILanguage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_GetSteamUILanguage_Statics::SteamProUtils_eventGetSteamUILanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_GetSteamUILanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_GetSteamUILanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execGetSteamUILanguage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProUtils::GetSteamUILanguage();
	P_NATIVE_END;
}
// End Class USteamProUtils Function GetSteamUILanguage

// Begin Class USteamProUtils Function GetSteamUtils
struct Z_Construct_UFunction_USteamProUtils_GetSteamUtils_Statics
{
	struct SteamProUtils_eventGetSteamUtils_Parms
	{
		USteamProUtils* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProUtils_GetSteamUtils_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventGetSteamUtils_Parms, ReturnValue), Z_Construct_UClass_USteamProUtils_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_GetSteamUtils_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_GetSteamUtils_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetSteamUtils_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_GetSteamUtils_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "GetSteamUtils", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_GetSteamUtils_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetSteamUtils_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_GetSteamUtils_Statics::SteamProUtils_eventGetSteamUtils_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_GetSteamUtils_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_GetSteamUtils_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_GetSteamUtils_Statics::SteamProUtils_eventGetSteamUtils_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_GetSteamUtils()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_GetSteamUtils_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execGetSteamUtils)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProUtils**)Z_Param__Result=USteamProUtils::GetSteamUtils();
	P_NATIVE_END;
}
// End Class USteamProUtils Function GetSteamUtils

// Begin Class USteamProUtils Function InitFilterText
struct Z_Construct_UFunction_USteamProUtils_InitFilterText_Statics
{
	struct SteamProUtils_eventInitFilterText_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Initializes text filtering.\n\x09* \n\x09* Returns false if filtering is unavailable for the language the user is currently running in.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Initializes text filtering.\n\nReturns false if filtering is unavailable for the language the user is currently running in." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUtils_InitFilterText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUtils_eventInitFilterText_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUtils_InitFilterText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUtils_eventInitFilterText_Parms), &Z_Construct_UFunction_USteamProUtils_InitFilterText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_InitFilterText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_InitFilterText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_InitFilterText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_InitFilterText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "InitFilterText", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_InitFilterText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_InitFilterText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_InitFilterText_Statics::SteamProUtils_eventInitFilterText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_InitFilterText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_InitFilterText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_InitFilterText_Statics::SteamProUtils_eventInitFilterText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_InitFilterText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_InitFilterText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execInitFilterText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUtils::InitFilterText();
	P_NATIVE_END;
}
// End Class USteamProUtils Function InitFilterText

// Begin Class USteamProUtils Function IsOverlayEnabled
struct Z_Construct_UFunction_USteamProUtils_IsOverlayEnabled_Statics
{
	struct SteamProUtils_eventIsOverlayEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Checks if the Steam Overlay is running & the user can access it.\n\x09*\n\x09* The overlay process could take a few seconds to start & hook the game process, so this function will initially return false while the overlay is loading.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Checks if the Steam Overlay is running & the user can access it.\n\nThe overlay process could take a few seconds to start & hook the game process, so this function will initially return false while the overlay is loading." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUtils_eventIsOverlayEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUtils_eventIsOverlayEnabled_Parms), &Z_Construct_UFunction_USteamProUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_IsOverlayEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_IsOverlayEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_IsOverlayEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "IsOverlayEnabled", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_IsOverlayEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_IsOverlayEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_IsOverlayEnabled_Statics::SteamProUtils_eventIsOverlayEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_IsOverlayEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_IsOverlayEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_IsOverlayEnabled_Statics::SteamProUtils_eventIsOverlayEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_IsOverlayEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_IsOverlayEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execIsOverlayEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUtils::IsOverlayEnabled();
	P_NATIVE_END;
}
// End Class USteamProUtils Function IsOverlayEnabled

// Begin Class USteamProUtils Function IsSteamChinaLauncher
struct Z_Construct_UFunction_USteamProUtils_IsSteamChinaLauncher_Statics
{
	struct SteamProUtils_eventIsSteamChinaLauncher_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns whether the current launcher is a Steam China launcher. You can cause the client to behave as the Steam China launcher by adding -dev -steamchina to the command line when running Steam.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Returns whether the current launcher is a Steam China launcher. You can cause the client to behave as the Steam China launcher by adding -dev -steamchina to the command line when running Steam." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUtils_eventIsSteamChinaLauncher_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUtils_eventIsSteamChinaLauncher_Parms), &Z_Construct_UFunction_USteamProUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_IsSteamChinaLauncher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_IsSteamChinaLauncher_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_IsSteamChinaLauncher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "IsSteamChinaLauncher", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_IsSteamChinaLauncher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_IsSteamChinaLauncher_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_IsSteamChinaLauncher_Statics::SteamProUtils_eventIsSteamChinaLauncher_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_IsSteamChinaLauncher_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_IsSteamChinaLauncher_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_IsSteamChinaLauncher_Statics::SteamProUtils_eventIsSteamChinaLauncher_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_IsSteamChinaLauncher()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_IsSteamChinaLauncher_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execIsSteamChinaLauncher)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUtils::IsSteamChinaLauncher();
	P_NATIVE_END;
}
// End Class USteamProUtils Function IsSteamChinaLauncher

// Begin Class USteamProUtils Function IsSteamInBigPictureMode
struct Z_Construct_UFunction_USteamProUtils_IsSteamInBigPictureMode_Statics
{
	struct SteamProUtils_eventIsSteamInBigPictureMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Checks if Steam & the Steam Overlay are running in Big Picture mode.\n\x09*\n\x09* Games must be launched through the Steam client to enable the Big Picture overlay.\n\x09* During development, a game can be added as a non-steam game to the developers library to test this feature.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Checks if Steam & the Steam Overlay are running in Big Picture mode.\n\nGames must be launched through the Steam client to enable the Big Picture overlay.\nDuring development, a game can be added as a non-steam game to the developers library to test this feature." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUtils_eventIsSteamInBigPictureMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUtils_eventIsSteamInBigPictureMode_Parms), &Z_Construct_UFunction_USteamProUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_IsSteamInBigPictureMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_IsSteamInBigPictureMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_IsSteamInBigPictureMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "IsSteamInBigPictureMode", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_IsSteamInBigPictureMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_IsSteamInBigPictureMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_IsSteamInBigPictureMode_Statics::SteamProUtils_eventIsSteamInBigPictureMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_IsSteamInBigPictureMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_IsSteamInBigPictureMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_IsSteamInBigPictureMode_Statics::SteamProUtils_eventIsSteamInBigPictureMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_IsSteamInBigPictureMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_IsSteamInBigPictureMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execIsSteamInBigPictureMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUtils::IsSteamInBigPictureMode();
	P_NATIVE_END;
}
// End Class USteamProUtils Function IsSteamInBigPictureMode

// Begin Class USteamProUtils Function IsSteamRunningInVR
struct Z_Construct_UFunction_USteamProUtils_IsSteamRunningInVR_Statics
{
	struct SteamProUtils_eventIsSteamRunningInVR_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Checks if Steam is running in VR mode.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Checks if Steam is running in VR mode." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUtils_eventIsSteamRunningInVR_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUtils_eventIsSteamRunningInVR_Parms), &Z_Construct_UFunction_USteamProUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_IsSteamRunningInVR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_IsSteamRunningInVR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_IsSteamRunningInVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "IsSteamRunningInVR", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_IsSteamRunningInVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_IsSteamRunningInVR_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_IsSteamRunningInVR_Statics::SteamProUtils_eventIsSteamRunningInVR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_IsSteamRunningInVR_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_IsSteamRunningInVR_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_IsSteamRunningInVR_Statics::SteamProUtils_eventIsSteamRunningInVR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_IsSteamRunningInVR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_IsSteamRunningInVR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execIsSteamRunningInVR)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUtils::IsSteamRunningInVR();
	P_NATIVE_END;
}
// End Class USteamProUtils Function IsSteamRunningInVR

// Begin Class USteamProUtils Function IsSteamRunningOnSteamDeck
struct Z_Construct_UFunction_USteamProUtils_IsSteamRunningOnSteamDeck_Statics
{
	struct SteamProUtils_eventIsSteamRunningOnSteamDeck_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/*\n\x09 * Returns true if currently running on the Steam Deck device\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "* Returns true if currently running on the Steam Deck device" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUtils_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUtils_eventIsSteamRunningOnSteamDeck_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUtils_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUtils_eventIsSteamRunningOnSteamDeck_Parms), &Z_Construct_UFunction_USteamProUtils_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_IsSteamRunningOnSteamDeck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_IsSteamRunningOnSteamDeck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_IsSteamRunningOnSteamDeck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "IsSteamRunningOnSteamDeck", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_IsSteamRunningOnSteamDeck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_IsSteamRunningOnSteamDeck_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_IsSteamRunningOnSteamDeck_Statics::SteamProUtils_eventIsSteamRunningOnSteamDeck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_IsSteamRunningOnSteamDeck_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_IsSteamRunningOnSteamDeck_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_IsSteamRunningOnSteamDeck_Statics::SteamProUtils_eventIsSteamRunningOnSteamDeck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_IsSteamRunningOnSteamDeck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_IsSteamRunningOnSteamDeck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execIsSteamRunningOnSteamDeck)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSteamRunningOnSteamDeck();
	P_NATIVE_END;
}
// End Class USteamProUtils Function IsSteamRunningOnSteamDeck

// Begin Class USteamProUtils Function IsVRHeadsetStreamingEnabled
struct Z_Construct_UFunction_USteamProUtils_IsVRHeadsetStreamingEnabled_Statics
{
	struct SteamProUtils_eventIsVRHeadsetStreamingEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Checks if the HMD view will be streamed via Steam Remote Play.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Checks if the HMD view will be streamed via Steam Remote Play." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUtils_eventIsVRHeadsetStreamingEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUtils_eventIsVRHeadsetStreamingEnabled_Parms), &Z_Construct_UFunction_USteamProUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_IsVRHeadsetStreamingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "IsVRHeadsetStreamingEnabled", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_IsVRHeadsetStreamingEnabled_Statics::SteamProUtils_eventIsVRHeadsetStreamingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_IsVRHeadsetStreamingEnabled_Statics::SteamProUtils_eventIsVRHeadsetStreamingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_IsVRHeadsetStreamingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_IsVRHeadsetStreamingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execIsVRHeadsetStreamingEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUtils::IsVRHeadsetStreamingEnabled();
	P_NATIVE_END;
}
// End Class USteamProUtils Function IsVRHeadsetStreamingEnabled

// Begin Class USteamProUtils Function SetGameLauncherMode
struct Z_Construct_UFunction_USteamProUtils_SetGameLauncherMode_Statics
{
	struct SteamProUtils_eventSetGameLauncherMode_Parms
	{
		bool bLauncherMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* In game launchers that don't have controller support you can call this to have Steam Input translate the controller input into mouse/kb to navigate the launcher\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "In game launchers that don't have controller support you can call this to have Steam Input translate the controller input into mouse/kb to navigate the launcher" },
	};
#endif // WITH_METADATA
	static void NewProp_bLauncherMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLauncherMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUtils_SetGameLauncherMode_Statics::NewProp_bLauncherMode_SetBit(void* Obj)
{
	((SteamProUtils_eventSetGameLauncherMode_Parms*)Obj)->bLauncherMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUtils_SetGameLauncherMode_Statics::NewProp_bLauncherMode = { "bLauncherMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUtils_eventSetGameLauncherMode_Parms), &Z_Construct_UFunction_USteamProUtils_SetGameLauncherMode_Statics::NewProp_bLauncherMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_SetGameLauncherMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_SetGameLauncherMode_Statics::NewProp_bLauncherMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_SetGameLauncherMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_SetGameLauncherMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "SetGameLauncherMode", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_SetGameLauncherMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_SetGameLauncherMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_SetGameLauncherMode_Statics::SteamProUtils_eventSetGameLauncherMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_SetGameLauncherMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_SetGameLauncherMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_SetGameLauncherMode_Statics::SteamProUtils_eventSetGameLauncherMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_SetGameLauncherMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_SetGameLauncherMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execSetGameLauncherMode)
{
	P_GET_UBOOL(Z_Param_bLauncherMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProUtils::SetGameLauncherMode(Z_Param_bLauncherMode);
	P_NATIVE_END;
}
// End Class USteamProUtils Function SetGameLauncherMode

// Begin Class USteamProUtils Function SetOverlayNotificationInset
struct Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationInset_Statics
{
	struct SteamProUtils_eventSetOverlayNotificationInset_Parms
	{
		int32 HorizontalInset;
		int32 VerticalInset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Sets the inset of the overlay notification from the corner specified by SetOverlayNotificationPosition.\n\x09*\n\x09* A value of (0, 0) resets the position into the corner.\n\x09* This position is per-game and is reset each launch.\n\x09*\n\x09* @param\x09HorizontalInset\x09\x09The horizontal (left-right) distance in pixels from the corner.\n\x09* @param\x09VerticalInset\x09\x09The vertical (up-down) distance in pixels from the corner.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Sets the inset of the overlay notification from the corner specified by SetOverlayNotificationPosition.\n\nA value of (0, 0) resets the position into the corner.\nThis position is per-game and is reset each launch.\n\n@param        HorizontalInset         The horizontal (left-right) distance in pixels from the corner.\n@param        VerticalInset           The vertical (up-down) distance in pixels from the corner." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HorizontalInset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VerticalInset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationInset_Statics::NewProp_HorizontalInset = { "HorizontalInset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventSetOverlayNotificationInset_Parms, HorizontalInset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationInset_Statics::NewProp_VerticalInset = { "VerticalInset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventSetOverlayNotificationInset_Parms, VerticalInset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationInset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationInset_Statics::NewProp_HorizontalInset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationInset_Statics::NewProp_VerticalInset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationInset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationInset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "SetOverlayNotificationInset", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationInset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationInset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationInset_Statics::SteamProUtils_eventSetOverlayNotificationInset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationInset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationInset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationInset_Statics::SteamProUtils_eventSetOverlayNotificationInset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationInset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationInset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execSetOverlayNotificationInset)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_HorizontalInset);
	P_GET_PROPERTY(FIntProperty,Z_Param_VerticalInset);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProUtils::SetOverlayNotificationInset(Z_Param_HorizontalInset,Z_Param_VerticalInset);
	P_NATIVE_END;
}
// End Class USteamProUtils Function SetOverlayNotificationInset

// Begin Class USteamProUtils Function SetOverlayNotificationPosition
struct Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationPosition_Statics
{
	struct SteamProUtils_eventSetOverlayNotificationPosition_Parms
	{
		ESteamNotificationPosition NotificationPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Sets which corner the Steam overlay notification popup should display itself in.\n\x09*\n\x09* You can also set the distance from the specified corner by using SetOverlayNotificationInset.\n\x09* This position is per-game and is reset each launch.\n\x09*\n\x09* @param\x09NotificationPosition\x09position\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Sets which corner the Steam overlay notification popup should display itself in.\n\nYou can also set the distance from the specified corner by using SetOverlayNotificationInset.\nThis position is per-game and is reset each launch.\n\n@param        NotificationPosition    position" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NotificationPosition_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NotificationPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition = { "NotificationPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventSetOverlayNotificationPosition_Parms, NotificationPosition), Z_Construct_UEnum_SteamCorePro_ESteamNotificationPosition, METADATA_PARAMS(0, nullptr) }; // 3240337511
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "SetOverlayNotificationPosition", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationPosition_Statics::SteamProUtils_eventSetOverlayNotificationPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationPosition_Statics::SteamProUtils_eventSetOverlayNotificationPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execSetOverlayNotificationPosition)
{
	P_GET_ENUM(ESteamNotificationPosition,Z_Param_NotificationPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProUtils::SetOverlayNotificationPosition(ESteamNotificationPosition(Z_Param_NotificationPosition));
	P_NATIVE_END;
}
// End Class USteamProUtils Function SetOverlayNotificationPosition

// Begin Class USteamProUtils Function SetVRHeadsetStreamingEnabled
struct Z_Construct_UFunction_USteamProUtils_SetVRHeadsetStreamingEnabled_Statics
{
	struct SteamProUtils_eventSetVRHeadsetStreamingEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Set whether the HMD content will be streamed via Steam Remote Play.\n\x09*\n\x09* If this is enabled, then the scene in the HMD headset will be streamed, and remote input will not be allowed. Otherwise if this is disabled, then the application window will be streamed instead, and remote input will be allowed. VR games default to enabled unless \"VRHeadsetStreaming\" \"0\" is in the extended appinfo for a game.\n\x09* This is useful for games that have asymmetric multiplayer gameplay.\n\x09*\n\x09* @param\x09""bEnabled\x09Turns VR HMD Streaming on (true) or off (false).\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Set whether the HMD content will be streamed via Steam Remote Play.\n\nIf this is enabled, then the scene in the HMD headset will be streamed, and remote input will not be allowed. Otherwise if this is disabled, then the application window will be streamed instead, and remote input will be allowed. VR games default to enabled unless \"VRHeadsetStreaming\" \"0\" is in the extended appinfo for a game.\nThis is useful for games that have asymmetric multiplayer gameplay.\n\n@param        bEnabled        Turns VR HMD Streaming on (true) or off (false)." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((SteamProUtils_eventSetVRHeadsetStreamingEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUtils_eventSetVRHeadsetStreamingEnabled_Parms), &Z_Construct_UFunction_USteamProUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_SetVRHeadsetStreamingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "SetVRHeadsetStreamingEnabled", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_SetVRHeadsetStreamingEnabled_Statics::SteamProUtils_eventSetVRHeadsetStreamingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_SetVRHeadsetStreamingEnabled_Statics::SteamProUtils_eventSetVRHeadsetStreamingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_SetVRHeadsetStreamingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_SetVRHeadsetStreamingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execSetVRHeadsetStreamingEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProUtils::SetVRHeadsetStreamingEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class USteamProUtils Function SetVRHeadsetStreamingEnabled

// Begin Class USteamProUtils Function ShowFloatingGamepadTextInput
struct Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics
{
	struct SteamProUtils_eventShowFloatingGamepadTextInput_Parms
	{
		ESteamFloatingGamepadTextInputMode KeyboardMode;
		int32 TextFieldXPosition;
		int32 TextFieldYPosition;
		int32 TextFieldWidth;
		int32 TextFieldHeight;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Opens a floating keyboard over the game content and sends OS keyboard keys directly to the game.\n\x09* The text field position is specified in pixels relative the origin of the game window and is used to position the floating keyboard in a way that doesn't cover the text field\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Opens a floating keyboard over the game content and sends OS keyboard keys directly to the game.\nThe text field position is specified in pixels relative the origin of the game window and is used to position the floating keyboard in a way that doesn't cover the text field" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeyboardMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KeyboardMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldXPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldYPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldHeight;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::NewProp_KeyboardMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::NewProp_KeyboardMode = { "KeyboardMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventShowFloatingGamepadTextInput_Parms, KeyboardMode), Z_Construct_UEnum_SteamCorePro_ESteamFloatingGamepadTextInputMode, METADATA_PARAMS(0, nullptr) }; // 3510966607
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldXPosition = { "TextFieldXPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventShowFloatingGamepadTextInput_Parms, TextFieldXPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldYPosition = { "TextFieldYPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventShowFloatingGamepadTextInput_Parms, TextFieldYPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldWidth = { "TextFieldWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventShowFloatingGamepadTextInput_Parms, TextFieldWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldHeight = { "TextFieldHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventShowFloatingGamepadTextInput_Parms, TextFieldHeight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUtils_eventShowFloatingGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUtils_eventShowFloatingGamepadTextInput_Parms), &Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::NewProp_KeyboardMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::NewProp_KeyboardMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldXPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldYPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "ShowFloatingGamepadTextInput", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::SteamProUtils_eventShowFloatingGamepadTextInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::SteamProUtils_eventShowFloatingGamepadTextInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execShowFloatingGamepadTextInput)
{
	P_GET_ENUM(ESteamFloatingGamepadTextInputMode,Z_Param_KeyboardMode);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldXPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldYPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUtils::ShowFloatingGamepadTextInput(ESteamFloatingGamepadTextInputMode(Z_Param_KeyboardMode),Z_Param_TextFieldXPosition,Z_Param_TextFieldYPosition,Z_Param_TextFieldWidth,Z_Param_TextFieldHeight);
	P_NATIVE_END;
}
// End Class USteamProUtils Function ShowFloatingGamepadTextInput

// Begin Class USteamProUtils Function ShowGamepadTextInput
struct Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics
{
	struct SteamProUtils_eventShowGamepadTextInput_Parms
	{
		ESteamGamepadTextInputMode InputMode;
		ESteamGamepadTextInputLineMode LineInputMode;
		FString Description;
		int32 CharMax;
		FString ExistingText;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Activates the Big Picture text input dialog which only supports gamepad input.\n\x09*\n\x09* @param\x09InputMode\x09\x09\x09Selects the input mode to use, either Normal or Password (hidden text)\n\x09* @param\x09LineInputMode\x09\x09""Controls whether to use single or multi line input.\n\x09* @param\x09""Description\x09\x09\x09Sets the description that should inform the user what the input dialog is for.\n\x09* @param\x09""CharMax\x09\x09\x09\x09The maximum number of characters that the user can input.\n\x09* @param\x09""ExistingText\x09\x09Sets the preexisting text which the user can edit.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Activates the Big Picture text input dialog which only supports gamepad input.\n\n@param        InputMode                       Selects the input mode to use, either Normal or Password (hidden text)\n@param        LineInputMode           Controls whether to use single or multi line input.\n@param        Description                     Sets the description that should inform the user what the input dialog is for.\n@param        CharMax                         The maximum number of characters that the user can input.\n@param        ExistingText            Sets the preexisting text which the user can edit." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineInputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LineInputMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharMax;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExistingText;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventShowGamepadTextInput_Parms, InputMode), Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputMode, METADATA_PARAMS(0, nullptr) }; // 3616212952
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode = { "LineInputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventShowGamepadTextInput_Parms, LineInputMode), Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputLineMode, METADATA_PARAMS(0, nullptr) }; // 3245702206
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventShowGamepadTextInput_Parms, Description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::NewProp_CharMax = { "CharMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventShowGamepadTextInput_Parms, CharMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::NewProp_ExistingText = { "ExistingText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUtils_eventShowGamepadTextInput_Parms, ExistingText), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUtils_eventShowGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUtils_eventShowGamepadTextInput_Parms), &Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::NewProp_InputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::NewProp_InputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::NewProp_CharMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::NewProp_ExistingText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "ShowGamepadTextInput", nullptr, nullptr, Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::SteamProUtils_eventShowGamepadTextInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::SteamProUtils_eventShowGamepadTextInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execShowGamepadTextInput)
{
	P_GET_ENUM(ESteamGamepadTextInputMode,Z_Param_InputMode);
	P_GET_ENUM(ESteamGamepadTextInputLineMode,Z_Param_LineInputMode);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_GET_PROPERTY(FIntProperty,Z_Param_CharMax);
	P_GET_PROPERTY(FStrProperty,Z_Param_ExistingText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUtils::ShowGamepadTextInput(ESteamGamepadTextInputMode(Z_Param_InputMode),ESteamGamepadTextInputLineMode(Z_Param_LineInputMode),Z_Param_Description,Z_Param_CharMax,Z_Param_ExistingText);
	P_NATIVE_END;
}
// End Class USteamProUtils Function ShowGamepadTextInput

// Begin Class USteamProUtils Function StartVRDashboard
struct Z_Construct_UFunction_USteamProUtils_StartVRDashboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Asks Steam to create and render the OpenVR dashboard.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Asks Steam to create and render the OpenVR dashboard." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUtils_StartVRDashboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUtils, nullptr, "StartVRDashboard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUtils_StartVRDashboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUtils_StartVRDashboard_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamProUtils_StartVRDashboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUtils_StartVRDashboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUtils::execStartVRDashboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProUtils::StartVRDashboard();
	P_NATIVE_END;
}
// End Class USteamProUtils Function StartVRDashboard

// Begin Class USteamProUtils
void USteamProUtils::StaticRegisterNativesUSteamProUtils()
{
	UClass* Class = USteamProUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BOverlayNeedsPresent", &USteamProUtils::execBOverlayNeedsPresent },
		{ "DismissFloatingGamepadTextInput", &USteamProUtils::execDismissFloatingGamepadTextInput },
		{ "DismissGamepadTextInput", &USteamProUtils::execDismissGamepadTextInput },
		{ "FilterText", &USteamProUtils::execFilterText },
		{ "GetAppID", &USteamProUtils::execGetAppID },
		{ "GetAppID_Pure", &USteamProUtils::execGetAppID_Pure },
		{ "GetConnectedUniverse", &USteamProUtils::execGetConnectedUniverse },
		{ "GetCurrentBatteryPower", &USteamProUtils::execGetCurrentBatteryPower },
		{ "GetEnteredGamepadTextInput", &USteamProUtils::execGetEnteredGamepadTextInput },
		{ "GetEnteredGamepadTextLength", &USteamProUtils::execGetEnteredGamepadTextLength },
		{ "GetImageRGBA", &USteamProUtils::execGetImageRGBA },
		{ "GetImageSize", &USteamProUtils::execGetImageSize },
		{ "GetIPCCallCount", &USteamProUtils::execGetIPCCallCount },
		{ "GetIPCountry", &USteamProUtils::execGetIPCountry },
		{ "GetIPv6ConnectivityState", &USteamProUtils::execGetIPv6ConnectivityState },
		{ "GetSecondsSinceAppActive", &USteamProUtils::execGetSecondsSinceAppActive },
		{ "GetSecondsSinceComputerActive", &USteamProUtils::execGetSecondsSinceComputerActive },
		{ "GetServerRealTime", &USteamProUtils::execGetServerRealTime },
		{ "GetSteamUILanguage", &USteamProUtils::execGetSteamUILanguage },
		{ "GetSteamUtils", &USteamProUtils::execGetSteamUtils },
		{ "InitFilterText", &USteamProUtils::execInitFilterText },
		{ "IsOverlayEnabled", &USteamProUtils::execIsOverlayEnabled },
		{ "IsSteamChinaLauncher", &USteamProUtils::execIsSteamChinaLauncher },
		{ "IsSteamInBigPictureMode", &USteamProUtils::execIsSteamInBigPictureMode },
		{ "IsSteamRunningInVR", &USteamProUtils::execIsSteamRunningInVR },
		{ "IsSteamRunningOnSteamDeck", &USteamProUtils::execIsSteamRunningOnSteamDeck },
		{ "IsVRHeadsetStreamingEnabled", &USteamProUtils::execIsVRHeadsetStreamingEnabled },
		{ "SetGameLauncherMode", &USteamProUtils::execSetGameLauncherMode },
		{ "SetOverlayNotificationInset", &USteamProUtils::execSetOverlayNotificationInset },
		{ "SetOverlayNotificationPosition", &USteamProUtils::execSetOverlayNotificationPosition },
		{ "SetVRHeadsetStreamingEnabled", &USteamProUtils::execSetVRHeadsetStreamingEnabled },
		{ "ShowFloatingGamepadTextInput", &USteamProUtils::execShowFloatingGamepadTextInput },
		{ "ShowGamepadTextInput", &USteamProUtils::execShowGamepadTextInput },
		{ "StartVRDashboard", &USteamProUtils::execStartVRDashboard },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProUtils);
UClass* Z_Construct_UClass_USteamProUtils_NoRegister()
{
	return USteamProUtils::StaticClass();
}
struct Z_Construct_UClass_USteamProUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamUtils/SteamUtils.h" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckFileSignature_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadTextInputDismissed_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPCountry_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowBatteryPower_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamShutdown_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppResumingFromSuspend_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingGamepadTextInputDismissed_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CheckFileSignature;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GamepadTextInputDismissed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_IPCountry;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LowBatteryPower;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamShutdown;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AppResumingFromSuspend;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FloatingGamepadTextInputDismissed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProUtils_BOverlayNeedsPresent, "BOverlayNeedsPresent" }, // 3909073683
		{ &Z_Construct_UFunction_USteamProUtils_DismissFloatingGamepadTextInput, "DismissFloatingGamepadTextInput" }, // 2599371998
		{ &Z_Construct_UFunction_USteamProUtils_DismissGamepadTextInput, "DismissGamepadTextInput" }, // 3842740077
		{ &Z_Construct_UFunction_USteamProUtils_FilterText, "FilterText" }, // 3702804878
		{ &Z_Construct_UFunction_USteamProUtils_GetAppID, "GetAppID" }, // 2421619293
		{ &Z_Construct_UFunction_USteamProUtils_GetAppID_Pure, "GetAppID_Pure" }, // 1157779386
		{ &Z_Construct_UFunction_USteamProUtils_GetConnectedUniverse, "GetConnectedUniverse" }, // 2482210796
		{ &Z_Construct_UFunction_USteamProUtils_GetCurrentBatteryPower, "GetCurrentBatteryPower" }, // 1226376831
		{ &Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextInput, "GetEnteredGamepadTextInput" }, // 3134561877
		{ &Z_Construct_UFunction_USteamProUtils_GetEnteredGamepadTextLength, "GetEnteredGamepadTextLength" }, // 1343285873
		{ &Z_Construct_UFunction_USteamProUtils_GetImageRGBA, "GetImageRGBA" }, // 2938879441
		{ &Z_Construct_UFunction_USteamProUtils_GetImageSize, "GetImageSize" }, // 901214953
		{ &Z_Construct_UFunction_USteamProUtils_GetIPCCallCount, "GetIPCCallCount" }, // 975828976
		{ &Z_Construct_UFunction_USteamProUtils_GetIPCountry, "GetIPCountry" }, // 3348021154
		{ &Z_Construct_UFunction_USteamProUtils_GetIPv6ConnectivityState, "GetIPv6ConnectivityState" }, // 1955790948
		{ &Z_Construct_UFunction_USteamProUtils_GetSecondsSinceAppActive, "GetSecondsSinceAppActive" }, // 1385883873
		{ &Z_Construct_UFunction_USteamProUtils_GetSecondsSinceComputerActive, "GetSecondsSinceComputerActive" }, // 2633020795
		{ &Z_Construct_UFunction_USteamProUtils_GetServerRealTime, "GetServerRealTime" }, // 1747353879
		{ &Z_Construct_UFunction_USteamProUtils_GetSteamUILanguage, "GetSteamUILanguage" }, // 167069907
		{ &Z_Construct_UFunction_USteamProUtils_GetSteamUtils, "GetSteamUtils" }, // 1307797783
		{ &Z_Construct_UFunction_USteamProUtils_InitFilterText, "InitFilterText" }, // 1528938345
		{ &Z_Construct_UFunction_USteamProUtils_IsOverlayEnabled, "IsOverlayEnabled" }, // 1716508145
		{ &Z_Construct_UFunction_USteamProUtils_IsSteamChinaLauncher, "IsSteamChinaLauncher" }, // 2744679836
		{ &Z_Construct_UFunction_USteamProUtils_IsSteamInBigPictureMode, "IsSteamInBigPictureMode" }, // 2723989141
		{ &Z_Construct_UFunction_USteamProUtils_IsSteamRunningInVR, "IsSteamRunningInVR" }, // 4035765245
		{ &Z_Construct_UFunction_USteamProUtils_IsSteamRunningOnSteamDeck, "IsSteamRunningOnSteamDeck" }, // 476681230
		{ &Z_Construct_UFunction_USteamProUtils_IsVRHeadsetStreamingEnabled, "IsVRHeadsetStreamingEnabled" }, // 4231767358
		{ &Z_Construct_UFunction_USteamProUtils_SetGameLauncherMode, "SetGameLauncherMode" }, // 2833632471
		{ &Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationInset, "SetOverlayNotificationInset" }, // 2992956475
		{ &Z_Construct_UFunction_USteamProUtils_SetOverlayNotificationPosition, "SetOverlayNotificationPosition" }, // 1728819359
		{ &Z_Construct_UFunction_USteamProUtils_SetVRHeadsetStreamingEnabled, "SetVRHeadsetStreamingEnabled" }, // 2519634111
		{ &Z_Construct_UFunction_USteamProUtils_ShowFloatingGamepadTextInput, "ShowFloatingGamepadTextInput" }, // 4185675931
		{ &Z_Construct_UFunction_USteamProUtils_ShowGamepadTextInput, "ShowGamepadTextInput" }, // 3672571770
		{ &Z_Construct_UFunction_USteamProUtils_StartVRDashboard, "StartVRDashboard" }, // 838490947
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUtils_Statics::NewProp_CheckFileSignature = { "CheckFileSignature", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUtils, CheckFileSignature), Z_Construct_UDelegateFunction_SteamCorePro_OnCheckFileSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckFileSignature_MetaData), NewProp_CheckFileSignature_MetaData) }; // 1035920066
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUtils_Statics::NewProp_GamepadTextInputDismissed = { "GamepadTextInputDismissed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUtils, GamepadTextInputDismissed), Z_Construct_UDelegateFunction_SteamCorePro_OnGamepadTextInputDismissed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadTextInputDismissed_MetaData), NewProp_GamepadTextInputDismissed_MetaData) }; // 3110150587
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUtils_Statics::NewProp_IPCountry = { "IPCountry", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUtils, IPCountry), Z_Construct_UDelegateFunction_SteamCorePro_OnIPCountry__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPCountry_MetaData), NewProp_IPCountry_MetaData) }; // 3173175500
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUtils_Statics::NewProp_LowBatteryPower = { "LowBatteryPower", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUtils, LowBatteryPower), Z_Construct_UDelegateFunction_SteamCorePro_OnLowBatteryPower__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowBatteryPower_MetaData), NewProp_LowBatteryPower_MetaData) }; // 3125242562
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUtils_Statics::NewProp_SteamShutdown = { "SteamShutdown", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUtils, SteamShutdown), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamShutdown__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamShutdown_MetaData), NewProp_SteamShutdown_MetaData) }; // 2337348482
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUtils_Statics::NewProp_AppResumingFromSuspend = { "AppResumingFromSuspend", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUtils, AppResumingFromSuspend), Z_Construct_UDelegateFunction_SteamCorePro_OnAppResumingFromSuspend__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppResumingFromSuspend_MetaData), NewProp_AppResumingFromSuspend_MetaData) }; // 459706762
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUtils_Statics::NewProp_FloatingGamepadTextInputDismissed = { "FloatingGamepadTextInputDismissed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUtils, FloatingGamepadTextInputDismissed), Z_Construct_UDelegateFunction_SteamCorePro_OnFloatingGamepadTextInputDismissed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingGamepadTextInputDismissed_MetaData), NewProp_FloatingGamepadTextInputDismissed_MetaData) }; // 2542698677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamProUtils_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUtils_Statics::NewProp_CheckFileSignature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUtils_Statics::NewProp_GamepadTextInputDismissed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUtils_Statics::NewProp_IPCountry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUtils_Statics::NewProp_LowBatteryPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUtils_Statics::NewProp_SteamShutdown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUtils_Statics::NewProp_AppResumingFromSuspend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUtils_Statics::NewProp_FloatingGamepadTextInputDismissed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProUtils_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamProUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProUtils_Statics::ClassParams = {
	&USteamProUtils::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamProUtils_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamProUtils_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProUtils()
{
	if (!Z_Registration_Info_UClass_USteamProUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProUtils.OuterSingleton, Z_Construct_UClass_USteamProUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProUtils.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProUtils>()
{
	return USteamProUtils::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProUtils);
// End Class USteamProUtils

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUtils_SteamUtils_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProUtils, USteamProUtils::StaticClass, TEXT("USteamProUtils"), &Z_Registration_Info_UClass_USteamProUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProUtils), 2953398108U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUtils_SteamUtils_h_2783602801(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUtils_SteamUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUtils_SteamUtils_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
