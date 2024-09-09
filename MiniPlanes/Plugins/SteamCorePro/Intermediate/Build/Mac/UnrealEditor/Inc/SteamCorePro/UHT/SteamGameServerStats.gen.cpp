// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamGameServerStats/SteamGameServerStats.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamGameServerStats() {}

// Begin Cross Module References
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProGameServerStats();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProGameServerStats_NoRegister();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGSStatsUnloaded__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnServerRequestUserStats__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnServerStoreUserStats__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProGameServerStats Function ClearUserAchievement
struct Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement_Statics
{
	struct SteamProGameServerStats_eventClearUserAchievement_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Resets the unlock status of an achievement for the specified user.\n\x09*\n\x09* This is primarily only ever used for testing.\n\x09* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to clear the achievement for.\n\x09* @param\x09Name\x09\x09\x09The 'API Name' of the Achievement to reset.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
		{ "ToolTip", "Resets the unlock status of an achievement for the specified user.\n\nThis is primarily only ever used for testing.\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\n@param        SteamIDUser             The Steam ID of the user to clear the achievement for.\n@param        Name                    The 'API Name' of the Achievement to reset." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventClearUserAchievement_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventClearUserAchievement_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProGameServerStats_eventClearUserAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProGameServerStats_eventClearUserAchievement_Parms), &Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServerStats, nullptr, "ClearUserAchievement", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement_Statics::SteamProGameServerStats_eventClearUserAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement_Statics::SteamProGameServerStats_eventClearUserAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServerStats::execClearUserAchievement)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ClearUserAchievement(Z_Param_SteamIDUser,Z_Param_Name);
	P_NATIVE_END;
}
// End Class USteamProGameServerStats Function ClearUserAchievement

// Begin Class USteamProGameServerStats Function GetSteamGameServerStats
struct Z_Construct_UFunction_USteamProGameServerStats_GetSteamGameServerStats_Statics
{
	struct SteamProGameServerStats_eventGetSteamGameServerStats_Parms
	{
		USteamProGameServerStats* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProGameServerStats_GetSteamGameServerStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventGetSteamGameServerStats_Parms, ReturnValue), Z_Construct_UClass_USteamProGameServerStats_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServerStats_GetSteamGameServerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_GetSteamGameServerStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_GetSteamGameServerStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServerStats_GetSteamGameServerStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServerStats, nullptr, "GetSteamGameServerStats", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServerStats_GetSteamGameServerStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_GetSteamGameServerStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServerStats_GetSteamGameServerStats_Statics::SteamProGameServerStats_eventGetSteamGameServerStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_GetSteamGameServerStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServerStats_GetSteamGameServerStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServerStats_GetSteamGameServerStats_Statics::SteamProGameServerStats_eventGetSteamGameServerStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServerStats_GetSteamGameServerStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServerStats_GetSteamGameServerStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServerStats::execGetSteamGameServerStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProGameServerStats**)Z_Param__Result=USteamProGameServerStats::GetSteamGameServerStats();
	P_NATIVE_END;
}
// End Class USteamProGameServerStats Function GetSteamGameServerStats

// Begin Class USteamProGameServerStats Function GetUserAchievement
struct Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics
{
	struct SteamProGameServerStats_eventGetUserAchievement_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		bool bAchieved;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Gets the unlock status of the Achievement.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to get the achievement for.\n\x09* @param\x09Name\x09\x09\x09The 'API Name' of the achievement.\n\x09* @param\x09""bAchieved\x09\x09Returns the unlock status of the achievement.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
		{ "ToolTip", "Gets the unlock status of the Achievement.\n\n@param        SteamIDUser             The Steam ID of the user to get the achievement for.\n@param        Name                    The 'API Name' of the achievement.\n@param        bAchieved               Returns the unlock status of the achievement." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventGetUserAchievement_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventGetUserAchievement_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((SteamProGameServerStats_eventGetUserAchievement_Parms*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProGameServerStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProGameServerStats_eventGetUserAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProGameServerStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServerStats, nullptr, "GetUserAchievement", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::SteamProGameServerStats_eventGetUserAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::SteamProGameServerStats_eventGetUserAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServerStats::execGetUserAchievement)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUserAchievement(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_bAchieved);
	P_NATIVE_END;
}
// End Class USteamProGameServerStats Function GetUserAchievement

// Begin Class USteamProGameServerStats Function GetUserStatFloat
struct Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics
{
	struct SteamProGameServerStats_eventGetUserStatFloat_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		float Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Gets the current value of the a stat for the specified user.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to get the stat for.\n\x09* @param\x09Name\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""Data\x09\x09\x09The variable to return the stat value into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the specified user.\n\n@param        SteamIDUser             The Steam ID of the user to get the stat for.\n@param        Name                    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        Data                    The variable to return the stat value into." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventGetUserStatFloat_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventGetUserStatFloat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventGetUserStatFloat_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProGameServerStats_eventGetUserStatFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProGameServerStats_eventGetUserStatFloat_Parms), &Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServerStats, nullptr, "GetUserStatFloat", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::SteamProGameServerStats_eventGetUserStatFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::SteamProGameServerStats_eventGetUserStatFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServerStats::execGetUserStatFloat)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUserStatFloat(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USteamProGameServerStats Function GetUserStatFloat

// Begin Class USteamProGameServerStats Function GetUserStatInt
struct Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics
{
	struct SteamProGameServerStats_eventGetUserStatInt_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		int32 Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Gets the current value of the a stat for the specified user.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to get the stat for.\n\x09* @param\x09Name\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""Data\x09\x09\x09The variable to return the stat value into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the specified user.\n\n@param        SteamIDUser             The Steam ID of the user to get the stat for.\n@param        Name                    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        Data                    The variable to return the stat value into." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventGetUserStatInt_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventGetUserStatInt_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventGetUserStatInt_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProGameServerStats_eventGetUserStatInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProGameServerStats_eventGetUserStatInt_Parms), &Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServerStats, nullptr, "GetUserStatInt", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::SteamProGameServerStats_eventGetUserStatInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::SteamProGameServerStats_eventGetUserStatInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServerStats::execGetUserStatInt)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUserStatInt(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USteamProGameServerStats Function GetUserStatInt

// Begin Class USteamProGameServerStats Function ServerRequestUserStats
struct Z_Construct_UFunction_USteamProGameServerStats_ServerRequestUserStats_Statics
{
	struct SteamProGameServerStats_eventServerRequestUserStats_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamIDUser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Asynchronously downloads stats and achievements for the specified user from the server.\n\x09*\n\x09* These stats will only be auto-updated for clients currently playing on the server. For other users you'll need to call this function again to refresh any data.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to request the stats for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
		{ "ToolTip", "Asynchronously downloads stats and achievements for the specified user from the server.\n\nThese stats will only be auto-updated for clients currently playing on the server. For other users you'll need to call this function again to refresh any data.\n\n@param        SteamIDUser             The Steam ID of the user to request the stats for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProGameServerStats_ServerRequestUserStats_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventServerRequestUserStats_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnServerRequestUserStats__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3142702865
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServerStats_ServerRequestUserStats_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventServerRequestUserStats_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServerStats_ServerRequestUserStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_ServerRequestUserStats_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_ServerRequestUserStats_Statics::NewProp_SteamIDUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_ServerRequestUserStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServerStats_ServerRequestUserStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServerStats, nullptr, "ServerRequestUserStats", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServerStats_ServerRequestUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_ServerRequestUserStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServerStats_ServerRequestUserStats_Statics::SteamProGameServerStats_eventServerRequestUserStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_ServerRequestUserStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServerStats_ServerRequestUserStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServerStats_ServerRequestUserStats_Statics::SteamProGameServerStats_eventServerRequestUserStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServerStats_ServerRequestUserStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServerStats_ServerRequestUserStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServerStats::execServerRequestUserStats)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRequestUserStats(FOnServerRequestUserStats(Z_Param_Out_Callback),Z_Param_SteamIDUser);
	P_NATIVE_END;
}
// End Class USteamProGameServerStats Function ServerRequestUserStats

// Begin Class USteamProGameServerStats Function ServerStoreUserStats
struct Z_Construct_UFunction_USteamProGameServerStats_ServerStoreUserStats_Statics
{
	struct SteamProGameServerStats_eventServerStoreUserStats_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamIDUser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Send the changed stats and achievements data to the server for permanent storage for the specified user.\n\x09*\n\x09* If this fails then nothing is sent to the server. It's advisable to keep trying until the call is successful.\n\x09* This call can be rate limited. Call frequency should be on the order of minutes, rather than seconds. \n\x09* You should only be calling this during major state changes such as the end of a round, the map changing, or the user leaving a server.\n\x09* If you have stats or achievements that you have saved locally but haven't uploaded with this function when your application process \n\x09* ends then this function will automatically be called.\n\x09* You can find additional debug information written to the %steam_install%\\logs\\stats_log.txt file.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to store the stats of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
		{ "ToolTip", "Send the changed stats and achievements data to the server for permanent storage for the specified user.\n\nIf this fails then nothing is sent to the server. It's advisable to keep trying until the call is successful.\nThis call can be rate limited. Call frequency should be on the order of minutes, rather than seconds.\nYou should only be calling this during major state changes such as the end of a round, the map changing, or the user leaving a server.\nIf you have stats or achievements that you have saved locally but haven't uploaded with this function when your application process\nends then this function will automatically be called.\nYou can find additional debug information written to the %steam_install%\\logs\\stats_log.txt file.\n\n@param        SteamIDUser             The Steam ID of the user to store the stats of." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProGameServerStats_ServerStoreUserStats_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventServerStoreUserStats_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnServerStoreUserStats__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1246915340
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServerStats_ServerStoreUserStats_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventServerStoreUserStats_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServerStats_ServerStoreUserStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_ServerStoreUserStats_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_ServerStoreUserStats_Statics::NewProp_SteamIDUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_ServerStoreUserStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServerStats_ServerStoreUserStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServerStats, nullptr, "ServerStoreUserStats", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServerStats_ServerStoreUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_ServerStoreUserStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServerStats_ServerStoreUserStats_Statics::SteamProGameServerStats_eventServerStoreUserStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_ServerStoreUserStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServerStats_ServerStoreUserStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServerStats_ServerStoreUserStats_Statics::SteamProGameServerStats_eventServerStoreUserStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServerStats_ServerStoreUserStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServerStats_ServerStoreUserStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServerStats::execServerStoreUserStats)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStoreUserStats(FOnServerStoreUserStats(Z_Param_Out_Callback),Z_Param_SteamIDUser);
	P_NATIVE_END;
}
// End Class USteamProGameServerStats Function ServerStoreUserStats

// Begin Class USteamProGameServerStats Function SetUserAchievement
struct Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement_Statics
{
	struct SteamProGameServerStats_eventSetUserAchievement_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Unlocks an achievement for the specified user.\n\x09*\n\x09* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to unlock the achievement for.\n\x09* @param\x09Name\x09\x09\x09The 'API Name' of the Achievement to unlock.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
		{ "ToolTip", "Unlocks an achievement for the specified user.\n\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\n@param        SteamIDUser             The Steam ID of the user to unlock the achievement for.\n@param        Name                    The 'API Name' of the Achievement to unlock." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventSetUserAchievement_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventSetUserAchievement_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProGameServerStats_eventSetUserAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProGameServerStats_eventSetUserAchievement_Parms), &Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServerStats, nullptr, "SetUserAchievement", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement_Statics::SteamProGameServerStats_eventSetUserAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement_Statics::SteamProGameServerStats_eventSetUserAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServerStats::execSetUserAchievement)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetUserAchievement(Z_Param_SteamIDUser,Z_Param_Name);
	P_NATIVE_END;
}
// End Class USteamProGameServerStats Function SetUserAchievement

// Begin Class USteamProGameServerStats Function SetUserStatFloat
struct Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics
{
	struct SteamProGameServerStats_eventSetUserStatFloat_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		float Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Sets / updates the value of a given stat for the specified user.\n\x09*\n\x09* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to set the stat on.\n\x09* @param\x09Name\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""Data\x09\x09\x09The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
		{ "ToolTip", "Sets / updates the value of a given stat for the specified user.\n\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\n@param        SteamIDUser             The Steam ID of the user to set the stat on.\n@param        Name                    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        Data                    The new value of the stat. This must be an absolute value, it will not increment or decrement for you." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventSetUserStatFloat_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventSetUserStatFloat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventSetUserStatFloat_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProGameServerStats_eventSetUserStatFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProGameServerStats_eventSetUserStatFloat_Parms), &Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServerStats, nullptr, "SetUserStatFloat", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::SteamProGameServerStats_eventSetUserStatFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::SteamProGameServerStats_eventSetUserStatFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServerStats::execSetUserStatFloat)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetUserStatFloat(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// End Class USteamProGameServerStats Function SetUserStatFloat

// Begin Class USteamProGameServerStats Function SetUserStatInt
struct Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics
{
	struct SteamProGameServerStats_eventSetUserStatInt_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		int32 Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Sets / updates the value of a given stat for the specified user.\n\x09*\n\x09* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to set the stat on.\n\x09* @param\x09Name\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""Data\x09\x09\x09The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
		{ "ToolTip", "Sets / updates the value of a given stat for the specified user.\n\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\n@param        SteamIDUser             The Steam ID of the user to set the stat on.\n@param        Name                    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        Data                    The new value of the stat. This must be an absolute value, it will not increment or decrement for you." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventSetUserStatInt_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventSetUserStatInt_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventSetUserStatInt_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProGameServerStats_eventSetUserStatInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProGameServerStats_eventSetUserStatInt_Parms), &Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServerStats, nullptr, "SetUserStatInt", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::SteamProGameServerStats_eventSetUserStatInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::SteamProGameServerStats_eventSetUserStatInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServerStats::execSetUserStatInt)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FIntProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetUserStatInt(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// End Class USteamProGameServerStats Function SetUserStatInt

// Begin Class USteamProGameServerStats Function UpdateUserAvgRateStat
struct Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics
{
	struct SteamProGameServerStats_eventUpdateUserAvgRateStat_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		float CountThisSession;
		float SessionLength;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Updates an AVGRATE stat with new values for the specified user.\n\x09*\n\x09* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09* These updates will work only on stats that game servers are allowed to edit. \n\x09* If the \"Set By\" field for this stat is \"Official GS\" then only game servers that have been declared as officially \n\x09* controlled by you will be able to set it. To do this you must set the IP range of your official servers in the \n\x09* Dedicated Servers section of App Admin.\n\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09\x09The Steam ID of the user to update the AVGRATE stat for.\n\x09* @param\x09Name\x09\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""CountThisSession\x09The value accumulation since the last call to this function.\n\x09* @param\x09SessionLength\x09\x09The amount of time in seconds since the last call to this function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
		{ "ToolTip", "Updates an AVGRATE stat with new values for the specified user.\n\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\nThese updates will work only on stats that game servers are allowed to edit.\nIf the \"Set By\" field for this stat is \"Official GS\" then only game servers that have been declared as officially\ncontrolled by you will be able to set it. To do this you must set the IP range of your official servers in the\nDedicated Servers section of App Admin.\n\n\n@param        SteamIDUser                     The Steam ID of the user to update the AVGRATE stat for.\n@param        Name                            The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        CountThisSession        The value accumulation since the last call to this function.\n@param        SessionLength           The amount of time in seconds since the last call to this function." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CountThisSession;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SessionLength;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventUpdateUserAvgRateStat_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventUpdateUserAvgRateStat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_CountThisSession = { "CountThisSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventUpdateUserAvgRateStat_Parms, CountThisSession), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SessionLength = { "SessionLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServerStats_eventUpdateUserAvgRateStat_Parms, SessionLength), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProGameServerStats_eventUpdateUserAvgRateStat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProGameServerStats_eventUpdateUserAvgRateStat_Parms), &Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_CountThisSession,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SessionLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServerStats, nullptr, "UpdateUserAvgRateStat", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::SteamProGameServerStats_eventUpdateUserAvgRateStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::SteamProGameServerStats_eventUpdateUserAvgRateStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServerStats::execUpdateUserAvgRateStat)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CountThisSession);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SessionLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UpdateUserAvgRateStat(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_CountThisSession,Z_Param_SessionLength);
	P_NATIVE_END;
}
// End Class USteamProGameServerStats Function UpdateUserAvgRateStat

// Begin Class USteamProGameServerStats
void USteamProGameServerStats::StaticRegisterNativesUSteamProGameServerStats()
{
	UClass* Class = USteamProGameServerStats::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearUserAchievement", &USteamProGameServerStats::execClearUserAchievement },
		{ "GetSteamGameServerStats", &USteamProGameServerStats::execGetSteamGameServerStats },
		{ "GetUserAchievement", &USteamProGameServerStats::execGetUserAchievement },
		{ "GetUserStatFloat", &USteamProGameServerStats::execGetUserStatFloat },
		{ "GetUserStatInt", &USteamProGameServerStats::execGetUserStatInt },
		{ "ServerRequestUserStats", &USteamProGameServerStats::execServerRequestUserStats },
		{ "ServerStoreUserStats", &USteamProGameServerStats::execServerStoreUserStats },
		{ "SetUserAchievement", &USteamProGameServerStats::execSetUserAchievement },
		{ "SetUserStatFloat", &USteamProGameServerStats::execSetUserStatFloat },
		{ "SetUserStatInt", &USteamProGameServerStats::execSetUserStatInt },
		{ "UpdateUserAvgRateStat", &USteamProGameServerStats::execUpdateUserAvgRateStat },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProGameServerStats);
UClass* Z_Construct_UClass_USteamProGameServerStats_NoRegister()
{
	return USteamProGameServerStats::StaticClass();
}
struct Z_Construct_UClass_USteamProGameServerStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamGameServerStats/SteamGameServerStats.h" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GSStatsUnloaded_MetaData[] = {
		{ "Category", "SteamCore|GameServerStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSStatsUnloaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProGameServerStats_ClearUserAchievement, "ClearUserAchievement" }, // 353820997
		{ &Z_Construct_UFunction_USteamProGameServerStats_GetSteamGameServerStats, "GetSteamGameServerStats" }, // 479793536
		{ &Z_Construct_UFunction_USteamProGameServerStats_GetUserAchievement, "GetUserAchievement" }, // 3436800279
		{ &Z_Construct_UFunction_USteamProGameServerStats_GetUserStatFloat, "GetUserStatFloat" }, // 3732542367
		{ &Z_Construct_UFunction_USteamProGameServerStats_GetUserStatInt, "GetUserStatInt" }, // 2095297542
		{ &Z_Construct_UFunction_USteamProGameServerStats_ServerRequestUserStats, "ServerRequestUserStats" }, // 397630240
		{ &Z_Construct_UFunction_USteamProGameServerStats_ServerStoreUserStats, "ServerStoreUserStats" }, // 424583298
		{ &Z_Construct_UFunction_USteamProGameServerStats_SetUserAchievement, "SetUserAchievement" }, // 1990765895
		{ &Z_Construct_UFunction_USteamProGameServerStats_SetUserStatFloat, "SetUserStatFloat" }, // 1704377126
		{ &Z_Construct_UFunction_USteamProGameServerStats_SetUserStatInt, "SetUserStatInt" }, // 3507011825
		{ &Z_Construct_UFunction_USteamProGameServerStats_UpdateUserAvgRateStat, "UpdateUserAvgRateStat" }, // 376351468
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProGameServerStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProGameServerStats_Statics::NewProp_GSStatsUnloaded = { "GSStatsUnloaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProGameServerStats, GSStatsUnloaded), Z_Construct_UDelegateFunction_SteamCorePro_OnGSStatsUnloaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GSStatsUnloaded_MetaData), NewProp_GSStatsUnloaded_MetaData) }; // 2316281783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamProGameServerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProGameServerStats_Statics::NewProp_GSStatsUnloaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProGameServerStats_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamProGameServerStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProGameServerStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProGameServerStats_Statics::ClassParams = {
	&USteamProGameServerStats::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamProGameServerStats_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamProGameServerStats_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProGameServerStats_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProGameServerStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProGameServerStats()
{
	if (!Z_Registration_Info_UClass_USteamProGameServerStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProGameServerStats.OuterSingleton, Z_Construct_UClass_USteamProGameServerStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProGameServerStats.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProGameServerStats>()
{
	return USteamProGameServerStats::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProGameServerStats);
// End Class USteamProGameServerStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStats_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProGameServerStats, USteamProGameServerStats::StaticClass, TEXT("USteamProGameServerStats"), &Z_Registration_Info_UClass_USteamProGameServerStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProGameServerStats), 693666098U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStats_h_1507654123(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServerStats_SteamGameServerStats_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
