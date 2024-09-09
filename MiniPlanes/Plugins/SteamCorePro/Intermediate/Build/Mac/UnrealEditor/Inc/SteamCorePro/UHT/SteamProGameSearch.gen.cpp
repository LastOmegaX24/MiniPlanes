// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamGameSearch/SteamProGameSearch.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamProGameSearch() {}

// Begin Cross Module References
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProGameSearch();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProGameSearch_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamGameSearchErrorCode();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamPlayerResult();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_EndGameResultDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_RequestPlayersForGameFinalResultDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_RequestPlayersForGameProgressDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_RequestPlayersForGameResultDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_SearchForGameProgressDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_SearchForGameResultDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_SubmitPlayerResultResultDelegate__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProGameSearch Function AcceptGame
struct Z_Construct_UFunction_USteamProGameSearch_AcceptGame_Statics
{
	struct SteamProGameSearch_eventAcceptGame_Parms
	{
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* after receiving SearchForGameResultCallback_t, accept or decline the game\n\x09* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
		{ "ToolTip", "* after receiving SearchForGameResultCallback_t, accept or decline the game\n* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProGameSearch_AcceptGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProGameSearch_AcceptGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventAcceptGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1651315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameSearch_AcceptGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_AcceptGame_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_AcceptGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_AcceptGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameSearch_AcceptGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameSearch, nullptr, "AcceptGame", nullptr, nullptr, Z_Construct_UFunction_USteamProGameSearch_AcceptGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_AcceptGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameSearch_AcceptGame_Statics::SteamProGameSearch_eventAcceptGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_AcceptGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameSearch_AcceptGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameSearch_AcceptGame_Statics::SteamProGameSearch_eventAcceptGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameSearch_AcceptGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameSearch_AcceptGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameSearch::execAcceptGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->AcceptGame();
	P_NATIVE_END;
}
// End Class USteamProGameSearch Function AcceptGame

// Begin Class USteamProGameSearch Function AddGameSearchParams
struct Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics
{
	struct SteamProGameSearch_eventAddGameSearchParams_Parms
	{
		FString KeyToFind;
		TArray<FString> ValuesToFind;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* A keyname and a list of comma separated values: one of which is must be found in order for the match to qualify\n\x09* fails if a search is currently in progress\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
		{ "ToolTip", "* A keyname and a list of comma separated values: one of which is must be found in order for the match to qualify\n* fails if a search is currently in progress" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToFind;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValuesToFind_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValuesToFind;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::NewProp_KeyToFind = { "KeyToFind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventAddGameSearchParams_Parms, KeyToFind), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind_Inner = { "ValuesToFind", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind = { "ValuesToFind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventAddGameSearchParams_Parms, ValuesToFind), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventAddGameSearchParams_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1651315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::NewProp_KeyToFind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameSearch, nullptr, "AddGameSearchParams", nullptr, nullptr, Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::SteamProGameSearch_eventAddGameSearchParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::SteamProGameSearch_eventAddGameSearchParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameSearch::execAddGameSearchParams)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KeyToFind);
	P_GET_TARRAY(FString,Z_Param_ValuesToFind);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->AddGameSearchParams(Z_Param_KeyToFind,Z_Param_ValuesToFind);
	P_NATIVE_END;
}
// End Class USteamProGameSearch Function AddGameSearchParams

// Begin Class USteamProGameSearch Function CancelRequestPlayersForGame
struct Z_Construct_UFunction_USteamProGameSearch_CancelRequestPlayersForGame_Statics
{
	struct SteamProGameSearch_eventCancelRequestPlayersForGame_Parms
	{
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* cancel request and leave the pool of game hosts looking for players\n\x09* if a set of players has already been sent to host, all players will receive SearchForGameHostFailedToConfirm_t\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
		{ "ToolTip", "* cancel request and leave the pool of game hosts looking for players\n* if a set of players has already been sent to host, all players will receive SearchForGameHostFailedToConfirm_t" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventCancelRequestPlayersForGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1651315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameSearch_CancelRequestPlayersForGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_CancelRequestPlayersForGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameSearch_CancelRequestPlayersForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameSearch, nullptr, "CancelRequestPlayersForGame", nullptr, nullptr, Z_Construct_UFunction_USteamProGameSearch_CancelRequestPlayersForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_CancelRequestPlayersForGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameSearch_CancelRequestPlayersForGame_Statics::SteamProGameSearch_eventCancelRequestPlayersForGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_CancelRequestPlayersForGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameSearch_CancelRequestPlayersForGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameSearch_CancelRequestPlayersForGame_Statics::SteamProGameSearch_eventCancelRequestPlayersForGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameSearch_CancelRequestPlayersForGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameSearch_CancelRequestPlayersForGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameSearch::execCancelRequestPlayersForGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->CancelRequestPlayersForGame();
	P_NATIVE_END;
}
// End Class USteamProGameSearch Function CancelRequestPlayersForGame

// Begin Class USteamProGameSearch Function DeclineGame
struct Z_Construct_UFunction_USteamProGameSearch_DeclineGame_Statics
{
	struct SteamProGameSearch_eventDeclineGame_Parms
	{
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* after receiving SearchForGameResultCallback_t, accept or decline the game\n\x09* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
		{ "ToolTip", "* after receiving SearchForGameResultCallback_t, accept or decline the game\n* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProGameSearch_DeclineGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProGameSearch_DeclineGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventDeclineGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1651315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameSearch_DeclineGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_DeclineGame_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_DeclineGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_DeclineGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameSearch_DeclineGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameSearch, nullptr, "DeclineGame", nullptr, nullptr, Z_Construct_UFunction_USteamProGameSearch_DeclineGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_DeclineGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameSearch_DeclineGame_Statics::SteamProGameSearch_eventDeclineGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_DeclineGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameSearch_DeclineGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameSearch_DeclineGame_Statics::SteamProGameSearch_eventDeclineGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameSearch_DeclineGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameSearch_DeclineGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameSearch::execDeclineGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->DeclineGame();
	P_NATIVE_END;
}
// End Class USteamProGameSearch Function DeclineGame

// Begin Class USteamProGameSearch Function EndGame
struct Z_Construct_UFunction_USteamProGameSearch_EndGame_Statics
{
	struct SteamProGameSearch_eventEndGame_Parms
	{
		FString UniqueGameID;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* ends the game. no further SubmitPlayerResults for ullUniqueGameID will be accepted\n\x09* any future requests will provide a new ullUniqueGameID\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
		{ "ToolTip", "* ends the game. no further SubmitPlayerResults for ullUniqueGameID will be accepted\n* any future requests will provide a new ullUniqueGameID" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameSearch_EndGame_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventEndGame_Parms, UniqueGameID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProGameSearch_EndGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProGameSearch_EndGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventEndGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1651315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameSearch_EndGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_EndGame_Statics::NewProp_UniqueGameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_EndGame_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_EndGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_EndGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameSearch_EndGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameSearch, nullptr, "EndGame", nullptr, nullptr, Z_Construct_UFunction_USteamProGameSearch_EndGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_EndGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameSearch_EndGame_Statics::SteamProGameSearch_eventEndGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_EndGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameSearch_EndGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameSearch_EndGame_Statics::SteamProGameSearch_eventEndGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameSearch_EndGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameSearch_EndGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameSearch::execEndGame)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UniqueGameID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->EndGame(Z_Param_UniqueGameID);
	P_NATIVE_END;
}
// End Class USteamProGameSearch Function EndGame

// Begin Class USteamProGameSearch Function EndGameSearch
struct Z_Construct_UFunction_USteamProGameSearch_EndGameSearch_Statics
{
	struct SteamProGameSearch_eventEndGameSearch_Parms
	{
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* leaves queue if still waiting\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
		{ "ToolTip", "* leaves queue if still waiting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProGameSearch_EndGameSearch_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProGameSearch_EndGameSearch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventEndGameSearch_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1651315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameSearch_EndGameSearch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_EndGameSearch_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_EndGameSearch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_EndGameSearch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameSearch_EndGameSearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameSearch, nullptr, "EndGameSearch", nullptr, nullptr, Z_Construct_UFunction_USteamProGameSearch_EndGameSearch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_EndGameSearch_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameSearch_EndGameSearch_Statics::SteamProGameSearch_eventEndGameSearch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_EndGameSearch_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameSearch_EndGameSearch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameSearch_EndGameSearch_Statics::SteamProGameSearch_eventEndGameSearch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameSearch_EndGameSearch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameSearch_EndGameSearch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameSearch::execEndGameSearch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->EndGameSearch();
	P_NATIVE_END;
}
// End Class USteamProGameSearch Function EndGameSearch

// Begin Class USteamProGameSearch Function GetSteamGameSearch
struct Z_Construct_UFunction_USteamProGameSearch_GetSteamGameSearch_Statics
{
	struct SteamProGameSearch_eventGetSteamGameSearch_Parms
	{
		USteamProGameSearch* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProGameSearch_GetSteamGameSearch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventGetSteamGameSearch_Parms, ReturnValue), Z_Construct_UClass_USteamProGameSearch_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameSearch_GetSteamGameSearch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_GetSteamGameSearch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_GetSteamGameSearch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameSearch_GetSteamGameSearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameSearch, nullptr, "GetSteamGameSearch", nullptr, nullptr, Z_Construct_UFunction_USteamProGameSearch_GetSteamGameSearch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_GetSteamGameSearch_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameSearch_GetSteamGameSearch_Statics::SteamProGameSearch_eventGetSteamGameSearch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_GetSteamGameSearch_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameSearch_GetSteamGameSearch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameSearch_GetSteamGameSearch_Statics::SteamProGameSearch_eventGetSteamGameSearch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameSearch_GetSteamGameSearch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameSearch_GetSteamGameSearch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameSearch::execGetSteamGameSearch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProGameSearch**)Z_Param__Result=USteamProGameSearch::GetSteamGameSearch();
	P_NATIVE_END;
}
// End Class USteamProGameSearch Function GetSteamGameSearch

// Begin Class USteamProGameSearch Function HostConfirmGameStart
struct Z_Construct_UFunction_USteamProGameSearch_HostConfirmGameStart_Statics
{
	struct SteamProGameSearch_eventHostConfirmGameStart_Parms
	{
		FString UniqueGameID;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* accept the player list and release connection details to players\n\x09* players will only be given connection details and host steamid when this is called\n\x09* (allows host to accept after all players confirm, some confirm, or none confirm. decision is entirely up to the host)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
		{ "ToolTip", "* accept the player list and release connection details to players\n* players will only be given connection details and host steamid when this is called\n* (allows host to accept after all players confirm, some confirm, or none confirm. decision is entirely up to the host)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameSearch_HostConfirmGameStart_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventHostConfirmGameStart_Parms, UniqueGameID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventHostConfirmGameStart_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1651315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameSearch_HostConfirmGameStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_HostConfirmGameStart_Statics::NewProp_UniqueGameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_HostConfirmGameStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameSearch_HostConfirmGameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameSearch, nullptr, "HostConfirmGameStart", nullptr, nullptr, Z_Construct_UFunction_USteamProGameSearch_HostConfirmGameStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_HostConfirmGameStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameSearch_HostConfirmGameStart_Statics::SteamProGameSearch_eventHostConfirmGameStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_HostConfirmGameStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameSearch_HostConfirmGameStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameSearch_HostConfirmGameStart_Statics::SteamProGameSearch_eventHostConfirmGameStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameSearch_HostConfirmGameStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameSearch_HostConfirmGameStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameSearch::execHostConfirmGameStart)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UniqueGameID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->HostConfirmGameStart(Z_Param_UniqueGameID);
	P_NATIVE_END;
}
// End Class USteamProGameSearch Function HostConfirmGameStart

// Begin Class USteamProGameSearch Function RequestPlayersForGame
struct Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics
{
	struct SteamProGameSearch_eventRequestPlayersForGame_Parms
	{
		int32 PlayerMin;
		int32 PlayerMax;
		int32 MaxTeamSize;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* mark server as available for more players with nPlayerMin,nPlayerMax desired\n\x09* accept no lobbies with playercount greater than nMaxTeamSize\n\x09* the set of lobbies returned must be partitionable into teams of no more than nMaxTeamSize\n\x09* RequestPlayersForGameNotificationCallback_t callback will be sent when the search has started\n\x09* multiple RequestPlayersForGameResultCallback_t callbacks will follow when players are found\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
		{ "ToolTip", "* mark server as available for more players with nPlayerMin,nPlayerMax desired\n* accept no lobbies with playercount greater than nMaxTeamSize\n* the set of lobbies returned must be partitionable into teams of no more than nMaxTeamSize\n* RequestPlayersForGameNotificationCallback_t callback will be sent when the search has started\n* multiple RequestPlayersForGameResultCallback_t callbacks will follow when players are found" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTeamSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMin = { "PlayerMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventRequestPlayersForGame_Parms, PlayerMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMax = { "PlayerMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventRequestPlayersForGame_Parms, PlayerMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::NewProp_MaxTeamSize = { "MaxTeamSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventRequestPlayersForGame_Parms, MaxTeamSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventRequestPlayersForGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1651315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::NewProp_MaxTeamSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameSearch, nullptr, "RequestPlayersForGame", nullptr, nullptr, Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::SteamProGameSearch_eventRequestPlayersForGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::SteamProGameSearch_eventRequestPlayersForGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameSearch::execRequestPlayersForGame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMin);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMax);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxTeamSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->RequestPlayersForGame(Z_Param_PlayerMin,Z_Param_PlayerMax,Z_Param_MaxTeamSize);
	P_NATIVE_END;
}
// End Class USteamProGameSearch Function RequestPlayersForGame

// Begin Class USteamProGameSearch Function RetrieveConnectionDetails
struct Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics
{
	struct SteamProGameSearch_eventRetrieveConnectionDetails_Parms
	{
		FSteamID SteamIDHost;
		FString ConnectionDetails;
		int32 NumConnectionDetails;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* after receiving GameStartedByHostCallback_t get connection details to server\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
		{ "ToolTip", "* after receiving GameStartedByHostCallback_t get connection details to server" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDHost;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionDetails;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumConnectionDetails;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::NewProp_SteamIDHost = { "SteamIDHost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventRetrieveConnectionDetails_Parms, SteamIDHost), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::NewProp_ConnectionDetails = { "ConnectionDetails", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventRetrieveConnectionDetails_Parms, ConnectionDetails), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::NewProp_NumConnectionDetails = { "NumConnectionDetails", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventRetrieveConnectionDetails_Parms, NumConnectionDetails), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventRetrieveConnectionDetails_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1651315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::NewProp_SteamIDHost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::NewProp_ConnectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::NewProp_NumConnectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameSearch, nullptr, "RetrieveConnectionDetails", nullptr, nullptr, Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::SteamProGameSearch_eventRetrieveConnectionDetails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::SteamProGameSearch_eventRetrieveConnectionDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameSearch::execRetrieveConnectionDetails)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDHost);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ConnectionDetails);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumConnectionDetails);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->RetrieveConnectionDetails(Z_Param_SteamIDHost,Z_Param_Out_ConnectionDetails,Z_Param_NumConnectionDetails);
	P_NATIVE_END;
}
// End Class USteamProGameSearch Function RetrieveConnectionDetails

// Begin Class USteamProGameSearch Function SearchForGameSolo
struct Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo_Statics
{
	struct SteamProGameSearch_eventSearchForGameSolo_Parms
	{
		int32 PlayerMin;
		int32 PlayerMax;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* user enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n\x09* periodic callbacks will be sent as queue time estimates change\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
		{ "ToolTip", "* user enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n* periodic callbacks will be sent as queue time estimates change" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMax;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMin = { "PlayerMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventSearchForGameSolo_Parms, PlayerMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMax = { "PlayerMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventSearchForGameSolo_Parms, PlayerMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventSearchForGameSolo_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1651315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameSearch, nullptr, "SearchForGameSolo", nullptr, nullptr, Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo_Statics::SteamProGameSearch_eventSearchForGameSolo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo_Statics::SteamProGameSearch_eventSearchForGameSolo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameSearch::execSearchForGameSolo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMin);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SearchForGameSolo(Z_Param_PlayerMin,Z_Param_PlayerMax);
	P_NATIVE_END;
}
// End Class USteamProGameSearch Function SearchForGameSolo

// Begin Class USteamProGameSearch Function SearchForGameWithLobby
struct Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics
{
	struct SteamProGameSearch_eventSearchForGameWithLobby_Parms
	{
		FSteamID SteamIDLobby;
		int32 PlayerMin;
		int32 PlayerMax;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* all players in lobby enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n\x09* if not the owner of the lobby or search already in progress this call fails\n\x09* periodic callbacks will be sent as queue time estimates change\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
		{ "ToolTip", "* all players in lobby enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n* if not the owner of the lobby or search already in progress this call fails\n* periodic callbacks will be sent as queue time estimates change" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMax;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventSearchForGameWithLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMin = { "PlayerMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventSearchForGameWithLobby_Parms, PlayerMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMax = { "PlayerMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventSearchForGameWithLobby_Parms, PlayerMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventSearchForGameWithLobby_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1651315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameSearch, nullptr, "SearchForGameWithLobby", nullptr, nullptr, Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::SteamProGameSearch_eventSearchForGameWithLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::SteamProGameSearch_eventSearchForGameWithLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameSearch::execSearchForGameWithLobby)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMin);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SearchForGameWithLobby(Z_Param_SteamIDLobby,Z_Param_PlayerMin,Z_Param_PlayerMax);
	P_NATIVE_END;
}
// End Class USteamProGameSearch Function SearchForGameWithLobby

// Begin Class USteamProGameSearch Function SetConnectionDetails
struct Z_Construct_UFunction_USteamProGameSearch_SetConnectionDetails_Statics
{
	struct SteamProGameSearch_eventSetConnectionDetails_Parms
	{
		FString ConnectionDetails;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* set connection details for players once game is found so they can connect to this server\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
		{ "ToolTip", "* set connection details for players once game is found so they can connect to this server" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionDetails;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameSearch_SetConnectionDetails_Statics::NewProp_ConnectionDetails = { "ConnectionDetails", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventSetConnectionDetails_Parms, ConnectionDetails), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventSetConnectionDetails_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1651315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameSearch_SetConnectionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SetConnectionDetails_Statics::NewProp_ConnectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_SetConnectionDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameSearch_SetConnectionDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameSearch, nullptr, "SetConnectionDetails", nullptr, nullptr, Z_Construct_UFunction_USteamProGameSearch_SetConnectionDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_SetConnectionDetails_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameSearch_SetConnectionDetails_Statics::SteamProGameSearch_eventSetConnectionDetails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_SetConnectionDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameSearch_SetConnectionDetails_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameSearch_SetConnectionDetails_Statics::SteamProGameSearch_eventSetConnectionDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameSearch_SetConnectionDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameSearch_SetConnectionDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameSearch::execSetConnectionDetails)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ConnectionDetails);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SetConnectionDetails(Z_Param_ConnectionDetails);
	P_NATIVE_END;
}
// End Class USteamProGameSearch Function SetConnectionDetails

// Begin Class USteamProGameSearch Function SetGameHostParams
struct Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics
{
	struct SteamProGameSearch_eventSetGameHostParams_Parms
	{
		FString Key;
		TArray<FString> Values;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* a keyname and a list of comma separated values: all the values you allow\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
		{ "ToolTip", "* a keyname and a list of comma separated values: all the values you allow" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventSetGameHostParams_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventSetGameHostParams_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventSetGameHostParams_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1651315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameSearch, nullptr, "SetGameHostParams", nullptr, nullptr, Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::SteamProGameSearch_eventSetGameHostParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::SteamProGameSearch_eventSetGameHostParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameSearch::execSetGameHostParams)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY(FString,Z_Param_Values);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SetGameHostParams(Z_Param_Key,Z_Param_Values);
	P_NATIVE_END;
}
// End Class USteamProGameSearch Function SetGameHostParams

// Begin Class USteamProGameSearch Function SubmitPlayerResult
struct Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics
{
	struct SteamProGameSearch_eventSubmitPlayerResult_Parms
	{
		FString UniqueGameID;
		FSteamID SteamIDPlayer;
		ESteamPlayerResult PlayerResult;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* submit a result for one player. does not end the game. ullUniqueGameID continues to describe this game\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
		{ "ToolTip", "* submit a result for one player. does not end the game. ullUniqueGameID continues to describe this game" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDPlayer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerResult;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventSubmitPlayerResult_Parms, UniqueGameID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::NewProp_SteamIDPlayer = { "SteamIDPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventSubmitPlayerResult_Parms, SteamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult = { "PlayerResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventSubmitPlayerResult_Parms, PlayerResult), Z_Construct_UEnum_SteamCorePro_ESteamPlayerResult, METADATA_PARAMS(0, nullptr) }; // 1977819121
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameSearch_eventSubmitPlayerResult_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1651315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::NewProp_UniqueGameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::NewProp_SteamIDPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameSearch, nullptr, "SubmitPlayerResult", nullptr, nullptr, Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::SteamProGameSearch_eventSubmitPlayerResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::SteamProGameSearch_eventSubmitPlayerResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameSearch::execSubmitPlayerResult)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UniqueGameID);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDPlayer);
	P_GET_ENUM(ESteamPlayerResult,Z_Param_PlayerResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SubmitPlayerResult(Z_Param_UniqueGameID,Z_Param_SteamIDPlayer,ESteamPlayerResult(Z_Param_PlayerResult));
	P_NATIVE_END;
}
// End Class USteamProGameSearch Function SubmitPlayerResult

// Begin Class USteamProGameSearch
void USteamProGameSearch::StaticRegisterNativesUSteamProGameSearch()
{
	UClass* Class = USteamProGameSearch::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AcceptGame", &USteamProGameSearch::execAcceptGame },
		{ "AddGameSearchParams", &USteamProGameSearch::execAddGameSearchParams },
		{ "CancelRequestPlayersForGame", &USteamProGameSearch::execCancelRequestPlayersForGame },
		{ "DeclineGame", &USteamProGameSearch::execDeclineGame },
		{ "EndGame", &USteamProGameSearch::execEndGame },
		{ "EndGameSearch", &USteamProGameSearch::execEndGameSearch },
		{ "GetSteamGameSearch", &USteamProGameSearch::execGetSteamGameSearch },
		{ "HostConfirmGameStart", &USteamProGameSearch::execHostConfirmGameStart },
		{ "RequestPlayersForGame", &USteamProGameSearch::execRequestPlayersForGame },
		{ "RetrieveConnectionDetails", &USteamProGameSearch::execRetrieveConnectionDetails },
		{ "SearchForGameSolo", &USteamProGameSearch::execSearchForGameSolo },
		{ "SearchForGameWithLobby", &USteamProGameSearch::execSearchForGameWithLobby },
		{ "SetConnectionDetails", &USteamProGameSearch::execSetConnectionDetails },
		{ "SetGameHostParams", &USteamProGameSearch::execSetGameHostParams },
		{ "SubmitPlayerResult", &USteamProGameSearch::execSubmitPlayerResult },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProGameSearch);
UClass* Z_Construct_UClass_USteamProGameSearch_NoRegister()
{
	return USteamProGameSearch::StaticClass();
}
struct Z_Construct_UClass_USteamProGameSearch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n* Purpose: Functions for match making services for clients to get to favorites\n* and to operate on game lobbies.\n*/" },
		{ "IncludePath", "SteamGameSearch/SteamProGameSearch.h" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
		{ "ToolTip", "* Purpose: Functions for match making services for clients to get to favorites\n* and to operate on game lobbies." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchForGameProgressDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchForGameResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestPlayersForGameProgressDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestPlayersForGameResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestPlayersForGameFinalResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmitPlayerResultResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndGameResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamProGameSearch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SearchForGameProgressDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SearchForGameResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestPlayersForGameProgressDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestPlayersForGameResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestPlayersForGameFinalResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SubmitPlayerResultResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EndGameResultDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProGameSearch_AcceptGame, "AcceptGame" }, // 2161915664
		{ &Z_Construct_UFunction_USteamProGameSearch_AddGameSearchParams, "AddGameSearchParams" }, // 2727864165
		{ &Z_Construct_UFunction_USteamProGameSearch_CancelRequestPlayersForGame, "CancelRequestPlayersForGame" }, // 2492803507
		{ &Z_Construct_UFunction_USteamProGameSearch_DeclineGame, "DeclineGame" }, // 1923625275
		{ &Z_Construct_UFunction_USteamProGameSearch_EndGame, "EndGame" }, // 2824456659
		{ &Z_Construct_UFunction_USteamProGameSearch_EndGameSearch, "EndGameSearch" }, // 2536443095
		{ &Z_Construct_UFunction_USteamProGameSearch_GetSteamGameSearch, "GetSteamGameSearch" }, // 962547514
		{ &Z_Construct_UFunction_USteamProGameSearch_HostConfirmGameStart, "HostConfirmGameStart" }, // 2624145549
		{ &Z_Construct_UFunction_USteamProGameSearch_RequestPlayersForGame, "RequestPlayersForGame" }, // 4198221212
		{ &Z_Construct_UFunction_USteamProGameSearch_RetrieveConnectionDetails, "RetrieveConnectionDetails" }, // 2178550392
		{ &Z_Construct_UFunction_USteamProGameSearch_SearchForGameSolo, "SearchForGameSolo" }, // 1368893178
		{ &Z_Construct_UFunction_USteamProGameSearch_SearchForGameWithLobby, "SearchForGameWithLobby" }, // 4284960360
		{ &Z_Construct_UFunction_USteamProGameSearch_SetConnectionDetails, "SetConnectionDetails" }, // 167036974
		{ &Z_Construct_UFunction_USteamProGameSearch_SetGameHostParams, "SetGameHostParams" }, // 3071964096
		{ &Z_Construct_UFunction_USteamProGameSearch_SubmitPlayerResult, "SubmitPlayerResult" }, // 2411266720
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProGameSearch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProGameSearch_Statics::NewProp_SearchForGameProgressDelegate = { "SearchForGameProgressDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProGameSearch, SearchForGameProgressDelegate), Z_Construct_UDelegateFunction_SteamCorePro_SearchForGameProgressDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchForGameProgressDelegate_MetaData), NewProp_SearchForGameProgressDelegate_MetaData) }; // 1300393465
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProGameSearch_Statics::NewProp_SearchForGameResultDelegate = { "SearchForGameResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProGameSearch, SearchForGameResultDelegate), Z_Construct_UDelegateFunction_SteamCorePro_SearchForGameResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchForGameResultDelegate_MetaData), NewProp_SearchForGameResultDelegate_MetaData) }; // 1031768008
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate = { "RequestPlayersForGameProgressDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProGameSearch, RequestPlayersForGameProgressDelegate), Z_Construct_UDelegateFunction_SteamCorePro_RequestPlayersForGameProgressDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestPlayersForGameProgressDelegate_MetaData), NewProp_RequestPlayersForGameProgressDelegate_MetaData) }; // 3794560392
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate = { "RequestPlayersForGameResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProGameSearch, RequestPlayersForGameResultDelegate), Z_Construct_UDelegateFunction_SteamCorePro_RequestPlayersForGameResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestPlayersForGameResultDelegate_MetaData), NewProp_RequestPlayersForGameResultDelegate_MetaData) }; // 1758113836
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate = { "RequestPlayersForGameFinalResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProGameSearch, RequestPlayersForGameFinalResultDelegate), Z_Construct_UDelegateFunction_SteamCorePro_RequestPlayersForGameFinalResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestPlayersForGameFinalResultDelegate_MetaData), NewProp_RequestPlayersForGameFinalResultDelegate_MetaData) }; // 1558763409
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate = { "SubmitPlayerResultResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProGameSearch, SubmitPlayerResultResultDelegate), Z_Construct_UDelegateFunction_SteamCorePro_SubmitPlayerResultResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmitPlayerResultResultDelegate_MetaData), NewProp_SubmitPlayerResultResultDelegate_MetaData) }; // 3915109867
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProGameSearch_Statics::NewProp_EndGameResultDelegate = { "EndGameResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProGameSearch, EndGameResultDelegate), Z_Construct_UDelegateFunction_SteamCorePro_EndGameResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndGameResultDelegate_MetaData), NewProp_EndGameResultDelegate_MetaData) }; // 3509483070
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamProGameSearch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProGameSearch_Statics::NewProp_SearchForGameProgressDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProGameSearch_Statics::NewProp_SearchForGameResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProGameSearch_Statics::NewProp_EndGameResultDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProGameSearch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamProGameSearch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProGameSearch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProGameSearch_Statics::ClassParams = {
	&USteamProGameSearch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamProGameSearch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamProGameSearch_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProGameSearch_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProGameSearch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProGameSearch()
{
	if (!Z_Registration_Info_UClass_USteamProGameSearch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProGameSearch.OuterSingleton, Z_Construct_UClass_USteamProGameSearch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProGameSearch.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProGameSearch>()
{
	return USteamProGameSearch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProGameSearch);
// End Class USteamProGameSearch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameSearch_SteamProGameSearch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProGameSearch, USteamProGameSearch::StaticClass, TEXT("USteamProGameSearch"), &Z_Registration_Info_UClass_USteamProGameSearch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProGameSearch), 2162454898U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameSearch_SteamProGameSearch_h_3286856278(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameSearch_SteamProGameSearch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameSearch_SteamProGameSearch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
