// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamUtils/SteamUtilsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamUtilsTypes() {}

// Begin Cross Module References
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_EGameSearchErrorCode();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_EPlayerResult();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCheckFileSignature();
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
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FAppResumingFromSuspend();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FCheckFileSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FFloatingGamepadTextInputDismissed();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FGamepadTextInputDismissed();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FIPCountry();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FLowBatteryPower();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamShutdown();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Enum ESteamTextFilteringContext
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamTextFilteringContext;
static UEnum* ESteamTextFilteringContext_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamTextFilteringContext.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamTextFilteringContext.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamTextFilteringContext, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamTextFilteringContext"));
	}
	return Z_Registration_Info_UEnum_ESteamTextFilteringContext.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamTextFilteringContext>()
{
	return ESteamTextFilteringContext_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamTextFilteringContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "k_ETextFilteringContextChat.Comment", "// Game content, only legally required filtering is performed\n" },
		{ "k_ETextFilteringContextChat.Name", "ESteamTextFilteringContext::k_ETextFilteringContextChat" },
		{ "k_ETextFilteringContextChat.ToolTip", "Game content, only legally required filtering is performed" },
		{ "k_ETextFilteringContextGameContent.Comment", "// Unknown context\n" },
		{ "k_ETextFilteringContextGameContent.Name", "ESteamTextFilteringContext::k_ETextFilteringContextGameContent" },
		{ "k_ETextFilteringContextGameContent.ToolTip", "Unknown context" },
		{ "k_ETextFilteringContextName.Comment", "// Chat from another player\n" },
		{ "k_ETextFilteringContextName.Name", "ESteamTextFilteringContext::k_ETextFilteringContextName" },
		{ "k_ETextFilteringContextName.ToolTip", "Chat from another player" },
		{ "k_ETextFilteringContextUnknown.Name", "ESteamTextFilteringContext::k_ETextFilteringContextUnknown" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamTextFilteringContext::k_ETextFilteringContextUnknown", (int64)ESteamTextFilteringContext::k_ETextFilteringContextUnknown },
		{ "ESteamTextFilteringContext::k_ETextFilteringContextGameContent", (int64)ESteamTextFilteringContext::k_ETextFilteringContextGameContent },
		{ "ESteamTextFilteringContext::k_ETextFilteringContextChat", (int64)ESteamTextFilteringContext::k_ETextFilteringContextChat },
		{ "ESteamTextFilteringContext::k_ETextFilteringContextName", (int64)ESteamTextFilteringContext::k_ETextFilteringContextName },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamTextFilteringContext_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamTextFilteringContext",
	"ESteamTextFilteringContext",
	Z_Construct_UEnum_SteamCorePro_ESteamTextFilteringContext_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamTextFilteringContext_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamTextFilteringContext_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamTextFilteringContext_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamTextFilteringContext()
{
	if (!Z_Registration_Info_UEnum_ESteamTextFilteringContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamTextFilteringContext.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamTextFilteringContext_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamTextFilteringContext.InnerSingleton;
}
// End Enum ESteamTextFilteringContext

// Begin Enum ESteamCheckFileSignature
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCheckFileSignature;
static UEnum* ESteamCheckFileSignature_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCheckFileSignature.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCheckFileSignature.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamCheckFileSignature, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamCheckFileSignature"));
	}
	return Z_Registration_Info_UEnum_ESteamCheckFileSignature.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCheckFileSignature>()
{
	return ESteamCheckFileSignature_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamCheckFileSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FileNotFound.Name", "ESteamCheckFileSignature::FileNotFound" },
		{ "InvalidSignature.Name", "ESteamCheckFileSignature::InvalidSignature" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "NoSignaturesFoundForThisApp.Name", "ESteamCheckFileSignature::NoSignaturesFoundForThisApp" },
		{ "NoSignaturesFoundForThisFile.Name", "ESteamCheckFileSignature::NoSignaturesFoundForThisFile" },
		{ "ValidSignature.Name", "ESteamCheckFileSignature::ValidSignature" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCheckFileSignature::InvalidSignature", (int64)ESteamCheckFileSignature::InvalidSignature },
		{ "ESteamCheckFileSignature::ValidSignature", (int64)ESteamCheckFileSignature::ValidSignature },
		{ "ESteamCheckFileSignature::FileNotFound", (int64)ESteamCheckFileSignature::FileNotFound },
		{ "ESteamCheckFileSignature::NoSignaturesFoundForThisApp", (int64)ESteamCheckFileSignature::NoSignaturesFoundForThisApp },
		{ "ESteamCheckFileSignature::NoSignaturesFoundForThisFile", (int64)ESteamCheckFileSignature::NoSignaturesFoundForThisFile },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamCheckFileSignature_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamCheckFileSignature",
	"ESteamCheckFileSignature",
	Z_Construct_UEnum_SteamCorePro_ESteamCheckFileSignature_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCheckFileSignature_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCheckFileSignature_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamCheckFileSignature_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCheckFileSignature()
{
	if (!Z_Registration_Info_UEnum_ESteamCheckFileSignature.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCheckFileSignature.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamCheckFileSignature_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCheckFileSignature.InnerSingleton;
}
// End Enum ESteamCheckFileSignature

// Begin Enum ESteamGamepadTextInputLineMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode;
static UEnum* ESteamGamepadTextInputLineMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputLineMode, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamGamepadTextInputLineMode"));
	}
	return Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamGamepadTextInputLineMode>()
{
	return ESteamGamepadTextInputLineMode_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputLineMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "MultipleLines.Name", "ESteamGamepadTextInputLineMode::MultipleLines" },
		{ "SingleLine.Name", "ESteamGamepadTextInputLineMode::SingleLine" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamGamepadTextInputLineMode::SingleLine", (int64)ESteamGamepadTextInputLineMode::SingleLine },
		{ "ESteamGamepadTextInputLineMode::MultipleLines", (int64)ESteamGamepadTextInputLineMode::MultipleLines },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputLineMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamGamepadTextInputLineMode",
	"ESteamGamepadTextInputLineMode",
	Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputLineMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputLineMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputLineMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputLineMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputLineMode()
{
	if (!Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputLineMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode.InnerSingleton;
}
// End Enum ESteamGamepadTextInputLineMode

// Begin Enum ESteamGamepadTextInputMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamGamepadTextInputMode;
static UEnum* ESteamGamepadTextInputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamGamepadTextInputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamGamepadTextInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputMode, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamGamepadTextInputMode"));
	}
	return Z_Registration_Info_UEnum_ESteamGamepadTextInputMode.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamGamepadTextInputMode>()
{
	return ESteamGamepadTextInputMode_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "Normal.Name", "ESteamGamepadTextInputMode::Normal" },
		{ "Password.Name", "ESteamGamepadTextInputMode::Password" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamGamepadTextInputMode::Normal", (int64)ESteamGamepadTextInputMode::Normal },
		{ "ESteamGamepadTextInputMode::Password", (int64)ESteamGamepadTextInputMode::Password },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamGamepadTextInputMode",
	"ESteamGamepadTextInputMode",
	Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputMode()
{
	if (!Z_Registration_Info_UEnum_ESteamGamepadTextInputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamGamepadTextInputMode.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamGamepadTextInputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamGamepadTextInputMode.InnerSingleton;
}
// End Enum ESteamGamepadTextInputMode

// Begin Enum ESteamNotificationPosition
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamNotificationPosition;
static UEnum* ESteamNotificationPosition_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamNotificationPosition.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamNotificationPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamNotificationPosition, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamNotificationPosition"));
	}
	return Z_Registration_Info_UEnum_ESteamNotificationPosition.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamNotificationPosition>()
{
	return ESteamNotificationPosition_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamNotificationPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BottomLeft.Name", "ESteamNotificationPosition::BottomLeft" },
		{ "BottomRight.Name", "ESteamNotificationPosition::BottomRight" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "TopLeft.Name", "ESteamNotificationPosition::TopLeft" },
		{ "TopRight.Name", "ESteamNotificationPosition::TopRight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamNotificationPosition::TopLeft", (int64)ESteamNotificationPosition::TopLeft },
		{ "ESteamNotificationPosition::TopRight", (int64)ESteamNotificationPosition::TopRight },
		{ "ESteamNotificationPosition::BottomLeft", (int64)ESteamNotificationPosition::BottomLeft },
		{ "ESteamNotificationPosition::BottomRight", (int64)ESteamNotificationPosition::BottomRight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamNotificationPosition_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamNotificationPosition",
	"ESteamNotificationPosition",
	Z_Construct_UEnum_SteamCorePro_ESteamNotificationPosition_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamNotificationPosition_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamNotificationPosition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamNotificationPosition_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamNotificationPosition()
{
	if (!Z_Registration_Info_UEnum_ESteamNotificationPosition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamNotificationPosition.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamNotificationPosition_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamNotificationPosition.InnerSingleton;
}
// End Enum ESteamNotificationPosition

// Begin Enum ESteamUniverse
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamUniverse;
static UEnum* ESteamUniverse_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamUniverse.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamUniverse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamUniverse, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamUniverse"));
	}
	return Z_Registration_Info_UEnum_ESteamUniverse.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamUniverse>()
{
	return ESteamUniverse_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamUniverse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Beta.Name", "ESteamUniverse::Beta" },
		{ "BlueprintType", "true" },
		{ "Dev.Name", "ESteamUniverse::Dev" },
		{ "Internal.Name", "ESteamUniverse::Internal" },
		{ "Invalid.Name", "ESteamUniverse::Invalid" },
		{ "Max.Name", "ESteamUniverse::Max" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "Public.Name", "ESteamUniverse::Public" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamUniverse::Invalid", (int64)ESteamUniverse::Invalid },
		{ "ESteamUniverse::Public", (int64)ESteamUniverse::Public },
		{ "ESteamUniverse::Beta", (int64)ESteamUniverse::Beta },
		{ "ESteamUniverse::Internal", (int64)ESteamUniverse::Internal },
		{ "ESteamUniverse::Dev", (int64)ESteamUniverse::Dev },
		{ "ESteamUniverse::Max", (int64)ESteamUniverse::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamUniverse_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamUniverse",
	"ESteamUniverse",
	Z_Construct_UEnum_SteamCorePro_ESteamUniverse_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamUniverse_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamUniverse_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamUniverse_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamUniverse()
{
	if (!Z_Registration_Info_UEnum_ESteamUniverse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamUniverse.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamUniverse_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamUniverse.InnerSingleton;
}
// End Enum ESteamUniverse

// Begin Enum EGameSearchErrorCode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameSearchErrorCode;
static UEnum* EGameSearchErrorCode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameSearchErrorCode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameSearchErrorCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_EGameSearchErrorCode, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("EGameSearchErrorCode"));
	}
	return Z_Registration_Info_UEnum_EGameSearchErrorCode.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<EGameSearchErrorCode>()
{
	return EGameSearchErrorCode_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_EGameSearchErrorCode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "k_EGameSearchErrorCode_Failed_No_Host_Available.Comment", "// if not the lobby leader can not call SearchForGameWithLobby\n" },
		{ "k_EGameSearchErrorCode_Failed_No_Host_Available.Name", "EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_No_Host_Available" },
		{ "k_EGameSearchErrorCode_Failed_No_Host_Available.ToolTip", "if not the lobby leader can not call SearchForGameWithLobby" },
		{ "k_EGameSearchErrorCode_Failed_No_Search_In_Progress.Name", "EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_No_Search_In_Progress" },
		{ "k_EGameSearchErrorCode_Failed_Not_Lobby_Leader.Name", "EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_Not_Lobby_Leader" },
		{ "k_EGameSearchErrorCode_Failed_NotAuthorized.Comment", "// offline, could not communicate with server\n" },
		{ "k_EGameSearchErrorCode_Failed_NotAuthorized.Name", "EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_NotAuthorized" },
		{ "k_EGameSearchErrorCode_Failed_NotAuthorized.ToolTip", "offline, could not communicate with server" },
		{ "k_EGameSearchErrorCode_Failed_Offline.Comment", "// search params are invalid\n" },
		{ "k_EGameSearchErrorCode_Failed_Offline.Name", "EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_Offline" },
		{ "k_EGameSearchErrorCode_Failed_Offline.ToolTip", "search params are invalid" },
		{ "k_EGameSearchErrorCode_Failed_Search_Already_In_Progress.Name", "EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_Search_Already_In_Progress" },
		{ "k_EGameSearchErrorCode_Failed_Search_Params_Invalid.Comment", "// no host is available that matches those search params\n" },
		{ "k_EGameSearchErrorCode_Failed_Search_Params_Invalid.Name", "EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_Search_Params_Invalid" },
		{ "k_EGameSearchErrorCode_Failed_Search_Params_Invalid.ToolTip", "no host is available that matches those search params" },
		{ "k_EGameSearchErrorCode_Failed_Unknown_Error.Comment", "// either the user or the application does not have priveledges to do this\n" },
		{ "k_EGameSearchErrorCode_Failed_Unknown_Error.Name", "EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_Unknown_Error" },
		{ "k_EGameSearchErrorCode_Failed_Unknown_Error.ToolTip", "either the user or the application does not have priveledges to do this" },
		{ "k_EGameSearchErrorCode_OK.Name", "EGameSearchErrorCode::k_EGameSearchErrorCode_OK" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "UNKNOWN.Name", "EGameSearchErrorCode::UNKNOWN" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameSearchErrorCode::UNKNOWN", (int64)EGameSearchErrorCode::UNKNOWN },
		{ "EGameSearchErrorCode::k_EGameSearchErrorCode_OK", (int64)EGameSearchErrorCode::k_EGameSearchErrorCode_OK },
		{ "EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_Search_Already_In_Progress", (int64)EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_Search_Already_In_Progress },
		{ "EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_No_Search_In_Progress", (int64)EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_No_Search_In_Progress },
		{ "EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_Not_Lobby_Leader", (int64)EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_Not_Lobby_Leader },
		{ "EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_No_Host_Available", (int64)EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_No_Host_Available },
		{ "EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_Search_Params_Invalid", (int64)EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_Search_Params_Invalid },
		{ "EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_Offline", (int64)EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_Offline },
		{ "EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_NotAuthorized", (int64)EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_NotAuthorized },
		{ "EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_Unknown_Error", (int64)EGameSearchErrorCode::k_EGameSearchErrorCode_Failed_Unknown_Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_EGameSearchErrorCode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"EGameSearchErrorCode",
	"EGameSearchErrorCode",
	Z_Construct_UEnum_SteamCorePro_EGameSearchErrorCode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_EGameSearchErrorCode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_EGameSearchErrorCode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_EGameSearchErrorCode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_EGameSearchErrorCode()
{
	if (!Z_Registration_Info_UEnum_EGameSearchErrorCode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameSearchErrorCode.InnerSingleton, Z_Construct_UEnum_SteamCorePro_EGameSearchErrorCode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameSearchErrorCode.InnerSingleton;
}
// End Enum EGameSearchErrorCode

// Begin Enum EPlayerResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerResult;
static UEnum* EPlayerResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayerResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayerResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_EPlayerResult, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("EPlayerResult"));
	}
	return Z_Registration_Info_UEnum_EPlayerResult.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<EPlayerResult>()
{
	return EPlayerResult_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_EPlayerResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "k_EPlayerResultAbandoned.Comment", "// failed to connect after confirming\n" },
		{ "k_EPlayerResultAbandoned.Name", "EPlayerResult::k_EPlayerResultAbandoned" },
		{ "k_EPlayerResultAbandoned.ToolTip", "failed to connect after confirming" },
		{ "k_EPlayerResultCompleted.Comment", "// player stayed to end but game did not conclude successfully ( nofault to player )\n" },
		{ "k_EPlayerResultCompleted.Name", "EPlayerResult::k_EPlayerResultCompleted" },
		{ "k_EPlayerResultCompleted.ToolTip", "player stayed to end but game did not conclude successfully ( nofault to player )" },
		{ "k_EPlayerResultFailedToConnect.Name", "EPlayerResult::k_EPlayerResultFailedToConnect" },
		{ "k_EPlayerResultIncomplete.Comment", "// kicked by other players/moderator/server rules\n" },
		{ "k_EPlayerResultIncomplete.Name", "EPlayerResult::k_EPlayerResultIncomplete" },
		{ "k_EPlayerResultIncomplete.ToolTip", "kicked by other players/moderator/server rules" },
		{ "k_EPlayerResultKicked.Comment", "// quit game without completing it\n" },
		{ "k_EPlayerResultKicked.Name", "EPlayerResult::k_EPlayerResultKicked" },
		{ "k_EPlayerResultKicked.ToolTip", "quit game without completing it" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "UNKNOWN.Name", "EPlayerResult::UNKNOWN" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayerResult::UNKNOWN", (int64)EPlayerResult::UNKNOWN },
		{ "EPlayerResult::k_EPlayerResultFailedToConnect", (int64)EPlayerResult::k_EPlayerResultFailedToConnect },
		{ "EPlayerResult::k_EPlayerResultAbandoned", (int64)EPlayerResult::k_EPlayerResultAbandoned },
		{ "EPlayerResult::k_EPlayerResultKicked", (int64)EPlayerResult::k_EPlayerResultKicked },
		{ "EPlayerResult::k_EPlayerResultIncomplete", (int64)EPlayerResult::k_EPlayerResultIncomplete },
		{ "EPlayerResult::k_EPlayerResultCompleted", (int64)EPlayerResult::k_EPlayerResultCompleted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_EPlayerResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"EPlayerResult",
	"EPlayerResult",
	Z_Construct_UEnum_SteamCorePro_EPlayerResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_EPlayerResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_EPlayerResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_EPlayerResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_EPlayerResult()
{
	if (!Z_Registration_Info_UEnum_EPlayerResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerResult.InnerSingleton, Z_Construct_UEnum_SteamCorePro_EPlayerResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayerResult.InnerSingleton;
}
// End Enum EPlayerResult

// Begin Enum ESteamCoreIPv6ConnectivityProtocol
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreIPv6ConnectivityProtocol;
static UEnum* ESteamCoreIPv6ConnectivityProtocol_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreIPv6ConnectivityProtocol.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreIPv6ConnectivityProtocol.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityProtocol, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamCoreIPv6ConnectivityProtocol"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreIPv6ConnectivityProtocol.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCoreIPv6ConnectivityProtocol>()
{
	return ESteamCoreIPv6ConnectivityProtocol_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityProtocol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "k_ESteamIPv6ConnectivityProtocol_HTTP.Name", "ESteamCoreIPv6ConnectivityProtocol::k_ESteamIPv6ConnectivityProtocol_HTTP" },
		{ "k_ESteamIPv6ConnectivityProtocol_Invalid.Name", "ESteamCoreIPv6ConnectivityProtocol::k_ESteamIPv6ConnectivityProtocol_Invalid" },
		{ "k_ESteamIPv6ConnectivityProtocol_UDP.Comment", "// because a proxy may make this different than other protocols\n" },
		{ "k_ESteamIPv6ConnectivityProtocol_UDP.Name", "ESteamCoreIPv6ConnectivityProtocol::k_ESteamIPv6ConnectivityProtocol_UDP" },
		{ "k_ESteamIPv6ConnectivityProtocol_UDP.ToolTip", "because a proxy may make this different than other protocols" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreIPv6ConnectivityProtocol::k_ESteamIPv6ConnectivityProtocol_Invalid", (int64)ESteamCoreIPv6ConnectivityProtocol::k_ESteamIPv6ConnectivityProtocol_Invalid },
		{ "ESteamCoreIPv6ConnectivityProtocol::k_ESteamIPv6ConnectivityProtocol_HTTP", (int64)ESteamCoreIPv6ConnectivityProtocol::k_ESteamIPv6ConnectivityProtocol_HTTP },
		{ "ESteamCoreIPv6ConnectivityProtocol::k_ESteamIPv6ConnectivityProtocol_UDP", (int64)ESteamCoreIPv6ConnectivityProtocol::k_ESteamIPv6ConnectivityProtocol_UDP },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityProtocol_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamCoreIPv6ConnectivityProtocol",
	"ESteamCoreIPv6ConnectivityProtocol",
	Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityProtocol_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityProtocol_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityProtocol_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityProtocol_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityProtocol()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreIPv6ConnectivityProtocol.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreIPv6ConnectivityProtocol.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityProtocol_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreIPv6ConnectivityProtocol.InnerSingleton;
}
// End Enum ESteamCoreIPv6ConnectivityProtocol

// Begin Enum ESteamCoreIPv6ConnectivityState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreIPv6ConnectivityState;
static UEnum* ESteamCoreIPv6ConnectivityState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreIPv6ConnectivityState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreIPv6ConnectivityState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityState, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamCoreIPv6ConnectivityState"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreIPv6ConnectivityState.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCoreIPv6ConnectivityState>()
{
	return ESteamCoreIPv6ConnectivityState_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// For the above transport protocol, what do we think the local machine's connectivity to the internet over ipv6 is like\n" },
		{ "k_ESteamIPv6ConnectivityState_Bad.Comment", "// We have recently been able to make a request on ipv6 for the given protocol\n" },
		{ "k_ESteamIPv6ConnectivityState_Bad.Name", "ESteamCoreIPv6ConnectivityState::k_ESteamIPv6ConnectivityState_Bad" },
		{ "k_ESteamIPv6ConnectivityState_Bad.ToolTip", "We have recently been able to make a request on ipv6 for the given protocol" },
		{ "k_ESteamIPv6ConnectivityState_Good.Comment", "// We haven't run a test yet\n" },
		{ "k_ESteamIPv6ConnectivityState_Good.Name", "ESteamCoreIPv6ConnectivityState::k_ESteamIPv6ConnectivityState_Good" },
		{ "k_ESteamIPv6ConnectivityState_Good.ToolTip", "We haven't run a test yet" },
		{ "k_ESteamIPv6ConnectivityState_Unknown.Name", "ESteamCoreIPv6ConnectivityState::k_ESteamIPv6ConnectivityState_Unknown" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "ToolTip", "For the above transport protocol, what do we think the local machine's connectivity to the internet over ipv6 is like" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreIPv6ConnectivityState::k_ESteamIPv6ConnectivityState_Unknown", (int64)ESteamCoreIPv6ConnectivityState::k_ESteamIPv6ConnectivityState_Unknown },
		{ "ESteamCoreIPv6ConnectivityState::k_ESteamIPv6ConnectivityState_Good", (int64)ESteamCoreIPv6ConnectivityState::k_ESteamIPv6ConnectivityState_Good },
		{ "ESteamCoreIPv6ConnectivityState::k_ESteamIPv6ConnectivityState_Bad", (int64)ESteamCoreIPv6ConnectivityState::k_ESteamIPv6ConnectivityState_Bad },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamCoreIPv6ConnectivityState",
	"ESteamCoreIPv6ConnectivityState",
	Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityState()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreIPv6ConnectivityState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreIPv6ConnectivityState.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamCoreIPv6ConnectivityState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreIPv6ConnectivityState.InnerSingleton;
}
// End Enum ESteamCoreIPv6ConnectivityState

// Begin Enum ESteamFloatingGamepadTextInputMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamFloatingGamepadTextInputMode;
static UEnum* ESteamFloatingGamepadTextInputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamFloatingGamepadTextInputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamFloatingGamepadTextInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamFloatingGamepadTextInputMode, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamFloatingGamepadTextInputMode"));
	}
	return Z_Registration_Info_UEnum_ESteamFloatingGamepadTextInputMode.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamFloatingGamepadTextInputMode>()
{
	return ESteamFloatingGamepadTextInputMode_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamFloatingGamepadTextInputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "k_EFloatingGamepadTextInputModeModeEmail.Comment", "// User needs to explictly close the keyboard\n" },
		{ "k_EFloatingGamepadTextInputModeModeEmail.Name", "ESteamFloatingGamepadTextInputMode::k_EFloatingGamepadTextInputModeModeEmail" },
		{ "k_EFloatingGamepadTextInputModeModeEmail.ToolTip", "User needs to explictly close the keyboard" },
		{ "k_EFloatingGamepadTextInputModeModeMultipleLines.Comment", "// Enter dismisses the keyboard\n" },
		{ "k_EFloatingGamepadTextInputModeModeMultipleLines.Name", "ESteamFloatingGamepadTextInputMode::k_EFloatingGamepadTextInputModeModeMultipleLines" },
		{ "k_EFloatingGamepadTextInputModeModeMultipleLines.ToolTip", "Enter dismisses the keyboard" },
		{ "k_EFloatingGamepadTextInputModeModeNumeric.Comment", "// Keyboard layout is email, enter dismisses the keyboard\n" },
		{ "k_EFloatingGamepadTextInputModeModeNumeric.Name", "ESteamFloatingGamepadTextInputMode::k_EFloatingGamepadTextInputModeModeNumeric" },
		{ "k_EFloatingGamepadTextInputModeModeNumeric.ToolTip", "Keyboard layout is email, enter dismisses the keyboard" },
		{ "k_EFloatingGamepadTextInputModeModeSingleLine.Name", "ESteamFloatingGamepadTextInputMode::k_EFloatingGamepadTextInputModeModeSingleLine" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamFloatingGamepadTextInputMode::k_EFloatingGamepadTextInputModeModeSingleLine", (int64)ESteamFloatingGamepadTextInputMode::k_EFloatingGamepadTextInputModeModeSingleLine },
		{ "ESteamFloatingGamepadTextInputMode::k_EFloatingGamepadTextInputModeModeMultipleLines", (int64)ESteamFloatingGamepadTextInputMode::k_EFloatingGamepadTextInputModeModeMultipleLines },
		{ "ESteamFloatingGamepadTextInputMode::k_EFloatingGamepadTextInputModeModeEmail", (int64)ESteamFloatingGamepadTextInputMode::k_EFloatingGamepadTextInputModeModeEmail },
		{ "ESteamFloatingGamepadTextInputMode::k_EFloatingGamepadTextInputModeModeNumeric", (int64)ESteamFloatingGamepadTextInputMode::k_EFloatingGamepadTextInputModeModeNumeric },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamFloatingGamepadTextInputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamFloatingGamepadTextInputMode",
	"ESteamFloatingGamepadTextInputMode",
	Z_Construct_UEnum_SteamCorePro_ESteamFloatingGamepadTextInputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamFloatingGamepadTextInputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamFloatingGamepadTextInputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamFloatingGamepadTextInputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamFloatingGamepadTextInputMode()
{
	if (!Z_Registration_Info_UEnum_ESteamFloatingGamepadTextInputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamFloatingGamepadTextInputMode.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamFloatingGamepadTextInputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamFloatingGamepadTextInputMode.InnerSingleton;
}
// End Enum ESteamFloatingGamepadTextInputMode

// Begin ScriptStruct FCheckFileSignature
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CheckFileSignature;
class UScriptStruct* FCheckFileSignature::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CheckFileSignature.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CheckFileSignature.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCheckFileSignature, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("CheckFileSignature"));
	}
	return Z_Registration_Info_UScriptStruct_CheckFileSignature.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FCheckFileSignature>()
{
	return FCheckFileSignature::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCheckFileSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckFileSignature_MetaData[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CheckFileSignature_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CheckFileSignature;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCheckFileSignature>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature = { "CheckFileSignature", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckFileSignature, CheckFileSignature), Z_Construct_UEnum_SteamCorePro_ESteamCheckFileSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckFileSignature_MetaData), NewProp_CheckFileSignature_MetaData) }; // 1799324891
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCheckFileSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCheckFileSignature_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"CheckFileSignature",
	Z_Construct_UScriptStruct_FCheckFileSignature_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::PropPointers),
	sizeof(FCheckFileSignature),
	alignof(FCheckFileSignature),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCheckFileSignature_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCheckFileSignature()
{
	if (!Z_Registration_Info_UScriptStruct_CheckFileSignature.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CheckFileSignature.InnerSingleton, Z_Construct_UScriptStruct_FCheckFileSignature_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CheckFileSignature.InnerSingleton;
}
// End ScriptStruct FCheckFileSignature

// Begin ScriptStruct FGamepadTextInputDismissed
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GamepadTextInputDismissed;
class UScriptStruct* FGamepadTextInputDismissed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GamepadTextInputDismissed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GamepadTextInputDismissed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGamepadTextInputDismissed, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("GamepadTextInputDismissed"));
	}
	return Z_Registration_Info_UScriptStruct_GamepadTextInputDismissed.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FGamepadTextInputDismissed>()
{
	return FGamepadTextInputDismissed::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSubmitted_MetaData[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmittedText_MetaData[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSubmitted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubmitted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubmittedText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGamepadTextInputDismissed>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted_SetBit(void* Obj)
{
	((FGamepadTextInputDismissed*)Obj)->bSubmitted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted = { "bSubmitted", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGamepadTextInputDismissed), &Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSubmitted_MetaData), NewProp_bSubmitted_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_SubmittedText = { "SubmittedText", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGamepadTextInputDismissed, SubmittedText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmittedText_MetaData), NewProp_SubmittedText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_SubmittedText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"GamepadTextInputDismissed",
	Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::PropPointers),
	sizeof(FGamepadTextInputDismissed),
	alignof(FGamepadTextInputDismissed),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGamepadTextInputDismissed()
{
	if (!Z_Registration_Info_UScriptStruct_GamepadTextInputDismissed.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GamepadTextInputDismissed.InnerSingleton, Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GamepadTextInputDismissed.InnerSingleton;
}
// End ScriptStruct FGamepadTextInputDismissed

// Begin ScriptStruct FLowBatteryPower
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LowBatteryPower;
class UScriptStruct* FLowBatteryPower::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LowBatteryPower.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LowBatteryPower.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLowBatteryPower, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("LowBatteryPower"));
	}
	return Z_Registration_Info_UScriptStruct_LowBatteryPower.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FLowBatteryPower>()
{
	return FLowBatteryPower::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLowBatteryPower_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinutesBatteryLeft_MetaData[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinutesBatteryLeft;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLowBatteryPower>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewProp_MinutesBatteryLeft = { "MinutesBatteryLeft", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLowBatteryPower, MinutesBatteryLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinutesBatteryLeft_MetaData), NewProp_MinutesBatteryLeft_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLowBatteryPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewProp_MinutesBatteryLeft,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLowBatteryPower_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"LowBatteryPower",
	Z_Construct_UScriptStruct_FLowBatteryPower_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::PropPointers),
	sizeof(FLowBatteryPower),
	alignof(FLowBatteryPower),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLowBatteryPower_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLowBatteryPower()
{
	if (!Z_Registration_Info_UScriptStruct_LowBatteryPower.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LowBatteryPower.InnerSingleton, Z_Construct_UScriptStruct_FLowBatteryPower_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LowBatteryPower.InnerSingleton;
}
// End ScriptStruct FLowBatteryPower

// Begin ScriptStruct FIPCountry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IPCountry;
class UScriptStruct* FIPCountry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IPCountry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IPCountry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIPCountry, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("IPCountry"));
	}
	return Z_Registration_Info_UScriptStruct_IPCountry.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FIPCountry>()
{
	return FIPCountry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIPCountry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIPCountry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIPCountry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"IPCountry",
	nullptr,
	0,
	sizeof(FIPCountry),
	alignof(FIPCountry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIPCountry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIPCountry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIPCountry()
{
	if (!Z_Registration_Info_UScriptStruct_IPCountry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IPCountry.InnerSingleton, Z_Construct_UScriptStruct_FIPCountry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IPCountry.InnerSingleton;
}
// End ScriptStruct FIPCountry

// Begin ScriptStruct FSteamShutdown
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamShutdown;
class UScriptStruct* FSteamShutdown::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamShutdown.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamShutdown.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamShutdown, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamShutdown"));
	}
	return Z_Registration_Info_UScriptStruct_SteamShutdown.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamShutdown>()
{
	return FSteamShutdown::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamShutdown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamShutdown>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamShutdown_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamShutdown",
	nullptr,
	0,
	sizeof(FSteamShutdown),
	alignof(FSteamShutdown),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamShutdown_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamShutdown_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamShutdown()
{
	if (!Z_Registration_Info_UScriptStruct_SteamShutdown.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamShutdown.InnerSingleton, Z_Construct_UScriptStruct_FSteamShutdown_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamShutdown.InnerSingleton;
}
// End ScriptStruct FSteamShutdown

// Begin ScriptStruct FAppResumingFromSuspend
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AppResumingFromSuspend;
class UScriptStruct* FAppResumingFromSuspend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AppResumingFromSuspend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AppResumingFromSuspend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAppResumingFromSuspend, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("AppResumingFromSuspend"));
	}
	return Z_Registration_Info_UScriptStruct_AppResumingFromSuspend.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FAppResumingFromSuspend>()
{
	return FAppResumingFromSuspend::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAppResumingFromSuspend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAppResumingFromSuspend>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAppResumingFromSuspend_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"AppResumingFromSuspend",
	nullptr,
	0,
	sizeof(FAppResumingFromSuspend),
	alignof(FAppResumingFromSuspend),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppResumingFromSuspend_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAppResumingFromSuspend_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAppResumingFromSuspend()
{
	if (!Z_Registration_Info_UScriptStruct_AppResumingFromSuspend.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AppResumingFromSuspend.InnerSingleton, Z_Construct_UScriptStruct_FAppResumingFromSuspend_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AppResumingFromSuspend.InnerSingleton;
}
// End ScriptStruct FAppResumingFromSuspend

// Begin ScriptStruct FFloatingGamepadTextInputDismissed
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatingGamepadTextInputDismissed;
class UScriptStruct* FFloatingGamepadTextInputDismissed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatingGamepadTextInputDismissed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatingGamepadTextInputDismissed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatingGamepadTextInputDismissed, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("FloatingGamepadTextInputDismissed"));
	}
	return Z_Registration_Info_UScriptStruct_FloatingGamepadTextInputDismissed.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FFloatingGamepadTextInputDismissed>()
{
	return FFloatingGamepadTextInputDismissed::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFloatingGamepadTextInputDismissed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatingGamepadTextInputDismissed>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatingGamepadTextInputDismissed_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"FloatingGamepadTextInputDismissed",
	nullptr,
	0,
	sizeof(FFloatingGamepadTextInputDismissed),
	alignof(FFloatingGamepadTextInputDismissed),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingGamepadTextInputDismissed_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloatingGamepadTextInputDismissed_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFloatingGamepadTextInputDismissed()
{
	if (!Z_Registration_Info_UScriptStruct_FloatingGamepadTextInputDismissed.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatingGamepadTextInputDismissed.InnerSingleton, Z_Construct_UScriptStruct_FFloatingGamepadTextInputDismissed_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FloatingGamepadTextInputDismissed.InnerSingleton;
}
// End ScriptStruct FFloatingGamepadTextInputDismissed

// Begin Delegate FOnCheckFileSignature
struct Z_Construct_UDelegateFunction_SteamCorePro_OnCheckFileSignature__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnCheckFileSignature_Parms
	{
		FCheckFileSignature Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnCheckFileSignature__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnCheckFileSignature_Parms, Data), Z_Construct_UScriptStruct_FCheckFileSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1216035736
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnCheckFileSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnCheckFileSignature__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnCheckFileSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnCheckFileSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnCheckFileSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnCheckFileSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnCheckFileSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnCheckFileSignature__DelegateSignature_Statics::_Script_SteamCorePro_eventOnCheckFileSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnCheckFileSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnCheckFileSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnCheckFileSignature__DelegateSignature_Statics::_Script_SteamCorePro_eventOnCheckFileSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnCheckFileSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnCheckFileSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCheckFileSignature_DelegateWrapper(const FMulticastScriptDelegate& OnCheckFileSignature, FCheckFileSignature const& Data)
{
	struct _Script_SteamCorePro_eventOnCheckFileSignature_Parms
	{
		FCheckFileSignature Data;
	};
	_Script_SteamCorePro_eventOnCheckFileSignature_Parms Parms;
	Parms.Data=Data;
	OnCheckFileSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCheckFileSignature

// Begin Delegate FOnGamepadTextInputDismissed
struct Z_Construct_UDelegateFunction_SteamCorePro_OnGamepadTextInputDismissed__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnGamepadTextInputDismissed_Parms
	{
		FGamepadTextInputDismissed Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnGamepadTextInputDismissed_Parms, Data), Z_Construct_UScriptStruct_FGamepadTextInputDismissed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1886588783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnGamepadTextInputDismissed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnGamepadTextInputDismissed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnGamepadTextInputDismissed__DelegateSignature_Statics::_Script_SteamCorePro_eventOnGamepadTextInputDismissed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnGamepadTextInputDismissed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnGamepadTextInputDismissed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnGamepadTextInputDismissed__DelegateSignature_Statics::_Script_SteamCorePro_eventOnGamepadTextInputDismissed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGamepadTextInputDismissed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnGamepadTextInputDismissed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGamepadTextInputDismissed_DelegateWrapper(const FMulticastScriptDelegate& OnGamepadTextInputDismissed, FGamepadTextInputDismissed const& Data)
{
	struct _Script_SteamCorePro_eventOnGamepadTextInputDismissed_Parms
	{
		FGamepadTextInputDismissed Data;
	};
	_Script_SteamCorePro_eventOnGamepadTextInputDismissed_Parms Parms;
	Parms.Data=Data;
	OnGamepadTextInputDismissed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGamepadTextInputDismissed

// Begin Delegate FOnIPCountry
struct Z_Construct_UDelegateFunction_SteamCorePro_OnIPCountry__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnIPCountry_Parms
	{
		FIPCountry Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnIPCountry__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnIPCountry_Parms, Data), Z_Construct_UScriptStruct_FIPCountry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1794313244
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnIPCountry__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnIPCountry__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnIPCountry__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnIPCountry__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnIPCountry__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnIPCountry__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnIPCountry__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnIPCountry__DelegateSignature_Statics::_Script_SteamCorePro_eventOnIPCountry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnIPCountry__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnIPCountry__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnIPCountry__DelegateSignature_Statics::_Script_SteamCorePro_eventOnIPCountry_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnIPCountry__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnIPCountry__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnIPCountry_DelegateWrapper(const FMulticastScriptDelegate& OnIPCountry, FIPCountry const& Data)
{
	struct _Script_SteamCorePro_eventOnIPCountry_Parms
	{
		FIPCountry Data;
	};
	_Script_SteamCorePro_eventOnIPCountry_Parms Parms;
	Parms.Data=Data;
	OnIPCountry.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnIPCountry

// Begin Delegate FOnLowBatteryPower
struct Z_Construct_UDelegateFunction_SteamCorePro_OnLowBatteryPower__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnLowBatteryPower_Parms
	{
		FLowBatteryPower Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnLowBatteryPower__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnLowBatteryPower_Parms, Data), Z_Construct_UScriptStruct_FLowBatteryPower, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 146389872
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnLowBatteryPower__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnLowBatteryPower__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLowBatteryPower__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnLowBatteryPower__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnLowBatteryPower__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnLowBatteryPower__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLowBatteryPower__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnLowBatteryPower__DelegateSignature_Statics::_Script_SteamCorePro_eventOnLowBatteryPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLowBatteryPower__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnLowBatteryPower__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnLowBatteryPower__DelegateSignature_Statics::_Script_SteamCorePro_eventOnLowBatteryPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLowBatteryPower__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnLowBatteryPower__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLowBatteryPower_DelegateWrapper(const FMulticastScriptDelegate& OnLowBatteryPower, FLowBatteryPower const& Data)
{
	struct _Script_SteamCorePro_eventOnLowBatteryPower_Parms
	{
		FLowBatteryPower Data;
	};
	_Script_SteamCorePro_eventOnLowBatteryPower_Parms Parms;
	Parms.Data=Data;
	OnLowBatteryPower.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLowBatteryPower

// Begin Delegate FOnSteamShutdown
struct Z_Construct_UDelegateFunction_SteamCorePro_OnSteamShutdown__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnSteamShutdown_Parms
	{
		FSteamShutdown Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamShutdown__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSteamShutdown_Parms, Data), Z_Construct_UScriptStruct_FSteamShutdown, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 24721028
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnSteamShutdown__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamShutdown__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamShutdown__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamShutdown__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnSteamShutdown__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamShutdown__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamShutdown__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamShutdown__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamShutdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamShutdown__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamShutdown__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamShutdown__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamShutdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamShutdown__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamShutdown__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamShutdown_DelegateWrapper(const FMulticastScriptDelegate& OnSteamShutdown, FSteamShutdown const& Data)
{
	struct _Script_SteamCorePro_eventOnSteamShutdown_Parms
	{
		FSteamShutdown Data;
	};
	_Script_SteamCorePro_eventOnSteamShutdown_Parms Parms;
	Parms.Data=Data;
	OnSteamShutdown.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSteamShutdown

// Begin Delegate FOnAppResumingFromSuspend
struct Z_Construct_UDelegateFunction_SteamCorePro_OnAppResumingFromSuspend__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnAppResumingFromSuspend_Parms
	{
		FAppResumingFromSuspend Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnAppResumingFromSuspend__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnAppResumingFromSuspend_Parms, Data), Z_Construct_UScriptStruct_FAppResumingFromSuspend, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2277645134
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnAppResumingFromSuspend__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnAppResumingFromSuspend__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnAppResumingFromSuspend__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnAppResumingFromSuspend__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnAppResumingFromSuspend__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnAppResumingFromSuspend__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnAppResumingFromSuspend__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnAppResumingFromSuspend__DelegateSignature_Statics::_Script_SteamCorePro_eventOnAppResumingFromSuspend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnAppResumingFromSuspend__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnAppResumingFromSuspend__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnAppResumingFromSuspend__DelegateSignature_Statics::_Script_SteamCorePro_eventOnAppResumingFromSuspend_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnAppResumingFromSuspend__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnAppResumingFromSuspend__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAppResumingFromSuspend_DelegateWrapper(const FMulticastScriptDelegate& OnAppResumingFromSuspend, FAppResumingFromSuspend const& Data)
{
	struct _Script_SteamCorePro_eventOnAppResumingFromSuspend_Parms
	{
		FAppResumingFromSuspend Data;
	};
	_Script_SteamCorePro_eventOnAppResumingFromSuspend_Parms Parms;
	Parms.Data=Data;
	OnAppResumingFromSuspend.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAppResumingFromSuspend

// Begin Delegate FOnFloatingGamepadTextInputDismissed
struct Z_Construct_UDelegateFunction_SteamCorePro_OnFloatingGamepadTextInputDismissed__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnFloatingGamepadTextInputDismissed_Parms
	{
		FFloatingGamepadTextInputDismissed Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtilsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFloatingGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnFloatingGamepadTextInputDismissed_Parms, Data), Z_Construct_UScriptStruct_FFloatingGamepadTextInputDismissed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1274109899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnFloatingGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFloatingGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFloatingGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnFloatingGamepadTextInputDismissed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnFloatingGamepadTextInputDismissed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnFloatingGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFloatingGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFloatingGamepadTextInputDismissed__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFloatingGamepadTextInputDismissed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFloatingGamepadTextInputDismissed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnFloatingGamepadTextInputDismissed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFloatingGamepadTextInputDismissed__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFloatingGamepadTextInputDismissed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFloatingGamepadTextInputDismissed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnFloatingGamepadTextInputDismissed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFloatingGamepadTextInputDismissed_DelegateWrapper(const FMulticastScriptDelegate& OnFloatingGamepadTextInputDismissed, FFloatingGamepadTextInputDismissed const& Data)
{
	struct _Script_SteamCorePro_eventOnFloatingGamepadTextInputDismissed_Parms
	{
		FFloatingGamepadTextInputDismissed Data;
	};
	_Script_SteamCorePro_eventOnFloatingGamepadTextInputDismissed_Parms Parms;
	Parms.Data=Data;
	OnFloatingGamepadTextInputDismissed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFloatingGamepadTextInputDismissed

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUtils_SteamUtilsTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamTextFilteringContext_StaticEnum, TEXT("ESteamTextFilteringContext"), &Z_Registration_Info_UEnum_ESteamTextFilteringContext, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3695255668U) },
		{ ESteamCheckFileSignature_StaticEnum, TEXT("ESteamCheckFileSignature"), &Z_Registration_Info_UEnum_ESteamCheckFileSignature, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1799324891U) },
		{ ESteamGamepadTextInputLineMode_StaticEnum, TEXT("ESteamGamepadTextInputLineMode"), &Z_Registration_Info_UEnum_ESteamGamepadTextInputLineMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3245702206U) },
		{ ESteamGamepadTextInputMode_StaticEnum, TEXT("ESteamGamepadTextInputMode"), &Z_Registration_Info_UEnum_ESteamGamepadTextInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3616212952U) },
		{ ESteamNotificationPosition_StaticEnum, TEXT("ESteamNotificationPosition"), &Z_Registration_Info_UEnum_ESteamNotificationPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3240337511U) },
		{ ESteamUniverse_StaticEnum, TEXT("ESteamUniverse"), &Z_Registration_Info_UEnum_ESteamUniverse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3638976026U) },
		{ EGameSearchErrorCode_StaticEnum, TEXT("EGameSearchErrorCode"), &Z_Registration_Info_UEnum_EGameSearchErrorCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2135726866U) },
		{ EPlayerResult_StaticEnum, TEXT("EPlayerResult"), &Z_Registration_Info_UEnum_EPlayerResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1356490148U) },
		{ ESteamCoreIPv6ConnectivityProtocol_StaticEnum, TEXT("ESteamCoreIPv6ConnectivityProtocol"), &Z_Registration_Info_UEnum_ESteamCoreIPv6ConnectivityProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 825146868U) },
		{ ESteamCoreIPv6ConnectivityState_StaticEnum, TEXT("ESteamCoreIPv6ConnectivityState"), &Z_Registration_Info_UEnum_ESteamCoreIPv6ConnectivityState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1582326631U) },
		{ ESteamFloatingGamepadTextInputMode_StaticEnum, TEXT("ESteamFloatingGamepadTextInputMode"), &Z_Registration_Info_UEnum_ESteamFloatingGamepadTextInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3510966607U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCheckFileSignature::StaticStruct, Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewStructOps, TEXT("CheckFileSignature"), &Z_Registration_Info_UScriptStruct_CheckFileSignature, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCheckFileSignature), 1216035736U) },
		{ FGamepadTextInputDismissed::StaticStruct, Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewStructOps, TEXT("GamepadTextInputDismissed"), &Z_Registration_Info_UScriptStruct_GamepadTextInputDismissed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGamepadTextInputDismissed), 1886588783U) },
		{ FLowBatteryPower::StaticStruct, Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewStructOps, TEXT("LowBatteryPower"), &Z_Registration_Info_UScriptStruct_LowBatteryPower, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLowBatteryPower), 146389872U) },
		{ FIPCountry::StaticStruct, Z_Construct_UScriptStruct_FIPCountry_Statics::NewStructOps, TEXT("IPCountry"), &Z_Registration_Info_UScriptStruct_IPCountry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIPCountry), 1794313244U) },
		{ FSteamShutdown::StaticStruct, Z_Construct_UScriptStruct_FSteamShutdown_Statics::NewStructOps, TEXT("SteamShutdown"), &Z_Registration_Info_UScriptStruct_SteamShutdown, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamShutdown), 24721028U) },
		{ FAppResumingFromSuspend::StaticStruct, Z_Construct_UScriptStruct_FAppResumingFromSuspend_Statics::NewStructOps, TEXT("AppResumingFromSuspend"), &Z_Registration_Info_UScriptStruct_AppResumingFromSuspend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAppResumingFromSuspend), 2277645134U) },
		{ FFloatingGamepadTextInputDismissed::StaticStruct, Z_Construct_UScriptStruct_FFloatingGamepadTextInputDismissed_Statics::NewStructOps, TEXT("FloatingGamepadTextInputDismissed"), &Z_Registration_Info_UScriptStruct_FloatingGamepadTextInputDismissed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatingGamepadTextInputDismissed), 1274109899U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUtils_SteamUtilsTypes_h_2149667442(TEXT("/Script/SteamCorePro"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUtils_SteamUtilsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUtils_SteamUtilsTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUtils_SteamUtilsTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUtils_SteamUtilsTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
