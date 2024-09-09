// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamMatchmaking/SteamMatchmaking.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamMatchmaking() {}

// Begin Cross Module References
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProMatchmaking();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProMatchmaking_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamChatEntryType();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamFavoriteFlags();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamLobbyComparison();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamLobbyType();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListAccountsUpdated__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListChanged__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatMsg__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatUpdate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyDataUpdate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyEnter__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyGameCreated__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyInvite__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyKicked__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCORESHARED_API UEnum* Z_Construct_UEnum_SteamCoreShared_ESteamLobbyDistanceFilter();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProMatchmaking Function AddFavoriteGame
struct Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics
{
	struct SteamProMatchmaking_eventAddFavoriteGame_Parms
	{
		int32 AppID;
		FString IP;
		int32 ConnectionPort;
		int32 QueryPort;
		TArray<ESteamFavoriteFlags> Flags;
		int32 TimeLastPlayedOnServer;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Adds the game server to the local favorites list or updates the time played of the server if it already exists in the list.\n\x09*\n\x09* @param\x09""AppID\x09\x09\x09\x09\x09\x09The App ID of the game.\n\x09* @param\x09IP\x09\x09\x09\x09\x09\x09\x09The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09""ConnectionPort\x09\x09\x09\x09The port used to connect to the server, in host order.\n\x09* @param\x09QueryPort\x09\x09\x09\x09\x09The port used to query the server, in host order.\n\x09* @param\x09""Flags\x09\x09\x09\x09\x09\x09Sets the whether the server should be added to the favorites list or history list. See k_unFavoriteFlagNone for more information.\n\x09* @param\x09TimeLastPlayedOnServer\x09\x09This should be the current time in Unix epoch format (seconds since Jan 1st, 1970).\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Adds the game server to the local favorites list or updates the time played of the server if it already exists in the list.\n\n@param        AppID                                           The App ID of the game.\n@param        IP                                                      The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        ConnectionPort                          The port used to connect to the server, in host order.\n@param        QueryPort                                       The port used to query the server, in host order.\n@param        Flags                                           Sets the whether the server should be added to the favorites list or history list. See k_unFavoriteFlagNone for more information.\n@param        TimeLastPlayedOnServer          This should be the current time in Unix epoch format (seconds since Jan 1st, 1970)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeLastPlayedOnServer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventAddFavoriteGame_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventAddFavoriteGame_Parms, IP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventAddFavoriteGame_Parms, ConnectionPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventAddFavoriteGame_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCorePro_ESteamFavoriteFlags, METADATA_PARAMS(0, nullptr) }; // 1738200489
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventAddFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1738200489
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer = { "TimeLastPlayedOnServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventAddFavoriteGame_Parms, TimeLastPlayedOnServer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventAddFavoriteGame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::NewProp_ConnectionPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "AddFavoriteGame", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::SteamProMatchmaking_eventAddFavoriteGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::SteamProMatchmaking_eventAddFavoriteGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execAddFavoriteGame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FStrProperty,Z_Param_IP);
	P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionPort);
	P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
	P_GET_TARRAY(ESteamFavoriteFlags,Z_Param_Flags);
	P_GET_PROPERTY(FIntProperty,Z_Param_TimeLastPlayedOnServer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProMatchmaking::AddFavoriteGame(Z_Param_AppID,Z_Param_IP,Z_Param_ConnectionPort,Z_Param_QueryPort,Z_Param_Flags,Z_Param_TimeLastPlayedOnServer);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function AddFavoriteGame

// Begin Class USteamProMatchmaking Function AddRequestLobbyListCompatibleMembersFilter
struct Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics
{
	struct SteamProMatchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms
	{
		FSteamID SteamIDLobby;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Unused - Checks the player compatibility based on the frenemy system.\n\x09*\n\x09* @param\x09SteamIDLobby\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Unused - Checks the player compatibility based on the frenemy system.\n\n@param        SteamIDLobby" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::NewProp_SteamIDLobby,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "AddRequestLobbyListCompatibleMembersFilter", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::SteamProMatchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::SteamProMatchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListCompatibleMembersFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execAddRequestLobbyListCompatibleMembersFilter)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProMatchmaking::AddRequestLobbyListCompatibleMembersFilter(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function AddRequestLobbyListCompatibleMembersFilter

// Begin Class USteamProMatchmaking Function AddRequestLobbyListDistanceFilter
struct Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListDistanceFilter_Statics
{
	struct SteamProMatchmaking_eventAddRequestLobbyListDistanceFilter_Parms
	{
		ESteamLobbyDistanceFilter LobbyDistanceFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets the physical distance for which we should search for lobbies, this is based on the users IP address and a IP location map on the Steam backed.\n\x09*\n\x09* @param\x09LobbyDistanceFilter\x09\x09Specifies the maximum distance.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sets the physical distance for which we should search for lobbies, this is based on the users IP address and a IP location map on the Steam backed.\n\n@param        LobbyDistanceFilter             Specifies the maximum distance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyDistanceFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyDistanceFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter = { "LobbyDistanceFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventAddRequestLobbyListDistanceFilter_Parms, LobbyDistanceFilter), Z_Construct_UEnum_SteamCoreShared_ESteamLobbyDistanceFilter, METADATA_PARAMS(0, nullptr) }; // 2147738176
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListDistanceFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "AddRequestLobbyListDistanceFilter", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListDistanceFilter_Statics::SteamProMatchmaking_eventAddRequestLobbyListDistanceFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListDistanceFilter_Statics::SteamProMatchmaking_eventAddRequestLobbyListDistanceFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListDistanceFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListDistanceFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execAddRequestLobbyListDistanceFilter)
{
	P_GET_ENUM(ESteamLobbyDistanceFilter,Z_Param_LobbyDistanceFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProMatchmaking::AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter(Z_Param_LobbyDistanceFilter));
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function AddRequestLobbyListDistanceFilter

// Begin Class USteamProMatchmaking Function AddRequestLobbyListFilterSlotsAvailable
struct Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics
{
	struct SteamProMatchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms
	{
		int32 SlotsAvailable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Filters to only return lobbies with the specified number of open slots available.\n\x09*\n\x09* @param\x09SlotsAvailable\x09The number of open slots that must be open.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Filters to only return lobbies with the specified number of open slots available.\n\n@param        SlotsAvailable  The number of open slots that must be open." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotsAvailable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::NewProp_SlotsAvailable = { "SlotsAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms, SlotsAvailable), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::NewProp_SlotsAvailable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "AddRequestLobbyListFilterSlotsAvailable", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::SteamProMatchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::SteamProMatchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListFilterSlotsAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execAddRequestLobbyListFilterSlotsAvailable)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotsAvailable);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProMatchmaking::AddRequestLobbyListFilterSlotsAvailable(Z_Param_SlotsAvailable);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function AddRequestLobbyListFilterSlotsAvailable

// Begin Class USteamProMatchmaking Function AddRequestLobbyListNearValueFilter
struct Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNearValueFilter_Statics
{
	struct SteamProMatchmaking_eventAddRequestLobbyListNearValueFilter_Parms
	{
		FString KeyToMatch;
		int32 ValueToBeCloseTo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sorts the results closest to the specified value.\n\x09*\n\x09* Near filters don't actually filter out values, they just influence how the results are sorted. You can specify multiple near filters, with the first near filter influencing the most, and the last near filter influencing the least.\n\x09*\n\x09* @param\x09KeyToMatch\x09\x09\x09The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09ValueToBeCloseTo\x09The value that lobbies will be sorted on.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sorts the results closest to the specified value.\n\nNear filters don't actually filter out values, they just influence how the results are sorted. You can specify multiple near filters, with the first near filter influencing the most, and the last near filter influencing the least.\n\n@param        KeyToMatch                      The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n@param        ValueToBeCloseTo        The value that lobbies will be sorted on." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ValueToBeCloseTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventAddRequestLobbyListNearValueFilter_Parms, KeyToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_ValueToBeCloseTo = { "ValueToBeCloseTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventAddRequestLobbyListNearValueFilter_Parms, ValueToBeCloseTo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_ValueToBeCloseTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNearValueFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "AddRequestLobbyListNearValueFilter", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNearValueFilter_Statics::SteamProMatchmaking_eventAddRequestLobbyListNearValueFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNearValueFilter_Statics::SteamProMatchmaking_eventAddRequestLobbyListNearValueFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNearValueFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNearValueFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execAddRequestLobbyListNearValueFilter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KeyToMatch);
	P_GET_PROPERTY(FIntProperty,Z_Param_ValueToBeCloseTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProMatchmaking::AddRequestLobbyListNearValueFilter(Z_Param_KeyToMatch,Z_Param_ValueToBeCloseTo);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function AddRequestLobbyListNearValueFilter

// Begin Class USteamProMatchmaking Function AddRequestLobbyListNumericalFilter
struct Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter_Statics
{
	struct SteamProMatchmaking_eventAddRequestLobbyListNumericalFilter_Parms
	{
		FString KeyToMatch;
		int32 ValueToMatch;
		ESteamLobbyComparison ComparisonType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Adds a numerical comparison filter to the next RequestLobbyList call.\n\x09*\n\x09* @param\x09KeyToMatch\x09\x09\x09The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09ValueToMatch\x09\x09The number to match.\n\x09* @param\x09""ComparisonType\x09\x09The type of comparison to make.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Adds a numerical comparison filter to the next RequestLobbyList call.\n\n@param        KeyToMatch                      The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n@param        ValueToMatch            The number to match.\n@param        ComparisonType          The type of comparison to make." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ValueToMatch;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventAddRequestLobbyListNumericalFilter_Parms, KeyToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ValueToMatch = { "ValueToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventAddRequestLobbyListNumericalFilter_Parms, ValueToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType = { "ComparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventAddRequestLobbyListNumericalFilter_Parms, ComparisonType), Z_Construct_UEnum_SteamCorePro_ESteamLobbyComparison, METADATA_PARAMS(0, nullptr) }; // 77414464
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ValueToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "AddRequestLobbyListNumericalFilter", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter_Statics::SteamProMatchmaking_eventAddRequestLobbyListNumericalFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter_Statics::SteamProMatchmaking_eventAddRequestLobbyListNumericalFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execAddRequestLobbyListNumericalFilter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KeyToMatch);
	P_GET_PROPERTY(FIntProperty,Z_Param_ValueToMatch);
	P_GET_ENUM(ESteamLobbyComparison,Z_Param_ComparisonType);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProMatchmaking::AddRequestLobbyListNumericalFilter(Z_Param_KeyToMatch,Z_Param_ValueToMatch,ESteamLobbyComparison(Z_Param_ComparisonType));
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function AddRequestLobbyListNumericalFilter

// Begin Class USteamProMatchmaking Function AddRequestLobbyListResultCountFilter
struct Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListResultCountFilter_Statics
{
	struct SteamProMatchmaking_eventAddRequestLobbyListResultCountFilter_Parms
	{
		int32 MaxResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets the maximum number of lobbies to return. The lower the count the faster it is to download the lobby results & details to the client.\n\x09*\n\x09* @param\x09MaxResults\x09The maximum number of lobbies to return.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sets the maximum number of lobbies to return. The lower the count the faster it is to download the lobby results & details to the client.\n\n@param        MaxResults      The maximum number of lobbies to return." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListResultCountFilter_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventAddRequestLobbyListResultCountFilter_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListResultCountFilter_Statics::NewProp_MaxResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListResultCountFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "AddRequestLobbyListResultCountFilter", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListResultCountFilter_Statics::SteamProMatchmaking_eventAddRequestLobbyListResultCountFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListResultCountFilter_Statics::SteamProMatchmaking_eventAddRequestLobbyListResultCountFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListResultCountFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListResultCountFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execAddRequestLobbyListResultCountFilter)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProMatchmaking::AddRequestLobbyListResultCountFilter(Z_Param_MaxResults);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function AddRequestLobbyListResultCountFilter

// Begin Class USteamProMatchmaking Function AddRequestLobbyListStringFilter
struct Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter_Statics
{
	struct SteamProMatchmaking_eventAddRequestLobbyListStringFilter_Parms
	{
		FString KeyToMatch;
		FString ValueToMatch;
		ESteamLobbyComparison ComparisonType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Adds a string comparison filter to the next RequestLobbyList call.\n\x09*\n\x09* @param\x09KeyToMatch\x09\x09\x09The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09ValueToMatch\x09\x09The string to match.\n\x09* @param\x09""ComparisonType\x09\x09The type of comparison to make.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Adds a string comparison filter to the next RequestLobbyList call.\n\n@param        KeyToMatch                      The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n@param        ValueToMatch            The string to match.\n@param        ComparisonType          The type of comparison to make." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValueToMatch;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventAddRequestLobbyListStringFilter_Parms, KeyToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch = { "ValueToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventAddRequestLobbyListStringFilter_Parms, ValueToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType = { "ComparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventAddRequestLobbyListStringFilter_Parms, ComparisonType), Z_Construct_UEnum_SteamCorePro_ESteamLobbyComparison, METADATA_PARAMS(0, nullptr) }; // 77414464
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "AddRequestLobbyListStringFilter", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter_Statics::SteamProMatchmaking_eventAddRequestLobbyListStringFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter_Statics::SteamProMatchmaking_eventAddRequestLobbyListStringFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execAddRequestLobbyListStringFilter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KeyToMatch);
	P_GET_PROPERTY(FStrProperty,Z_Param_ValueToMatch);
	P_GET_ENUM(ESteamLobbyComparison,Z_Param_ComparisonType);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProMatchmaking::AddRequestLobbyListStringFilter(Z_Param_KeyToMatch,Z_Param_ValueToMatch,ESteamLobbyComparison(Z_Param_ComparisonType));
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function AddRequestLobbyListStringFilter

// Begin Class USteamProMatchmaking Function CreateLobby
struct Z_Construct_UFunction_USteamProMatchmaking_CreateLobby_Statics
{
	struct SteamProMatchmaking_eventCreateLobby_Parms
	{
		FScriptDelegate Callback;
		ESteamLobbyType LobbyType;
		int32 MaxMembers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Create a new matchmaking lobby.\n\x09*\n\x09* @param\x09LobbyType\x09\x09The type and visibility of this lobby. This can be changed later via SetLobbyType.\n\x09* @param\x09MaxMembers\x09\x09\x09The maximum number of players that can join this lobby. This can not be above 250.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Create a new matchmaking lobby.\n\n@param        LobbyType               The type and visibility of this lobby. This can be changed later via SetLobbyType.\n@param        MaxMembers                      The maximum number of players that can join this lobby. This can not be above 250." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProMatchmaking_CreateLobby_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventCreateLobby_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2276374715
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProMatchmaking_CreateLobby_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProMatchmaking_CreateLobby_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventCreateLobby_Parms, LobbyType), Z_Construct_UEnum_SteamCorePro_ESteamLobbyType, METADATA_PARAMS(0, nullptr) }; // 3095676667
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_CreateLobby_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventCreateLobby_Parms, MaxMembers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_CreateLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_CreateLobby_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_CreateLobby_Statics::NewProp_LobbyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_CreateLobby_Statics::NewProp_LobbyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_CreateLobby_Statics::NewProp_MaxMembers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_CreateLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_CreateLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "CreateLobby", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_CreateLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_CreateLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_CreateLobby_Statics::SteamProMatchmaking_eventCreateLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_CreateLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_CreateLobby_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_CreateLobby_Statics::SteamProMatchmaking_eventCreateLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_CreateLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_CreateLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execCreateLobby)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_ENUM(ESteamLobbyType,Z_Param_LobbyType);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxMembers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateLobby(FOnCreateLobby(Z_Param_Out_Callback),ESteamLobbyType(Z_Param_LobbyType),Z_Param_MaxMembers);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function CreateLobby

// Begin Class USteamProMatchmaking Function DeleteLobbyData
struct Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData_Statics
{
	struct SteamProMatchmaking_eventDeleteLobbyData_Parms
	{
		FSteamID SteamIDLobby;
		FString Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Removes a metadata key from the lobby.\n\x09*\n\x09* This can only be done by the owner of the lobby.\n\x09* This will only send the data if the key existed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to delete the metadata for.\n\x09* @param\x09Key\x09\x09\x09\x09The key to delete the data for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Removes a metadata key from the lobby.\n\nThis can only be done by the owner of the lobby.\nThis will only send the data if the key existed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\n@param        SteamIDLobby    The Steam ID of the lobby to delete the metadata for.\n@param        Key                             The key to delete the data for." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventDeleteLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventDeleteLobbyData_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProMatchmaking_eventDeleteLobbyData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProMatchmaking_eventDeleteLobbyData_Parms), &Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "DeleteLobbyData", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData_Statics::SteamProMatchmaking_eventDeleteLobbyData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData_Statics::SteamProMatchmaking_eventDeleteLobbyData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execDeleteLobbyData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProMatchmaking::DeleteLobbyData(Z_Param_SteamIDLobby,Z_Param_Key);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function DeleteLobbyData

// Begin Class USteamProMatchmaking Function GetFavoriteGame
struct Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics
{
	struct SteamProMatchmaking_eventGetFavoriteGame_Parms
	{
		int32 Game;
		int32 AppID;
		FString IP;
		int32 ConnectionPort;
		int32 QueryPort;
		TArray<ESteamFavoriteFlags> Flags;
		int32 TimeLastPlayedOnServer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the details of the favorite game server by index.\n\x09*\n\x09* You must call GetFavoriteGameCount before calling this.\n\x09*\n\x09* @param\x09Game\x09\x09\x09\x09\x09\x09The index of the favorite game server to get the details of. This must be between 0 and GetFavoriteGameCount\n\x09* @param\x09""AppID\x09\x09\x09\x09\x09\x09Returns the App ID this server is for.\n\x09* @param\x09IP\x09\x09\x09\x09\x09\x09\x09Returns the IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09""ConnectionPort\x09\x09\x09\x09Returns the port used to connect to the server, in host order.\n\x09* @param\x09QueryPort\x09\x09\x09\x09\x09Returns the port used to query the server, in host order.\n\x09* @param\x09""Flags\x09\x09\x09\x09\x09\x09Returns whether the server is on the favorites list or the history list. See k_unFavoriteFlagNone for more information.\n\x09* @param\x09TimeLastPlayedOnServer\x09\x09Returns the time the server was last added to the favorites list in Unix epoch format (seconds since Jan 1st, 1970).\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the details of the favorite game server by index.\n\nYou must call GetFavoriteGameCount before calling this.\n\n@param        Game                                            The index of the favorite game server to get the details of. This must be between 0 and GetFavoriteGameCount\n@param        AppID                                           Returns the App ID this server is for.\n@param        IP                                                      Returns the IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        ConnectionPort                          Returns the port used to connect to the server, in host order.\n@param        QueryPort                                       Returns the port used to query the server, in host order.\n@param        Flags                                           Returns whether the server is on the favorites list or the history list. See k_unFavoriteFlagNone for more information.\n@param        TimeLastPlayedOnServer          Returns the time the server was last added to the favorites list in Unix epoch format (seconds since Jan 1st, 1970)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Game;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeLastPlayedOnServer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_Game = { "Game", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetFavoriteGame_Parms, Game), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetFavoriteGame_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetFavoriteGame_Parms, IP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetFavoriteGame_Parms, ConnectionPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetFavoriteGame_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCorePro_ESteamFavoriteFlags, METADATA_PARAMS(0, nullptr) }; // 1738200489
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1738200489
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer = { "TimeLastPlayedOnServer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetFavoriteGame_Parms, TimeLastPlayedOnServer), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProMatchmaking_eventGetFavoriteGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProMatchmaking_eventGetFavoriteGame_Parms), &Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_Game,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_ConnectionPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "GetFavoriteGame", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::SteamProMatchmaking_eventGetFavoriteGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::SteamProMatchmaking_eventGetFavoriteGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execGetFavoriteGame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Game);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_IP);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ConnectionPort);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_QueryPort);
	P_GET_TARRAY_REF(ESteamFavoriteFlags,Z_Param_Out_Flags);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TimeLastPlayedOnServer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProMatchmaking::GetFavoriteGame(Z_Param_Game,Z_Param_Out_AppID,Z_Param_Out_IP,Z_Param_Out_ConnectionPort,Z_Param_Out_QueryPort,Z_Param_Out_Flags,Z_Param_Out_TimeLastPlayedOnServer);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function GetFavoriteGame

// Begin Class USteamProMatchmaking Function GetFavoriteGameCount
struct Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGameCount_Statics
{
	struct SteamProMatchmaking_eventGetFavoriteGameCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the number of favorite and recent game servers the user has stored locally.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the number of favorite and recent game servers the user has stored locally." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGameCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetFavoriteGameCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGameCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGameCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGameCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGameCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "GetFavoriteGameCount", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGameCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGameCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGameCount_Statics::SteamProMatchmaking_eventGetFavoriteGameCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGameCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGameCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGameCount_Statics::SteamProMatchmaking_eventGetFavoriteGameCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGameCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGameCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execGetFavoriteGameCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProMatchmaking::GetFavoriteGameCount();
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function GetFavoriteGameCount

// Begin Class USteamProMatchmaking Function GetLobbyByIndex
struct Z_Construct_UFunction_USteamProMatchmaking_GetLobbyByIndex_Statics
{
	struct SteamProMatchmaking_eventGetLobbyByIndex_Parms
	{
		int32 Lobby;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the lobby at the specified index after receiving the RequestLobbyList results.\n\x09*\n\x09* This should only be called after a LobbyMatchList_t call result is received.\n\x09*\n\x09* @param\x09Lobby\x09The index of the lobby to get the Steam ID of, from 0 to LobbyMatchList_t.m_nLobbiesMatching.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the Steam ID of the lobby at the specified index after receiving the RequestLobbyList results.\n\nThis should only be called after a LobbyMatchList_t call result is received.\n\n@param        Lobby   The index of the lobby to get the Steam ID of, from 0 to LobbyMatchList_t.m_nLobbiesMatching." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Lobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyByIndex_Statics::NewProp_Lobby = { "Lobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyByIndex_Parms, Lobby), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_GetLobbyByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyByIndex_Statics::NewProp_Lobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "GetLobbyByIndex", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyByIndex_Statics::SteamProMatchmaking_eventGetLobbyByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_GetLobbyByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyByIndex_Statics::SteamProMatchmaking_eventGetLobbyByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_GetLobbyByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execGetLobbyByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Lobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=USteamProMatchmaking::GetLobbyByIndex(Z_Param_Lobby);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function GetLobbyByIndex

// Begin Class USteamProMatchmaking Function GetLobbyChatEntry
struct Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics
{
	struct SteamProMatchmaking_eventGetLobbyChatEntry_Parms
	{
		FSteamID SteamIDLobby;
		int32 MessageID;
		FSteamID SteamIDUser;
		FString Message;
		ESteamChatEntryType ChatEntryType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the data from a lobby chat message after receiving a LobbyChatMsg_t Callback.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09\x09The Steam ID of the lobby to get the chat entry from. This should almost always be LobbyChatMsg_t::m_ulSteamIDUser.\n\x09* @param\x09MessageID\x09\x09\x09\x09The index of the chat entry in the lobby. This should almost always be LobbyChatMsg_t::m_iChatID.\n\x09* @param\x09SteamIDUser\x09\x09\x09\x09If set then this returns the Steam ID of the user who sent this message. Usually unneeded since it will be the same as LobbyChatMsg_t::m_ulSteamIDUser.\n\x09* @param\x09Message\x09\x09\x09\x09\x09Returns the message data by copying it into this buffer. This buffer should be up to 4 Kilobytes.\n\x09* @param\x09""ChatEntryType\x09\x09\x09If set then this will just always return k_EChatEntryTypeChatMsg. This can usually just be set to NULL.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the data from a lobby chat message after receiving a LobbyChatMsg_t Callback.\n\n@param        SteamIDLobby                    The Steam ID of the lobby to get the chat entry from. This should almost always be LobbyChatMsg_t::m_ulSteamIDUser.\n@param        MessageID                               The index of the chat entry in the lobby. This should almost always be LobbyChatMsg_t::m_iChatID.\n@param        SteamIDUser                             If set then this returns the Steam ID of the user who sent this message. Usually unneeded since it will be the same as LobbyChatMsg_t::m_ulSteamIDUser.\n@param        Message                                 Returns the message data by copying it into this buffer. This buffer should be up to 4 Kilobytes.\n@param        ChatEntryType                   If set then this will just always return k_EChatEntryTypeChatMsg. This can usually just be set to NULL." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MessageID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyChatEntry_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::NewProp_MessageID = { "MessageID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyChatEntry_Parms, MessageID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyChatEntry_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyChatEntry_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyChatEntry_Parms, ChatEntryType), Z_Construct_UEnum_SteamCorePro_ESteamChatEntryType, METADATA_PARAMS(0, nullptr) }; // 2368510614
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyChatEntry_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::NewProp_MessageID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "GetLobbyChatEntry", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::SteamProMatchmaking_eventGetLobbyChatEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::SteamProMatchmaking_eventGetLobbyChatEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execGetLobbyChatEntry)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FIntProperty,Z_Param_MessageID);
	P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDUser);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Message);
	P_GET_ENUM_REF(ESteamChatEntryType,Z_Param_Out_ChatEntryType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProMatchmaking::GetLobbyChatEntry(Z_Param_SteamIDLobby,Z_Param_MessageID,Z_Param_Out_SteamIDUser,Z_Param_Out_Message,(ESteamChatEntryType&)(Z_Param_Out_ChatEntryType));
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function GetLobbyChatEntry

// Begin Class USteamProMatchmaking Function GetLobbyData
struct Z_Construct_UFunction_USteamProMatchmaking_GetLobbyData_Statics
{
	struct SteamProMatchmaking_eventGetLobbyData_Parms
	{
		FSteamID SteamIDLobby;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the metadata associated with the specified key from the specified lobby.\n\x09*\n\x09* This can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to get the metadata from.\n\x09* @param\x09Key\x09\x09\x09\x09The key to get the value of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the metadata associated with the specified key from the specified lobby.\n\nThis can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\n\n@param        SteamIDLobby    The Steam ID of the lobby to get the metadata from.\n@param        Key                             The key to get the value of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyData_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_GetLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "GetLobbyData", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyData_Statics::SteamProMatchmaking_eventGetLobbyData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_GetLobbyData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyData_Statics::SteamProMatchmaking_eventGetLobbyData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_GetLobbyData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execGetLobbyData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProMatchmaking::GetLobbyData(Z_Param_SteamIDLobby,Z_Param_Key);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function GetLobbyData

// Begin Class USteamProMatchmaking Function GetLobbyDataByIndex
struct Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics
{
	struct SteamProMatchmaking_eventGetLobbyDataByIndex_Parms
	{
		FSteamID SteamIDLobby;
		int32 LobbyData;
		FString Key;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets a lobby metadata key/value pair by index.\n\x09*\n\x09* You must call GetLobbyDataCount before calling this.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09This MUST be the same lobby used in the previous call to GetLobbyDataCount!\n\x09* @param\x09LobbyData\x09\x09\x09""An index between 0 and GetLobbyDataCount.\n\x09* @param\x09Key\x09\x09\x09\x09\x09Returns the name of the key at the specified index by copying it into this buffer.\n\x09* @param\x09Value\x09\x09\x09\x09Returns the value associated with the key at the specified index by copying it into this buffer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets a lobby metadata key/value pair by index.\n\nYou must call GetLobbyDataCount before calling this.\n\n@param        SteamIDLobby            This MUST be the same lobby used in the previous call to GetLobbyDataCount!\n@param        LobbyData                       An index between 0 and GetLobbyDataCount.\n@param        Key                                     Returns the name of the key at the specified index by copying it into this buffer.\n@param        Value                           Returns the value associated with the key at the specified index by copying it into this buffer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LobbyData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyDataByIndex_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::NewProp_LobbyData = { "LobbyData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyDataByIndex_Parms, LobbyData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyDataByIndex_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyDataByIndex_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProMatchmaking_eventGetLobbyDataByIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProMatchmaking_eventGetLobbyDataByIndex_Parms), &Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::NewProp_LobbyData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "GetLobbyDataByIndex", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::SteamProMatchmaking_eventGetLobbyDataByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::SteamProMatchmaking_eventGetLobbyDataByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execGetLobbyDataByIndex)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FIntProperty,Z_Param_LobbyData);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProMatchmaking::GetLobbyDataByIndex(Z_Param_SteamIDLobby,Z_Param_LobbyData,Z_Param_Out_Key,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function GetLobbyDataByIndex

// Begin Class USteamProMatchmaking Function GetLobbyDataCount
struct Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataCount_Statics
{
	struct SteamProMatchmaking_eventGetLobbyDataCount_Parms
	{
		FSteamID SteamIDLobby;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the number of metadata keys set on the specified lobby.\n\x09*\n\x09* This can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\n\x09* This is used for iteration, after calling this then GetLobbyDataByIndex can be used to get the key/value pair of each piece of metadata.\n\x09* This should typically only ever be used for debugging purposes.\n\x09*\n\x09* @param\x09SteamIDLobby\x09 The Steam ID of the lobby to get the data count from.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the number of metadata keys set on the specified lobby.\n\nThis can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\nThis is used for iteration, after calling this then GetLobbyDataByIndex can be used to get the key/value pair of each piece of metadata.\nThis should typically only ever be used for debugging purposes.\n\n@param        SteamIDLobby     The Steam ID of the lobby to get the data count from." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataCount_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyDataCount_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyDataCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataCount_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "GetLobbyDataCount", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataCount_Statics::SteamProMatchmaking_eventGetLobbyDataCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataCount_Statics::SteamProMatchmaking_eventGetLobbyDataCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execGetLobbyDataCount)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProMatchmaking::GetLobbyDataCount(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function GetLobbyDataCount

// Begin Class USteamProMatchmaking Function GetLobbyGameServer
struct Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics
{
	struct SteamProMatchmaking_eventGetLobbyGameServer_Parms
	{
		FSteamID SteamIDLobby;
		FString GameServerIP;
		int32 GameServerPort;
		FSteamID SteamIDGameServer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the details of a game server set in a lobby.\n\x09*\n\x09* Either the IP/Port or the Steam ID of the game server has to be valid, depending on how you want the clients to be able to connect.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09\x09The Steam ID of the lobby to get the game server information from.\n\x09* @param\x09GameServerIP\x09\x09\x09Returns the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001, if it's set.\n\x09* @param\x09GameServerPort\x09\x09\x09Returns the connection port of the game server, in host order, if it's set.\n\x09* @param\x09SteamIDGameServer\x09\x09Returns the Steam ID of the game server, if it's set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the details of a game server set in a lobby.\n\nEither the IP/Port or the Steam ID of the game server has to be valid, depending on how you want the clients to be able to connect.\n\n@param        SteamIDLobby                    The Steam ID of the lobby to get the game server information from.\n@param        GameServerIP                    Returns the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001, if it's set.\n@param        GameServerPort                  Returns the connection port of the game server, in host order, if it's set.\n@param        SteamIDGameServer               Returns the Steam ID of the game server, if it's set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyGameServer_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyGameServer_Parms, GameServerIP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyGameServer_Parms, GameServerPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyGameServer_Parms, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProMatchmaking_eventGetLobbyGameServer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProMatchmaking_eventGetLobbyGameServer_Parms), &Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDGameServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "GetLobbyGameServer", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::SteamProMatchmaking_eventGetLobbyGameServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::SteamProMatchmaking_eventGetLobbyGameServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execGetLobbyGameServer)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_GameServerIP);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_GameServerPort);
	P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDGameServer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProMatchmaking::GetLobbyGameServer(Z_Param_SteamIDLobby,Z_Param_Out_GameServerIP,Z_Param_Out_GameServerPort,Z_Param_Out_SteamIDGameServer);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function GetLobbyGameServer

// Begin Class USteamProMatchmaking Function GetLobbyMemberByIndex
struct Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberByIndex_Statics
{
	struct SteamProMatchmaking_eventGetLobbyMemberByIndex_Parms
	{
		FSteamID SteamIDLobby;
		int32 Member;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the lobby member at the given index.\n\x09*\n\x09* You must call GetNumLobbyMembers before calling this.\n\x09* The current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\n\x09*\n\x09* @param\x09SteamIDLobby\x09This MUST be the same lobby used in the previous call to GetNumLobbyMembers!\n\x09* @param\x09Member\x09\x09\x09""An index between 0 and GetNumLobbyMembers.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the Steam ID of the lobby member at the given index.\n\nYou must call GetNumLobbyMembers before calling this.\nThe current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\n\n@param        SteamIDLobby    This MUST be the same lobby used in the previous call to GetNumLobbyMembers!\n@param        Member                  An index between 0 and GetNumLobbyMembers." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Member;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyMemberByIndex_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyMemberByIndex_Parms, Member), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyMemberByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_Member,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "GetLobbyMemberByIndex", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberByIndex_Statics::SteamProMatchmaking_eventGetLobbyMemberByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberByIndex_Statics::SteamProMatchmaking_eventGetLobbyMemberByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execGetLobbyMemberByIndex)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FIntProperty,Z_Param_Member);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=USteamProMatchmaking::GetLobbyMemberByIndex(Z_Param_SteamIDLobby,Z_Param_Member);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function GetLobbyMemberByIndex

// Begin Class USteamProMatchmaking Function GetLobbyMemberData
struct Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData_Statics
{
	struct SteamProMatchmaking_eventGetLobbyMemberData_Parms
	{
		FSteamID SteamIDLobby;
		FSteamID SteamIDUser;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets per-user metadata from another player in the specified lobby.\n\x09*\n\x09* This can only be queried from members in lobbies that you are currently in.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby that the other player is in.\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the player to get the metadata from.\n\x09* @param\x09Key\x09\x09\x09\x09The key to get the value of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets per-user metadata from another player in the specified lobby.\n\nThis can only be queried from members in lobbies that you are currently in.\n\n@param        SteamIDLobby    The Steam ID of the lobby that the other player is in.\n@param        SteamIDUser             The Steam ID of the player to get the metadata from.\n@param        Key                             The key to get the value of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyMemberData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyMemberData_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyMemberData_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyMemberData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "GetLobbyMemberData", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData_Statics::SteamProMatchmaking_eventGetLobbyMemberData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData_Statics::SteamProMatchmaking_eventGetLobbyMemberData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execGetLobbyMemberData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProMatchmaking::GetLobbyMemberData(Z_Param_SteamIDLobby,Z_Param_SteamIDUser,Z_Param_Key);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function GetLobbyMemberData

// Begin Class USteamProMatchmaking Function GetLobbyMemberLimit
struct Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberLimit_Statics
{
	struct SteamProMatchmaking_eventGetLobbyMemberLimit_Parms
	{
		FSteamID SteamIDLobby;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* The current limit on the # of users who can join the lobby.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to get the member limit of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "The current limit on the # of users who can join the lobby.\n\n@param        SteamIDLobby    The Steam ID of the lobby to get the member limit of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberLimit_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyMemberLimit_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyMemberLimit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberLimit_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberLimit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "GetLobbyMemberLimit", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberLimit_Statics::SteamProMatchmaking_eventGetLobbyMemberLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberLimit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberLimit_Statics::SteamProMatchmaking_eventGetLobbyMemberLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execGetLobbyMemberLimit)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProMatchmaking::GetLobbyMemberLimit(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function GetLobbyMemberLimit

// Begin Class USteamProMatchmaking Function GetLobbyOwner
struct Z_Construct_UFunction_USteamProMatchmaking_GetLobbyOwner_Statics
{
	struct SteamProMatchmaking_eventGetLobbyOwner_Parms
	{
		FSteamID SteamIDLobby;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Returns the current lobby owner.\n\x09*\n\x09* You must be a member of the lobby to access this.\n\x09* There always one lobby owner - if the current owner leaves, another user in the lobby will become the owner automatically. It is possible (but rare) to join a lobby just as the owner is leaving, thus entering a lobby with self as the owner.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to get the owner of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Returns the current lobby owner.\n\nYou must be a member of the lobby to access this.\nThere always one lobby owner - if the current owner leaves, another user in the lobby will become the owner automatically. It is possible (but rare) to join a lobby just as the owner is leaving, thus entering a lobby with self as the owner.\n\n@param        SteamIDLobby    The Steam ID of the lobby to get the owner of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyOwner_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyOwner_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetLobbyOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_GetLobbyOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyOwner_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetLobbyOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_GetLobbyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "GetLobbyOwner", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyOwner_Statics::SteamProMatchmaking_eventGetLobbyOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_GetLobbyOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetLobbyOwner_Statics::SteamProMatchmaking_eventGetLobbyOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_GetLobbyOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_GetLobbyOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execGetLobbyOwner)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=USteamProMatchmaking::GetLobbyOwner(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function GetLobbyOwner

// Begin Class USteamProMatchmaking Function GetNumLobbyMembers
struct Z_Construct_UFunction_USteamProMatchmaking_GetNumLobbyMembers_Statics
{
	struct SteamProMatchmaking_eventGetNumLobbyMembers_Parms
	{
		FSteamID SteamIDLobby;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the number of users in a lobby.\n\x09*\n\x09* The current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\n\x09* This is used for iteration, after calling this then GetLobbyMemberByIndex can be used to get the Steam ID of each person in the lobby. Persona information for other lobby members (name, avatar, etc.) is automatically received and accessible via the ISteamFriends interface.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to get the number of members of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the number of users in a lobby.\n\nThe current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\nThis is used for iteration, after calling this then GetLobbyMemberByIndex can be used to get the Steam ID of each person in the lobby. Persona information for other lobby members (name, avatar, etc.) is automatically received and accessible via the ISteamFriends interface.\n\n@param        SteamIDLobby    The Steam ID of the lobby to get the number of members of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetNumLobbyMembers_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetNumLobbyMembers_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetNumLobbyMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetNumLobbyMembers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_GetNumLobbyMembers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetNumLobbyMembers_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetNumLobbyMembers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetNumLobbyMembers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_GetNumLobbyMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "GetNumLobbyMembers", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_GetNumLobbyMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetNumLobbyMembers_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetNumLobbyMembers_Statics::SteamProMatchmaking_eventGetNumLobbyMembers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetNumLobbyMembers_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_GetNumLobbyMembers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetNumLobbyMembers_Statics::SteamProMatchmaking_eventGetNumLobbyMembers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_GetNumLobbyMembers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_GetNumLobbyMembers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execGetNumLobbyMembers)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProMatchmaking::GetNumLobbyMembers(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function GetNumLobbyMembers

// Begin Class USteamProMatchmaking Function GetSteamMatchmaking
struct Z_Construct_UFunction_USteamProMatchmaking_GetSteamMatchmaking_Statics
{
	struct SteamProMatchmaking_eventGetSteamMatchmaking_Parms
	{
		USteamProMatchmaking* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProMatchmaking_GetSteamMatchmaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventGetSteamMatchmaking_Parms, ReturnValue), Z_Construct_UClass_USteamProMatchmaking_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_GetSteamMatchmaking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_GetSteamMatchmaking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetSteamMatchmaking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_GetSteamMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "GetSteamMatchmaking", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_GetSteamMatchmaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetSteamMatchmaking_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetSteamMatchmaking_Statics::SteamProMatchmaking_eventGetSteamMatchmaking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_GetSteamMatchmaking_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_GetSteamMatchmaking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_GetSteamMatchmaking_Statics::SteamProMatchmaking_eventGetSteamMatchmaking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_GetSteamMatchmaking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_GetSteamMatchmaking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execGetSteamMatchmaking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProMatchmaking**)Z_Param__Result=USteamProMatchmaking::GetSteamMatchmaking();
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function GetSteamMatchmaking

// Begin Class USteamProMatchmaking Function InviteUserToLobby
struct Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby_Statics
{
	struct SteamProMatchmaking_eventInviteUserToLobby_Parms
	{
		FSteamID SteamIDLobby;
		FSteamID SteamIDInvitee;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Invite another user to the lobby.\n\x09*\n\x09* If the specified user clicks the join link, a GameLobbyJoinRequested_t Callback will be posted if the user is in-game,\n\x09* or if the game isn't running yet then the game will be automatically launched with the command line parameter +connect_lobby <64-bit lobby Steam ID> instead.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby to invite the user to.\n\x09* @param\x09SteamIDInvitee\x09\x09The Steam ID of the person who will be invited.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Invite another user to the lobby.\n\nIf the specified user clicks the join link, a GameLobbyJoinRequested_t Callback will be posted if the user is in-game,\nor if the game isn't running yet then the game will be automatically launched with the command line parameter +connect_lobby <64-bit lobby Steam ID> instead.\n\n@param        SteamIDLobby            The Steam ID of the lobby to invite the user to.\n@param        SteamIDInvitee          The Steam ID of the person who will be invited." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDInvitee;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventInviteUserToLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDInvitee = { "SteamIDInvitee", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventInviteUserToLobby_Parms, SteamIDInvitee), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProMatchmaking_eventInviteUserToLobby_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProMatchmaking_eventInviteUserToLobby_Parms), &Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDInvitee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "InviteUserToLobby", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby_Statics::SteamProMatchmaking_eventInviteUserToLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby_Statics::SteamProMatchmaking_eventInviteUserToLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execInviteUserToLobby)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDInvitee);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProMatchmaking::InviteUserToLobby(Z_Param_SteamIDLobby,Z_Param_SteamIDInvitee);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function InviteUserToLobby

// Begin Class USteamProMatchmaking Function JoinLobby
struct Z_Construct_UFunction_USteamProMatchmaking_JoinLobby_Statics
{
	struct SteamProMatchmaking_eventJoinLobby_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamIDLobby;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Joins an existing lobby.\n\x09*\n\x09* The lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to join.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Joins an existing lobby.\n\nThe lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\n@param        SteamIDLobby    The Steam ID of the lobby to join." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProMatchmaking_JoinLobby_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventJoinLobby_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2108055327
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_JoinLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventJoinLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_JoinLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_JoinLobby_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_JoinLobby_Statics::NewProp_SteamIDLobby,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_JoinLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_JoinLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "JoinLobby", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_JoinLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_JoinLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_JoinLobby_Statics::SteamProMatchmaking_eventJoinLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_JoinLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_JoinLobby_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_JoinLobby_Statics::SteamProMatchmaking_eventJoinLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_JoinLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_JoinLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execJoinLobby)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinLobby(FOnJoinLobby(Z_Param_Out_Callback),Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function JoinLobby

// Begin Class USteamProMatchmaking Function LeaveLobby
struct Z_Construct_UFunction_USteamProMatchmaking_LeaveLobby_Statics
{
	struct SteamProMatchmaking_eventLeaveLobby_Parms
	{
		FSteamID SteamIDLobby;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Leave a lobby that the user is currently in; this will take effect immediately on the client side, other users in the lobby will be notified by a LobbyChatUpdate_t Callback.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The lobby to leave.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Leave a lobby that the user is currently in; this will take effect immediately on the client side, other users in the lobby will be notified by a LobbyChatUpdate_t Callback.\n\n@param        SteamIDLobby    The lobby to leave." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_LeaveLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventLeaveLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_LeaveLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_LeaveLobby_Statics::NewProp_SteamIDLobby,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_LeaveLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_LeaveLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "LeaveLobby", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_LeaveLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_LeaveLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_LeaveLobby_Statics::SteamProMatchmaking_eventLeaveLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_LeaveLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_LeaveLobby_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_LeaveLobby_Statics::SteamProMatchmaking_eventLeaveLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_LeaveLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_LeaveLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execLeaveLobby)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProMatchmaking::LeaveLobby(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function LeaveLobby

// Begin Class USteamProMatchmaking Function RemoveFavoriteGame
struct Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics
{
	struct SteamProMatchmaking_eventRemoveFavoriteGame_Parms
	{
		int32 AppID;
		FString IP;
		int32 ConnectionPort;
		int32 QueryPort;
		TArray<ESteamFavoriteFlags> Flags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Removes the game server from the local favorites list.\n\x09*\n\x09* @param\x09""AppID\x09\x09\x09\x09The App ID of the game.\n\x09* @param\x09IP\x09\x09\x09\x09\x09The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09""ConnectionPort\x09\x09The port used to connect to the server, in host order.\n\x09* @param\x09QueryPort\x09\x09\x09The port used to query the server, in host order.\n\x09* @param\x09""Flags\x09\x09\x09\x09Whether the server is on the favorites list or history list. See k_unFavoriteFlagNone for more information.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Removes the game server from the local favorites list.\n\n@param        AppID                           The App ID of the game.\n@param        IP                                      The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        ConnectionPort          The port used to connect to the server, in host order.\n@param        QueryPort                       The port used to query the server, in host order.\n@param        Flags                           Whether the server is on the favorites list or history list. See k_unFavoriteFlagNone for more information." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventRemoveFavoriteGame_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventRemoveFavoriteGame_Parms, IP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventRemoveFavoriteGame_Parms, ConnectionPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventRemoveFavoriteGame_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCorePro_ESteamFavoriteFlags, METADATA_PARAMS(0, nullptr) }; // 1738200489
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventRemoveFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1738200489
void Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProMatchmaking_eventRemoveFavoriteGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProMatchmaking_eventRemoveFavoriteGame_Parms), &Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::NewProp_ConnectionPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "RemoveFavoriteGame", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::SteamProMatchmaking_eventRemoveFavoriteGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::SteamProMatchmaking_eventRemoveFavoriteGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execRemoveFavoriteGame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FStrProperty,Z_Param_IP);
	P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionPort);
	P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
	P_GET_TARRAY(ESteamFavoriteFlags,Z_Param_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProMatchmaking::RemoveFavoriteGame(Z_Param_AppID,Z_Param_IP,Z_Param_ConnectionPort,Z_Param_QueryPort,Z_Param_Flags);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function RemoveFavoriteGame

// Begin Class USteamProMatchmaking Function RequestLobbyData
struct Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyData_Statics
{
	struct SteamProMatchmaking_eventRequestLobbyData_Parms
	{
		FSteamID SteamIDLobby;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Refreshes all of the metadata for a lobby that you're not in right now.\n\x09*\n\x09* You will never do this for lobbies you're a member of, that data will always be up to date. You can use this to refresh lobbies that you have obtained from RequestLobbyList or that are available via friends.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to refresh the metadata of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Refreshes all of the metadata for a lobby that you're not in right now.\n\nYou will never do this for lobbies you're a member of, that data will always be up to date. You can use this to refresh lobbies that you have obtained from RequestLobbyList or that are available via friends.\n\n@param        SteamIDLobby    The Steam ID of the lobby to refresh the metadata of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventRequestLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProMatchmaking_eventRequestLobbyData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProMatchmaking_eventRequestLobbyData_Parms), &Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "RequestLobbyData", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyData_Statics::SteamProMatchmaking_eventRequestLobbyData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyData_Statics::SteamProMatchmaking_eventRequestLobbyData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execRequestLobbyData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProMatchmaking::RequestLobbyData(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function RequestLobbyData

// Begin Class USteamProMatchmaking Function RequestLobbyList
struct Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyList_Statics
{
	struct SteamProMatchmaking_eventRequestLobbyList_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Get a filtered list of relevant lobbies.\n\x09*\n\x09* There can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\n\x09* To filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\n\x09* If AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\n\x09* This will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable.\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Get a filtered list of relevant lobbies.\n\nThere can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\nTo filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\nIf AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\nThis will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventRequestLobbyList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 608044467
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyList_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "RequestLobbyList", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyList_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyList_Statics::SteamProMatchmaking_eventRequestLobbyList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyList_Statics::SteamProMatchmaking_eventRequestLobbyList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execRequestLobbyList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestLobbyList(FOnRequestLobbyList(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function RequestLobbyList

// Begin Class USteamProMatchmaking Function SendLobbyChatMsg
struct Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg_Statics
{
	struct SteamProMatchmaking_eventSendLobbyChatMsg_Parms
	{
		FSteamID SteamIDLobby;
		FString Message;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Broadcasts a chat (text or binary data) message to the all of the users in the lobby.\n\x09*\n\x09* All users in the lobby (including the local user) will receive a LobbyChatMsg_t Callback with the message.\n\x09* If you're sending binary data, you should prefix a header to the message so that you know to treat it as your custom data rather than a plain old text message.\n\x09* For communication that needs to be arbitrated (for example having a user pick from a set of characters, and making sure only one user has picked a character), you can use the lobby owner as the decision maker. GetLobbyOwner returns the current lobby owner. There is guaranteed to always be one and only one lobby member who is the owner. So for the choose-a-character scenario, the user who is picking a character would send the binary message 'I want to be Zoe', the lobby owner would see that message, see if it was OK, and broadcast the appropriate result (user X is Zoe).\n\x09* These messages are sent via the Steam back-end, and so the bandwidth available is limited. For higher-volume traffic like voice or game data, you'll want to use the Steam Networking API.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to send the chat message to.\n\x09* @param\x09Message\x09\x09\x09This can be text or binary data, up to 4 Kilobytes in size.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Broadcasts a chat (text or binary data) message to the all of the users in the lobby.\n\nAll users in the lobby (including the local user) will receive a LobbyChatMsg_t Callback with the message.\nIf you're sending binary data, you should prefix a header to the message so that you know to treat it as your custom data rather than a plain old text message.\nFor communication that needs to be arbitrated (for example having a user pick from a set of characters, and making sure only one user has picked a character), you can use the lobby owner as the decision maker. GetLobbyOwner returns the current lobby owner. There is guaranteed to always be one and only one lobby member who is the owner. So for the choose-a-character scenario, the user who is picking a character would send the binary message 'I want to be Zoe', the lobby owner would see that message, see if it was OK, and broadcast the appropriate result (user X is Zoe).\nThese messages are sent via the Steam back-end, and so the bandwidth available is limited. For higher-volume traffic like voice or game data, you'll want to use the Steam Networking API.\n\n@param        SteamIDLobby    The Steam ID of the lobby to send the chat message to.\n@param        Message                 This can be text or binary data, up to 4 Kilobytes in size." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSendLobbyChatMsg_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSendLobbyChatMsg_Parms, Message), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProMatchmaking_eventSendLobbyChatMsg_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProMatchmaking_eventSendLobbyChatMsg_Parms), &Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "SendLobbyChatMsg", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg_Statics::SteamProMatchmaking_eventSendLobbyChatMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg_Statics::SteamProMatchmaking_eventSendLobbyChatMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execSendLobbyChatMsg)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProMatchmaking::SendLobbyChatMsg(Z_Param_SteamIDLobby,Z_Param_Message);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function SendLobbyChatMsg

// Begin Class USteamProMatchmaking Function SetLinkedLobby
struct Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby_Statics
{
	struct SteamProMatchmaking_eventSetLinkedLobby_Parms
	{
		FSteamID SteamIDLobby;
		FSteamID SteamIDLobbyDependent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Unused - Link two lobbies for the purposes of checking player compatibility using the frenemy system.\n\x09* You must be the lobby owner of both lobbies.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09\x09\x09The Steam ID of the primary lobby.\n\x09* @param\x09SteamIDLobbyDependent\x09\x09The Steam ID that will be linked to the primary lobby.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Unused - Link two lobbies for the purposes of checking player compatibility using the frenemy system.\nYou must be the lobby owner of both lobbies.\n\n@param        SteamIDLobby                            The Steam ID of the primary lobby.\n@param        SteamIDLobbyDependent           The Steam ID that will be linked to the primary lobby." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobbyDependent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSetLinkedLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobbyDependent = { "SteamIDLobbyDependent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSetLinkedLobby_Parms, SteamIDLobbyDependent), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProMatchmaking_eventSetLinkedLobby_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProMatchmaking_eventSetLinkedLobby_Parms), &Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobbyDependent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "SetLinkedLobby", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby_Statics::SteamProMatchmaking_eventSetLinkedLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby_Statics::SteamProMatchmaking_eventSetLinkedLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execSetLinkedLobby)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobbyDependent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProMatchmaking::SetLinkedLobby(Z_Param_SteamIDLobby,Z_Param_SteamIDLobbyDependent);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function SetLinkedLobby

// Begin Class USteamProMatchmaking Function SetLobbyData
struct Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics
{
	struct SteamProMatchmaking_eventSetLobbyData_Parms
	{
		FSteamID SteamIDLobby;
		FString Key;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets a key/value pair in the lobby metadata. This can be used to set the the lobby name, current map, game mode, etc.\n\x09*\n\x09* This can only be set by the owner of the lobby. Lobby members should use SetLobbyMemberData instead.\n\x09* Each user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t Callback, and any new users joining will receive any existing data.\n\x09* This will only send the data if it has changed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby to set the metadata for.\n\x09* @param\x09Key\x09\x09\x09\x09\x09The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09Value\x09\x09\x09\x09The value to set. This can not be longer than k_cubChatMetadataMax.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sets a key/value pair in the lobby metadata. This can be used to set the the lobby name, current map, game mode, etc.\n\nThis can only be set by the owner of the lobby. Lobby members should use SetLobbyMemberData instead.\nEach user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t Callback, and any new users joining will receive any existing data.\nThis will only send the data if it has changed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\n@param        SteamIDLobby            The Steam ID of the lobby to set the metadata for.\n@param        Key                                     The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n@param        Value                           The value to set. This can not be longer than k_cubChatMetadataMax." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSetLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSetLobbyData_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSetLobbyData_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProMatchmaking_eventSetLobbyData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProMatchmaking_eventSetLobbyData_Parms), &Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "SetLobbyData", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::SteamProMatchmaking_eventSetLobbyData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::SteamProMatchmaking_eventSetLobbyData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execSetLobbyData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProMatchmaking::SetLobbyData(Z_Param_SteamIDLobby,Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function SetLobbyData

// Begin Class USteamProMatchmaking Function SetLobbyGameServer
struct Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer_Statics
{
	struct SteamProMatchmaking_eventSetLobbyGameServer_Parms
	{
		FSteamID SteamIDLobby;
		FString GameServerIP;
		int32 GameServerPort;
		FSteamID SteamIDGameServer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets the game server associated with the lobby.\n\x09*\n\x09* This can only be set by the owner of the lobby.\n\x09* Either the IP/Port or the Steam ID of the game server must be valid, depending on how you want the clients to be able to connect.\n\x09* A LobbyGameCreated_t Callback will be sent to all players in the lobby, usually at this point, the users will join the specified game server.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09\x09The Steam ID of the lobby to set the game server information for.\n\x09* @param\x09GameServerIP\x09\x09\x09Sets the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09GameServerPort\x09\x09\x09Sets the connection port of the game server, in host order.\n\x09* @param\x09SteamIDGameServer\x09\x09Sets the Steam ID of the game server. Use k_steamIDNil if you're not setting this.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sets the game server associated with the lobby.\n\nThis can only be set by the owner of the lobby.\nEither the IP/Port or the Steam ID of the game server must be valid, depending on how you want the clients to be able to connect.\nA LobbyGameCreated_t Callback will be sent to all players in the lobby, usually at this point, the users will join the specified game server.\n\n@param        SteamIDLobby                    The Steam ID of the lobby to set the game server information for.\n@param        GameServerIP                    Sets the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        GameServerPort                  Sets the connection port of the game server, in host order.\n@param        SteamIDGameServer               Sets the Steam ID of the game server. Use k_steamIDNil if you're not setting this." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSetLobbyGameServer_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSetLobbyGameServer_Parms, GameServerIP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSetLobbyGameServer_Parms, GameServerPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSetLobbyGameServer_Parms, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDGameServer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "SetLobbyGameServer", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer_Statics::SteamProMatchmaking_eventSetLobbyGameServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer_Statics::SteamProMatchmaking_eventSetLobbyGameServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execSetLobbyGameServer)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameServerIP);
	P_GET_PROPERTY(FIntProperty,Z_Param_GameServerPort);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDGameServer);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProMatchmaking::SetLobbyGameServer(Z_Param_SteamIDLobby,Z_Param_GameServerIP,Z_Param_GameServerPort,Z_Param_SteamIDGameServer);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function SetLobbyGameServer

// Begin Class USteamProMatchmaking Function SetLobbyJoinable
struct Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics
{
	struct SteamProMatchmaking_eventSetLobbyJoinable_Parms
	{
		FSteamID SteamIDLobby;
		bool bLobbyJoinable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets whether or not a lobby is joinable by other players. This always defaults to enabled for a new lobby.\n\x09*\n\x09* If joining is disabled, then no players can join, even if they are a friend or have been invited.\n\x09* Lobbies with joining disabled will not be returned from a lobby search.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby\n\x09* @param\x09""bLobbyJoinable\x09\x09""Enable (true) or disable (false) allowing users to join this lobby?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sets whether or not a lobby is joinable by other players. This always defaults to enabled for a new lobby.\n\nIf joining is disabled, then no players can join, even if they are a friend or have been invited.\nLobbies with joining disabled will not be returned from a lobby search.\n\n@param        SteamIDLobby            The Steam ID of the lobby\n@param        bLobbyJoinable          Enable (true) or disable (false) allowing users to join this lobby?" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static void NewProp_bLobbyJoinable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLobbyJoinable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSetLobbyJoinable_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable_SetBit(void* Obj)
{
	((SteamProMatchmaking_eventSetLobbyJoinable_Parms*)Obj)->bLobbyJoinable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable = { "bLobbyJoinable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProMatchmaking_eventSetLobbyJoinable_Parms), &Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProMatchmaking_eventSetLobbyJoinable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProMatchmaking_eventSetLobbyJoinable_Parms), &Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "SetLobbyJoinable", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::SteamProMatchmaking_eventSetLobbyJoinable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::SteamProMatchmaking_eventSetLobbyJoinable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execSetLobbyJoinable)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_UBOOL(Z_Param_bLobbyJoinable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProMatchmaking::SetLobbyJoinable(Z_Param_SteamIDLobby,Z_Param_bLobbyJoinable);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function SetLobbyJoinable

// Begin Class USteamProMatchmaking Function SetLobbyMemberData
struct Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberData_Statics
{
	struct SteamProMatchmaking_eventSetLobbyMemberData_Parms
	{
		FSteamID SteamIDLobby;
		FString Key;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets per-user metadata for the local user.\n\x09*\n\x09* Each user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t Callback, and any new users joining will receive any existing data.\n\x09* There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby to set our metadata in.\n\x09* @param\x09Key\x09\x09\x09\x09\x09The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09Value\x09\x09\x09\x09The value to set. This can not be longer than k_cubChatMetadataMax.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sets per-user metadata for the local user.\n\nEach user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t Callback, and any new users joining will receive any existing data.\nThere is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\n@param        SteamIDLobby            The Steam ID of the lobby to set our metadata in.\n@param        Key                                     The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n@param        Value                           The value to set. This can not be longer than k_cubChatMetadataMax." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSetLobbyMemberData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSetLobbyMemberData_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSetLobbyMemberData_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberData_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "SetLobbyMemberData", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberData_Statics::SteamProMatchmaking_eventSetLobbyMemberData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberData_Statics::SteamProMatchmaking_eventSetLobbyMemberData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execSetLobbyMemberData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProMatchmaking::SetLobbyMemberData(Z_Param_SteamIDLobby,Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function SetLobbyMemberData

// Begin Class USteamProMatchmaking Function SetLobbyMemberLimit
struct Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit_Statics
{
	struct SteamProMatchmaking_eventSetLobbyMemberLimit_Parms
	{
		FSteamID SteamIDLobby;
		int32 MaxMembers;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Set the maximum number of players that can join the lobby.\n\x09*\n\x09* This is also set when you create the lobby with CreateLobby.\n\x09* This can only be set by the owner of the lobby.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to set the member limit for.\n\x09* @param\x09MaxMembers\x09\x09The maximum number of players allowed in this lobby. This can not be above 250.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Set the maximum number of players that can join the lobby.\n\nThis is also set when you create the lobby with CreateLobby.\nThis can only be set by the owner of the lobby.\n\n@param        SteamIDLobby    The Steam ID of the lobby to set the member limit for.\n@param        MaxMembers              The maximum number of players allowed in this lobby. This can not be above 250." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSetLobbyMemberLimit_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSetLobbyMemberLimit_Parms, MaxMembers), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProMatchmaking_eventSetLobbyMemberLimit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProMatchmaking_eventSetLobbyMemberLimit_Parms), &Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit_Statics::NewProp_MaxMembers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "SetLobbyMemberLimit", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit_Statics::SteamProMatchmaking_eventSetLobbyMemberLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit_Statics::SteamProMatchmaking_eventSetLobbyMemberLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execSetLobbyMemberLimit)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxMembers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProMatchmaking::SetLobbyMemberLimit(Z_Param_SteamIDLobby,Z_Param_MaxMembers);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function SetLobbyMemberLimit

// Begin Class USteamProMatchmaking Function SetLobbyOwner
struct Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner_Statics
{
	struct SteamProMatchmaking_eventSetLobbyOwner_Parms
	{
		FSteamID SteamIDLobby;
		FSteamID SteamIDNewOwner;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Changes who the lobby owner is.\n\x09*\n\x09* This can only be set by the owner of the lobby. This will trigger a LobbyDataUpdate_t for all of the users in the lobby, each user should update their local state to reflect the new owner. This is typically accomplished by displaying a crown icon next to the owners name.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby where the owner change will take place.\n\x09* @param\x09SteamIDNewOwner\x09\x09The Steam ID of the user that will be the new owner of the lobby, they must be in the lobby.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Changes who the lobby owner is.\n\nThis can only be set by the owner of the lobby. This will trigger a LobbyDataUpdate_t for all of the users in the lobby, each user should update their local state to reflect the new owner. This is typically accomplished by displaying a crown icon next to the owners name.\n\n@param        SteamIDLobby            The Steam ID of the lobby where the owner change will take place.\n@param        SteamIDNewOwner         The Steam ID of the user that will be the new owner of the lobby, they must be in the lobby." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDNewOwner;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSetLobbyOwner_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDNewOwner = { "SteamIDNewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSetLobbyOwner_Parms, SteamIDNewOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProMatchmaking_eventSetLobbyOwner_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProMatchmaking_eventSetLobbyOwner_Parms), &Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDNewOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "SetLobbyOwner", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner_Statics::SteamProMatchmaking_eventSetLobbyOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner_Statics::SteamProMatchmaking_eventSetLobbyOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execSetLobbyOwner)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDNewOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProMatchmaking::SetLobbyOwner(Z_Param_SteamIDLobby,Z_Param_SteamIDNewOwner);
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function SetLobbyOwner

// Begin Class USteamProMatchmaking Function SetLobbyType
struct Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics
{
	struct SteamProMatchmaking_eventSetLobbyType_Parms
	{
		FSteamID SteamIDLobby;
		ESteamLobbyType LobbyType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Updates what type of lobby this is.\n\x09*\n\x09* This is also set when you create the lobby with CreateLobby.\n\x09* This can only be set by the owner of the lobby.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to set the type of.\n\x09* @param\x09LobbyType\x09\x09The new lobby type to that will be set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Updates what type of lobby this is.\n\nThis is also set when you create the lobby with CreateLobby.\nThis can only be set by the owner of the lobby.\n\n@param        SteamIDLobby    The Steam ID of the lobby to set the type of.\n@param        LobbyType               The new lobby type to that will be set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSetLobbyType_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProMatchmaking_eventSetLobbyType_Parms, LobbyType), Z_Construct_UEnum_SteamCorePro_ESteamLobbyType, METADATA_PARAMS(0, nullptr) }; // 3095676667
void Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProMatchmaking_eventSetLobbyType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProMatchmaking_eventSetLobbyType_Parms), &Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::NewProp_LobbyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::NewProp_LobbyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProMatchmaking, nullptr, "SetLobbyType", nullptr, nullptr, Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::SteamProMatchmaking_eventSetLobbyType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::SteamProMatchmaking_eventSetLobbyType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProMatchmaking::execSetLobbyType)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_ENUM(ESteamLobbyType,Z_Param_LobbyType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProMatchmaking::SetLobbyType(Z_Param_SteamIDLobby,ESteamLobbyType(Z_Param_LobbyType));
	P_NATIVE_END;
}
// End Class USteamProMatchmaking Function SetLobbyType

// Begin Class USteamProMatchmaking
void USteamProMatchmaking::StaticRegisterNativesUSteamProMatchmaking()
{
	UClass* Class = USteamProMatchmaking::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddFavoriteGame", &USteamProMatchmaking::execAddFavoriteGame },
		{ "AddRequestLobbyListCompatibleMembersFilter", &USteamProMatchmaking::execAddRequestLobbyListCompatibleMembersFilter },
		{ "AddRequestLobbyListDistanceFilter", &USteamProMatchmaking::execAddRequestLobbyListDistanceFilter },
		{ "AddRequestLobbyListFilterSlotsAvailable", &USteamProMatchmaking::execAddRequestLobbyListFilterSlotsAvailable },
		{ "AddRequestLobbyListNearValueFilter", &USteamProMatchmaking::execAddRequestLobbyListNearValueFilter },
		{ "AddRequestLobbyListNumericalFilter", &USteamProMatchmaking::execAddRequestLobbyListNumericalFilter },
		{ "AddRequestLobbyListResultCountFilter", &USteamProMatchmaking::execAddRequestLobbyListResultCountFilter },
		{ "AddRequestLobbyListStringFilter", &USteamProMatchmaking::execAddRequestLobbyListStringFilter },
		{ "CreateLobby", &USteamProMatchmaking::execCreateLobby },
		{ "DeleteLobbyData", &USteamProMatchmaking::execDeleteLobbyData },
		{ "GetFavoriteGame", &USteamProMatchmaking::execGetFavoriteGame },
		{ "GetFavoriteGameCount", &USteamProMatchmaking::execGetFavoriteGameCount },
		{ "GetLobbyByIndex", &USteamProMatchmaking::execGetLobbyByIndex },
		{ "GetLobbyChatEntry", &USteamProMatchmaking::execGetLobbyChatEntry },
		{ "GetLobbyData", &USteamProMatchmaking::execGetLobbyData },
		{ "GetLobbyDataByIndex", &USteamProMatchmaking::execGetLobbyDataByIndex },
		{ "GetLobbyDataCount", &USteamProMatchmaking::execGetLobbyDataCount },
		{ "GetLobbyGameServer", &USteamProMatchmaking::execGetLobbyGameServer },
		{ "GetLobbyMemberByIndex", &USteamProMatchmaking::execGetLobbyMemberByIndex },
		{ "GetLobbyMemberData", &USteamProMatchmaking::execGetLobbyMemberData },
		{ "GetLobbyMemberLimit", &USteamProMatchmaking::execGetLobbyMemberLimit },
		{ "GetLobbyOwner", &USteamProMatchmaking::execGetLobbyOwner },
		{ "GetNumLobbyMembers", &USteamProMatchmaking::execGetNumLobbyMembers },
		{ "GetSteamMatchmaking", &USteamProMatchmaking::execGetSteamMatchmaking },
		{ "InviteUserToLobby", &USteamProMatchmaking::execInviteUserToLobby },
		{ "JoinLobby", &USteamProMatchmaking::execJoinLobby },
		{ "LeaveLobby", &USteamProMatchmaking::execLeaveLobby },
		{ "RemoveFavoriteGame", &USteamProMatchmaking::execRemoveFavoriteGame },
		{ "RequestLobbyData", &USteamProMatchmaking::execRequestLobbyData },
		{ "RequestLobbyList", &USteamProMatchmaking::execRequestLobbyList },
		{ "SendLobbyChatMsg", &USteamProMatchmaking::execSendLobbyChatMsg },
		{ "SetLinkedLobby", &USteamProMatchmaking::execSetLinkedLobby },
		{ "SetLobbyData", &USteamProMatchmaking::execSetLobbyData },
		{ "SetLobbyGameServer", &USteamProMatchmaking::execSetLobbyGameServer },
		{ "SetLobbyJoinable", &USteamProMatchmaking::execSetLobbyJoinable },
		{ "SetLobbyMemberData", &USteamProMatchmaking::execSetLobbyMemberData },
		{ "SetLobbyMemberLimit", &USteamProMatchmaking::execSetLobbyMemberLimit },
		{ "SetLobbyOwner", &USteamProMatchmaking::execSetLobbyOwner },
		{ "SetLobbyType", &USteamProMatchmaking::execSetLobbyType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProMatchmaking);
UClass* Z_Construct_UClass_USteamProMatchmaking_NoRegister()
{
	return USteamProMatchmaking::StaticClass();
}
struct Z_Construct_UClass_USteamProMatchmaking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamMatchmaking/SteamMatchmaking.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FavoritesListAccountsUpdated_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FavoritesListChanged_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyChatMsg_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyChatUpdate_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyDataUpdate_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyEnter_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyGameCreated_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyInvite_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyKicked_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FavoritesListAccountsUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FavoritesListChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyChatMsg;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyChatUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyDataUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyEnter;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyGameCreated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyInvite;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyKicked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProMatchmaking_AddFavoriteGame, "AddFavoriteGame" }, // 2256106404
		{ &Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListCompatibleMembersFilter, "AddRequestLobbyListCompatibleMembersFilter" }, // 3779345934
		{ &Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListDistanceFilter, "AddRequestLobbyListDistanceFilter" }, // 3845692242
		{ &Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListFilterSlotsAvailable, "AddRequestLobbyListFilterSlotsAvailable" }, // 1257353703
		{ &Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNearValueFilter, "AddRequestLobbyListNearValueFilter" }, // 1657341330
		{ &Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListNumericalFilter, "AddRequestLobbyListNumericalFilter" }, // 3306951633
		{ &Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListResultCountFilter, "AddRequestLobbyListResultCountFilter" }, // 2362384396
		{ &Z_Construct_UFunction_USteamProMatchmaking_AddRequestLobbyListStringFilter, "AddRequestLobbyListStringFilter" }, // 4110936100
		{ &Z_Construct_UFunction_USteamProMatchmaking_CreateLobby, "CreateLobby" }, // 2058756779
		{ &Z_Construct_UFunction_USteamProMatchmaking_DeleteLobbyData, "DeleteLobbyData" }, // 3304446123
		{ &Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGame, "GetFavoriteGame" }, // 622682783
		{ &Z_Construct_UFunction_USteamProMatchmaking_GetFavoriteGameCount, "GetFavoriteGameCount" }, // 2950786906
		{ &Z_Construct_UFunction_USteamProMatchmaking_GetLobbyByIndex, "GetLobbyByIndex" }, // 3576686998
		{ &Z_Construct_UFunction_USteamProMatchmaking_GetLobbyChatEntry, "GetLobbyChatEntry" }, // 802249802
		{ &Z_Construct_UFunction_USteamProMatchmaking_GetLobbyData, "GetLobbyData" }, // 3472565477
		{ &Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataByIndex, "GetLobbyDataByIndex" }, // 3722672671
		{ &Z_Construct_UFunction_USteamProMatchmaking_GetLobbyDataCount, "GetLobbyDataCount" }, // 1114835006
		{ &Z_Construct_UFunction_USteamProMatchmaking_GetLobbyGameServer, "GetLobbyGameServer" }, // 1745034434
		{ &Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberByIndex, "GetLobbyMemberByIndex" }, // 2931675673
		{ &Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberData, "GetLobbyMemberData" }, // 716564158
		{ &Z_Construct_UFunction_USteamProMatchmaking_GetLobbyMemberLimit, "GetLobbyMemberLimit" }, // 1380125122
		{ &Z_Construct_UFunction_USteamProMatchmaking_GetLobbyOwner, "GetLobbyOwner" }, // 1911750996
		{ &Z_Construct_UFunction_USteamProMatchmaking_GetNumLobbyMembers, "GetNumLobbyMembers" }, // 189197573
		{ &Z_Construct_UFunction_USteamProMatchmaking_GetSteamMatchmaking, "GetSteamMatchmaking" }, // 994376432
		{ &Z_Construct_UFunction_USteamProMatchmaking_InviteUserToLobby, "InviteUserToLobby" }, // 751048520
		{ &Z_Construct_UFunction_USteamProMatchmaking_JoinLobby, "JoinLobby" }, // 3514463469
		{ &Z_Construct_UFunction_USteamProMatchmaking_LeaveLobby, "LeaveLobby" }, // 2161647337
		{ &Z_Construct_UFunction_USteamProMatchmaking_RemoveFavoriteGame, "RemoveFavoriteGame" }, // 2689361809
		{ &Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyData, "RequestLobbyData" }, // 1309051219
		{ &Z_Construct_UFunction_USteamProMatchmaking_RequestLobbyList, "RequestLobbyList" }, // 1203467117
		{ &Z_Construct_UFunction_USteamProMatchmaking_SendLobbyChatMsg, "SendLobbyChatMsg" }, // 624999700
		{ &Z_Construct_UFunction_USteamProMatchmaking_SetLinkedLobby, "SetLinkedLobby" }, // 676552099
		{ &Z_Construct_UFunction_USteamProMatchmaking_SetLobbyData, "SetLobbyData" }, // 92599429
		{ &Z_Construct_UFunction_USteamProMatchmaking_SetLobbyGameServer, "SetLobbyGameServer" }, // 1745949257
		{ &Z_Construct_UFunction_USteamProMatchmaking_SetLobbyJoinable, "SetLobbyJoinable" }, // 2242849020
		{ &Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberData, "SetLobbyMemberData" }, // 2863548056
		{ &Z_Construct_UFunction_USteamProMatchmaking_SetLobbyMemberLimit, "SetLobbyMemberLimit" }, // 3619654684
		{ &Z_Construct_UFunction_USteamProMatchmaking_SetLobbyOwner, "SetLobbyOwner" }, // 1155876427
		{ &Z_Construct_UFunction_USteamProMatchmaking_SetLobbyType, "SetLobbyType" }, // 558554666
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProMatchmaking>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated = { "FavoritesListAccountsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProMatchmaking, FavoritesListAccountsUpdated), Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListAccountsUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FavoritesListAccountsUpdated_MetaData), NewProp_FavoritesListAccountsUpdated_MetaData) }; // 2233940728
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProMatchmaking_Statics::NewProp_FavoritesListChanged = { "FavoritesListChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProMatchmaking, FavoritesListChanged), Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FavoritesListChanged_MetaData), NewProp_FavoritesListChanged_MetaData) }; // 3861901773
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProMatchmaking_Statics::NewProp_LobbyChatMsg = { "LobbyChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProMatchmaking, LobbyChatMsg), Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatMsg__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyChatMsg_MetaData), NewProp_LobbyChatMsg_MetaData) }; // 489967227
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProMatchmaking_Statics::NewProp_LobbyChatUpdate = { "LobbyChatUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProMatchmaking, LobbyChatUpdate), Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyChatUpdate_MetaData), NewProp_LobbyChatUpdate_MetaData) }; // 922287421
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProMatchmaking_Statics::NewProp_LobbyDataUpdate = { "LobbyDataUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProMatchmaking, LobbyDataUpdate), Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyDataUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyDataUpdate_MetaData), NewProp_LobbyDataUpdate_MetaData) }; // 1464507902
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProMatchmaking_Statics::NewProp_LobbyEnter = { "LobbyEnter", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProMatchmaking, LobbyEnter), Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyEnter__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyEnter_MetaData), NewProp_LobbyEnter_MetaData) }; // 2168625337
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProMatchmaking_Statics::NewProp_LobbyGameCreated = { "LobbyGameCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProMatchmaking, LobbyGameCreated), Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyGameCreated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyGameCreated_MetaData), NewProp_LobbyGameCreated_MetaData) }; // 2401173781
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProMatchmaking_Statics::NewProp_LobbyInvite = { "LobbyInvite", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProMatchmaking, LobbyInvite), Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyInvite__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyInvite_MetaData), NewProp_LobbyInvite_MetaData) }; // 708836757
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProMatchmaking_Statics::NewProp_LobbyKicked = { "LobbyKicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProMatchmaking, LobbyKicked), Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyKicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyKicked_MetaData), NewProp_LobbyKicked_MetaData) }; // 1076150005
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamProMatchmaking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProMatchmaking_Statics::NewProp_FavoritesListChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProMatchmaking_Statics::NewProp_LobbyChatMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProMatchmaking_Statics::NewProp_LobbyChatUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProMatchmaking_Statics::NewProp_LobbyDataUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProMatchmaking_Statics::NewProp_LobbyEnter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProMatchmaking_Statics::NewProp_LobbyGameCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProMatchmaking_Statics::NewProp_LobbyInvite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProMatchmaking_Statics::NewProp_LobbyKicked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProMatchmaking_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamProMatchmaking_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProMatchmaking_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProMatchmaking_Statics::ClassParams = {
	&USteamProMatchmaking::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamProMatchmaking_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamProMatchmaking_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProMatchmaking_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProMatchmaking_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProMatchmaking()
{
	if (!Z_Registration_Info_UClass_USteamProMatchmaking.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProMatchmaking.OuterSingleton, Z_Construct_UClass_USteamProMatchmaking_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProMatchmaking.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProMatchmaking>()
{
	return USteamProMatchmaking::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProMatchmaking);
// End Class USteamProMatchmaking

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmaking_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProMatchmaking, USteamProMatchmaking::StaticClass, TEXT("USteamProMatchmaking"), &Z_Registration_Info_UClass_USteamProMatchmaking, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProMatchmaking), 1855745617U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmaking_h_3213668111(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmaking_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmaking_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
