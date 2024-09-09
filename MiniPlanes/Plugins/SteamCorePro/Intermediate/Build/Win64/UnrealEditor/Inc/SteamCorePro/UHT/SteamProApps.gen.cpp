// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamApps/SteamProApps.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamProApps() {}

// Begin Cross Module References
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProApps();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProApps_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamBetaBranchFlags();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnDLCInstalled__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnNewUrlLaunchParametersDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnTimedTrialStatusDelegate__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProApps Function BGetDLCDataByIndex
struct Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics
{
	struct SteamProApps_eventBGetDLCDataByIndex_Parms
	{
		int32 DLC;
		int32 AppID;
		bool bAvailable;
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Returns metadata for a DLC by index.\n\x09*\n\x09* @param\x09""DLC\x09\x09\x09\x09\x09index of the DLC to get between 0 and GetDLCCount.\n\x09* @param\x09""AppID\x09\x09\x09\x09Returns the App ID of the DLC.\n\x09* @param\x09""bAvailable\x09\x09\x09Returns whether the DLC is currently available.\n\x09* @param\x09Name\x09\x09\x09\x09Returns the name of the DLC by copying it into this buffer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Returns metadata for a DLC by index.\n\n@param        DLC                                     index of the DLC to get between 0 and GetDLCCount.\n@param        AppID                           Returns the App ID of the DLC.\n@param        bAvailable                      Returns whether the DLC is currently available.\n@param        Name                            Returns the name of the DLC by copying it into this buffer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DLC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_bAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvailable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::NewProp_DLC = { "DLC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventBGetDLCDataByIndex_Parms, DLC), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventBGetDLCDataByIndex_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable_SetBit(void* Obj)
{
	((SteamProApps_eventBGetDLCDataByIndex_Parms*)Obj)->bAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable = { "bAvailable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProApps_eventBGetDLCDataByIndex_Parms), &Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventBGetDLCDataByIndex_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProApps_eventBGetDLCDataByIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProApps_eventBGetDLCDataByIndex_Parms), &Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::NewProp_DLC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "BGetDLCDataByIndex", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::SteamProApps_eventBGetDLCDataByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::SteamProApps_eventBGetDLCDataByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execBGetDLCDataByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DLC);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppID);
	P_GET_UBOOL_REF(Z_Param_Out_bAvailable);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProApps::BGetDLCDataByIndex(Z_Param_DLC,Z_Param_Out_AppID,Z_Param_Out_bAvailable,Z_Param_Out_Name);
	P_NATIVE_END;
}
// End Class USteamProApps Function BGetDLCDataByIndex

// Begin Class USteamProApps Function BIsAppInstalled
struct Z_Construct_UFunction_USteamProApps_BIsAppInstalled_Statics
{
	struct SteamProApps_eventBIsAppInstalled_Parms
	{
		int32 AppID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if a specific app is installed.\n\x09*\n\x09* The app may not actually be owned by the current user, they may have it left over from a free weekend, etc.\n\x09* This only works for base applications, not Downloadable Content (DLC). Use BIsDlcInstalled for DLC instead.\n\x09*\n\x09* @param\x09""AppID\x09The App ID of the application to check.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Checks if a specific app is installed.\n\nThe app may not actually be owned by the current user, they may have it left over from a free weekend, etc.\nThis only works for base applications, not Downloadable Content (DLC). Use BIsDlcInstalled for DLC instead.\n\n@param        AppID   The App ID of the application to check." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_BIsAppInstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventBIsAppInstalled_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProApps_BIsAppInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProApps_eventBIsAppInstalled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProApps_BIsAppInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProApps_eventBIsAppInstalled_Parms), &Z_Construct_UFunction_USteamProApps_BIsAppInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_BIsAppInstalled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BIsAppInstalled_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BIsAppInstalled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsAppInstalled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_BIsAppInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "BIsAppInstalled", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_BIsAppInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsAppInstalled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_BIsAppInstalled_Statics::SteamProApps_eventBIsAppInstalled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsAppInstalled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_BIsAppInstalled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_BIsAppInstalled_Statics::SteamProApps_eventBIsAppInstalled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_BIsAppInstalled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_BIsAppInstalled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execBIsAppInstalled)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProApps::BIsAppInstalled(Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USteamProApps Function BIsAppInstalled

// Begin Class USteamProApps Function BIsCybercafe
struct Z_Construct_UFunction_USteamProApps_BIsCybercafe_Statics
{
	struct SteamProApps_eventBIsCybercafe_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks whether the current App ID is for Cyber Cafes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Checks whether the current App ID is for Cyber Cafes." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProApps_BIsCybercafe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProApps_eventBIsCybercafe_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProApps_BIsCybercafe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProApps_eventBIsCybercafe_Parms), &Z_Construct_UFunction_USteamProApps_BIsCybercafe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_BIsCybercafe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BIsCybercafe_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsCybercafe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_BIsCybercafe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "BIsCybercafe", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_BIsCybercafe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsCybercafe_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_BIsCybercafe_Statics::SteamProApps_eventBIsCybercafe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsCybercafe_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_BIsCybercafe_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_BIsCybercafe_Statics::SteamProApps_eventBIsCybercafe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_BIsCybercafe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_BIsCybercafe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execBIsCybercafe)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProApps::BIsCybercafe();
	P_NATIVE_END;
}
// End Class USteamProApps Function BIsCybercafe

// Begin Class USteamProApps Function BIsDlcInstalled
struct Z_Construct_UFunction_USteamProApps_BIsDlcInstalled_Statics
{
	struct SteamProApps_eventBIsDlcInstalled_Parms
	{
		int32 AppID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the user owns a specific DLC and if the DLC is installed\n\x09*\n\x09* @param\x09""AppID\x09The App ID of the DLC to check.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Checks if the user owns a specific DLC and if the DLC is installed\n\n@param        AppID   The App ID of the DLC to check." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_BIsDlcInstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventBIsDlcInstalled_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProApps_BIsDlcInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProApps_eventBIsDlcInstalled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProApps_BIsDlcInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProApps_eventBIsDlcInstalled_Parms), &Z_Construct_UFunction_USteamProApps_BIsDlcInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_BIsDlcInstalled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BIsDlcInstalled_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BIsDlcInstalled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsDlcInstalled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_BIsDlcInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "BIsDlcInstalled", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_BIsDlcInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsDlcInstalled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_BIsDlcInstalled_Statics::SteamProApps_eventBIsDlcInstalled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsDlcInstalled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_BIsDlcInstalled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_BIsDlcInstalled_Statics::SteamProApps_eventBIsDlcInstalled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_BIsDlcInstalled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_BIsDlcInstalled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execBIsDlcInstalled)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProApps::BIsDlcInstalled(Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USteamProApps Function BIsDlcInstalled

// Begin Class USteamProApps Function BIsLowViolence
struct Z_Construct_UFunction_USteamProApps_BIsLowViolence_Statics
{
	struct SteamProApps_eventBIsLowViolence_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the license owned by the user provides low violence depots.\n\x09*\n\x09* Low violence depots are useful for copies sold in countries that have content restrictions.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Checks if the license owned by the user provides low violence depots.\n\nLow violence depots are useful for copies sold in countries that have content restrictions." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProApps_BIsLowViolence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProApps_eventBIsLowViolence_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProApps_BIsLowViolence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProApps_eventBIsLowViolence_Parms), &Z_Construct_UFunction_USteamProApps_BIsLowViolence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_BIsLowViolence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BIsLowViolence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsLowViolence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_BIsLowViolence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "BIsLowViolence", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_BIsLowViolence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsLowViolence_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_BIsLowViolence_Statics::SteamProApps_eventBIsLowViolence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsLowViolence_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_BIsLowViolence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_BIsLowViolence_Statics::SteamProApps_eventBIsLowViolence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_BIsLowViolence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_BIsLowViolence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execBIsLowViolence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProApps::BIsLowViolence();
	P_NATIVE_END;
}
// End Class USteamProApps Function BIsLowViolence

// Begin Class USteamProApps Function BIsSubscribed
struct Z_Construct_UFunction_USteamProApps_BIsSubscribed_Statics
{
	struct SteamProApps_eventBIsSubscribed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the active user is subscribed to the current App ID.\n\x09*\n\x09* This will always return true if you're using Steam DRM or calling SteamAPI_RestartAppIfNecessary.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Checks if the active user is subscribed to the current App ID.\n\nThis will always return true if you're using Steam DRM or calling SteamAPI_RestartAppIfNecessary." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProApps_BIsSubscribed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProApps_eventBIsSubscribed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProApps_BIsSubscribed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProApps_eventBIsSubscribed_Parms), &Z_Construct_UFunction_USteamProApps_BIsSubscribed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_BIsSubscribed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BIsSubscribed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsSubscribed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_BIsSubscribed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "BIsSubscribed", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_BIsSubscribed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsSubscribed_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_BIsSubscribed_Statics::SteamProApps_eventBIsSubscribed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsSubscribed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_BIsSubscribed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_BIsSubscribed_Statics::SteamProApps_eventBIsSubscribed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_BIsSubscribed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_BIsSubscribed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execBIsSubscribed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProApps::BIsSubscribed();
	P_NATIVE_END;
}
// End Class USteamProApps Function BIsSubscribed

// Begin Class USteamProApps Function BIsSubscribedApp
struct Z_Construct_UFunction_USteamProApps_BIsSubscribedApp_Statics
{
	struct SteamProApps_eventBIsSubscribedApp_Parms
	{
		int32 AppID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the active user is subscribed to a specified AppId.\n\x09*\n\x09* Only use this if you need to check ownership of another game related to yours, a demo for example.\n\x09*\n\x09* @param\x09""AppID\x09The App ID to check.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Checks if the active user is subscribed to a specified AppId.\n\nOnly use this if you need to check ownership of another game related to yours, a demo for example.\n\n@param        AppID   The App ID to check." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_BIsSubscribedApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventBIsSubscribedApp_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProApps_BIsSubscribedApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProApps_eventBIsSubscribedApp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProApps_BIsSubscribedApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProApps_eventBIsSubscribedApp_Parms), &Z_Construct_UFunction_USteamProApps_BIsSubscribedApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_BIsSubscribedApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BIsSubscribedApp_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BIsSubscribedApp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsSubscribedApp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_BIsSubscribedApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "BIsSubscribedApp", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_BIsSubscribedApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsSubscribedApp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_BIsSubscribedApp_Statics::SteamProApps_eventBIsSubscribedApp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsSubscribedApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_BIsSubscribedApp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_BIsSubscribedApp_Statics::SteamProApps_eventBIsSubscribedApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_BIsSubscribedApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_BIsSubscribedApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execBIsSubscribedApp)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProApps::BIsSubscribedApp(Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USteamProApps Function BIsSubscribedApp

// Begin Class USteamProApps Function BIsSubscribedFromFamilySharing
struct Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFamilySharing_Statics
{
	struct SteamProApps_eventBIsSubscribedFromFamilySharing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the active user is accessing the current appID via a temporary Family Shared license owned by another user.\n\x09*\n\x09* If you need to determine the steamID of the permanent owner of the license, use GetAppOwner.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Checks if the active user is accessing the current appID via a temporary Family Shared license owned by another user.\n\nIf you need to determine the steamID of the permanent owner of the license, use GetAppOwner." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProApps_eventBIsSubscribedFromFamilySharing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProApps_eventBIsSubscribedFromFamilySharing_Parms), &Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFamilySharing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFamilySharing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFamilySharing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "BIsSubscribedFromFamilySharing", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFamilySharing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFamilySharing_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFamilySharing_Statics::SteamProApps_eventBIsSubscribedFromFamilySharing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFamilySharing_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFamilySharing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFamilySharing_Statics::SteamProApps_eventBIsSubscribedFromFamilySharing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFamilySharing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFamilySharing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execBIsSubscribedFromFamilySharing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProApps::BIsSubscribedFromFamilySharing();
	P_NATIVE_END;
}
// End Class USteamProApps Function BIsSubscribedFromFamilySharing

// Begin Class USteamProApps Function BIsSubscribedFromFreeWeekend
struct Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFreeWeekend_Statics
{
	struct SteamProApps_eventBIsSubscribedFromFreeWeekend_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the user is subscribed to the current App ID through a free weekend.\n\x09*\n\x09* Before using this please contact a Valve technical account manager via the Steamworks Discussion Board to properly package and secure your free weekend.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Checks if the user is subscribed to the current App ID through a free weekend.\n\nBefore using this please contact a Valve technical account manager via the Steamworks Discussion Board to properly package and secure your free weekend." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProApps_eventBIsSubscribedFromFreeWeekend_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProApps_eventBIsSubscribedFromFreeWeekend_Parms), &Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFreeWeekend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "BIsSubscribedFromFreeWeekend", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFreeWeekend_Statics::SteamProApps_eventBIsSubscribedFromFreeWeekend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFreeWeekend_Statics::SteamProApps_eventBIsSubscribedFromFreeWeekend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFreeWeekend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFreeWeekend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execBIsSubscribedFromFreeWeekend)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProApps::BIsSubscribedFromFreeWeekend();
	P_NATIVE_END;
}
// End Class USteamProApps Function BIsSubscribedFromFreeWeekend

// Begin Class USteamProApps Function BIsTimedTrial
struct Z_Construct_UFunction_USteamProApps_BIsTimedTrial_Statics
{
	struct SteamProApps_eventBIsTimedTrial_Parms
	{
		int32 SecondsAllowed;
		int32 SecondsPlayed;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Check if game is a timed trial with limited playtime\n\x09*\n\x09* Notes: Only available in UE4.27+\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Check if game is a timed trial with limited playtime\n\nNotes: Only available in UE4.27+" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsAllowed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsPlayed;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_BIsTimedTrial_Statics::NewProp_SecondsAllowed = { "SecondsAllowed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventBIsTimedTrial_Parms, SecondsAllowed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_BIsTimedTrial_Statics::NewProp_SecondsPlayed = { "SecondsPlayed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventBIsTimedTrial_Parms, SecondsPlayed), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProApps_BIsTimedTrial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProApps_eventBIsTimedTrial_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProApps_BIsTimedTrial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProApps_eventBIsTimedTrial_Parms), &Z_Construct_UFunction_USteamProApps_BIsTimedTrial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_BIsTimedTrial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BIsTimedTrial_Statics::NewProp_SecondsAllowed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BIsTimedTrial_Statics::NewProp_SecondsPlayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BIsTimedTrial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsTimedTrial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_BIsTimedTrial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "BIsTimedTrial", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_BIsTimedTrial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsTimedTrial_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_BIsTimedTrial_Statics::SteamProApps_eventBIsTimedTrial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsTimedTrial_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_BIsTimedTrial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_BIsTimedTrial_Statics::SteamProApps_eventBIsTimedTrial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_BIsTimedTrial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_BIsTimedTrial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execBIsTimedTrial)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SecondsAllowed);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SecondsPlayed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProApps::BIsTimedTrial(Z_Param_Out_SecondsAllowed,Z_Param_Out_SecondsPlayed);
	P_NATIVE_END;
}
// End Class USteamProApps Function BIsTimedTrial

// Begin Class USteamProApps Function BIsVACBanned
struct Z_Construct_UFunction_USteamProApps_BIsVACBanned_Statics
{
	struct SteamProApps_eventBIsVACBanned_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the user has a VAC ban on their account\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Checks if the user has a VAC ban on their account" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProApps_BIsVACBanned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProApps_eventBIsVACBanned_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProApps_BIsVACBanned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProApps_eventBIsVACBanned_Parms), &Z_Construct_UFunction_USteamProApps_BIsVACBanned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_BIsVACBanned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_BIsVACBanned_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsVACBanned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_BIsVACBanned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "BIsVACBanned", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_BIsVACBanned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsVACBanned_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_BIsVACBanned_Statics::SteamProApps_eventBIsVACBanned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_BIsVACBanned_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_BIsVACBanned_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_BIsVACBanned_Statics::SteamProApps_eventBIsVACBanned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_BIsVACBanned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_BIsVACBanned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execBIsVACBanned)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProApps::BIsVACBanned();
	P_NATIVE_END;
}
// End Class USteamProApps Function BIsVACBanned

// Begin Class USteamProApps Function GetAppBuildId
struct Z_Construct_UFunction_USteamProApps_GetAppBuildId_Statics
{
	struct SteamProApps_eventGetAppBuildId_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the buildid of this app, may change at any time based on backend updates to the game.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Gets the buildid of this app, may change at any time based on backend updates to the game." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_GetAppBuildId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetAppBuildId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_GetAppBuildId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetAppBuildId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetAppBuildId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_GetAppBuildId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "GetAppBuildId", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_GetAppBuildId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetAppBuildId_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_GetAppBuildId_Statics::SteamProApps_eventGetAppBuildId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetAppBuildId_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_GetAppBuildId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_GetAppBuildId_Statics::SteamProApps_eventGetAppBuildId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_GetAppBuildId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_GetAppBuildId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execGetAppBuildId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProApps::GetAppBuildId();
	P_NATIVE_END;
}
// End Class USteamProApps Function GetAppBuildId

// Begin Class USteamProApps Function GetAppInstallDir
struct Z_Construct_UFunction_USteamProApps_GetAppInstallDir_Statics
{
	struct SteamProApps_eventGetAppInstallDir_Parms
	{
		int32 AppID;
		FString Folder;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the install folder for a specific AppID.\n\x09*\n\x09* This works even if the application is not installed, based on where the game would be installed with the default Steam library location.\n\x09*\n\x09* @param\x09""AppID\x09\x09\x09The App ID to get the install dir for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Gets the install folder for a specific AppID.\n\nThis works even if the application is not installed, based on where the game would be installed with the default Steam library location.\n\n@param        AppID                   The App ID to get the install dir for." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Folder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_GetAppInstallDir_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetAppInstallDir_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProApps_GetAppInstallDir_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetAppInstallDir_Parms, Folder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_GetAppInstallDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetAppInstallDir_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_GetAppInstallDir_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetAppInstallDir_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetAppInstallDir_Statics::NewProp_Folder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetAppInstallDir_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetAppInstallDir_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_GetAppInstallDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "GetAppInstallDir", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_GetAppInstallDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetAppInstallDir_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_GetAppInstallDir_Statics::SteamProApps_eventGetAppInstallDir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetAppInstallDir_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_GetAppInstallDir_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_GetAppInstallDir_Statics::SteamProApps_eventGetAppInstallDir_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_GetAppInstallDir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_GetAppInstallDir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execGetAppInstallDir)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Folder);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProApps::GetAppInstallDir(Z_Param_AppID,Z_Param_Out_Folder);
	P_NATIVE_END;
}
// End Class USteamProApps Function GetAppInstallDir

// Begin Class USteamProApps Function GetAppOwner
struct Z_Construct_UFunction_USteamProApps_GetAppOwner_Statics
{
	struct SteamProApps_eventGetAppOwner_Parms
	{
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the original owner of the current app. If it's different from the current user then it is borrowed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Gets the Steam ID of the original owner of the current app. If it's different from the current user then it is borrowed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProApps_GetAppOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetAppOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_GetAppOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetAppOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetAppOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_GetAppOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "GetAppOwner", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_GetAppOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetAppOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_GetAppOwner_Statics::SteamProApps_eventGetAppOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetAppOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_GetAppOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_GetAppOwner_Statics::SteamProApps_eventGetAppOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_GetAppOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_GetAppOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execGetAppOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=USteamProApps::GetAppOwner();
	P_NATIVE_END;
}
// End Class USteamProApps Function GetAppOwner

// Begin Class USteamProApps Function GetAvailableGameLanguages
struct Z_Construct_UFunction_USteamProApps_GetAvailableGameLanguages_Statics
{
	struct SteamProApps_eventGetAvailableGameLanguages_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets a comma separated list of the languages the current app supports.\n\x09*\n\x09* For the full list of languages that may be returned see Localization and Languages.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Gets a comma separated list of the languages the current app supports.\n\nFor the full list of languages that may be returned see Localization and Languages." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProApps_GetAvailableGameLanguages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetAvailableGameLanguages_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_GetAvailableGameLanguages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetAvailableGameLanguages_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetAvailableGameLanguages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_GetAvailableGameLanguages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "GetAvailableGameLanguages", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_GetAvailableGameLanguages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetAvailableGameLanguages_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_GetAvailableGameLanguages_Statics::SteamProApps_eventGetAvailableGameLanguages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_GetAvailableGameLanguages_Statics::SteamProApps_eventGetAvailableGameLanguages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_GetAvailableGameLanguages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_GetAvailableGameLanguages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execGetAvailableGameLanguages)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProApps::GetAvailableGameLanguages();
	P_NATIVE_END;
}
// End Class USteamProApps Function GetAvailableGameLanguages

// Begin Class USteamProApps Function GetBetaInfo
struct Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics
{
	struct SteamProApps_eventGetBetaInfo_Parms
	{
		int32 BetaIndex;
		TArray<ESteamBetaBranchFlags> Flags;
		int32 BuildId;
		FString BetaName;
		FString Description;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/*\n\x09 * Return beta branch details, name, description, current BuildID and state flags (EBetaBranchFlags)\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "* Return beta branch details, name, description, current BuildID and state flags (EBetaBranchFlags)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BetaIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuildId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BetaName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::NewProp_BetaIndex = { "BetaIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetBetaInfo_Parms, BetaIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCorePro_ESteamBetaBranchFlags, METADATA_PARAMS(0, nullptr) }; // 1117072687
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetBetaInfo_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1117072687
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::NewProp_BuildId = { "BuildId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetBetaInfo_Parms, BuildId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::NewProp_BetaName = { "BetaName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetBetaInfo_Parms, BetaName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetBetaInfo_Parms, Description), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProApps_eventGetBetaInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProApps_eventGetBetaInfo_Parms), &Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::NewProp_BetaIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::NewProp_Flags_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::NewProp_BuildId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::NewProp_BetaName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "GetBetaInfo", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::SteamProApps_eventGetBetaInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::SteamProApps_eventGetBetaInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_GetBetaInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_GetBetaInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execGetBetaInfo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BetaIndex);
	P_GET_TARRAY_REF(ESteamBetaBranchFlags,Z_Param_Out_Flags);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BuildId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_BetaName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Description);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProApps::GetBetaInfo(Z_Param_BetaIndex,Z_Param_Out_Flags,Z_Param_Out_BuildId,Z_Param_Out_BetaName,Z_Param_Out_Description);
	P_NATIVE_END;
}
// End Class USteamProApps Function GetBetaInfo

// Begin Class USteamProApps Function GetCurrentBetaName
struct Z_Construct_UFunction_USteamProApps_GetCurrentBetaName_Statics
{
	struct SteamProApps_eventGetCurrentBetaName_Parms
	{
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the user is running from a beta branch, and gets the name of the branch if they are.\n\x09*\n\x09* @param\x09Name\x09The buffer where the beta name will be copied in to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Checks if the user is running from a beta branch, and gets the name of the branch if they are.\n\n@param        Name    The buffer where the beta name will be copied in to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProApps_GetCurrentBetaName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetCurrentBetaName_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProApps_GetCurrentBetaName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProApps_eventGetCurrentBetaName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProApps_GetCurrentBetaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProApps_eventGetCurrentBetaName_Parms), &Z_Construct_UFunction_USteamProApps_GetCurrentBetaName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_GetCurrentBetaName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetCurrentBetaName_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetCurrentBetaName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetCurrentBetaName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_GetCurrentBetaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "GetCurrentBetaName", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_GetCurrentBetaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetCurrentBetaName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_GetCurrentBetaName_Statics::SteamProApps_eventGetCurrentBetaName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetCurrentBetaName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_GetCurrentBetaName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_GetCurrentBetaName_Statics::SteamProApps_eventGetCurrentBetaName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_GetCurrentBetaName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_GetCurrentBetaName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execGetCurrentBetaName)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProApps::GetCurrentBetaName(Z_Param_Out_Name);
	P_NATIVE_END;
}
// End Class USteamProApps Function GetCurrentBetaName

// Begin Class USteamProApps Function GetCurrentGameLanguage
struct Z_Construct_UFunction_USteamProApps_GetCurrentGameLanguage_Statics
{
	struct SteamProApps_eventGetCurrentGameLanguage_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the current language that the user has set.\n\x09*\n\x09* This falls back to the Steam UI language if the user hasn't explicitly picked a language for the title.\n\x09* For the full list of languages see Supported Languages.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Gets the current language that the user has set.\n\nThis falls back to the Steam UI language if the user hasn't explicitly picked a language for the title.\nFor the full list of languages see Supported Languages." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProApps_GetCurrentGameLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetCurrentGameLanguage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_GetCurrentGameLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetCurrentGameLanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetCurrentGameLanguage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_GetCurrentGameLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "GetCurrentGameLanguage", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_GetCurrentGameLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetCurrentGameLanguage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_GetCurrentGameLanguage_Statics::SteamProApps_eventGetCurrentGameLanguage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_GetCurrentGameLanguage_Statics::SteamProApps_eventGetCurrentGameLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_GetCurrentGameLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_GetCurrentGameLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execGetCurrentGameLanguage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProApps::GetCurrentGameLanguage();
	P_NATIVE_END;
}
// End Class USteamProApps Function GetCurrentGameLanguage

// Begin Class USteamProApps Function GetDLCCount
struct Z_Construct_UFunction_USteamProApps_GetDLCCount_Statics
{
	struct SteamProApps_eventGetDLCCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the number of DLC pieces for the current app.\n\x09*\n\x09* This is typically used to loop through each piece of DLC and get the info about each one with BGetDLCDataByIndex.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Gets the number of DLC pieces for the current app.\n\nThis is typically used to loop through each piece of DLC and get the info about each one with BGetDLCDataByIndex." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_GetDLCCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetDLCCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_GetDLCCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetDLCCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetDLCCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_GetDLCCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "GetDLCCount", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_GetDLCCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetDLCCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_GetDLCCount_Statics::SteamProApps_eventGetDLCCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetDLCCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_GetDLCCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_GetDLCCount_Statics::SteamProApps_eventGetDLCCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_GetDLCCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_GetDLCCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execGetDLCCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProApps::GetDLCCount();
	P_NATIVE_END;
}
// End Class USteamProApps Function GetDLCCount

// Begin Class USteamProApps Function GetDlcDownloadProgress
struct Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics
{
	struct SteamProApps_eventGetDlcDownloadProgress_Parms
	{
		int32 AppID;
		int32 BytesDownloaded;
		int32 BytesTotal;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the download progress for optional DLC.\n\x09*\n\x09* @param\x09""AppID\x09\x09\x09\x09The App ID of the DLC to monitor\n\x09* @param\x09""BytesDownloaded\x09\x09Returns the number of bytes downloaded.\n\x09* @param\x09""BytesTotal\x09\x09\x09Returns the total size of the download in bytes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Gets the download progress for optional DLC.\n\n@param        AppID                           The App ID of the DLC to monitor\n@param        BytesDownloaded         Returns the number of bytes downloaded.\n@param        BytesTotal                      Returns the total size of the download in bytes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesDownloaded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesTotal;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetDlcDownloadProgress_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::NewProp_BytesDownloaded = { "BytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetDlcDownloadProgress_Parms, BytesDownloaded), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::NewProp_BytesTotal = { "BytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetDlcDownloadProgress_Parms, BytesTotal), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProApps_eventGetDlcDownloadProgress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProApps_eventGetDlcDownloadProgress_Parms), &Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::NewProp_BytesDownloaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::NewProp_BytesTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "GetDlcDownloadProgress", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::SteamProApps_eventGetDlcDownloadProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::SteamProApps_eventGetDlcDownloadProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execGetDlcDownloadProgress)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesDownloaded);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesTotal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProApps::GetDlcDownloadProgress(Z_Param_AppID,Z_Param_Out_BytesDownloaded,Z_Param_Out_BytesTotal);
	P_NATIVE_END;
}
// End Class USteamProApps Function GetDlcDownloadProgress

// Begin Class USteamProApps Function GetEarliestPurchaseUnixTime
struct Z_Construct_UFunction_USteamProApps_GetEarliestPurchaseUnixTime_Statics
{
	struct SteamProApps_eventGetEarliestPurchaseUnixTime_Parms
	{
		int32 AppID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the time of purchase of the specified app in Unix epoch format (time since Jan 1st, 1970).\n\x09*\n\x09* This is useful for rewarding users based on their initial purchase date.\n\x09*\n\x09* @param\x09""AppID\x09The App ID to get the purchase time for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Gets the time of purchase of the specified app in Unix epoch format (time since Jan 1st, 1970).\n\nThis is useful for rewarding users based on their initial purchase date.\n\n@param        AppID   The App ID to get the purchase time for." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_GetEarliestPurchaseUnixTime_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetEarliestPurchaseUnixTime_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_GetEarliestPurchaseUnixTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetEarliestPurchaseUnixTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_GetEarliestPurchaseUnixTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetEarliestPurchaseUnixTime_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetEarliestPurchaseUnixTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetEarliestPurchaseUnixTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_GetEarliestPurchaseUnixTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "GetEarliestPurchaseUnixTime", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_GetEarliestPurchaseUnixTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetEarliestPurchaseUnixTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_GetEarliestPurchaseUnixTime_Statics::SteamProApps_eventGetEarliestPurchaseUnixTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_GetEarliestPurchaseUnixTime_Statics::SteamProApps_eventGetEarliestPurchaseUnixTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_GetEarliestPurchaseUnixTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_GetEarliestPurchaseUnixTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execGetEarliestPurchaseUnixTime)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProApps::GetEarliestPurchaseUnixTime(Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USteamProApps Function GetEarliestPurchaseUnixTime

// Begin Class USteamProApps Function GetFileDetails
struct Z_Construct_UFunction_USteamProApps_GetFileDetails_Statics
{
	struct SteamProApps_eventGetFileDetails_Parms
	{
		FScriptDelegate Callback;
		FString FileName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Asynchronously retrieves metadata details about a specific file in the depot manifest.\n\x09*\n\x09* Currently provides:\n\x09* The file size in bytes.\n\x09* The file's SHA1 hash.\n\x09* The file's flags.\n\x09*\n\x09* @param\x09""FileName\x09The absolute path and name to the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Asynchronously retrieves metadata details about a specific file in the depot manifest.\n\nCurrently provides:\nThe file size in bytes.\nThe file's SHA1 hash.\nThe file's flags.\n\n@param        FileName        The absolute path and name to the file." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProApps_GetFileDetails_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetFileDetails_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3437984692
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProApps_GetFileDetails_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetFileDetails_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_GetFileDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetFileDetails_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetFileDetails_Statics::NewProp_FileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetFileDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_GetFileDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "GetFileDetails", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_GetFileDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetFileDetails_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_GetFileDetails_Statics::SteamProApps_eventGetFileDetails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetFileDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_GetFileDetails_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_GetFileDetails_Statics::SteamProApps_eventGetFileDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_GetFileDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_GetFileDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execGetFileDetails)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFileDetails(FOnFileDetailsResult(Z_Param_Out_Callback),Z_Param_FileName);
	P_NATIVE_END;
}
// End Class USteamProApps Function GetFileDetails

// Begin Class USteamProApps Function GetInstalledDepots
struct Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics
{
	struct SteamProApps_eventGetInstalledDepots_Parms
	{
		int32 AppID;
		int32 MaxDepots;
		TArray<int32> Depots;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets a list of all installed depots for a given App ID in mount order.\n\x09*\n\x09* @param\x09""AppID\x09\x09\x09The App to list the depots for.\n\x09* @param\x09MaxDepots\x09\x09The maximum number of depots to obtain, typically the size of pvecDepots.\n\x09* @param\x09""Depots\x09\x09\x09""A preallocated array that will be filled with the list of depots.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Gets a list of all installed depots for a given App ID in mount order.\n\n@param        AppID                   The App to list the depots for.\n@param        MaxDepots               The maximum number of depots to obtain, typically the size of pvecDepots.\n@param        Depots                  A preallocated array that will be filled with the list of depots." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDepots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Depots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Depots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetInstalledDepots_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::NewProp_MaxDepots = { "MaxDepots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetInstalledDepots_Parms, MaxDepots), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::NewProp_Depots_Inner = { "Depots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::NewProp_Depots = { "Depots", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetInstalledDepots_Parms, Depots), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetInstalledDepots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::NewProp_MaxDepots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::NewProp_Depots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::NewProp_Depots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "GetInstalledDepots", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::SteamProApps_eventGetInstalledDepots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::SteamProApps_eventGetInstalledDepots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_GetInstalledDepots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_GetInstalledDepots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execGetInstalledDepots)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxDepots);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Depots);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProApps::GetInstalledDepots(Z_Param_AppID,Z_Param_MaxDepots,Z_Param_Out_Depots);
	P_NATIVE_END;
}
// End Class USteamProApps Function GetInstalledDepots

// Begin Class USteamProApps Function GetLaunchCommandLine
struct Z_Construct_UFunction_USteamProApps_GetLaunchCommandLine_Statics
{
	struct SteamProApps_eventGetLaunchCommandLine_Parms
	{
		FString CommandLine;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the command line if the game was launched via Steam URL, e.g. steam://run/<appid>//<command line>/. \n\x09*\n\x09* This method is preferable to launching with a command line via the operating system, which can be a security risk.\n\x09* In order for rich presence joins to go through this and not be placed on the OS command line, you must enable \"Use launch command line\" from the Installation > General page on your app.\n\x09*\n\x09* @param\x09""CommandLine\x09\x09\x09The string buffer that the command line will be copied into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Gets the command line if the game was launched via Steam URL, e.g. steam://run/<appid>//<command line>/.\n\nThis method is preferable to launching with a command line via the operating system, which can be a security risk.\nIn order for rich presence joins to go through this and not be placed on the OS command line, you must enable \"Use launch command line\" from the Installation > General page on your app.\n\n@param        CommandLine                     The string buffer that the command line will be copied into." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CommandLine;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProApps_GetLaunchCommandLine_Statics::NewProp_CommandLine = { "CommandLine", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetLaunchCommandLine_Parms, CommandLine), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_GetLaunchCommandLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetLaunchCommandLine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_GetLaunchCommandLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetLaunchCommandLine_Statics::NewProp_CommandLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetLaunchCommandLine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetLaunchCommandLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_GetLaunchCommandLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "GetLaunchCommandLine", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_GetLaunchCommandLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetLaunchCommandLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_GetLaunchCommandLine_Statics::SteamProApps_eventGetLaunchCommandLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetLaunchCommandLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_GetLaunchCommandLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_GetLaunchCommandLine_Statics::SteamProApps_eventGetLaunchCommandLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_GetLaunchCommandLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_GetLaunchCommandLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execGetLaunchCommandLine)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_CommandLine);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProApps::GetLaunchCommandLine(Z_Param_Out_CommandLine);
	P_NATIVE_END;
}
// End Class USteamProApps Function GetLaunchCommandLine

// Begin Class USteamProApps Function GetLaunchQueryParam
struct Z_Construct_UFunction_USteamProApps_GetLaunchQueryParam_Statics
{
	struct SteamProApps_eventGetLaunchQueryParam_Parms
	{
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the associated launch parameter if the game is run via steam://run/<appid>/?param1=value1;param2=value2;param3=value3 etc.\n\x09*\n\x09* Parameter names starting with the character '@' are reserved for internal use and will always return an empty string.\n\x09* Parameter names starting with an underscore '_' are reserved for steam features -- they can be queried by the game, but it is advised that you not param names beginning with an underscore for your own features.\n\x09*\n\x09* @param\x09Key\x09\x09The launch key to test for. Ex: param1\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Gets the associated launch parameter if the game is run via steam://run/<appid>/?param1=value1;param2=value2;param3=value3 etc.\n\nParameter names starting with the character '@' are reserved for internal use and will always return an empty string.\nParameter names starting with an underscore '_' are reserved for steam features -- they can be queried by the game, but it is advised that you not param names beginning with an underscore for your own features.\n\n@param        Key             The launch key to test for. Ex: param1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProApps_GetLaunchQueryParam_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetLaunchQueryParam_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProApps_GetLaunchQueryParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetLaunchQueryParam_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_GetLaunchQueryParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetLaunchQueryParam_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetLaunchQueryParam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetLaunchQueryParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_GetLaunchQueryParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "GetLaunchQueryParam", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_GetLaunchQueryParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetLaunchQueryParam_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_GetLaunchQueryParam_Statics::SteamProApps_eventGetLaunchQueryParam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetLaunchQueryParam_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_GetLaunchQueryParam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_GetLaunchQueryParam_Statics::SteamProApps_eventGetLaunchQueryParam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_GetLaunchQueryParam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_GetLaunchQueryParam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execGetLaunchQueryParam)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProApps::GetLaunchQueryParam(Z_Param_Key);
	P_NATIVE_END;
}
// End Class USteamProApps Function GetLaunchQueryParam

// Begin Class USteamProApps Function GetNumBetas
struct Z_Construct_UFunction_USteamProApps_GetNumBetas_Statics
{
	struct SteamProApps_eventGetNumBetas_Parms
	{
		int32 Available;
		int32 Private;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/*\n\x09 * Returns total number of known app beta branches (including default \"public\" branch )\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "* Returns total number of known app beta branches (including default \"public\" branch )" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Available;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Private;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_GetNumBetas_Statics::NewProp_Available = { "Available", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetNumBetas_Parms, Available), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_GetNumBetas_Statics::NewProp_Private = { "Private", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetNumBetas_Parms, Private), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_GetNumBetas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetNumBetas_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_GetNumBetas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetNumBetas_Statics::NewProp_Available,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetNumBetas_Statics::NewProp_Private,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetNumBetas_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetNumBetas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_GetNumBetas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "GetNumBetas", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_GetNumBetas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetNumBetas_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_GetNumBetas_Statics::SteamProApps_eventGetNumBetas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetNumBetas_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_GetNumBetas_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_GetNumBetas_Statics::SteamProApps_eventGetNumBetas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_GetNumBetas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_GetNumBetas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execGetNumBetas)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Available);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Private);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProApps::GetNumBetas(Z_Param_Out_Available,Z_Param_Out_Private);
	P_NATIVE_END;
}
// End Class USteamProApps Function GetNumBetas

// Begin Class USteamProApps Function GetSteamApps
struct Z_Construct_UFunction_USteamProApps_GetSteamApps_Statics
{
	struct SteamProApps_eventGetSteamApps_Parms
	{
		USteamProApps* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProApps_GetSteamApps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventGetSteamApps_Parms, ReturnValue), Z_Construct_UClass_USteamProApps_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_GetSteamApps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_GetSteamApps_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetSteamApps_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_GetSteamApps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "GetSteamApps", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_GetSteamApps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetSteamApps_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_GetSteamApps_Statics::SteamProApps_eventGetSteamApps_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_GetSteamApps_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_GetSteamApps_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_GetSteamApps_Statics::SteamProApps_eventGetSteamApps_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_GetSteamApps()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_GetSteamApps_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execGetSteamApps)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProApps**)Z_Param__Result=USteamProApps::GetSteamApps();
	P_NATIVE_END;
}
// End Class USteamProApps Function GetSteamApps

// Begin Class USteamProApps Function InstallDLC
struct Z_Construct_UFunction_USteamProApps_InstallDLC_Statics
{
	struct SteamProApps_eventInstallDLC_Parms
	{
		int32 AppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Allows you to install an optional DLC.\n\x09*\n\x09* @param\x09""AppID\x09The DLC you want to install.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Allows you to install an optional DLC.\n\n@param        AppID   The DLC you want to install." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_InstallDLC_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventInstallDLC_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_InstallDLC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_InstallDLC_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_InstallDLC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_InstallDLC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "InstallDLC", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_InstallDLC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_InstallDLC_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_InstallDLC_Statics::SteamProApps_eventInstallDLC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_InstallDLC_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_InstallDLC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_InstallDLC_Statics::SteamProApps_eventInstallDLC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_InstallDLC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_InstallDLC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execInstallDLC)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProApps::InstallDLC(Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USteamProApps Function InstallDLC

// Begin Class USteamProApps Function MarkContentCorrupt
struct Z_Construct_UFunction_USteamProApps_MarkContentCorrupt_Statics
{
	struct SteamProApps_eventMarkContentCorrupt_Parms
	{
		bool bMissingFilesOnly;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Allows you to force verify game content on next launch.\n\x09*\n\x09* If you detect the game is out-of-date (for example, by having the client detect a version mismatch with a server),\n\x09* you can call use MarkContentCorrupt to force a verify, show a message to the user, and then quit.\n\x09*\n\x09* @param\x09""bMissingFilesOnly\x09Only scan for missing files, don't verify the checksum of each file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Allows you to force verify game content on next launch.\n\nIf you detect the game is out-of-date (for example, by having the client detect a version mismatch with a server),\nyou can call use MarkContentCorrupt to force a verify, show a message to the user, and then quit.\n\n@param        bMissingFilesOnly       Only scan for missing files, don't verify the checksum of each file." },
	};
#endif // WITH_METADATA
	static void NewProp_bMissingFilesOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMissingFilesOnly;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly_SetBit(void* Obj)
{
	((SteamProApps_eventMarkContentCorrupt_Parms*)Obj)->bMissingFilesOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly = { "bMissingFilesOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProApps_eventMarkContentCorrupt_Parms), &Z_Construct_UFunction_USteamProApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProApps_MarkContentCorrupt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProApps_eventMarkContentCorrupt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProApps_MarkContentCorrupt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProApps_eventMarkContentCorrupt_Parms), &Z_Construct_UFunction_USteamProApps_MarkContentCorrupt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_MarkContentCorrupt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_MarkContentCorrupt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_MarkContentCorrupt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_MarkContentCorrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "MarkContentCorrupt", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_MarkContentCorrupt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_MarkContentCorrupt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_MarkContentCorrupt_Statics::SteamProApps_eventMarkContentCorrupt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_MarkContentCorrupt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_MarkContentCorrupt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_MarkContentCorrupt_Statics::SteamProApps_eventMarkContentCorrupt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_MarkContentCorrupt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_MarkContentCorrupt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execMarkContentCorrupt)
{
	P_GET_UBOOL(Z_Param_bMissingFilesOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProApps::MarkContentCorrupt(Z_Param_bMissingFilesOnly);
	P_NATIVE_END;
}
// End Class USteamProApps Function MarkContentCorrupt

// Begin Class USteamProApps Function SetActiveBeta
struct Z_Construct_UFunction_USteamProApps_SetActiveBeta_Statics
{
	struct SteamProApps_eventSetActiveBeta_Parms
	{
		FString BetaName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/*\n\x09 * Select this beta branch for this app as active, might need the game to restart so Steam can update to that branch\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "* Select this beta branch for this app as active, might need the game to restart so Steam can update to that branch" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BetaName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProApps_SetActiveBeta_Statics::NewProp_BetaName = { "BetaName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventSetActiveBeta_Parms, BetaName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProApps_SetActiveBeta_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProApps_eventSetActiveBeta_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProApps_SetActiveBeta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProApps_eventSetActiveBeta_Parms), &Z_Construct_UFunction_USteamProApps_SetActiveBeta_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_SetActiveBeta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_SetActiveBeta_Statics::NewProp_BetaName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_SetActiveBeta_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_SetActiveBeta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_SetActiveBeta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "SetActiveBeta", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_SetActiveBeta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_SetActiveBeta_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_SetActiveBeta_Statics::SteamProApps_eventSetActiveBeta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_SetActiveBeta_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_SetActiveBeta_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_SetActiveBeta_Statics::SteamProApps_eventSetActiveBeta_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_SetActiveBeta()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_SetActiveBeta_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execSetActiveBeta)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BetaName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProApps::SetActiveBeta(Z_Param_BetaName);
	P_NATIVE_END;
}
// End Class USteamProApps Function SetActiveBeta

// Begin Class USteamProApps Function SetDlcContext
struct Z_Construct_UFunction_USteamProApps_SetDlcContext_Statics
{
	struct SteamProApps_eventSetDlcContext_Parms
	{
		int32 AppId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/*\n\x09 * Set current DLC AppID being played (or 0 if none). Allows Steam to track usage of major DLC extensions\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "* Set current DLC AppID being played (or 0 if none). Allows Steam to track usage of major DLC extensions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_SetDlcContext_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventSetDlcContext_Parms, AppId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProApps_SetDlcContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProApps_eventSetDlcContext_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProApps_SetDlcContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProApps_eventSetDlcContext_Parms), &Z_Construct_UFunction_USteamProApps_SetDlcContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_SetDlcContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_SetDlcContext_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_SetDlcContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_SetDlcContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_SetDlcContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "SetDlcContext", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_SetDlcContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_SetDlcContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_SetDlcContext_Statics::SteamProApps_eventSetDlcContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_SetDlcContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_SetDlcContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_SetDlcContext_Statics::SteamProApps_eventSetDlcContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_SetDlcContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_SetDlcContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execSetDlcContext)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProApps::SetDlcContext(Z_Param_AppId);
	P_NATIVE_END;
}
// End Class USteamProApps Function SetDlcContext

// Begin Class USteamProApps Function UninstallDLC
struct Z_Construct_UFunction_USteamProApps_UninstallDLC_Statics
{
	struct SteamProApps_eventUninstallDLC_Parms
	{
		int32 AppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Allows you to uninstall an optional DLC.\n\x09*\n\x09* @param\x09""AppID\x09The DLC you want to uninstall.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
		{ "ToolTip", "Allows you to uninstall an optional DLC.\n\n@param        AppID   The DLC you want to uninstall." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProApps_UninstallDLC_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProApps_eventUninstallDLC_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProApps_UninstallDLC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProApps_UninstallDLC_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_UninstallDLC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProApps_UninstallDLC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProApps, nullptr, "UninstallDLC", nullptr, nullptr, Z_Construct_UFunction_USteamProApps_UninstallDLC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_UninstallDLC_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProApps_UninstallDLC_Statics::SteamProApps_eventUninstallDLC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProApps_UninstallDLC_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProApps_UninstallDLC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProApps_UninstallDLC_Statics::SteamProApps_eventUninstallDLC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProApps_UninstallDLC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProApps_UninstallDLC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProApps::execUninstallDLC)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProApps::UninstallDLC(Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USteamProApps Function UninstallDLC

// Begin Class USteamProApps
void USteamProApps::StaticRegisterNativesUSteamProApps()
{
	UClass* Class = USteamProApps::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BGetDLCDataByIndex", &USteamProApps::execBGetDLCDataByIndex },
		{ "BIsAppInstalled", &USteamProApps::execBIsAppInstalled },
		{ "BIsCybercafe", &USteamProApps::execBIsCybercafe },
		{ "BIsDlcInstalled", &USteamProApps::execBIsDlcInstalled },
		{ "BIsLowViolence", &USteamProApps::execBIsLowViolence },
		{ "BIsSubscribed", &USteamProApps::execBIsSubscribed },
		{ "BIsSubscribedApp", &USteamProApps::execBIsSubscribedApp },
		{ "BIsSubscribedFromFamilySharing", &USteamProApps::execBIsSubscribedFromFamilySharing },
		{ "BIsSubscribedFromFreeWeekend", &USteamProApps::execBIsSubscribedFromFreeWeekend },
		{ "BIsTimedTrial", &USteamProApps::execBIsTimedTrial },
		{ "BIsVACBanned", &USteamProApps::execBIsVACBanned },
		{ "GetAppBuildId", &USteamProApps::execGetAppBuildId },
		{ "GetAppInstallDir", &USteamProApps::execGetAppInstallDir },
		{ "GetAppOwner", &USteamProApps::execGetAppOwner },
		{ "GetAvailableGameLanguages", &USteamProApps::execGetAvailableGameLanguages },
		{ "GetBetaInfo", &USteamProApps::execGetBetaInfo },
		{ "GetCurrentBetaName", &USteamProApps::execGetCurrentBetaName },
		{ "GetCurrentGameLanguage", &USteamProApps::execGetCurrentGameLanguage },
		{ "GetDLCCount", &USteamProApps::execGetDLCCount },
		{ "GetDlcDownloadProgress", &USteamProApps::execGetDlcDownloadProgress },
		{ "GetEarliestPurchaseUnixTime", &USteamProApps::execGetEarliestPurchaseUnixTime },
		{ "GetFileDetails", &USteamProApps::execGetFileDetails },
		{ "GetInstalledDepots", &USteamProApps::execGetInstalledDepots },
		{ "GetLaunchCommandLine", &USteamProApps::execGetLaunchCommandLine },
		{ "GetLaunchQueryParam", &USteamProApps::execGetLaunchQueryParam },
		{ "GetNumBetas", &USteamProApps::execGetNumBetas },
		{ "GetSteamApps", &USteamProApps::execGetSteamApps },
		{ "InstallDLC", &USteamProApps::execInstallDLC },
		{ "MarkContentCorrupt", &USteamProApps::execMarkContentCorrupt },
		{ "SetActiveBeta", &USteamProApps::execSetActiveBeta },
		{ "SetDlcContext", &USteamProApps::execSetDlcContext },
		{ "UninstallDLC", &USteamProApps::execUninstallDLC },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProApps);
UClass* Z_Construct_UClass_USteamProApps_NoRegister()
{
	return USteamProApps::StaticClass();
}
struct Z_Construct_UClass_USteamProApps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamApps/SteamProApps.h" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DLCInstalled_MetaData[] = {
		{ "Category", "SteamCore|Apps|Delegates" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileDetailsResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|Apps|Delegates" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewUrlLaunchParametersDelegate_MetaData[] = {
		{ "Category", "SteamCore|Apps|Delegates" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimedTrialStatusDelegate_MetaData[] = {
		{ "Category", "SteamCore|Apps|Delegates" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamProApps.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DLCInstalled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FileDetailsResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_NewUrlLaunchParametersDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_TimedTrialStatusDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProApps_BGetDLCDataByIndex, "BGetDLCDataByIndex" }, // 2053077276
		{ &Z_Construct_UFunction_USteamProApps_BIsAppInstalled, "BIsAppInstalled" }, // 4195047984
		{ &Z_Construct_UFunction_USteamProApps_BIsCybercafe, "BIsCybercafe" }, // 2851182755
		{ &Z_Construct_UFunction_USteamProApps_BIsDlcInstalled, "BIsDlcInstalled" }, // 3595410044
		{ &Z_Construct_UFunction_USteamProApps_BIsLowViolence, "BIsLowViolence" }, // 841671702
		{ &Z_Construct_UFunction_USteamProApps_BIsSubscribed, "BIsSubscribed" }, // 3556035601
		{ &Z_Construct_UFunction_USteamProApps_BIsSubscribedApp, "BIsSubscribedApp" }, // 1448324739
		{ &Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFamilySharing, "BIsSubscribedFromFamilySharing" }, // 209979271
		{ &Z_Construct_UFunction_USteamProApps_BIsSubscribedFromFreeWeekend, "BIsSubscribedFromFreeWeekend" }, // 3770586899
		{ &Z_Construct_UFunction_USteamProApps_BIsTimedTrial, "BIsTimedTrial" }, // 3121239963
		{ &Z_Construct_UFunction_USteamProApps_BIsVACBanned, "BIsVACBanned" }, // 96399109
		{ &Z_Construct_UFunction_USteamProApps_GetAppBuildId, "GetAppBuildId" }, // 3801742255
		{ &Z_Construct_UFunction_USteamProApps_GetAppInstallDir, "GetAppInstallDir" }, // 2312483961
		{ &Z_Construct_UFunction_USteamProApps_GetAppOwner, "GetAppOwner" }, // 596470660
		{ &Z_Construct_UFunction_USteamProApps_GetAvailableGameLanguages, "GetAvailableGameLanguages" }, // 3687720619
		{ &Z_Construct_UFunction_USteamProApps_GetBetaInfo, "GetBetaInfo" }, // 2693944352
		{ &Z_Construct_UFunction_USteamProApps_GetCurrentBetaName, "GetCurrentBetaName" }, // 2441023368
		{ &Z_Construct_UFunction_USteamProApps_GetCurrentGameLanguage, "GetCurrentGameLanguage" }, // 1115050654
		{ &Z_Construct_UFunction_USteamProApps_GetDLCCount, "GetDLCCount" }, // 837751324
		{ &Z_Construct_UFunction_USteamProApps_GetDlcDownloadProgress, "GetDlcDownloadProgress" }, // 1817437389
		{ &Z_Construct_UFunction_USteamProApps_GetEarliestPurchaseUnixTime, "GetEarliestPurchaseUnixTime" }, // 640042718
		{ &Z_Construct_UFunction_USteamProApps_GetFileDetails, "GetFileDetails" }, // 1348823710
		{ &Z_Construct_UFunction_USteamProApps_GetInstalledDepots, "GetInstalledDepots" }, // 2685453745
		{ &Z_Construct_UFunction_USteamProApps_GetLaunchCommandLine, "GetLaunchCommandLine" }, // 1559836594
		{ &Z_Construct_UFunction_USteamProApps_GetLaunchQueryParam, "GetLaunchQueryParam" }, // 2975818225
		{ &Z_Construct_UFunction_USteamProApps_GetNumBetas, "GetNumBetas" }, // 4286588100
		{ &Z_Construct_UFunction_USteamProApps_GetSteamApps, "GetSteamApps" }, // 2351322725
		{ &Z_Construct_UFunction_USteamProApps_InstallDLC, "InstallDLC" }, // 4259471190
		{ &Z_Construct_UFunction_USteamProApps_MarkContentCorrupt, "MarkContentCorrupt" }, // 572605409
		{ &Z_Construct_UFunction_USteamProApps_SetActiveBeta, "SetActiveBeta" }, // 2031502444
		{ &Z_Construct_UFunction_USteamProApps_SetDlcContext, "SetDlcContext" }, // 883448498
		{ &Z_Construct_UFunction_USteamProApps_UninstallDLC, "UninstallDLC" }, // 2426952833
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProApps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProApps_Statics::NewProp_DLCInstalled = { "DLCInstalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProApps, DLCInstalled), Z_Construct_UDelegateFunction_SteamCorePro_OnDLCInstalled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DLCInstalled_MetaData), NewProp_DLCInstalled_MetaData) }; // 3628515691
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProApps_Statics::NewProp_FileDetailsResultDelegate = { "FileDetailsResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProApps, FileDetailsResultDelegate), Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileDetailsResultDelegate_MetaData), NewProp_FileDetailsResultDelegate_MetaData) }; // 2027918332
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProApps_Statics::NewProp_NewUrlLaunchParametersDelegate = { "NewUrlLaunchParametersDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProApps, NewUrlLaunchParametersDelegate), Z_Construct_UDelegateFunction_SteamCorePro_OnNewUrlLaunchParametersDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewUrlLaunchParametersDelegate_MetaData), NewProp_NewUrlLaunchParametersDelegate_MetaData) }; // 4052784694
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProApps_Statics::NewProp_TimedTrialStatusDelegate = { "TimedTrialStatusDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProApps, TimedTrialStatusDelegate), Z_Construct_UDelegateFunction_SteamCorePro_OnTimedTrialStatusDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimedTrialStatusDelegate_MetaData), NewProp_TimedTrialStatusDelegate_MetaData) }; // 19333850
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamProApps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProApps_Statics::NewProp_DLCInstalled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProApps_Statics::NewProp_FileDetailsResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProApps_Statics::NewProp_NewUrlLaunchParametersDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProApps_Statics::NewProp_TimedTrialStatusDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProApps_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamProApps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProApps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProApps_Statics::ClassParams = {
	&USteamProApps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamProApps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamProApps_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProApps_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProApps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProApps()
{
	if (!Z_Registration_Info_UClass_USteamProApps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProApps.OuterSingleton, Z_Construct_UClass_USteamProApps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProApps.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProApps>()
{
	return USteamProApps::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProApps);
// End Class USteamProApps

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamProApps_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProApps, USteamProApps::StaticClass, TEXT("USteamProApps"), &Z_Registration_Info_UClass_USteamProApps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProApps), 2899680981U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamProApps_h_1323887909(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamProApps_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamProApps_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
