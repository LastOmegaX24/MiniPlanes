// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamParentalSettings/SteamParentalSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamParentalSettings() {}

// Begin Cross Module References
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProParentalSettings();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProParentalSettings_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamParentalFeature();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProParentalSettings Function BIsAppBlocked
struct Z_Construct_UFunction_USteamProParentalSettings_BIsAppBlocked_Statics
{
	struct SteamProParentalSettings_eventBIsAppBlocked_Parms
	{
		int32 AppID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|ParentalSettings" },
		{ "Comment", "/**\n\x09* Is app blocked\n\x09*\n\x09* @param\x09""AppID\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
		{ "ToolTip", "Is app blocked\n\n@param        AppID" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProParentalSettings_BIsAppBlocked_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParentalSettings_eventBIsAppBlocked_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProParentalSettings_BIsAppBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProParentalSettings_eventBIsAppBlocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProParentalSettings_BIsAppBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProParentalSettings_eventBIsAppBlocked_Parms), &Z_Construct_UFunction_USteamProParentalSettings_BIsAppBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParentalSettings_BIsAppBlocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParentalSettings_BIsAppBlocked_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParentalSettings_BIsAppBlocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_BIsAppBlocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParentalSettings_BIsAppBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParentalSettings, nullptr, "BIsAppBlocked", nullptr, nullptr, Z_Construct_UFunction_USteamProParentalSettings_BIsAppBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_BIsAppBlocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParentalSettings_BIsAppBlocked_Statics::SteamProParentalSettings_eventBIsAppBlocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_BIsAppBlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParentalSettings_BIsAppBlocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParentalSettings_BIsAppBlocked_Statics::SteamProParentalSettings_eventBIsAppBlocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParentalSettings_BIsAppBlocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParentalSettings_BIsAppBlocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParentalSettings::execBIsAppBlocked)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsAppBlocked(Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USteamProParentalSettings Function BIsAppBlocked

// Begin Class USteamProParentalSettings Function BIsAppInBlockList
struct Z_Construct_UFunction_USteamProParentalSettings_BIsAppInBlockList_Statics
{
	struct SteamProParentalSettings_eventBIsAppInBlockList_Parms
	{
		int32 AppID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|ParentalSettings" },
		{ "Comment", "/**\n\x09* Is app blocked\n\x09*\n\x09* @param\x09""AppID\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
		{ "ToolTip", "Is app blocked\n\n@param        AppID" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProParentalSettings_BIsAppInBlockList_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParentalSettings_eventBIsAppInBlockList_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProParentalSettings_BIsAppInBlockList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProParentalSettings_eventBIsAppInBlockList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProParentalSettings_BIsAppInBlockList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProParentalSettings_eventBIsAppInBlockList_Parms), &Z_Construct_UFunction_USteamProParentalSettings_BIsAppInBlockList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParentalSettings_BIsAppInBlockList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParentalSettings_BIsAppInBlockList_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParentalSettings_BIsAppInBlockList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_BIsAppInBlockList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParentalSettings_BIsAppInBlockList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParentalSettings, nullptr, "BIsAppInBlockList", nullptr, nullptr, Z_Construct_UFunction_USteamProParentalSettings_BIsAppInBlockList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_BIsAppInBlockList_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParentalSettings_BIsAppInBlockList_Statics::SteamProParentalSettings_eventBIsAppInBlockList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_BIsAppInBlockList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParentalSettings_BIsAppInBlockList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParentalSettings_BIsAppInBlockList_Statics::SteamProParentalSettings_eventBIsAppInBlockList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParentalSettings_BIsAppInBlockList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParentalSettings_BIsAppInBlockList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParentalSettings::execBIsAppInBlockList)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsAppInBlockList(Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USteamProParentalSettings Function BIsAppInBlockList

// Begin Class USteamProParentalSettings Function BIsFeatureBlocked
struct Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked_Statics
{
	struct SteamProParentalSettings_eventBIsFeatureBlocked_Parms
	{
		ESteamParentalFeature Feature;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|ParentalSettings" },
		{ "Comment", "/**\n\x09* Is feature blocked\n\x09*\n\x09* @param\x09""Feature\x09\x09""feature\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
		{ "ToolTip", "Is feature blocked\n\n@param        Feature         feature" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Feature_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Feature;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked_Statics::NewProp_Feature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked_Statics::NewProp_Feature = { "Feature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParentalSettings_eventBIsFeatureBlocked_Parms, Feature), Z_Construct_UEnum_SteamCorePro_ESteamParentalFeature, METADATA_PARAMS(0, nullptr) }; // 2715660404
void Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProParentalSettings_eventBIsFeatureBlocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProParentalSettings_eventBIsFeatureBlocked_Parms), &Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked_Statics::NewProp_Feature_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked_Statics::NewProp_Feature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParentalSettings, nullptr, "BIsFeatureBlocked", nullptr, nullptr, Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked_Statics::SteamProParentalSettings_eventBIsFeatureBlocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked_Statics::SteamProParentalSettings_eventBIsFeatureBlocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParentalSettings::execBIsFeatureBlocked)
{
	P_GET_ENUM(ESteamParentalFeature,Z_Param_Feature);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsFeatureBlocked(ESteamParentalFeature(Z_Param_Feature));
	P_NATIVE_END;
}
// End Class USteamProParentalSettings Function BIsFeatureBlocked

// Begin Class USteamProParentalSettings Function BIsFeatureInBlockList
struct Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList_Statics
{
	struct SteamProParentalSettings_eventBIsFeatureInBlockList_Parms
	{
		ESteamParentalFeature Feature;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|ParentalSettings" },
		{ "Comment", "/**\n\x09* Is feature blocked\n\x09*\n\x09* @param\x09""Feature\x09\x09""feature\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
		{ "ToolTip", "Is feature blocked\n\n@param        Feature         feature" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Feature_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Feature;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList_Statics::NewProp_Feature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList_Statics::NewProp_Feature = { "Feature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParentalSettings_eventBIsFeatureInBlockList_Parms, Feature), Z_Construct_UEnum_SteamCorePro_ESteamParentalFeature, METADATA_PARAMS(0, nullptr) }; // 2715660404
void Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProParentalSettings_eventBIsFeatureInBlockList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProParentalSettings_eventBIsFeatureInBlockList_Parms), &Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList_Statics::NewProp_Feature_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList_Statics::NewProp_Feature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParentalSettings, nullptr, "BIsFeatureInBlockList", nullptr, nullptr, Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList_Statics::SteamProParentalSettings_eventBIsFeatureInBlockList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList_Statics::SteamProParentalSettings_eventBIsFeatureInBlockList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParentalSettings::execBIsFeatureInBlockList)
{
	P_GET_ENUM(ESteamParentalFeature,Z_Param_Feature);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsFeatureInBlockList(ESteamParentalFeature(Z_Param_Feature));
	P_NATIVE_END;
}
// End Class USteamProParentalSettings Function BIsFeatureInBlockList

// Begin Class USteamProParentalSettings Function BIsParentalLockEnabled
struct Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockEnabled_Statics
{
	struct SteamProParentalSettings_eventBIsParentalLockEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|ParentalSettings" },
		{ "Comment", "/**\n\x09* Is parental lock enabled\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
		{ "ToolTip", "Is parental lock enabled" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProParentalSettings_eventBIsParentalLockEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProParentalSettings_eventBIsParentalLockEnabled_Parms), &Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParentalSettings, nullptr, "BIsParentalLockEnabled", nullptr, nullptr, Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockEnabled_Statics::SteamProParentalSettings_eventBIsParentalLockEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockEnabled_Statics::SteamProParentalSettings_eventBIsParentalLockEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParentalSettings::execBIsParentalLockEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsParentalLockEnabled();
	P_NATIVE_END;
}
// End Class USteamProParentalSettings Function BIsParentalLockEnabled

// Begin Class USteamProParentalSettings Function BIsParentalLockLocked
struct Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockLocked_Statics
{
	struct SteamProParentalSettings_eventBIsParentalLockLocked_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|ParentalSettings" },
		{ "Comment", "/**\n\x09* Is parental lock locked\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
		{ "ToolTip", "Is parental lock locked" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProParentalSettings_eventBIsParentalLockLocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProParentalSettings_eventBIsParentalLockLocked_Parms), &Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockLocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParentalSettings, nullptr, "BIsParentalLockLocked", nullptr, nullptr, Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockLocked_Statics::SteamProParentalSettings_eventBIsParentalLockLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockLocked_Statics::SteamProParentalSettings_eventBIsParentalLockLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParentalSettings::execBIsParentalLockLocked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsParentalLockLocked();
	P_NATIVE_END;
}
// End Class USteamProParentalSettings Function BIsParentalLockLocked

// Begin Class USteamProParentalSettings Function GetSteamParentalSettings
struct Z_Construct_UFunction_USteamProParentalSettings_GetSteamParentalSettings_Statics
{
	struct SteamProParentalSettings_eventGetSteamParentalSettings_Parms
	{
		USteamProParentalSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProParentalSettings_GetSteamParentalSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParentalSettings_eventGetSteamParentalSettings_Parms, ReturnValue), Z_Construct_UClass_USteamProParentalSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParentalSettings_GetSteamParentalSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParentalSettings_GetSteamParentalSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_GetSteamParentalSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParentalSettings_GetSteamParentalSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParentalSettings, nullptr, "GetSteamParentalSettings", nullptr, nullptr, Z_Construct_UFunction_USteamProParentalSettings_GetSteamParentalSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_GetSteamParentalSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParentalSettings_GetSteamParentalSettings_Statics::SteamProParentalSettings_eventGetSteamParentalSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParentalSettings_GetSteamParentalSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParentalSettings_GetSteamParentalSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParentalSettings_GetSteamParentalSettings_Statics::SteamProParentalSettings_eventGetSteamParentalSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParentalSettings_GetSteamParentalSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParentalSettings_GetSteamParentalSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParentalSettings::execGetSteamParentalSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProParentalSettings**)Z_Param__Result=USteamProParentalSettings::GetSteamParentalSettings();
	P_NATIVE_END;
}
// End Class USteamProParentalSettings Function GetSteamParentalSettings

// Begin Class USteamProParentalSettings
void USteamProParentalSettings::StaticRegisterNativesUSteamProParentalSettings()
{
	UClass* Class = USteamProParentalSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BIsAppBlocked", &USteamProParentalSettings::execBIsAppBlocked },
		{ "BIsAppInBlockList", &USteamProParentalSettings::execBIsAppInBlockList },
		{ "BIsFeatureBlocked", &USteamProParentalSettings::execBIsFeatureBlocked },
		{ "BIsFeatureInBlockList", &USteamProParentalSettings::execBIsFeatureInBlockList },
		{ "BIsParentalLockEnabled", &USteamProParentalSettings::execBIsParentalLockEnabled },
		{ "BIsParentalLockLocked", &USteamProParentalSettings::execBIsParentalLockLocked },
		{ "GetSteamParentalSettings", &USteamProParentalSettings::execGetSteamParentalSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProParentalSettings);
UClass* Z_Construct_UClass_USteamProParentalSettings_NoRegister()
{
	return USteamProParentalSettings::StaticClass();
}
struct Z_Construct_UClass_USteamProParentalSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamParentalSettings/SteamParentalSettings.h" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProParentalSettings_BIsAppBlocked, "BIsAppBlocked" }, // 968006554
		{ &Z_Construct_UFunction_USteamProParentalSettings_BIsAppInBlockList, "BIsAppInBlockList" }, // 1505714595
		{ &Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureBlocked, "BIsFeatureBlocked" }, // 2473675867
		{ &Z_Construct_UFunction_USteamProParentalSettings_BIsFeatureInBlockList, "BIsFeatureInBlockList" }, // 1979466464
		{ &Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockEnabled, "BIsParentalLockEnabled" }, // 767473481
		{ &Z_Construct_UFunction_USteamProParentalSettings_BIsParentalLockLocked, "BIsParentalLockLocked" }, // 4077323156
		{ &Z_Construct_UFunction_USteamProParentalSettings_GetSteamParentalSettings, "GetSteamParentalSettings" }, // 837217984
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProParentalSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamProParentalSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProParentalSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProParentalSettings_Statics::ClassParams = {
	&USteamProParentalSettings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProParentalSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProParentalSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProParentalSettings()
{
	if (!Z_Registration_Info_UClass_USteamProParentalSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProParentalSettings.OuterSingleton, Z_Construct_UClass_USteamProParentalSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProParentalSettings.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProParentalSettings>()
{
	return USteamProParentalSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProParentalSettings);
// End Class USteamProParentalSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProParentalSettings, USteamProParentalSettings::StaticClass, TEXT("USteamProParentalSettings"), &Z_Registration_Info_UClass_USteamProParentalSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProParentalSettings), 839583451U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettings_h_1432621371(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
