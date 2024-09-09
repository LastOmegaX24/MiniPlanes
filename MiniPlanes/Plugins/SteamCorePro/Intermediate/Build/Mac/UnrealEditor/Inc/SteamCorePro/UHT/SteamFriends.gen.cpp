// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamFriends/SteamFriends.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
#include "SteamCorePro/Public/SteamFriends/SteamFriendsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamFriends() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProFriends();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProFriends_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamActivateGameOverlayToWebPageMode();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamChatEntryType();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCommunityProfileItemProperty();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCommunityProfileItemType();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamFriendFlags();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamFriendRelationship();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamOverlayToStoreFlag();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamPersonaState();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamUserRestriction();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnAvatarImageLoaded__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnClanOfficerListResponse__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCounts__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsResult__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingList__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnEquippedProfileItemsChanged__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFriendRichPresenceUpdate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGameConnectedChatJoin__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGameConnectedChatLeave__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGameConnectedClanChatMsg__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGameConnectedFriendChatMsg__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGameLobbyJoinRequested__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGameOverlayActivated__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGameRichPresenceJoinRequested__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGameServerChangeRequested__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCount__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowing__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoom__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomCompletionResult__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnPersonaStateChange__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerList__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEquippedProfileItems__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaName__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameResponse__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamFriendsGroupID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProFriends Function ActivateGameOverlay
struct Z_Construct_UFunction_USteamProFriends_ActivateGameOverlay_Statics
{
	struct SteamProFriends_eventActivateGameOverlay_Parms
	{
		FString Dialog;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Activates the Steam Overlay to a specific dialog.\n\x09*\n\x09* @param\x09""Dialog\x09The dialog to open. Valid options are: \"friends\", \"community\", \"players\", \"settings\", \"officialgamegroup\", \"stats\", \"achievements\".\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Activates the Steam Overlay to a specific dialog.\n\n@param        Dialog  The dialog to open. Valid options are: \"friends\", \"community\", \"players\", \"settings\", \"officialgamegroup\", \"stats\", \"achievements\"." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Dialog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_ActivateGameOverlay_Statics::NewProp_Dialog = { "Dialog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventActivateGameOverlay_Parms, Dialog), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_ActivateGameOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_ActivateGameOverlay_Statics::NewProp_Dialog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_ActivateGameOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "ActivateGameOverlay", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_ActivateGameOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlay_Statics::SteamProFriends_eventActivateGameOverlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_ActivateGameOverlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlay_Statics::SteamProFriends_eventActivateGameOverlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_ActivateGameOverlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_ActivateGameOverlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execActivateGameOverlay)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Dialog);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProFriends::ActivateGameOverlay(Z_Param_Dialog);
	P_NATIVE_END;
}
// End Class USteamProFriends Function ActivateGameOverlay

// Begin Class USteamProFriends Function ActivateGameOverlayInvitedialog
struct Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInvitedialog_Statics
{
	struct SteamProFriends_eventActivateGameOverlayInvitedialog_Parms
	{
		FSteamID SteamIDLobby;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Activates the Steam Overlay to open the invite dialog.\n\x09*\n\x09* Invitations sent from this dialog will be for the provided lobby.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby that selected users will be invited to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Activates the Steam Overlay to open the invite dialog.\n\nInvitations sent from this dialog will be for the provided lobby.\n\n@param        SteamIDLobby    The Steam ID of the lobby that selected users will be invited to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInvitedialog_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventActivateGameOverlayInvitedialog_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInvitedialog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInvitedialog_Statics::NewProp_SteamIDLobby,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInvitedialog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInvitedialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "ActivateGameOverlayInvitedialog", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInvitedialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInvitedialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInvitedialog_Statics::SteamProFriends_eventActivateGameOverlayInvitedialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInvitedialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInvitedialog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInvitedialog_Statics::SteamProFriends_eventActivateGameOverlayInvitedialog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInvitedialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInvitedialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execActivateGameOverlayInvitedialog)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProFriends::ActivateGameOverlayInvitedialog(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// End Class USteamProFriends Function ActivateGameOverlayInvitedialog

// Begin Class USteamProFriends Function ActivateGameOverlayInviteDialogConnectString
struct Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInviteDialogConnectString_Statics
{
	struct SteamProFriends_eventActivateGameOverlayInviteDialogConnectString_Parms
	{
		FString ConnectString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Activates the game overlay to open an invite dialog that will send the provided Rich Presence connect string to selected friends\n\x09*\n\x09* Notes: Only available in UE4.27+\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Activates the game overlay to open an invite dialog that will send the provided Rich Presence connect string to selected friends\n\nNotes: Only available in UE4.27+" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInviteDialogConnectString_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventActivateGameOverlayInviteDialogConnectString_Parms, ConnectString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInviteDialogConnectString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInviteDialogConnectString_Statics::NewProp_ConnectString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInviteDialogConnectString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInviteDialogConnectString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "ActivateGameOverlayInviteDialogConnectString", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInviteDialogConnectString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInviteDialogConnectString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInviteDialogConnectString_Statics::SteamProFriends_eventActivateGameOverlayInviteDialogConnectString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInviteDialogConnectString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInviteDialogConnectString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInviteDialogConnectString_Statics::SteamProFriends_eventActivateGameOverlayInviteDialogConnectString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInviteDialogConnectString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInviteDialogConnectString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execActivateGameOverlayInviteDialogConnectString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ConnectString);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProFriends::ActivateGameOverlayInviteDialogConnectString(Z_Param_ConnectString);
	P_NATIVE_END;
}
// End Class USteamProFriends Function ActivateGameOverlayInviteDialogConnectString

// Begin Class USteamProFriends Function ActivateGameOverlayToStore
struct Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToStore_Statics
{
	struct SteamProFriends_eventActivateGameOverlayToStore_Parms
	{
		int32 AppID;
		ESteamOverlayToStoreFlag Flag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Activates the Steam Overlay to the Steam store page for the provided app.\n\x09*\n\x09* Using k_uAppIdInvalid brings the user to the front page of the Steam store.\n\x09*\n\x09* @param\x09""AppID\x09The app ID to show the store page of.\n\x09* @param\x09""Flag\x09""Flags to modify the behavior when the page opens.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Activates the Steam Overlay to the Steam store page for the provided app.\n\nUsing k_uAppIdInvalid brings the user to the front page of the Steam store.\n\n@param        AppID   The app ID to show the store page of.\n@param        Flag    Flags to modify the behavior when the page opens." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flag_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToStore_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventActivateGameOverlayToStore_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToStore_Statics::NewProp_Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToStore_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventActivateGameOverlayToStore_Parms, Flag), Z_Construct_UEnum_SteamCorePro_ESteamOverlayToStoreFlag, METADATA_PARAMS(0, nullptr) }; // 1900174915
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToStore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToStore_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToStore_Statics::NewProp_Flag_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToStore_Statics::NewProp_Flag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToStore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "ActivateGameOverlayToStore", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToStore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToStore_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToStore_Statics::SteamProFriends_eventActivateGameOverlayToStore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToStore_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToStore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToStore_Statics::SteamProFriends_eventActivateGameOverlayToStore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToStore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToStore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execActivateGameOverlayToStore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_ENUM(ESteamOverlayToStoreFlag,Z_Param_Flag);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProFriends::ActivateGameOverlayToStore(Z_Param_AppID,ESteamOverlayToStoreFlag(Z_Param_Flag));
	P_NATIVE_END;
}
// End Class USteamProFriends Function ActivateGameOverlayToStore

// Begin Class USteamProFriends Function ActivateGameOverlayToUser
struct Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToUser_Statics
{
	struct SteamProFriends_eventActivateGameOverlayToUser_Parms
	{
		FString Dialog;
		FSteamID SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Activates Steam Overlay to a specific dialog.\n\x09*\n\x09* \"steamid\" - Opens the overlay web browser to the specified user or groups profile.\n\x09* \"chat\" - Opens a chat window to the specified user, or joins the group chat.\n\x09* \"jointrade\" - Opens a window to a Steam Trading session that was started with the ISteamEconomy/StartTrade Web API.\n\x09* \"stats\" - Opens the overlay web browser to the specified user's stats.\n\x09* \"achievements\" - Opens the overlay web browser to the specified user's achievements.\n\x09* \"friendadd\" - Opens the overlay in minimal mode prompting the user to add the target user as a friend.\n\x09* \"friendremove\" - Opens the overlay in minimal mode prompting the user to remove the target friend.\n\x09* \"friendrequestaccept\" - Opens the overlay in minimal mode prompting the user to accept an incoming friend invite.\n\x09* \"friendrequestignore\" - Opens the overlay in minimal mode prompting the user to ignore an incoming friend invite.\n\x09*\n\x09* @param\x09""Dialog\x09\x09The dialog to open.\n\x09* @param\x09SteamID\x09\x09The Steam ID of the context to open this dialog to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Activates Steam Overlay to a specific dialog.\n\n\"steamid\" - Opens the overlay web browser to the specified user or groups profile.\n\"chat\" - Opens a chat window to the specified user, or joins the group chat.\n\"jointrade\" - Opens a window to a Steam Trading session that was started with the ISteamEconomy/StartTrade Web API.\n\"stats\" - Opens the overlay web browser to the specified user's stats.\n\"achievements\" - Opens the overlay web browser to the specified user's achievements.\n\"friendadd\" - Opens the overlay in minimal mode prompting the user to add the target user as a friend.\n\"friendremove\" - Opens the overlay in minimal mode prompting the user to remove the target friend.\n\"friendrequestaccept\" - Opens the overlay in minimal mode prompting the user to accept an incoming friend invite.\n\"friendrequestignore\" - Opens the overlay in minimal mode prompting the user to ignore an incoming friend invite.\n\n@param        Dialog          The dialog to open.\n@param        SteamID         The Steam ID of the context to open this dialog to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Dialog;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToUser_Statics::NewProp_Dialog = { "Dialog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventActivateGameOverlayToUser_Parms, Dialog), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToUser_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventActivateGameOverlayToUser_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToUser_Statics::NewProp_Dialog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToUser_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "ActivateGameOverlayToUser", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToUser_Statics::SteamProFriends_eventActivateGameOverlayToUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToUser_Statics::SteamProFriends_eventActivateGameOverlayToUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execActivateGameOverlayToUser)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Dialog);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProFriends::ActivateGameOverlayToUser(Z_Param_Dialog,Z_Param_SteamID);
	P_NATIVE_END;
}
// End Class USteamProFriends Function ActivateGameOverlayToUser

// Begin Class USteamProFriends Function ActivateGameOverlayToWebPage
struct Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToWebPage_Statics
{
	struct SteamProFriends_eventActivateGameOverlayToWebPage_Parms
	{
		FString URL;
		ESteamActivateGameOverlayToWebPageMode Mode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Activates Steam Overlay web browser directly to the specified URL.\n\x09*\n\x09* @param\x09URL\x09\x09The webpage to open. (A fully qualified address with the protocol is required, e.g. \"http://www.steampowered.com\")\n\x09* @param\x09Mode\x09(SDK 1.46+ only)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Activates Steam Overlay web browser directly to the specified URL.\n\n@param        URL             The webpage to open. (A fully qualified address with the protocol is required, e.g. \"http://www.steampowered.com\")\n@param        Mode    (SDK 1.46+ only)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToWebPage_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventActivateGameOverlayToWebPage_Parms, URL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToWebPage_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToWebPage_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventActivateGameOverlayToWebPage_Parms, Mode), Z_Construct_UEnum_SteamCorePro_ESteamActivateGameOverlayToWebPageMode, METADATA_PARAMS(0, nullptr) }; // 781542771
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToWebPage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToWebPage_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToWebPage_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToWebPage_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToWebPage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToWebPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "ActivateGameOverlayToWebPage", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToWebPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToWebPage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToWebPage_Statics::SteamProFriends_eventActivateGameOverlayToWebPage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToWebPage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToWebPage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToWebPage_Statics::SteamProFriends_eventActivateGameOverlayToWebPage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToWebPage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToWebPage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execActivateGameOverlayToWebPage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_ENUM(ESteamActivateGameOverlayToWebPageMode,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProFriends::ActivateGameOverlayToWebPage(Z_Param_URL,ESteamActivateGameOverlayToWebPageMode(Z_Param_Mode));
	P_NATIVE_END;
}
// End Class USteamProFriends Function ActivateGameOverlayToWebPage

// Begin Class USteamProFriends Function BHasEquippedProfileItem
struct Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics
{
	struct SteamProFriends_eventBHasEquippedProfileItem_Parms
	{
		FSteamID SteamId;
		ESteamCommunityProfileItemType ItemType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09 * After calling RequestEquippedProfileItems, returns true/false depending on whether a user has a ECommunityProfileItemType equipped or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "After calling RequestEquippedProfileItems, returns true/false depending on whether a user has a ECommunityProfileItemType equipped or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventBHasEquippedProfileItem_Parms, SteamId), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventBHasEquippedProfileItem_Parms, ItemType), Z_Construct_UEnum_SteamCorePro_ESteamCommunityProfileItemType, METADATA_PARAMS(0, nullptr) }; // 1657710931
void Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProFriends_eventBHasEquippedProfileItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventBHasEquippedProfileItem_Parms), &Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "BHasEquippedProfileItem", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::SteamProFriends_eventBHasEquippedProfileItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::SteamProFriends_eventBHasEquippedProfileItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execBHasEquippedProfileItem)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamId);
	P_GET_ENUM(ESteamCommunityProfileItemType,Z_Param_ItemType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProFriends::BHasEquippedProfileItem(Z_Param_SteamId,ESteamCommunityProfileItemType(Z_Param_ItemType));
	P_NATIVE_END;
}
// End Class USteamProFriends Function BHasEquippedProfileItem

// Begin Class USteamProFriends Function ClearRichPresence
struct Z_Construct_UFunction_USteamProFriends_ClearRichPresence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Clears all of the current user's Rich Presence key/values.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Clears all of the current user's Rich Presence key/values." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_ClearRichPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "ClearRichPresence", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ClearRichPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_ClearRichPresence_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamProFriends_ClearRichPresence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_ClearRichPresence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execClearRichPresence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProFriends::ClearRichPresence();
	P_NATIVE_END;
}
// End Class USteamProFriends Function ClearRichPresence

// Begin Class USteamProFriends Function CloseClanChatWindowInSteam
struct Z_Construct_UFunction_USteamProFriends_CloseClanChatWindowInSteam_Statics
{
	struct SteamProFriends_eventCloseClanChatWindowInSteam_Parms
	{
		FSteamID SteamIDClanChat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Closes the specified Steam group chat room in the Steam UI.\n\x09*\n\x09* @param\x09SteamIDClanChat\x09\x09The Steam ID of the Steam group chat room to close.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Closes the specified Steam group chat room in the Steam UI.\n\n@param        SteamIDClanChat         The Steam ID of the Steam group chat room to close." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_CloseClanChatWindowInSteam_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventCloseClanChatWindowInSteam_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProFriends_eventCloseClanChatWindowInSteam_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventCloseClanChatWindowInSteam_Parms), &Z_Construct_UFunction_USteamProFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_CloseClanChatWindowInSteam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_CloseClanChatWindowInSteam_Statics::NewProp_SteamIDClanChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_CloseClanChatWindowInSteam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_CloseClanChatWindowInSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "CloseClanChatWindowInSteam", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_CloseClanChatWindowInSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_CloseClanChatWindowInSteam_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_CloseClanChatWindowInSteam_Statics::SteamProFriends_eventCloseClanChatWindowInSteam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_CloseClanChatWindowInSteam_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_CloseClanChatWindowInSteam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_CloseClanChatWindowInSteam_Statics::SteamProFriends_eventCloseClanChatWindowInSteam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_CloseClanChatWindowInSteam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_CloseClanChatWindowInSteam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execCloseClanChatWindowInSteam)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProFriends::CloseClanChatWindowInSteam(Z_Param_SteamIDClanChat);
	P_NATIVE_END;
}
// End Class USteamProFriends Function CloseClanChatWindowInSteam

// Begin Class USteamProFriends Function DownloadClanActivityCounts
struct Z_Construct_UFunction_USteamProFriends_DownloadClanActivityCounts_Statics
{
	struct SteamProFriends_eventDownloadClanActivityCounts_Parms
	{
		FScriptDelegate Callback;
		TArray<FSteamID> SteamIDClans;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Refresh the Steam Group activity data or get the data from groups other than one that the current user is a member.\n\x09*\n\x09* After receiving the Callback you can then use GetClanActivityCounts to get the up to date user counts.\n\x09*\n\x09* @param\x09SteamIDClans\x09""A list of steam groups to get the updated data for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Refresh the Steam Group activity data or get the data from groups other than one that the current user is a member.\n\nAfter receiving the Callback you can then use GetClanActivityCounts to get the up to date user counts.\n\n@param        SteamIDClans    A list of steam groups to get the updated data for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClans_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamIDClans;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProFriends_DownloadClanActivityCounts_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventDownloadClanActivityCounts_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCounts__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2301898577
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_DownloadClanActivityCounts_Statics::NewProp_SteamIDClans_Inner = { "SteamIDClans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProFriends_DownloadClanActivityCounts_Statics::NewProp_SteamIDClans = { "SteamIDClans", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventDownloadClanActivityCounts_Parms, SteamIDClans), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_DownloadClanActivityCounts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_DownloadClanActivityCounts_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_DownloadClanActivityCounts_Statics::NewProp_SteamIDClans_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_DownloadClanActivityCounts_Statics::NewProp_SteamIDClans,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_DownloadClanActivityCounts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_DownloadClanActivityCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "DownloadClanActivityCounts", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_DownloadClanActivityCounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_DownloadClanActivityCounts_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_DownloadClanActivityCounts_Statics::SteamProFriends_eventDownloadClanActivityCounts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_DownloadClanActivityCounts_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_DownloadClanActivityCounts_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_DownloadClanActivityCounts_Statics::SteamProFriends_eventDownloadClanActivityCounts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_DownloadClanActivityCounts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_DownloadClanActivityCounts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execDownloadClanActivityCounts)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_TARRAY(FSteamID,Z_Param_SteamIDClans);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DownloadClanActivityCounts(FOnDownloadClanActivityCounts(Z_Param_Out_Callback),Z_Param_SteamIDClans);
	P_NATIVE_END;
}
// End Class USteamProFriends Function DownloadClanActivityCounts

// Begin Class USteamProFriends Function EnumerateFollowingList
struct Z_Construct_UFunction_USteamProFriends_EnumerateFollowingList_Statics
{
	struct SteamProFriends_eventEnumerateFollowingList_Parms
	{
		FScriptDelegate Callback;
		int32 StartIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the list of users that the current user is following.\n\x09*\n\x09* You can be following people that are not your friends. \n\x09* Following allows you to receive updates when the person does things like \n\x09* post a new piece of content to the Steam Workshop.\n\x09*\n\x09* @param\x09StartIndex\x09The index to start receiving followers from. This should be 0 on the initial call.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the list of users that the current user is following.\n\nYou can be following people that are not your friends.\nFollowing allows you to receive updates when the person does things like\npost a new piece of content to the Steam Workshop.\n\n@param        StartIndex      The index to start receiving followers from. This should be 0 on the initial call." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProFriends_EnumerateFollowingList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventEnumerateFollowingList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingList__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1576099230
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_EnumerateFollowingList_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventEnumerateFollowingList_Parms, StartIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_EnumerateFollowingList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_EnumerateFollowingList_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_EnumerateFollowingList_Statics::NewProp_StartIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_EnumerateFollowingList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_EnumerateFollowingList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "EnumerateFollowingList", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_EnumerateFollowingList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_EnumerateFollowingList_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_EnumerateFollowingList_Statics::SteamProFriends_eventEnumerateFollowingList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_EnumerateFollowingList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_EnumerateFollowingList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_EnumerateFollowingList_Statics::SteamProFriends_eventEnumerateFollowingList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_EnumerateFollowingList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_EnumerateFollowingList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execEnumerateFollowingList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnumerateFollowingList(FOnEnumerateFollowingList(Z_Param_Out_Callback),Z_Param_StartIndex);
	P_NATIVE_END;
}
// End Class USteamProFriends Function EnumerateFollowingList

// Begin Class USteamProFriends Function GetChatMemberByIndex
struct Z_Construct_UFunction_USteamProFriends_GetChatMemberByIndex_Statics
{
	struct SteamProFriends_eventGetChatMemberByIndex_Parms
	{
		FSteamID SteamIDClan;
		int32 User;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam ID at the given index in a Steam group chat.\n\x09*\n\x09* You must call GetClanChatMemberCount before calling this.\n\x09* \n\x09* @param\x09SteamIDClan\x09\x09This MUST be the same source used in the previous call to GetClanChatMemberCount!\n\x09* @param\x09User\x09\x09\x09""An index between 0 and GetClanChatMemberCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the Steam ID at the given index in a Steam group chat.\n\nYou must call GetClanChatMemberCount before calling this.\n\n@param        SteamIDClan             This MUST be the same source used in the previous call to GetClanChatMemberCount!\n@param        User                    An index between 0 and GetClanChatMemberCount." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_User;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetChatMemberByIndex_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetChatMemberByIndex_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetChatMemberByIndex_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetChatMemberByIndex_Parms, User), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetChatMemberByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetChatMemberByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetChatMemberByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetChatMemberByIndex_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetChatMemberByIndex_Statics::NewProp_User,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetChatMemberByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetChatMemberByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetChatMemberByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetChatMemberByIndex", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetChatMemberByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetChatMemberByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetChatMemberByIndex_Statics::SteamProFriends_eventGetChatMemberByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetChatMemberByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetChatMemberByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetChatMemberByIndex_Statics::SteamProFriends_eventGetChatMemberByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetChatMemberByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetChatMemberByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetChatMemberByIndex)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_GET_PROPERTY(FIntProperty,Z_Param_User);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=USteamProFriends::GetChatMemberByIndex(Z_Param_SteamIDClan,Z_Param_User);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetChatMemberByIndex

// Begin Class USteamProFriends Function GetClanActivityCounts
struct Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics
{
	struct SteamProFriends_eventGetClanActivityCounts_Parms
	{
		FSteamID SteamIDClan;
		int32 Online;
		int32 InGame;
		int32 Chatting;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the most recent information we have about what the users in a Steam Group are doing.\n\x09*\n\x09* This can only retrieve data that the local client knows about. \n\x09* To refresh the data or get data from a group other than one that the current \n\x09* user is a member of you must call DownloadClanActivityCounts.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam group to get the activity of.\n\x09* @param\x09Online\x09\x09\x09Returns the number of members that are online.\n\x09* @param\x09InGame\x09\x09\x09Returns the number members that are in game (excluding those with their status set to offline).\n\x09* @param\x09""Chatting\x09\x09Returns the number of members in the group chat room.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the most recent information we have about what the users in a Steam Group are doing.\n\nThis can only retrieve data that the local client knows about.\nTo refresh the data or get data from a group other than one that the current\nuser is a member of you must call DownloadClanActivityCounts.\n\n@param        SteamIDClan             The Steam group to get the activity of.\n@param        Online                  Returns the number of members that are online.\n@param        InGame                  Returns the number members that are in game (excluding those with their status set to offline).\n@param        Chatting                Returns the number of members in the group chat room." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Online;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Chatting;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanActivityCounts_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::NewProp_Online = { "Online", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanActivityCounts_Parms, Online), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::NewProp_InGame = { "InGame", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanActivityCounts_Parms, InGame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::NewProp_Chatting = { "Chatting", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanActivityCounts_Parms, Chatting), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProFriends_eventGetClanActivityCounts_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventGetClanActivityCounts_Parms), &Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::NewProp_Online,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::NewProp_InGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::NewProp_Chatting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetClanActivityCounts", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::SteamProFriends_eventGetClanActivityCounts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::SteamProFriends_eventGetClanActivityCounts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetClanActivityCounts)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Online);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InGame);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Chatting);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProFriends::GetClanActivityCounts(Z_Param_SteamIDClan,Z_Param_Out_Online,Z_Param_Out_InGame,Z_Param_Out_Chatting);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetClanActivityCounts

// Begin Class USteamProFriends Function GetClanByIndex
struct Z_Construct_UFunction_USteamProFriends_GetClanByIndex_Statics
{
	struct SteamProFriends_eventGetClanByIndex_Parms
	{
		int32 Clan;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam group's Steam ID at the given index.\n\x09*\n\x09* You must call GetClanCount before calling this.\n\x09*\n\x09* @param\x09""Clan\x09""An index between 0 and GetClanCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the Steam group's Steam ID at the given index.\n\nYou must call GetClanCount before calling this.\n\n@param        Clan    An index between 0 and GetClanCount." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Clan;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanByIndex_Statics::NewProp_Clan = { "Clan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanByIndex_Parms, Clan), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetClanByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanByIndex_Statics::NewProp_Clan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetClanByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetClanByIndex", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetClanByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetClanByIndex_Statics::SteamProFriends_eventGetClanByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetClanByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetClanByIndex_Statics::SteamProFriends_eventGetClanByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetClanByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetClanByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetClanByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Clan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=USteamProFriends::GetClanByIndex(Z_Param_Clan);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetClanByIndex

// Begin Class USteamProFriends Function GetClanChatMemberCount
struct Z_Construct_UFunction_USteamProFriends_GetClanChatMemberCount_Statics
{
	struct SteamProFriends_eventGetClanChatMemberCount_Parms
	{
		FSteamID SteamIDClan;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Get the number of users in a Steam group chat.\n\x09*\n\x09* Large steam groups cannot be iterated by the local user.\n\x09* The current user must be in a lobby to retrieve the Steam IDs of other users in that lobby.\n\x09* This is used for iteration, after calling this then GetChatMemberByIndex can \n\x09* be used to get the Steam ID of each person in the chat.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam group to get the chat count of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Get the number of users in a Steam group chat.\n\nLarge steam groups cannot be iterated by the local user.\nThe current user must be in a lobby to retrieve the Steam IDs of other users in that lobby.\nThis is used for iteration, after calling this then GetChatMemberByIndex can\nbe used to get the Steam ID of each person in the chat.\n\n@param        SteamIDClan             The Steam group to get the chat count of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanChatMemberCount_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanChatMemberCount_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanChatMemberCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanChatMemberCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetClanChatMemberCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanChatMemberCount_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanChatMemberCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanChatMemberCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetClanChatMemberCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetClanChatMemberCount", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetClanChatMemberCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanChatMemberCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetClanChatMemberCount_Statics::SteamProFriends_eventGetClanChatMemberCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanChatMemberCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetClanChatMemberCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetClanChatMemberCount_Statics::SteamProFriends_eventGetClanChatMemberCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetClanChatMemberCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetClanChatMemberCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetClanChatMemberCount)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProFriends::GetClanChatMemberCount(Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetClanChatMemberCount

// Begin Class USteamProFriends Function GetClanChatMessage
struct Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics
{
	struct SteamProFriends_eventGetClanChatMessage_Parms
	{
		FSteamID SteamIDClanChat;
		int32 MessageID;
		FString Text;
		ESteamChatEntryType ChatEntryType;
		FSteamID SteamIDChatter;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the data from a Steam group chat room message.\n\x09*\n\x09* This should only ever be called in response to a GameConnectedClanChatMsg_t Callback.\n\x09*\n\x09* @param\x09SteamIDClanChat\x09\x09The Steam ID of the Steam group chat room.\n\x09* @param\x09MessageID\x09\x09\x09The index of the message. This should be the m_iMessageID field of GameConnectedClanChatMsg_t.\n\x09* @param\x09Text\x09\x09\x09\x09The buffer where the chat message will be copied into. (Should be big enough to hold 2048 UTF-8 characters. So 8192 bytes + 1 for '\\0')\n\x09* @param\x09""ChatEntryType\x09\x09Returns the type of chat entry that was received.\n\x09* @param\x09SteamIDChatter\x09\x09Returns the Steam ID of the user that sent the message.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the data from a Steam group chat room message.\n\nThis should only ever be called in response to a GameConnectedClanChatMsg_t Callback.\n\n@param        SteamIDClanChat         The Steam ID of the Steam group chat room.\n@param        MessageID                       The index of the message. This should be the m_iMessageID field of GameConnectedClanChatMsg_t.\n@param        Text                            The buffer where the chat message will be copied into. (Should be big enough to hold 2048 UTF-8 characters. So 8192 bytes + 1 for '\\0')\n@param        ChatEntryType           Returns the type of chat entry that was received.\n@param        SteamIDChatter          Returns the Steam ID of the user that sent the message." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MessageID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDChatter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanChatMessage_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::NewProp_MessageID = { "MessageID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanChatMessage_Parms, MessageID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanChatMessage_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanChatMessage_Parms, ChatEntryType), Z_Construct_UEnum_SteamCorePro_ESteamChatEntryType, METADATA_PARAMS(0, nullptr) }; // 2368510614
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::NewProp_SteamIDChatter = { "SteamIDChatter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanChatMessage_Parms, SteamIDChatter), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanChatMessage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::NewProp_SteamIDClanChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::NewProp_MessageID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::NewProp_ChatEntryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::NewProp_ChatEntryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::NewProp_SteamIDChatter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetClanChatMessage", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::SteamProFriends_eventGetClanChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::SteamProFriends_eventGetClanChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetClanChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetClanChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetClanChatMessage)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
	P_GET_PROPERTY(FIntProperty,Z_Param_MessageID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Text);
	P_GET_ENUM_REF(ESteamChatEntryType,Z_Param_Out_ChatEntryType);
	P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDChatter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProFriends::GetClanChatMessage(Z_Param_SteamIDClanChat,Z_Param_MessageID,Z_Param_Out_Text,(ESteamChatEntryType&)(Z_Param_Out_ChatEntryType),Z_Param_Out_SteamIDChatter);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetClanChatMessage

// Begin Class USteamProFriends Function GetClanCount
struct Z_Construct_UFunction_USteamProFriends_GetClanCount_Statics
{
	struct SteamProFriends_eventGetClanCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of Steam groups that the current user is a member of.\n\x09*\n\x09* This is used for iteration, after calling this then GetClanByIndex can be used to get the Steam ID of each Steam group.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the number of Steam groups that the current user is a member of.\n\nThis is used for iteration, after calling this then GetClanByIndex can be used to get the Steam ID of each Steam group." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetClanCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetClanCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetClanCount", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetClanCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetClanCount_Statics::SteamProFriends_eventGetClanCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetClanCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetClanCount_Statics::SteamProFriends_eventGetClanCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetClanCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetClanCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetClanCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProFriends::GetClanCount();
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetClanCount

// Begin Class USteamProFriends Function GetClanName
struct Z_Construct_UFunction_USteamProFriends_GetClanName_Statics
{
	struct SteamProFriends_eventGetClanName_Parms
	{
		FSteamID SteamIDClan;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the display name for the specified Steam group; if the local client knows about it.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam group to get the name of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the display name for the specified Steam group; if the local client knows about it.\n\n@param        SteamIDClan             The Steam group to get the name of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanName_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanName_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetClanName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanName_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetClanName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetClanName", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetClanName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetClanName_Statics::SteamProFriends_eventGetClanName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetClanName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetClanName_Statics::SteamProFriends_eventGetClanName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetClanName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetClanName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetClanName)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProFriends::GetClanName(Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetClanName

// Begin Class USteamProFriends Function GetClanOfficerByIndex
struct Z_Construct_UFunction_USteamProFriends_GetClanOfficerByIndex_Statics
{
	struct SteamProFriends_eventGetClanOfficerByIndex_Parms
	{
		FSteamID SteamIDClan;
		int32 Officer;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the officer at the given index in a Steam group.\n\x09*\n\x09* You must call GetClanOfficerCount before calling this.\n\x09*\x09\n\x09* @param\x09SteamIDClan\x09\x09This must be the same steam group used in the previous call to GetClanOfficerCount!\n\x09* @param\x09Officer\x09\x09\x09""An index between 0 and GetClanOfficerCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the Steam ID of the officer at the given index in a Steam group.\n\nYou must call GetClanOfficerCount before calling this.\n\n@param        SteamIDClan             This must be the same steam group used in the previous call to GetClanOfficerCount!\n@param        Officer                 An index between 0 and GetClanOfficerCount." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Officer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanOfficerByIndex_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanOfficerByIndex_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanOfficerByIndex_Statics::NewProp_Officer = { "Officer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanOfficerByIndex_Parms, Officer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanOfficerByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanOfficerByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetClanOfficerByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanOfficerByIndex_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanOfficerByIndex_Statics::NewProp_Officer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanOfficerByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanOfficerByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetClanOfficerByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetClanOfficerByIndex", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetClanOfficerByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanOfficerByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetClanOfficerByIndex_Statics::SteamProFriends_eventGetClanOfficerByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanOfficerByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetClanOfficerByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetClanOfficerByIndex_Statics::SteamProFriends_eventGetClanOfficerByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetClanOfficerByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetClanOfficerByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetClanOfficerByIndex)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_GET_PROPERTY(FIntProperty,Z_Param_Officer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=USteamProFriends::GetClanOfficerByIndex(Z_Param_SteamIDClan,Z_Param_Officer);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetClanOfficerByIndex

// Begin Class USteamProFriends Function GetClanOfficerCount
struct Z_Construct_UFunction_USteamProFriends_GetClanOfficerCount_Statics
{
	struct SteamProFriends_eventGetClanOfficerCount_Parms
	{
		FSteamID SteamIDClan;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of officers (administrators and moderators) in a specified Steam group.\n\x09*\n\x09* This also includes the owner of the Steam group.\n\x09* This is used for iteration, after calling this then GetClanOfficerByIndex can be used to get the Steam ID of each officer.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam group to get the officer count of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the number of officers (administrators and moderators) in a specified Steam group.\n\nThis also includes the owner of the Steam group.\nThis is used for iteration, after calling this then GetClanOfficerByIndex can be used to get the Steam ID of each officer.\n\n@param        SteamIDClan             The Steam group to get the officer count of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanOfficerCount_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanOfficerCount_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanOfficerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanOfficerCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetClanOfficerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanOfficerCount_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanOfficerCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanOfficerCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetClanOfficerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetClanOfficerCount", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetClanOfficerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanOfficerCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetClanOfficerCount_Statics::SteamProFriends_eventGetClanOfficerCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanOfficerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetClanOfficerCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetClanOfficerCount_Statics::SteamProFriends_eventGetClanOfficerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetClanOfficerCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetClanOfficerCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetClanOfficerCount)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProFriends::GetClanOfficerCount(Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetClanOfficerCount

// Begin Class USteamProFriends Function GetClanOwner
struct Z_Construct_UFunction_USteamProFriends_GetClanOwner_Statics
{
	struct SteamProFriends_eventGetClanOwner_Parms
	{
		FSteamID SteamIDClan;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the owner of a Steam Group.\n\x09*\n\x09* You must call RequestClanOfficerList before this to get the required data!\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam ID of the Steam group to get the owner for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the owner of a Steam Group.\n\nYou must call RequestClanOfficerList before this to get the required data!\n\n@param        SteamIDClan             The Steam ID of the Steam group to get the owner for." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanOwner_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanOwner_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetClanOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanOwner_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetClanOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetClanOwner", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetClanOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetClanOwner_Statics::SteamProFriends_eventGetClanOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetClanOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetClanOwner_Statics::SteamProFriends_eventGetClanOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetClanOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetClanOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetClanOwner)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=USteamProFriends::GetClanOwner(Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetClanOwner

// Begin Class USteamProFriends Function GetClanTag
struct Z_Construct_UFunction_USteamProFriends_GetClanTag_Statics
{
	struct SteamProFriends_eventGetClanTag_Parms
	{
		FSteamID SteamIDClan;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the unique tag (abbreviation) for the specified Steam group; If the local client knows about it.\n\x09*\n\x09* The Steam group abbreviation is a unique way for people to identify the group and is limited to 12 characters. \n\x09* In some games this will appear next to the name of group members.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam group to get the tag of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the unique tag (abbreviation) for the specified Steam group; If the local client knows about it.\n\nThe Steam group abbreviation is a unique way for people to identify the group and is limited to 12 characters.\nIn some games this will appear next to the name of group members.\n\n@param        SteamIDClan             The Steam group to get the tag of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanTag_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanTag_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_GetClanTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetClanTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetClanTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanTag_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetClanTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetClanTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetClanTag", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetClanTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetClanTag_Statics::SteamProFriends_eventGetClanTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetClanTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetClanTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetClanTag_Statics::SteamProFriends_eventGetClanTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetClanTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetClanTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetClanTag)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProFriends::GetClanTag(Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetClanTag

// Begin Class USteamProFriends Function GetCoplayFriend
struct Z_Construct_UFunction_USteamProFriends_GetCoplayFriend_Statics
{
	struct SteamProFriends_eventGetCoplayFriend_Parms
	{
		int32 CoplayFriend;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the recently played with user at the given index.\n\x09*\n\x09* You must call GetCoplayFriendCount before calling this.\n\x09*\n\x09* @param\x09""CoplayFriend\x09\x09""An index between 0 and GetCoplayFriendCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the Steam ID of the recently played with user at the given index.\n\nYou must call GetCoplayFriendCount before calling this.\n\n@param        CoplayFriend            An index between 0 and GetCoplayFriendCount." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CoplayFriend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetCoplayFriend_Statics::NewProp_CoplayFriend = { "CoplayFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetCoplayFriend_Parms, CoplayFriend), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetCoplayFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetCoplayFriend_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetCoplayFriend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetCoplayFriend_Statics::NewProp_CoplayFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetCoplayFriend_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetCoplayFriend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetCoplayFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetCoplayFriend", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetCoplayFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetCoplayFriend_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetCoplayFriend_Statics::SteamProFriends_eventGetCoplayFriend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetCoplayFriend_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetCoplayFriend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetCoplayFriend_Statics::SteamProFriends_eventGetCoplayFriend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetCoplayFriend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetCoplayFriend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetCoplayFriend)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CoplayFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=USteamProFriends::GetCoplayFriend(Z_Param_CoplayFriend);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetCoplayFriend

// Begin Class USteamProFriends Function GetCoplayFriendCount
struct Z_Construct_UFunction_USteamProFriends_GetCoplayFriendCount_Statics
{
	struct SteamProFriends_eventGetCoplayFriendCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of players that the current users has recently played with, across all games.\n\x09*\n\x09* This is used for iteration, after calling this then GetCoplayFriend can be used to get the Steam ID of each player.\n\x09* These players are have been set with previous calls to SetPlayedWith.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the number of players that the current users has recently played with, across all games.\n\nThis is used for iteration, after calling this then GetCoplayFriend can be used to get the Steam ID of each player.\nThese players are have been set with previous calls to SetPlayedWith." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetCoplayFriendCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetCoplayFriendCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetCoplayFriendCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetCoplayFriendCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetCoplayFriendCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetCoplayFriendCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetCoplayFriendCount", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetCoplayFriendCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetCoplayFriendCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetCoplayFriendCount_Statics::SteamProFriends_eventGetCoplayFriendCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetCoplayFriendCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetCoplayFriendCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetCoplayFriendCount_Statics::SteamProFriends_eventGetCoplayFriendCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetCoplayFriendCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetCoplayFriendCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetCoplayFriendCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProFriends::GetCoplayFriendCount();
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetCoplayFriendCount

// Begin Class USteamProFriends Function GetFollowerCount
struct Z_Construct_UFunction_USteamProFriends_GetFollowerCount_Statics
{
	struct SteamProFriends_eventGetFollowerCount_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of users following the specified user.\n\x09*\n\x09* @param\x09SteamID\x09\x09The user to get the follower count for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the number of users following the specified user.\n\n@param        SteamID         The user to get the follower count for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProFriends_GetFollowerCount_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFollowerCount_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCount__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1708518520
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFollowerCount_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFollowerCount_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFollowerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFollowerCount_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFollowerCount_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFollowerCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFollowerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFollowerCount", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFollowerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFollowerCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFollowerCount_Statics::SteamProFriends_eventGetFollowerCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFollowerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFollowerCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFollowerCount_Statics::SteamProFriends_eventGetFollowerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFollowerCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFollowerCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFollowerCount)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFollowerCount(FOnGetFollowerCount(Z_Param_Out_Callback),Z_Param_SteamID);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFollowerCount

// Begin Class USteamProFriends Function GetFriendByIndex
struct Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics
{
	struct SteamProFriends_eventGetFriendByIndex_Parms
	{
		int32 Ifriend;
		TArray<ESteamFriendFlags> Flags;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the user at the given index.\n\x09*\n\x09* You must call GetFriendCount before calling this.\n\x09*\n\x09* @param\x09Ifriend\x09\x09\x09""An index between 0 and GetFriendCount.\n\x09* @param\x09""Flags\x09\x09""A combined union (binary \"or\") of EFriendFlags. This must be the same value as used in the previous call to GetFriendCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the Steam ID of the user at the given index.\n\nYou must call GetFriendCount before calling this.\n\n@param        Ifriend                 An index between 0 and GetFriendCount.\n@param        Flags           A combined union (binary \"or\") of EFriendFlags. This must be the same value as used in the previous call to GetFriendCount." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ifriend;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::NewProp_Ifriend = { "Ifriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendByIndex_Parms, Ifriend), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCorePro_ESteamFriendFlags, METADATA_PARAMS(0, nullptr) }; // 3834222905
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendByIndex_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3834222905
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::NewProp_Ifriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::NewProp_Flags_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendByIndex", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::SteamProFriends_eventGetFriendByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::SteamProFriends_eventGetFriendByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Ifriend);
	P_GET_TARRAY(ESteamFriendFlags,Z_Param_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=USteamProFriends::GetFriendByIndex(Z_Param_Ifriend,Z_Param_Flags);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendByIndex

// Begin Class USteamProFriends Function GetFriendCoplayGame
struct Z_Construct_UFunction_USteamProFriends_GetFriendCoplayGame_Statics
{
	struct SteamProFriends_eventGetFriendCoplayGame_Parms
	{
		FSteamID SteamIDFriend;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the app ID of the game that user played with someone on their recently-played-with list.\n\x09*\n\x09* @param\x09SteamIDFriend\x09\x09The Steam ID of the user on the recently-played-with list to get the game played.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the app ID of the game that user played with someone on their recently-played-with list.\n\n@param        SteamIDFriend           The Steam ID of the user on the recently-played-with list to get the game played." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendCoplayGame_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendCoplayGame_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendCoplayGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendCoplayGame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendCoplayGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendCoplayGame_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendCoplayGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendCoplayGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendCoplayGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendCoplayGame", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendCoplayGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendCoplayGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendCoplayGame_Statics::SteamProFriends_eventGetFriendCoplayGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendCoplayGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendCoplayGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendCoplayGame_Statics::SteamProFriends_eventGetFriendCoplayGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendCoplayGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendCoplayGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendCoplayGame)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProFriends::GetFriendCoplayGame(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendCoplayGame

// Begin Class USteamProFriends Function GetFriendCoplayTime
struct Z_Construct_UFunction_USteamProFriends_GetFriendCoplayTime_Statics
{
	struct SteamProFriends_eventGetFriendCoplayTime_Parms
	{
		FSteamID SteamIDFriend;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the timestamp of when the user played with someone on their recently-played-with list.\n\x09*\n\x09* @param\x09SteamIDFriend\x09\x09The Steam ID of the user on the recently-played-with list to get the game played.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the timestamp of when the user played with someone on their recently-played-with list.\n\n@param        SteamIDFriend           The Steam ID of the user on the recently-played-with list to get the game played." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendCoplayTime_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendCoplayTime_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendCoplayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendCoplayTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendCoplayTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendCoplayTime_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendCoplayTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendCoplayTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendCoplayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendCoplayTime", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendCoplayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendCoplayTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendCoplayTime_Statics::SteamProFriends_eventGetFriendCoplayTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendCoplayTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendCoplayTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendCoplayTime_Statics::SteamProFriends_eventGetFriendCoplayTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendCoplayTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendCoplayTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendCoplayTime)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProFriends::GetFriendCoplayTime(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendCoplayTime

// Begin Class USteamProFriends Function GetFriendCount
struct Z_Construct_UFunction_USteamProFriends_GetFriendCount_Statics
{
	struct SteamProFriends_eventGetFriendCount_Parms
	{
		TArray<ESteamFriendFlags> Flags;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of users the client knows about who meet a specified criteria. (Friends, blocked, users on the same server, etc)\n\x09*\n\x09* This can be used to iterate over all of the users by calling GetFriendByIndex to get the Steam IDs of each user.\n\x09*\n\x09* @param\x09""Flags\x09\x09""A combined union (binary \"or\") of one or more EFriendFlags.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the number of users the client knows about who meet a specified criteria. (Friends, blocked, users on the same server, etc)\n\nThis can be used to iterate over all of the users by calling GetFriendByIndex to get the Steam IDs of each user.\n\n@param        Flags           A combined union (binary \"or\") of one or more EFriendFlags." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendCount_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendCount_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCorePro_ESteamFriendFlags, METADATA_PARAMS(0, nullptr) }; // 3834222905
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendCount_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendCount_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3834222905
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendCount_Statics::NewProp_Flags_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendCount_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendCount_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendCount", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendCount_Statics::SteamProFriends_eventGetFriendCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendCount_Statics::SteamProFriends_eventGetFriendCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendCount)
{
	P_GET_TARRAY(ESteamFriendFlags,Z_Param_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProFriends::GetFriendCount(Z_Param_Flags);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendCount

// Begin Class USteamProFriends Function GetFriendCountFromSource
struct Z_Construct_UFunction_USteamProFriends_GetFriendCountFromSource_Statics
{
	struct SteamProFriends_eventGetFriendCountFromSource_Parms
	{
		FSteamID SteamIDSource;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Get the number of users in a source (Steam group, chat room, lobby, or game server).\n\x09*\n\x09* Large Steam groups cannot be iterated by the local user.\n\x09* If you're getting the number of lobby members then you should use ISteamMatchmaking::GetNumLobbyMembers instead.\n\x09* This is used for iteration, after calling this then GetFriendFromSourceByIndex can be used to get the Steam ID of each person in the source.\n\x09*\n\x09* @param\x09SteamIDSource\x09The Steam group, chat room, lobby or game server to get the user count of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Get the number of users in a source (Steam group, chat room, lobby, or game server).\n\nLarge Steam groups cannot be iterated by the local user.\nIf you're getting the number of lobby members then you should use ISteamMatchmaking::GetNumLobbyMembers instead.\nThis is used for iteration, after calling this then GetFriendFromSourceByIndex can be used to get the Steam ID of each person in the source.\n\n@param        SteamIDSource   The Steam group, chat room, lobby or game server to get the user count of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDSource;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendCountFromSource_Statics::NewProp_SteamIDSource = { "SteamIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendCountFromSource_Parms, SteamIDSource), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendCountFromSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendCountFromSource_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendCountFromSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendCountFromSource_Statics::NewProp_SteamIDSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendCountFromSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendCountFromSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendCountFromSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendCountFromSource", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendCountFromSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendCountFromSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendCountFromSource_Statics::SteamProFriends_eventGetFriendCountFromSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendCountFromSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendCountFromSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendCountFromSource_Statics::SteamProFriends_eventGetFriendCountFromSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendCountFromSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendCountFromSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendCountFromSource)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProFriends::GetFriendCountFromSource(Z_Param_SteamIDSource);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendCountFromSource

// Begin Class USteamProFriends Function GetFriendFromSourceByIndex
struct Z_Construct_UFunction_USteamProFriends_GetFriendFromSourceByIndex_Statics
{
	struct SteamProFriends_eventGetFriendFromSourceByIndex_Parms
	{
		FSteamID SteamIDSource;
		int32 Ifriend;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam ID at the given index from a source (Steam group, chat room, lobby, or game server).\n\x09*\n\x09* You must call GetFriendCountFromSource before calling this.\n\x09*\n\x09* @param\x09SteamIDSource\x09\x09This MUST be the same source used in the previous call to GetFriendCountFromSource!\n\x09* @param\x09Ifriend\x09\x09\x09\x09""An index between 0 and GetFriendCountFromSource.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the Steam ID at the given index from a source (Steam group, chat room, lobby, or game server).\n\nYou must call GetFriendCountFromSource before calling this.\n\n@param        SteamIDSource           This MUST be the same source used in the previous call to GetFriendCountFromSource!\n@param        Ifriend                         An index between 0 and GetFriendCountFromSource." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDSource;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ifriend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendFromSourceByIndex_Statics::NewProp_SteamIDSource = { "SteamIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendFromSourceByIndex_Parms, SteamIDSource), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendFromSourceByIndex_Statics::NewProp_Ifriend = { "Ifriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendFromSourceByIndex_Parms, Ifriend), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendFromSourceByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendFromSourceByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendFromSourceByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendFromSourceByIndex_Statics::NewProp_SteamIDSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendFromSourceByIndex_Statics::NewProp_Ifriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendFromSourceByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendFromSourceByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendFromSourceByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendFromSourceByIndex", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendFromSourceByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendFromSourceByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendFromSourceByIndex_Statics::SteamProFriends_eventGetFriendFromSourceByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendFromSourceByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendFromSourceByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendFromSourceByIndex_Statics::SteamProFriends_eventGetFriendFromSourceByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendFromSourceByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendFromSourceByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendFromSourceByIndex)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDSource);
	P_GET_PROPERTY(FIntProperty,Z_Param_Ifriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=USteamProFriends::GetFriendFromSourceByIndex(Z_Param_SteamIDSource,Z_Param_Ifriend);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendFromSourceByIndex

// Begin Class USteamProFriends Function GetFriendGamePlayed
struct Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics
{
	struct SteamProFriends_eventGetFriendGamePlayed_Parms
	{
		FSteamID SteamIDFriend;
		FSteamGameID GameID;
		FString GameIP;
		int32 ConnectionPort;
		int32 QueryPort;
		FSteamID SteamIDLobby;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if the specified friend is in a game, and gets info about the game if they are.\n\x09*\n\x09* @param\x09SteamIDFriend\x09\x09The Steam ID of the other user.\n\x09* @param\x09GameID\x09\x09\x09\x09Game information\n\x09* @param\x09GameIP\x09\x09\x09\x09Game information\n\x09* @param\x09""ConnectionPort\x09\x09Game information\n\x09* @param\x09QueryPort\x09\x09\x09Game information\n\x09* @param\x09SteamIDLobby\x09\x09Game information\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Checks if the specified friend is in a game, and gets info about the game if they are.\n\n@param        SteamIDFriend           The Steam ID of the other user.\n@param        GameID                          Game information\n@param        GameIP                          Game information\n@param        ConnectionPort          Game information\n@param        QueryPort                       Game information\n@param        SteamIDLobby            Game information" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendGamePlayed_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendGamePlayed_Parms, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(0, nullptr) }; // 1935638068
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::NewProp_GameIP = { "GameIP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendGamePlayed_Parms, GameIP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendGamePlayed_Parms, ConnectionPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendGamePlayed_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendGamePlayed_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProFriends_eventGetFriendGamePlayed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventGetFriendGamePlayed_Parms), &Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::NewProp_GameIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::NewProp_ConnectionPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendGamePlayed", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::SteamProFriends_eventGetFriendGamePlayed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::SteamProFriends_eventGetFriendGamePlayed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendGamePlayed)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_GET_STRUCT_REF(FSteamGameID,Z_Param_Out_GameID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_GameIP);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ConnectionPort);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_QueryPort);
	P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProFriends::GetFriendGamePlayed(Z_Param_SteamIDFriend,Z_Param_Out_GameID,Z_Param_Out_GameIP,Z_Param_Out_ConnectionPort,Z_Param_Out_QueryPort,Z_Param_Out_SteamIDLobby);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendGamePlayed

// Begin Class USteamProFriends Function GetFriendMessage
struct Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics
{
	struct SteamProFriends_eventGetFriendMessage_Parms
	{
		FSteamID SteamIDFriend;
		int32 MessageID;
		FString Text;
		ESteamChatEntryType ChatEntryType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the data from a Steam friends message.\n\x09*\n\x09* This should only ever be called in response to a GameConnectedFriendChatMsg_t Callback.\n\x09*\n\x09* @param\x09SteamIDFriend\x09\x09The Steam ID of the friend that sent this message.\n\x09* @param\x09MessageID\x09\x09\x09The index of the message. This should be the m_iMessageID field of GameConnectedFriendChatMsg_t.\n\x09* @param\x09Text\x09\x09\x09\x09The buffer where the chat message will be copied into.\n\x09* @param\x09""ChatEntryType\x09\x09Returns the type of chat entry that was received.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the data from a Steam friends message.\n\nThis should only ever be called in response to a GameConnectedFriendChatMsg_t Callback.\n\n@param        SteamIDFriend           The Steam ID of the friend that sent this message.\n@param        MessageID                       The index of the message. This should be the m_iMessageID field of GameConnectedFriendChatMsg_t.\n@param        Text                            The buffer where the chat message will be copied into.\n@param        ChatEntryType           Returns the type of chat entry that was received." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MessageID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendMessage_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::NewProp_MessageID = { "MessageID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendMessage_Parms, MessageID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendMessage_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendMessage_Parms, ChatEntryType), Z_Construct_UEnum_SteamCorePro_ESteamChatEntryType, METADATA_PARAMS(0, nullptr) }; // 2368510614
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendMessage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::NewProp_MessageID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::NewProp_ChatEntryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::NewProp_ChatEntryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendMessage", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::SteamProFriends_eventGetFriendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::SteamProFriends_eventGetFriendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendMessage)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_GET_PROPERTY(FIntProperty,Z_Param_MessageID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Text);
	P_GET_ENUM_REF(ESteamChatEntryType,Z_Param_Out_ChatEntryType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProFriends::GetFriendMessage(Z_Param_SteamIDFriend,Z_Param_MessageID,Z_Param_Out_Text,(ESteamChatEntryType&)(Z_Param_Out_ChatEntryType));
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendMessage

// Begin Class USteamProFriends Function GetFriendPersonaName
struct Z_Construct_UFunction_USteamProFriends_GetFriendPersonaName_Statics
{
	struct SteamProFriends_eventGetFriendPersonaName_Parms
	{
		FSteamID SteamIDFriend;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the specified user's persona (display) name.\n\x09*\n\x09* This will only be known to the current user if the other user is in their friends list, on the same game server, \n\x09* in a chat room or lobby, or in a small Steam group with the local user.\n\x09* Upon on first joining a lobby, chat room, or game server the current user will not known the name \n\x09* of the other users automatically; that information will arrive asynchronously via PersonaStateChange_t Callbacks.\n\x09* To get the persona name of the current user use GetPersonaName.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the other user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the specified user's persona (display) name.\n\nThis will only be known to the current user if the other user is in their friends list, on the same game server,\nin a chat room or lobby, or in a small Steam group with the local user.\nUpon on first joining a lobby, chat room, or game server the current user will not known the name\nof the other users automatically; that information will arrive asynchronously via PersonaStateChange_t Callbacks.\nTo get the persona name of the current user use GetPersonaName.\n\n@param        SteamIDFriend   The Steam ID of the other user." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendPersonaName_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendPersonaName_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendPersonaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendPersonaName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendPersonaName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendPersonaName_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendPersonaName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendPersonaName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendPersonaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendPersonaName", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendPersonaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendPersonaName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendPersonaName_Statics::SteamProFriends_eventGetFriendPersonaName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendPersonaName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendPersonaName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendPersonaName_Statics::SteamProFriends_eventGetFriendPersonaName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendPersonaName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendPersonaName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendPersonaName)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProFriends::GetFriendPersonaName(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendPersonaName

// Begin Class USteamProFriends Function GetFriendPersonaNameHistory
struct Z_Construct_UFunction_USteamProFriends_GetFriendPersonaNameHistory_Statics
{
	struct SteamProFriends_eventGetFriendPersonaNameHistory_Parms
	{
		FSteamID SteamIDFriend;
		int32 PersonaName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets one of the previous display names for the specified user.\n\x09*\n\x09* This only works for display names that the current user has seen on the local computer.\n\x09*\n\x09* @param\x09SteamIDFriend\x09\x09The Steam ID of the other user.\n\x09* @param\x09PersonaName\x09\x09\x09The index of the history to receive. 0 is their current persona name, 1 is their most recent before they changed it, etc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets one of the previous display names for the specified user.\n\nThis only works for display names that the current user has seen on the local computer.\n\n@param        SteamIDFriend           The Steam ID of the other user.\n@param        PersonaName                     The index of the history to receive. 0 is their current persona name, 1 is their most recent before they changed it, etc." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PersonaName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendPersonaNameHistory_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendPersonaNameHistory_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendPersonaNameHistory_Statics::NewProp_PersonaName = { "PersonaName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendPersonaNameHistory_Parms, PersonaName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendPersonaNameHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendPersonaNameHistory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendPersonaNameHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendPersonaNameHistory_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendPersonaNameHistory_Statics::NewProp_PersonaName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendPersonaNameHistory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendPersonaNameHistory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendPersonaNameHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendPersonaNameHistory", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendPersonaNameHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendPersonaNameHistory_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendPersonaNameHistory_Statics::SteamProFriends_eventGetFriendPersonaNameHistory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendPersonaNameHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendPersonaNameHistory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendPersonaNameHistory_Statics::SteamProFriends_eventGetFriendPersonaNameHistory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendPersonaNameHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendPersonaNameHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendPersonaNameHistory)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_GET_PROPERTY(FIntProperty,Z_Param_PersonaName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProFriends::GetFriendPersonaNameHistory(Z_Param_SteamIDFriend,Z_Param_PersonaName);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendPersonaNameHistory

// Begin Class USteamProFriends Function GetFriendPersonaState
struct Z_Construct_UFunction_USteamProFriends_GetFriendPersonaState_Statics
{
	struct SteamProFriends_eventGetFriendPersonaState_Parms
	{
		FSteamID SteamIDFriend;
		ESteamPersonaState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the current status of the specified user.\n\x09*\n\x09* This will only be known to the current user if the other user is in their friends list, \n\x09* on the same game server, in a chat room or lobby, or in a small Steam group with the local user.\n\x09* To get the state of the current user use GetPersonaState.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the other user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the current status of the specified user.\n\nThis will only be known to the current user if the other user is in their friends list,\non the same game server, in a chat room or lobby, or in a small Steam group with the local user.\nTo get the state of the current user use GetPersonaState.\n\n@param        SteamIDFriend   The Steam ID of the other user." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendPersonaState_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendPersonaState_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendPersonaState_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamPersonaState, METADATA_PARAMS(0, nullptr) }; // 1280109599
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendPersonaState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendPersonaState_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendPersonaState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendPersonaState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendPersonaState", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendPersonaState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendPersonaState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendPersonaState_Statics::SteamProFriends_eventGetFriendPersonaState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendPersonaState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendPersonaState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendPersonaState_Statics::SteamProFriends_eventGetFriendPersonaState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendPersonaState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendPersonaState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendPersonaState)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamPersonaState*)Z_Param__Result=USteamProFriends::GetFriendPersonaState(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendPersonaState

// Begin Class USteamProFriends Function GetFriendRelationship
struct Z_Construct_UFunction_USteamProFriends_GetFriendRelationship_Statics
{
	struct SteamProFriends_eventGetFriendRelationship_Parms
	{
		FSteamID SteamIDFriend;
		ESteamFriendRelationship ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets a relationship to a specified user.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the other user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets a relationship to a specified user.\n\n@param        SteamIDFriend   The Steam ID of the other user." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendRelationship_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendRelationship_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendRelationship_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendRelationship_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendRelationship_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamFriendRelationship, METADATA_PARAMS(0, nullptr) }; // 2513791165
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendRelationship_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendRelationship_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendRelationship_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendRelationship_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendRelationship_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendRelationship_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendRelationship", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendRelationship_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendRelationship_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendRelationship_Statics::SteamProFriends_eventGetFriendRelationship_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendRelationship_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendRelationship_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendRelationship_Statics::SteamProFriends_eventGetFriendRelationship_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendRelationship()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendRelationship_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendRelationship)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamFriendRelationship*)Z_Param__Result=USteamProFriends::GetFriendRelationship(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendRelationship

// Begin Class USteamProFriends Function GetFriendRichPresence
struct Z_Construct_UFunction_USteamProFriends_GetFriendRichPresence_Statics
{
	struct SteamProFriends_eventGetFriendRichPresence_Parms
	{
		FSteamID SteamIDFriend;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Get a Rich Presence value from a specified friend.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The friend to get the Rich Presence value for.\n\x09* @param\x09Key\x09\x09\x09\x09The Rich Presence key to request.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Get a Rich Presence value from a specified friend.\n\n@param        SteamIDFriend   The friend to get the Rich Presence value for.\n@param        Key                             The Rich Presence key to request." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendRichPresence_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendRichPresence_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendRichPresence_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendRichPresence_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendRichPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendRichPresence_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendRichPresence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendRichPresence_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendRichPresence_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendRichPresence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendRichPresence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendRichPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendRichPresence", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendRichPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendRichPresence_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendRichPresence_Statics::SteamProFriends_eventGetFriendRichPresence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendRichPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendRichPresence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendRichPresence_Statics::SteamProFriends_eventGetFriendRichPresence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendRichPresence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendRichPresence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendRichPresence)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProFriends::GetFriendRichPresence(Z_Param_SteamIDFriend,Z_Param_Key);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendRichPresence

// Begin Class USteamProFriends Function GetFriendRichPresenceKeyByIndex
struct Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyByIndex_Statics
{
	struct SteamProFriends_eventGetFriendRichPresenceKeyByIndex_Parms
	{
		FSteamID SteamIDFriend;
		int32 Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets a Rich Presence key by index.\n\x09*\n\x09* @param\x09SteamIDFriend\x09This should be the same user provided to the previous call to GetFriendRichPresenceKeyCount!\n\x09* @param\x09Key\x09\x09\x09\x09""An index between 0 and GetFriendRichPresenceKeyCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets a Rich Presence key by index.\n\n@param        SteamIDFriend   This should be the same user provided to the previous call to GetFriendRichPresenceKeyCount!\n@param        Key                             An index between 0 and GetFriendRichPresenceKeyCount." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendRichPresenceKeyByIndex_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendRichPresenceKeyByIndex_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendRichPresenceKeyByIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendRichPresenceKeyByIndex", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyByIndex_Statics::SteamProFriends_eventGetFriendRichPresenceKeyByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyByIndex_Statics::SteamProFriends_eventGetFriendRichPresenceKeyByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendRichPresenceKeyByIndex)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_GET_PROPERTY(FIntProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProFriends::GetFriendRichPresenceKeyByIndex(Z_Param_SteamIDFriend,Z_Param_Key);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendRichPresenceKeyByIndex

// Begin Class USteamProFriends Function GetFriendRichPresenceKeyCount
struct Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyCount_Statics
{
	struct SteamProFriends_eventGetFriendRichPresenceKeyCount_Parms
	{
		FSteamID SteamIDFriend;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of Rich Presence keys that are set on the specified user.\n\x09*\n\x09* This is used for iteration, after calling this then GetFriendRichPresenceKeyByIndex to get the rich presence keys.\n\x09* This is typically only ever used for debugging purposes.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the user to get the Rich Presence Key Count of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the number of Rich Presence keys that are set on the specified user.\n\nThis is used for iteration, after calling this then GetFriendRichPresenceKeyByIndex to get the rich presence keys.\nThis is typically only ever used for debugging purposes.\n\n@param        SteamIDFriend   The Steam ID of the user to get the Rich Presence Key Count of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendRichPresenceKeyCount_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendRichPresenceKeyCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendRichPresenceKeyCount", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyCount_Statics::SteamProFriends_eventGetFriendRichPresenceKeyCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyCount_Statics::SteamProFriends_eventGetFriendRichPresenceKeyCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendRichPresenceKeyCount)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProFriends::GetFriendRichPresenceKeyCount(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendRichPresenceKeyCount

// Begin Class USteamProFriends Function GetFriendsGroupCount
struct Z_Construct_UFunction_USteamProFriends_GetFriendsGroupCount_Statics
{
	struct SteamProFriends_eventGetFriendsGroupCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of friends groups (tags) the user has created.\n\x09*\n\x09* This is used for iteration, after calling this then GetFriendsGroupIDByIndex can be used to get the ID of each friend group.\n\x09* This is not to be confused with Steam groups. Those can be obtained with GetClanCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the number of friends groups (tags) the user has created.\n\nThis is used for iteration, after calling this then GetFriendsGroupIDByIndex can be used to get the ID of each friend group.\nThis is not to be confused with Steam groups. Those can be obtained with GetClanCount." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendsGroupCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendsGroupCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendsGroupCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendsGroupCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendsGroupCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendsGroupCount", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendsGroupCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupCount_Statics::SteamProFriends_eventGetFriendsGroupCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendsGroupCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupCount_Statics::SteamProFriends_eventGetFriendsGroupCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendsGroupCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendsGroupCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendsGroupCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProFriends::GetFriendsGroupCount();
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendsGroupCount

// Begin Class USteamProFriends Function GetFriendsGroupIDByIndex
struct Z_Construct_UFunction_USteamProFriends_GetFriendsGroupIDByIndex_Statics
{
	struct SteamProFriends_eventGetFriendsGroupIDByIndex_Parms
	{
		int32 FriendGroup;
		FSteamFriendsGroupID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the friends group ID for the given index.\n\x09*\n\x09* @param\x09""FriendGroup\x09\x09""An index between 0 and GetFriendsGroupCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the friends group ID for the given index.\n\n@param        FriendGroup             An index between 0 and GetFriendsGroupCount." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FriendGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendsGroupIDByIndex_Statics::NewProp_FriendGroup = { "FriendGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendsGroupIDByIndex_Parms, FriendGroup), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendsGroupIDByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendsGroupIDByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(0, nullptr) }; // 4204409531
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendsGroupIDByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendsGroupIDByIndex_Statics::NewProp_FriendGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendsGroupIDByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupIDByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendsGroupIDByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendsGroupIDByIndex", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendsGroupIDByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupIDByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupIDByIndex_Statics::SteamProFriends_eventGetFriendsGroupIDByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupIDByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendsGroupIDByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupIDByIndex_Statics::SteamProFriends_eventGetFriendsGroupIDByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendsGroupIDByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendsGroupIDByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendsGroupIDByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_FriendGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamFriendsGroupID*)Z_Param__Result=USteamProFriends::GetFriendsGroupIDByIndex(Z_Param_FriendGroup);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendsGroupIDByIndex

// Begin Class USteamProFriends Function GetFriendsGroupMembersCount
struct Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersCount_Statics
{
	struct SteamProFriends_eventGetFriendsGroupMembersCount_Parms
	{
		FSteamFriendsGroupID FriendsGroupID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of friends in a given friends group.\n\x09*\n\x09* This should be called before getting the list of friends with GetFriendsGroupMembersList.\n\x09*\n\x09* @param\x09""FriendsGroupID\x09\x09The friends group ID to get the number of friends in.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the number of friends in a given friends group.\n\nThis should be called before getting the list of friends with GetFriendsGroupMembersList.\n\n@param        FriendsGroupID          The friends group ID to get the number of friends in." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsGroupID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersCount_Statics::NewProp_FriendsGroupID = { "FriendsGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendsGroupMembersCount_Parms, FriendsGroupID), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(0, nullptr) }; // 4204409531
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendsGroupMembersCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersCount_Statics::NewProp_FriendsGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendsGroupMembersCount", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersCount_Statics::SteamProFriends_eventGetFriendsGroupMembersCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersCount_Statics::SteamProFriends_eventGetFriendsGroupMembersCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendsGroupMembersCount)
{
	P_GET_STRUCT(FSteamFriendsGroupID,Z_Param_FriendsGroupID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProFriends::GetFriendsGroupMembersCount(Z_Param_FriendsGroupID);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendsGroupMembersCount

// Begin Class USteamProFriends Function GetFriendsGroupMembersList
struct Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList_Statics
{
	struct SteamProFriends_eventGetFriendsGroupMembersList_Parms
	{
		FSteamFriendsGroupID FriendsGroupID;
		TArray<FSteamID> SteamIDMembers;
		int32 MembersCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of friends in the given friends group.\n\x09*\n\x09* If fewer friends exist than requested those positions' Steam IDs will be invalid.\n\x09* You must call GetFriendsGroupMembersCount before calling this to set up the pOutSteamIDMembers array with an appropriate size!\n\x09*\n\x09* @param\x09""FriendsGroupID\x09\x09The friends group ID to get the members list of.\n\x09* @param\x09SteamIDMembers\x09\x09Returns the Steam IDs of the friends by setting them in this array.\n\x09* @param\x09MembersCount\x09\x09This should match the number of elements allocated pOutSteamIDMembers and the value returned by GetFriendsGroupMembersCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the number of friends in the given friends group.\n\nIf fewer friends exist than requested those positions' Steam IDs will be invalid.\nYou must call GetFriendsGroupMembersCount before calling this to set up the pOutSteamIDMembers array with an appropriate size!\n\n@param        FriendsGroupID          The friends group ID to get the members list of.\n@param        SteamIDMembers          Returns the Steam IDs of the friends by setting them in this array.\n@param        MembersCount            This should match the number of elements allocated pOutSteamIDMembers and the value returned by GetFriendsGroupMembersCount." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsGroupID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDMembers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamIDMembers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MembersCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList_Statics::NewProp_FriendsGroupID = { "FriendsGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendsGroupMembersList_Parms, FriendsGroupID), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(0, nullptr) }; // 4204409531
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList_Statics::NewProp_SteamIDMembers_Inner = { "SteamIDMembers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList_Statics::NewProp_SteamIDMembers = { "SteamIDMembers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendsGroupMembersList_Parms, SteamIDMembers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList_Statics::NewProp_MembersCount = { "MembersCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendsGroupMembersList_Parms, MembersCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList_Statics::NewProp_FriendsGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList_Statics::NewProp_SteamIDMembers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList_Statics::NewProp_SteamIDMembers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList_Statics::NewProp_MembersCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendsGroupMembersList", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList_Statics::SteamProFriends_eventGetFriendsGroupMembersList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList_Statics::SteamProFriends_eventGetFriendsGroupMembersList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendsGroupMembersList)
{
	P_GET_STRUCT(FSteamFriendsGroupID,Z_Param_FriendsGroupID);
	P_GET_TARRAY_REF(FSteamID,Z_Param_Out_SteamIDMembers);
	P_GET_PROPERTY(FIntProperty,Z_Param_MembersCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProFriends::GetFriendsGroupMembersList(Z_Param_FriendsGroupID,Z_Param_Out_SteamIDMembers,Z_Param_MembersCount);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendsGroupMembersList

// Begin Class USteamProFriends Function GetFriendsGroupName
struct Z_Construct_UFunction_USteamProFriends_GetFriendsGroupName_Statics
{
	struct SteamProFriends_eventGetFriendsGroupName_Parms
	{
		FSteamFriendsGroupID FriendsGroupID;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the name for the given friends group.\n\x09*\n\x09* @param\x09""FriendsGroupID\x09\x09The friends group ID to get the name of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the name for the given friends group.\n\n@param        FriendsGroupID          The friends group ID to get the name of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsGroupID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendsGroupName_Statics::NewProp_FriendsGroupID = { "FriendsGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendsGroupName_Parms, FriendsGroupID), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(0, nullptr) }; // 4204409531
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendsGroupName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendsGroupName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendsGroupName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendsGroupName_Statics::NewProp_FriendsGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendsGroupName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendsGroupName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendsGroupName", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendsGroupName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupName_Statics::SteamProFriends_eventGetFriendsGroupName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendsGroupName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendsGroupName_Statics::SteamProFriends_eventGetFriendsGroupName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendsGroupName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendsGroupName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendsGroupName)
{
	P_GET_STRUCT(FSteamFriendsGroupID,Z_Param_FriendsGroupID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProFriends::GetFriendsGroupName(Z_Param_FriendsGroupID);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendsGroupName

// Begin Class USteamProFriends Function GetFriendSteamLevel
struct Z_Construct_UFunction_USteamProFriends_GetFriendSteamLevel_Statics
{
	struct SteamProFriends_eventGetFriendSteamLevel_Parms
	{
		FSteamID SteamIDFriend;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam level of the specified user.\n\x09*\n\x09* You can use the local users Steam ID (ISteamUser::GetSteamID) to get their level.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the Steam level of the specified user.\n\nYou can use the local users Steam ID (ISteamUser::GetSteamID) to get their level.\n\n@param        SteamIDFriend   The Steam ID of the user." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendSteamLevel_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendSteamLevel_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetFriendSteamLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetFriendSteamLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetFriendSteamLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendSteamLevel_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetFriendSteamLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendSteamLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetFriendSteamLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetFriendSteamLevel", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetFriendSteamLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendSteamLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendSteamLevel_Statics::SteamProFriends_eventGetFriendSteamLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetFriendSteamLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetFriendSteamLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetFriendSteamLevel_Statics::SteamProFriends_eventGetFriendSteamLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetFriendSteamLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetFriendSteamLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetFriendSteamLevel)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProFriends::GetFriendSteamLevel(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetFriendSteamLevel

// Begin Class USteamProFriends Function GetLargeFriendAvatar
struct Z_Construct_UFunction_USteamProFriends_GetLargeFriendAvatar_Statics
{
	struct SteamProFriends_eventGetLargeFriendAvatar_Parms
	{
		FSteamID SteamIDFriend;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets a handle to the large (128*128px) avatar for the specified user.\n\x09*\n\x09* You can pass in ISteamUser::GetSteamID to get the current users avatar.\n\x09* This only works for users that the local user knows about. They will automatically know about their friends, \n\x09* people on leaderboards they've requested, or people in the same source as them \n\x09* (Steam group, chat room, lobby, or game server). If they don't know about them then you must call \n\x09* RequestUserInformation to cache the avatar locally.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets a handle to the large (128*128px) avatar for the specified user.\n\nYou can pass in ISteamUser::GetSteamID to get the current users avatar.\nThis only works for users that the local user knows about. They will automatically know about their friends,\npeople on leaderboards they've requested, or people in the same source as them\n(Steam group, chat room, lobby, or game server). If they don't know about them then you must call\nRequestUserInformation to cache the avatar locally.\n\n@param        SteamIDFriend   The Steam ID of the user." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetLargeFriendAvatar_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetLargeFriendAvatar_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProFriends_GetLargeFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetLargeFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetLargeFriendAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetLargeFriendAvatar_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetLargeFriendAvatar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetLargeFriendAvatar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetLargeFriendAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetLargeFriendAvatar", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetLargeFriendAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetLargeFriendAvatar_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetLargeFriendAvatar_Statics::SteamProFriends_eventGetLargeFriendAvatar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetLargeFriendAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetLargeFriendAvatar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetLargeFriendAvatar_Statics::SteamProFriends_eventGetLargeFriendAvatar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetLargeFriendAvatar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetLargeFriendAvatar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetLargeFriendAvatar)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=USteamProFriends::GetLargeFriendAvatar(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetLargeFriendAvatar

// Begin Class USteamProFriends Function GetMediumFriendAvatar
struct Z_Construct_UFunction_USteamProFriends_GetMediumFriendAvatar_Statics
{
	struct SteamProFriends_eventGetMediumFriendAvatar_Parms
	{
		FSteamID SteamIDFriend;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets a handle to the large (64*64px) avatar for the specified user.\n\x09*\n\x09* You can pass in ISteamUser::GetSteamID to get the current users avatar.\n\x09* This only works for users that the local user knows about. They will automatically know about their friends,\n\x09* people on leaderboards they've requested, or people in the same source as them\n\x09* (Steam group, chat room, lobby, or game server). If they don't know about them then you must call\n\x09* RequestUserInformation to cache the avatar locally.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets a handle to the large (64*64px) avatar for the specified user.\n\nYou can pass in ISteamUser::GetSteamID to get the current users avatar.\nThis only works for users that the local user knows about. They will automatically know about their friends,\npeople on leaderboards they've requested, or people in the same source as them\n(Steam group, chat room, lobby, or game server). If they don't know about them then you must call\nRequestUserInformation to cache the avatar locally.\n\n@param        SteamIDFriend   The Steam ID of the user." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetMediumFriendAvatar_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetMediumFriendAvatar_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProFriends_GetMediumFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetMediumFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetMediumFriendAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetMediumFriendAvatar_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetMediumFriendAvatar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetMediumFriendAvatar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetMediumFriendAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetMediumFriendAvatar", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetMediumFriendAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetMediumFriendAvatar_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetMediumFriendAvatar_Statics::SteamProFriends_eventGetMediumFriendAvatar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetMediumFriendAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetMediumFriendAvatar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetMediumFriendAvatar_Statics::SteamProFriends_eventGetMediumFriendAvatar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetMediumFriendAvatar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetMediumFriendAvatar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetMediumFriendAvatar)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=USteamProFriends::GetMediumFriendAvatar(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetMediumFriendAvatar

// Begin Class USteamProFriends Function GetPersonaName
struct Z_Construct_UFunction_USteamProFriends_GetPersonaName_Statics
{
	struct SteamProFriends_eventGetPersonaName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the current users persona (display) name.\n\x09*\n\x09* This is the same name that is displayed the users community profile page.\n\x09* To get the persona name of other users use GetFriendPersonaName.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the current users persona (display) name.\n\nThis is the same name that is displayed the users community profile page.\nTo get the persona name of other users use GetFriendPersonaName." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_GetPersonaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetPersonaName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetPersonaName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetPersonaName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetPersonaName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetPersonaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetPersonaName", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetPersonaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetPersonaName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetPersonaName_Statics::SteamProFriends_eventGetPersonaName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetPersonaName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetPersonaName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetPersonaName_Statics::SteamProFriends_eventGetPersonaName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetPersonaName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetPersonaName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetPersonaName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProFriends::GetPersonaName();
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetPersonaName

// Begin Class USteamProFriends Function GetPersonaName_Pure
struct Z_Construct_UFunction_USteamProFriends_GetPersonaName_Pure_Statics
{
	struct SteamProFriends_eventGetPersonaName_Pure_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the current users persona (display) name.\n\x09*\n\x09* This is the same name that is displayed the users community profile page.\n\x09* To get the persona name of other users use GetFriendPersonaName.\n\x09*/" },
		{ "DisplayName", "Get Persona Name (Pure)" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the current users persona (display) name.\n\nThis is the same name that is displayed the users community profile page.\nTo get the persona name of other users use GetFriendPersonaName." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_GetPersonaName_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetPersonaName_Pure_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetPersonaName_Pure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetPersonaName_Pure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetPersonaName_Pure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetPersonaName_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetPersonaName_Pure", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetPersonaName_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetPersonaName_Pure_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetPersonaName_Pure_Statics::SteamProFriends_eventGetPersonaName_Pure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetPersonaName_Pure_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetPersonaName_Pure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetPersonaName_Pure_Statics::SteamProFriends_eventGetPersonaName_Pure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetPersonaName_Pure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetPersonaName_Pure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetPersonaName_Pure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProFriends::GetPersonaName_Pure();
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetPersonaName_Pure

// Begin Class USteamProFriends Function GetPersonaState
struct Z_Construct_UFunction_USteamProFriends_GetPersonaState_Statics
{
	struct SteamProFriends_eventGetPersonaState_Parms
	{
		ESteamPersonaState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the friend status of the current user.\n\x09*\n\x09* To get the state of other users use GetFriendPersonaState.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the friend status of the current user.\n\nTo get the state of other users use GetFriendPersonaState." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProFriends_GetPersonaState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProFriends_GetPersonaState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetPersonaState_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamPersonaState, METADATA_PARAMS(0, nullptr) }; // 1280109599
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetPersonaState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetPersonaState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetPersonaState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetPersonaState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetPersonaState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetPersonaState", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetPersonaState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetPersonaState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetPersonaState_Statics::SteamProFriends_eventGetPersonaState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetPersonaState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetPersonaState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetPersonaState_Statics::SteamProFriends_eventGetPersonaState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetPersonaState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetPersonaState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetPersonaState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamPersonaState*)Z_Param__Result=USteamProFriends::GetPersonaState();
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetPersonaState

// Begin Class USteamProFriends Function GetPersonaState_Pure
struct Z_Construct_UFunction_USteamProFriends_GetPersonaState_Pure_Statics
{
	struct SteamProFriends_eventGetPersonaState_Pure_Parms
	{
		ESteamPersonaState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the friend status of the current user.\n\x09*\n\x09* To get the state of other users use GetFriendPersonaState.\n\x09*/" },
		{ "DisplayName", "Get Persona State (Pure)" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the friend status of the current user.\n\nTo get the state of other users use GetFriendPersonaState." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetPersonaState_Pure_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamPersonaState, METADATA_PARAMS(0, nullptr) }; // 1280109599
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetPersonaState_Pure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetPersonaState_Pure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetPersonaState_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetPersonaState_Pure", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetPersonaState_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetPersonaState_Pure_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetPersonaState_Pure_Statics::SteamProFriends_eventGetPersonaState_Pure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetPersonaState_Pure_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetPersonaState_Pure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetPersonaState_Pure_Statics::SteamProFriends_eventGetPersonaState_Pure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetPersonaState_Pure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetPersonaState_Pure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetPersonaState_Pure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamPersonaState*)Z_Param__Result=USteamProFriends::GetPersonaState_Pure();
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetPersonaState_Pure

// Begin Class USteamProFriends Function GetPlayerNickname
struct Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Statics
{
	struct SteamProFriends_eventGetPlayerNickname_Parms
	{
		FSteamID steamIDPlayer;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the nickname that the current user has set for the specified user.\n\x09*\n\x09* @param\x09steamIDPlayer\x09The Steam ID of the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the nickname that the current user has set for the specified user.\n\n@param        steamIDPlayer   The Steam ID of the user." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_steamIDPlayer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Statics::NewProp_steamIDPlayer = { "steamIDPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetPlayerNickname_Parms, steamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetPlayerNickname_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Statics::NewProp_steamIDPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetPlayerNickname", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Statics::SteamProFriends_eventGetPlayerNickname_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Statics::SteamProFriends_eventGetPlayerNickname_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetPlayerNickname()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetPlayerNickname)
{
	P_GET_STRUCT(FSteamID,Z_Param_steamIDPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProFriends::GetPlayerNickname(Z_Param_steamIDPlayer);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetPlayerNickname

// Begin Class USteamProFriends Function GetPlayerNickname_Pure
struct Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Pure_Statics
{
	struct SteamProFriends_eventGetPlayerNickname_Pure_Parms
	{
		FSteamID steamIDPlayer;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the nickname that the current user has set for the specified user.\n\x09*\n\x09* @param\x09steamIDPlayer\x09The Steam ID of the user.\n\x09*/" },
		{ "DisplayName", "Get Player Nickname (Pure)" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the nickname that the current user has set for the specified user.\n\n@param        steamIDPlayer   The Steam ID of the user." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_steamIDPlayer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Pure_Statics::NewProp_steamIDPlayer = { "steamIDPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetPlayerNickname_Pure_Parms, steamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetPlayerNickname_Pure_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Pure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Pure_Statics::NewProp_steamIDPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Pure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Pure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetPlayerNickname_Pure", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Pure_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Pure_Statics::SteamProFriends_eventGetPlayerNickname_Pure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Pure_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Pure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Pure_Statics::SteamProFriends_eventGetPlayerNickname_Pure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Pure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Pure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetPlayerNickname_Pure)
{
	P_GET_STRUCT(FSteamID,Z_Param_steamIDPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProFriends::GetPlayerNickname_Pure(Z_Param_steamIDPlayer);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetPlayerNickname_Pure

// Begin Class USteamProFriends Function GetProfileItemPropertyString
struct Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics
{
	struct SteamProFriends_eventGetProfileItemPropertyString_Parms
	{
		FSteamID SteamId;
		ESteamCommunityProfileItemType ItemType;
		ESteamCommunityProfileItemProperty Prop;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09 * Returns a string property given a ECommunityProfileItemType and ECommunityProfileItemProperty\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Returns a string property given a ECommunityProfileItemType and ECommunityProfileItemProperty" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Prop_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Prop;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetProfileItemPropertyString_Parms, SteamId), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetProfileItemPropertyString_Parms, ItemType), Z_Construct_UEnum_SteamCorePro_ESteamCommunityProfileItemType, METADATA_PARAMS(0, nullptr) }; // 1657710931
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::NewProp_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::NewProp_Prop = { "Prop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetProfileItemPropertyString_Parms, Prop), Z_Construct_UEnum_SteamCorePro_ESteamCommunityProfileItemProperty, METADATA_PARAMS(0, nullptr) }; // 1748648314
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetProfileItemPropertyString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::NewProp_Prop_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::NewProp_Prop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetProfileItemPropertyString", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::SteamProFriends_eventGetProfileItemPropertyString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::SteamProFriends_eventGetProfileItemPropertyString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetProfileItemPropertyString)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamId);
	P_GET_ENUM(ESteamCommunityProfileItemType,Z_Param_ItemType);
	P_GET_ENUM(ESteamCommunityProfileItemProperty,Z_Param_Prop);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProFriends::GetProfileItemPropertyString(Z_Param_SteamId,ESteamCommunityProfileItemType(Z_Param_ItemType),ESteamCommunityProfileItemProperty(Z_Param_Prop));
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetProfileItemPropertyString

// Begin Class USteamProFriends Function GetProfileItemPropertyUint
struct Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics
{
	struct SteamProFriends_eventGetProfileItemPropertyUint_Parms
	{
		FSteamID SteamId;
		ESteamCommunityProfileItemType ItemType;
		ESteamCommunityProfileItemProperty Prop;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09 * Returns an unsigned integer property given a ECommunityProfileItemType and ECommunityProfileItemProperty\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Returns an unsigned integer property given a ECommunityProfileItemType and ECommunityProfileItemProperty" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Prop_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Prop;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetProfileItemPropertyUint_Parms, SteamId), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetProfileItemPropertyUint_Parms, ItemType), Z_Construct_UEnum_SteamCorePro_ESteamCommunityProfileItemType, METADATA_PARAMS(0, nullptr) }; // 1657710931
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::NewProp_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::NewProp_Prop = { "Prop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetProfileItemPropertyUint_Parms, Prop), Z_Construct_UEnum_SteamCorePro_ESteamCommunityProfileItemProperty, METADATA_PARAMS(0, nullptr) }; // 1748648314
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetProfileItemPropertyUint_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::NewProp_Prop_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::NewProp_Prop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetProfileItemPropertyUint", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::SteamProFriends_eventGetProfileItemPropertyUint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::SteamProFriends_eventGetProfileItemPropertyUint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetProfileItemPropertyUint)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamId);
	P_GET_ENUM(ESteamCommunityProfileItemType,Z_Param_ItemType);
	P_GET_ENUM(ESteamCommunityProfileItemProperty,Z_Param_Prop);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProFriends::GetProfileItemPropertyUint(Z_Param_SteamId,ESteamCommunityProfileItemType(Z_Param_ItemType),ESteamCommunityProfileItemProperty(Z_Param_Prop));
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetProfileItemPropertyUint

// Begin Class USteamProFriends Function GetSmallFriendAvatar
struct Z_Construct_UFunction_USteamProFriends_GetSmallFriendAvatar_Statics
{
	struct SteamProFriends_eventGetSmallFriendAvatar_Parms
	{
		FSteamID SteamIDFriend;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets a handle to the large (32*32px) avatar for the specified user.\n\x09*\n\x09* You can pass in ISteamUser::GetSteamID to get the current users avatar.\n\x09* This only works for users that the local user knows about. They will automatically know about their friends,\n\x09* people on leaderboards they've requested, or people in the same source as them\n\x09* (Steam group, chat room, lobby, or game server). If they don't know about them then you must call\n\x09* RequestUserInformation to cache the avatar locally.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets a handle to the large (32*32px) avatar for the specified user.\n\nYou can pass in ISteamUser::GetSteamID to get the current users avatar.\nThis only works for users that the local user knows about. They will automatically know about their friends,\npeople on leaderboards they've requested, or people in the same source as them\n(Steam group, chat room, lobby, or game server). If they don't know about them then you must call\nRequestUserInformation to cache the avatar locally.\n\n@param        SteamIDFriend   The Steam ID of the user." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_GetSmallFriendAvatar_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetSmallFriendAvatar_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProFriends_GetSmallFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetSmallFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetSmallFriendAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetSmallFriendAvatar_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetSmallFriendAvatar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetSmallFriendAvatar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetSmallFriendAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetSmallFriendAvatar", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetSmallFriendAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetSmallFriendAvatar_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetSmallFriendAvatar_Statics::SteamProFriends_eventGetSmallFriendAvatar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetSmallFriendAvatar_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetSmallFriendAvatar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetSmallFriendAvatar_Statics::SteamProFriends_eventGetSmallFriendAvatar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetSmallFriendAvatar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetSmallFriendAvatar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetSmallFriendAvatar)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=USteamProFriends::GetSmallFriendAvatar(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetSmallFriendAvatar

// Begin Class USteamProFriends Function GetSteamFriends
struct Z_Construct_UFunction_USteamProFriends_GetSteamFriends_Statics
{
	struct SteamProFriends_eventGetSteamFriends_Parms
	{
		USteamProFriends* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProFriends_GetSteamFriends_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetSteamFriends_Parms, ReturnValue), Z_Construct_UClass_USteamProFriends_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetSteamFriends_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetSteamFriends_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetSteamFriends_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetSteamFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetSteamFriends", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetSteamFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetSteamFriends_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetSteamFriends_Statics::SteamProFriends_eventGetSteamFriends_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetSteamFriends_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetSteamFriends_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetSteamFriends_Statics::SteamProFriends_eventGetSteamFriends_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetSteamFriends()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetSteamFriends_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetSteamFriends)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProFriends**)Z_Param__Result=USteamProFriends::GetSteamFriends();
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetSteamFriends

// Begin Class USteamProFriends Function GetUserRestrictions
struct Z_Construct_UFunction_USteamProFriends_GetUserRestrictions_Statics
{
	struct SteamProFriends_eventGetUserRestrictions_Parms
	{
		TArray<ESteamUserRestriction> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if current user is chat restricted.\n\x09*\n\x09* If they are restricted, then they can't send or receive any text/voice chat messages, can't see custom avatars.\n\x09* A chat restricted user can't add friends or join any groups.\n\x09* Restricted users can still be online and send/receive game invites.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Checks if current user is chat restricted.\n\nIf they are restricted, then they can't send or receive any text/voice chat messages, can't see custom avatars.\nA chat restricted user can't add friends or join any groups.\nRestricted users can still be online and send/receive game invites." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProFriends_GetUserRestrictions_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProFriends_GetUserRestrictions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCorePro_ESteamUserRestriction, METADATA_PARAMS(0, nullptr) }; // 3378634813
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProFriends_GetUserRestrictions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventGetUserRestrictions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3378634813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_GetUserRestrictions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetUserRestrictions_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetUserRestrictions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_GetUserRestrictions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetUserRestrictions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_GetUserRestrictions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "GetUserRestrictions", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_GetUserRestrictions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetUserRestrictions_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_GetUserRestrictions_Statics::SteamProFriends_eventGetUserRestrictions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_GetUserRestrictions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_GetUserRestrictions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_GetUserRestrictions_Statics::SteamProFriends_eventGetUserRestrictions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_GetUserRestrictions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_GetUserRestrictions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execGetUserRestrictions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ESteamUserRestriction>*)Z_Param__Result=USteamProFriends::GetUserRestrictions();
	P_NATIVE_END;
}
// End Class USteamProFriends Function GetUserRestrictions

// Begin Class USteamProFriends Function HasFriend
struct Z_Construct_UFunction_USteamProFriends_HasFriend_Statics
{
	struct SteamProFriends_eventHasFriend_Parms
	{
		FSteamID SteamIDFriend;
		TArray<ESteamFriendFlags> Flags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if the user meets the specified criteria. (Friends, blocked, users on the same server, etc)\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam user to check the friend status of.\n\x09* @param\x09""Flags\x09\x09""A combined union (binary \"or\") of one or more EFriendFlags.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Checks if the user meets the specified criteria. (Friends, blocked, users on the same server, etc)\n\n@param        SteamIDFriend   The Steam user to check the friend status of.\n@param        Flags           A combined union (binary \"or\") of one or more EFriendFlags." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventHasFriend_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCorePro_ESteamFriendFlags, METADATA_PARAMS(0, nullptr) }; // 3834222905
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventHasFriend_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3834222905
void Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProFriends_eventHasFriend_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventHasFriend_Parms), &Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::NewProp_Flags_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "HasFriend", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::SteamProFriends_eventHasFriend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::SteamProFriends_eventHasFriend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_HasFriend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_HasFriend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execHasFriend)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_GET_TARRAY(ESteamFriendFlags,Z_Param_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProFriends::HasFriend(Z_Param_SteamIDFriend,Z_Param_Flags);
	P_NATIVE_END;
}
// End Class USteamProFriends Function HasFriend

// Begin Class USteamProFriends Function InviteUserToGame
struct Z_Construct_UFunction_USteamProFriends_InviteUserToGame_Statics
{
	struct SteamProFriends_eventInviteUserToGame_Parms
	{
		FSteamID SteamIDFriend;
		FString ConnectString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Invites a friend or clan member to the current game using a special invite string.\n\x09*\n\x09* If the target user accepts the invite then the pchConnectString gets added to the command-line when launching the game.\n\x09* If the game is already running for that user, then they will receive a GameRichPresenceJoinRequested_t Callback with the connect string.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the friend to invite.\n\x09* @param\x09""ConnectString\x09""A string that lets the friend know how to join the game (I.E. the game server IP). This can not be longer than specified in k_cchMaxRichPresenceValueLength\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Invites a friend or clan member to the current game using a special invite string.\n\nIf the target user accepts the invite then the pchConnectString gets added to the command-line when launching the game.\nIf the game is already running for that user, then they will receive a GameRichPresenceJoinRequested_t Callback with the connect string.\n\n@param        SteamIDFriend   The Steam ID of the friend to invite.\n@param        ConnectString   A string that lets the friend know how to join the game (I.E. the game server IP). This can not be longer than specified in k_cchMaxRichPresenceValueLength" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_InviteUserToGame_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventInviteUserToGame_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_InviteUserToGame_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventInviteUserToGame_Parms, ConnectString), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProFriends_InviteUserToGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProFriends_eventInviteUserToGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_InviteUserToGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventInviteUserToGame_Parms), &Z_Construct_UFunction_USteamProFriends_InviteUserToGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_InviteUserToGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_InviteUserToGame_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_InviteUserToGame_Statics::NewProp_ConnectString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_InviteUserToGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_InviteUserToGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_InviteUserToGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "InviteUserToGame", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_InviteUserToGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_InviteUserToGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_InviteUserToGame_Statics::SteamProFriends_eventInviteUserToGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_InviteUserToGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_InviteUserToGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_InviteUserToGame_Statics::SteamProFriends_eventInviteUserToGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_InviteUserToGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_InviteUserToGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execInviteUserToGame)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_GET_PROPERTY(FStrProperty,Z_Param_ConnectString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProFriends::InviteUserToGame(Z_Param_SteamIDFriend,Z_Param_ConnectString);
	P_NATIVE_END;
}
// End Class USteamProFriends Function InviteUserToGame

// Begin Class USteamProFriends Function IsClanChatAdmin
struct Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin_Statics
{
	struct SteamProFriends_eventIsClanChatAdmin_Parms
	{
		FSteamID SteamIDClanChat;
		FSteamID steamIDUser;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if a user in the Steam group chat room is an admin.\n\x09*\n\x09* @param\x09SteamIDClanChat\x09\x09The Steam ID of the Steam group chat room.\n\x09* @param\x09steamIDUser\x09\x09\x09The Steam ID of the user to check the admin status of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Checks if a user in the Steam group chat room is an admin.\n\n@param        SteamIDClanChat         The Steam ID of the Steam group chat room.\n@param        steamIDUser                     The Steam ID of the user to check the admin status of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventIsClanChatAdmin_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventIsClanChatAdmin_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProFriends_eventIsClanChatAdmin_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventIsClanChatAdmin_Parms), &Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin_Statics::NewProp_SteamIDClanChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin_Statics::NewProp_steamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "IsClanChatAdmin", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin_Statics::SteamProFriends_eventIsClanChatAdmin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin_Statics::SteamProFriends_eventIsClanChatAdmin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execIsClanChatAdmin)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
	P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProFriends::IsClanChatAdmin(Z_Param_SteamIDClanChat,Z_Param_steamIDUser);
	P_NATIVE_END;
}
// End Class USteamProFriends Function IsClanChatAdmin

// Begin Class USteamProFriends Function IsClanChatWindowOpenInSteam
struct Z_Construct_UFunction_USteamProFriends_IsClanChatWindowOpenInSteam_Statics
{
	struct SteamProFriends_eventIsClanChatWindowOpenInSteam_Parms
	{
		FSteamID SteamIDClanChat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if the Steam Group chat room is open in the Steam UI.\n\x09*\n\x09* @param\x09SteamIDClanChat\x09\x09The Steam ID of the Steam group chat room to check.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Checks if the Steam Group chat room is open in the Steam UI.\n\n@param        SteamIDClanChat         The Steam ID of the Steam group chat room to check." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventIsClanChatWindowOpenInSteam_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProFriends_eventIsClanChatWindowOpenInSteam_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventIsClanChatWindowOpenInSteam_Parms), &Z_Construct_UFunction_USteamProFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_IsClanChatWindowOpenInSteam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_SteamIDClanChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_IsClanChatWindowOpenInSteam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_IsClanChatWindowOpenInSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "IsClanChatWindowOpenInSteam", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_IsClanChatWindowOpenInSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_IsClanChatWindowOpenInSteam_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_IsClanChatWindowOpenInSteam_Statics::SteamProFriends_eventIsClanChatWindowOpenInSteam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_IsClanChatWindowOpenInSteam_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_IsClanChatWindowOpenInSteam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_IsClanChatWindowOpenInSteam_Statics::SteamProFriends_eventIsClanChatWindowOpenInSteam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_IsClanChatWindowOpenInSteam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_IsClanChatWindowOpenInSteam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execIsClanChatWindowOpenInSteam)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProFriends::IsClanChatWindowOpenInSteam(Z_Param_SteamIDClanChat);
	P_NATIVE_END;
}
// End Class USteamProFriends Function IsClanChatWindowOpenInSteam

// Begin Class USteamProFriends Function IsClanOfficialGameGroup
struct Z_Construct_UFunction_USteamProFriends_IsClanOfficialGameGroup_Statics
{
	struct SteamProFriends_eventIsClanOfficialGameGroup_Parms
	{
		FSteamID SteamIDClan;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if the Steam group is an official game group/community hub.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam ID of the Steam group.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Checks if the Steam group is an official game group/community hub.\n\n@param        SteamIDClan             The Steam ID of the Steam group." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_IsClanOfficialGameGroup_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventIsClanOfficialGameGroup_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProFriends_eventIsClanOfficialGameGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventIsClanOfficialGameGroup_Parms), &Z_Construct_UFunction_USteamProFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_IsClanOfficialGameGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_IsClanOfficialGameGroup_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_IsClanOfficialGameGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_IsClanOfficialGameGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "IsClanOfficialGameGroup", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_IsClanOfficialGameGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_IsClanOfficialGameGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_IsClanOfficialGameGroup_Statics::SteamProFriends_eventIsClanOfficialGameGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_IsClanOfficialGameGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_IsClanOfficialGameGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_IsClanOfficialGameGroup_Statics::SteamProFriends_eventIsClanOfficialGameGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_IsClanOfficialGameGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_IsClanOfficialGameGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execIsClanOfficialGameGroup)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProFriends::IsClanOfficialGameGroup(Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// End Class USteamProFriends Function IsClanOfficialGameGroup

// Begin Class USteamProFriends Function IsClanPublic
struct Z_Construct_UFunction_USteamProFriends_IsClanPublic_Statics
{
	struct SteamProFriends_eventIsClanPublic_Parms
	{
		FSteamID SteamIDClan;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if the Steam group is public.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam ID of the Steam group.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Checks if the Steam group is public.\n\n@param        SteamIDClan             The Steam ID of the Steam group." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_IsClanPublic_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventIsClanPublic_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProFriends_IsClanPublic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProFriends_eventIsClanPublic_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_IsClanPublic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventIsClanPublic_Parms), &Z_Construct_UFunction_USteamProFriends_IsClanPublic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_IsClanPublic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_IsClanPublic_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_IsClanPublic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_IsClanPublic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_IsClanPublic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "IsClanPublic", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_IsClanPublic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_IsClanPublic_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_IsClanPublic_Statics::SteamProFriends_eventIsClanPublic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_IsClanPublic_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_IsClanPublic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_IsClanPublic_Statics::SteamProFriends_eventIsClanPublic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_IsClanPublic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_IsClanPublic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execIsClanPublic)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProFriends::IsClanPublic(Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// End Class USteamProFriends Function IsClanPublic

// Begin Class USteamProFriends Function IsFollowing
struct Z_Construct_UFunction_USteamProFriends_IsFollowing_Statics
{
	struct SteamProFriends_eventIsFollowing_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if the current user is following the specified user.\n\x09*\n\x09* @param\x09SteamID\x09\x09The Steam ID of the check if we are following.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Checks if the current user is following the specified user.\n\n@param        SteamID         The Steam ID of the check if we are following." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProFriends_IsFollowing_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventIsFollowing_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowing__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1206571483
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_IsFollowing_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventIsFollowing_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_IsFollowing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_IsFollowing_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_IsFollowing_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_IsFollowing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_IsFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "IsFollowing", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_IsFollowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_IsFollowing_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_IsFollowing_Statics::SteamProFriends_eventIsFollowing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_IsFollowing_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_IsFollowing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_IsFollowing_Statics::SteamProFriends_eventIsFollowing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_IsFollowing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_IsFollowing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execIsFollowing)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IsFollowing(FOnIsFollowing(Z_Param_Out_Callback),Z_Param_SteamID);
	P_NATIVE_END;
}
// End Class USteamProFriends Function IsFollowing

// Begin Class USteamProFriends Function IsUserInSource
struct Z_Construct_UFunction_USteamProFriends_IsUserInSource_Statics
{
	struct SteamProFriends_eventIsUserInSource_Parms
	{
		FSteamID SteamIDUser;
		FSteamID SteamIDSource;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if a specified user is in a source (Steam group, chat room, lobby, or game server).\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The user to check if they are in the source.\n\x09* @param\x09SteamIDSource\x09The source to check for the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Checks if a specified user is in a source (Steam group, chat room, lobby, or game server).\n\n@param        SteamIDUser             The user to check if they are in the source.\n@param        SteamIDSource   The source to check for the user." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDSource;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_IsUserInSource_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventIsUserInSource_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_IsUserInSource_Statics::NewProp_SteamIDSource = { "SteamIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventIsUserInSource_Parms, SteamIDSource), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProFriends_IsUserInSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProFriends_eventIsUserInSource_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_IsUserInSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventIsUserInSource_Parms), &Z_Construct_UFunction_USteamProFriends_IsUserInSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_IsUserInSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_IsUserInSource_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_IsUserInSource_Statics::NewProp_SteamIDSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_IsUserInSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_IsUserInSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_IsUserInSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "IsUserInSource", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_IsUserInSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_IsUserInSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_IsUserInSource_Statics::SteamProFriends_eventIsUserInSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_IsUserInSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_IsUserInSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_IsUserInSource_Statics::SteamProFriends_eventIsUserInSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_IsUserInSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_IsUserInSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execIsUserInSource)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProFriends::IsUserInSource(Z_Param_SteamIDUser,Z_Param_SteamIDSource);
	P_NATIVE_END;
}
// End Class USteamProFriends Function IsUserInSource

// Begin Class USteamProFriends Function JoinClanChatRoom
struct Z_Construct_UFunction_USteamProFriends_JoinClanChatRoom_Statics
{
	struct SteamProFriends_eventJoinClanChatRoom_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamIDClan;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Allows the user to join Steam group (clan) chats right within the game.\n\x09*\n\x09* The behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.\n\x09* You can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam ID of the Steam group to join.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Allows the user to join Steam group (clan) chats right within the game.\n\nThe behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.\nYou can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.\n\n@param        SteamIDClan             The Steam ID of the Steam group to join." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProFriends_JoinClanChatRoom_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventJoinClanChatRoom_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoom__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 575115296
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_JoinClanChatRoom_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventJoinClanChatRoom_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_JoinClanChatRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_JoinClanChatRoom_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_JoinClanChatRoom_Statics::NewProp_SteamIDClan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_JoinClanChatRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_JoinClanChatRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "JoinClanChatRoom", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_JoinClanChatRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_JoinClanChatRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_JoinClanChatRoom_Statics::SteamProFriends_eventJoinClanChatRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_JoinClanChatRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_JoinClanChatRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_JoinClanChatRoom_Statics::SteamProFriends_eventJoinClanChatRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_JoinClanChatRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_JoinClanChatRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execJoinClanChatRoom)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinClanChatRoom(FOnJoinClanChatRoom(Z_Param_Out_Callback),Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// End Class USteamProFriends Function JoinClanChatRoom

// Begin Class USteamProFriends Function LeaveClanChatRoom
struct Z_Construct_UFunction_USteamProFriends_LeaveClanChatRoom_Statics
{
	struct SteamProFriends_eventLeaveClanChatRoom_Parms
	{
		FSteamID SteamIDClan;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Leaves a Steam group chat that the user has previously entered with JoinClanChatRoom.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam ID of the Steam group chat to leave.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Leaves a Steam group chat that the user has previously entered with JoinClanChatRoom.\n\n@param        SteamIDClan             The Steam ID of the Steam group chat to leave." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_LeaveClanChatRoom_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventLeaveClanChatRoom_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProFriends_eventLeaveClanChatRoom_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventLeaveClanChatRoom_Parms), &Z_Construct_UFunction_USteamProFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_LeaveClanChatRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_LeaveClanChatRoom_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_LeaveClanChatRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_LeaveClanChatRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "LeaveClanChatRoom", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_LeaveClanChatRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_LeaveClanChatRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_LeaveClanChatRoom_Statics::SteamProFriends_eventLeaveClanChatRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_LeaveClanChatRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_LeaveClanChatRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_LeaveClanChatRoom_Statics::SteamProFriends_eventLeaveClanChatRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_LeaveClanChatRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_LeaveClanChatRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execLeaveClanChatRoom)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProFriends::LeaveClanChatRoom(Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// End Class USteamProFriends Function LeaveClanChatRoom

// Begin Class USteamProFriends Function OpenClanChatWindowInSteam
struct Z_Construct_UFunction_USteamProFriends_OpenClanChatWindowInSteam_Statics
{
	struct SteamProFriends_eventOpenClanChatWindowInSteam_Parms
	{
		FSteamID SteamIDClanChat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Opens the specified Steam group chat room in the Steam UI.\n\x09*\n\x09* @param\x09SteamIDClanChat\x09\x09The Steam ID of the Steam group chat room to open.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Opens the specified Steam group chat room in the Steam UI.\n\n@param        SteamIDClanChat         The Steam ID of the Steam group chat room to open." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_OpenClanChatWindowInSteam_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventOpenClanChatWindowInSteam_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProFriends_eventOpenClanChatWindowInSteam_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventOpenClanChatWindowInSteam_Parms), &Z_Construct_UFunction_USteamProFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_OpenClanChatWindowInSteam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_OpenClanChatWindowInSteam_Statics::NewProp_SteamIDClanChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_OpenClanChatWindowInSteam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_OpenClanChatWindowInSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "OpenClanChatWindowInSteam", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_OpenClanChatWindowInSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_OpenClanChatWindowInSteam_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_OpenClanChatWindowInSteam_Statics::SteamProFriends_eventOpenClanChatWindowInSteam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_OpenClanChatWindowInSteam_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_OpenClanChatWindowInSteam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_OpenClanChatWindowInSteam_Statics::SteamProFriends_eventOpenClanChatWindowInSteam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_OpenClanChatWindowInSteam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_OpenClanChatWindowInSteam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execOpenClanChatWindowInSteam)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProFriends::OpenClanChatWindowInSteam(Z_Param_SteamIDClanChat);
	P_NATIVE_END;
}
// End Class USteamProFriends Function OpenClanChatWindowInSteam

// Begin Class USteamProFriends Function RegisterProtocolInOverlayBrowser
struct Z_Construct_UFunction_USteamProFriends_RegisterProtocolInOverlayBrowser_Statics
{
	struct SteamProFriends_eventRegisterProtocolInOverlayBrowser_Parms
	{
		FString Protocol;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Call this before calling ActivateGameOverlayToWebPage() to have the Steam Overlay Browser block navigations\n\x09* to your specified protocol (scheme) uris and instead dispatch a OverlayBrowserProtocolNavigation_t Callback to your game.\n\x09* ActivateGameOverlayToWebPage() must have been called with k_EActivateGameOverlayToWebPageMode_Modal\n\x09*\n\x09* Notes: Only available in UE4.27+\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Call this before calling ActivateGameOverlayToWebPage() to have the Steam Overlay Browser block navigations\nto your specified protocol (scheme) uris and instead dispatch a OverlayBrowserProtocolNavigation_t Callback to your game.\nActivateGameOverlayToWebPage() must have been called with k_EActivateGameOverlayToWebPageMode_Modal\n\nNotes: Only available in UE4.27+" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Protocol;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventRegisterProtocolInOverlayBrowser_Parms, Protocol), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProFriends_eventRegisterProtocolInOverlayBrowser_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventRegisterProtocolInOverlayBrowser_Parms), &Z_Construct_UFunction_USteamProFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_RegisterProtocolInOverlayBrowser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_Protocol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_RegisterProtocolInOverlayBrowser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_RegisterProtocolInOverlayBrowser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "RegisterProtocolInOverlayBrowser", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_RegisterProtocolInOverlayBrowser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_RegisterProtocolInOverlayBrowser_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_RegisterProtocolInOverlayBrowser_Statics::SteamProFriends_eventRegisterProtocolInOverlayBrowser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_RegisterProtocolInOverlayBrowser_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_RegisterProtocolInOverlayBrowser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_RegisterProtocolInOverlayBrowser_Statics::SteamProFriends_eventRegisterProtocolInOverlayBrowser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_RegisterProtocolInOverlayBrowser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_RegisterProtocolInOverlayBrowser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execRegisterProtocolInOverlayBrowser)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Protocol);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProFriends::RegisterProtocolInOverlayBrowser(Z_Param_Protocol);
	P_NATIVE_END;
}
// End Class USteamProFriends Function RegisterProtocolInOverlayBrowser

// Begin Class USteamProFriends Function ReplyToFriendMessage
struct Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage_Statics
{
	struct SteamProFriends_eventReplyToFriendMessage_Parms
	{
		FSteamID SteamIDFriend;
		FString MsgToSend;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Sends a message to a Steam friend.\n\x09*\n\x09* @param\x09SteamIDFriend\x09\x09The Steam ID of the friend to send the message to.\n\x09* @param\x09MsgToSend\x09\x09\x09The UTF-8 formatted message to send.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Sends a message to a Steam friend.\n\n@param        SteamIDFriend           The Steam ID of the friend to send the message to.\n@param        MsgToSend                       The UTF-8 formatted message to send." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MsgToSend;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventReplyToFriendMessage_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage_Statics::NewProp_MsgToSend = { "MsgToSend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventReplyToFriendMessage_Parms, MsgToSend), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProFriends_eventReplyToFriendMessage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventReplyToFriendMessage_Parms), &Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage_Statics::NewProp_MsgToSend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "ReplyToFriendMessage", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage_Statics::SteamProFriends_eventReplyToFriendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage_Statics::SteamProFriends_eventReplyToFriendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execReplyToFriendMessage)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_GET_PROPERTY(FStrProperty,Z_Param_MsgToSend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProFriends::ReplyToFriendMessage(Z_Param_SteamIDFriend,Z_Param_MsgToSend);
	P_NATIVE_END;
}
// End Class USteamProFriends Function ReplyToFriendMessage

// Begin Class USteamProFriends Function RequestClanOfficerList
struct Z_Construct_UFunction_USteamProFriends_RequestClanOfficerList_Statics
{
	struct SteamProFriends_eventRequestClanOfficerList_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamIDClan;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Requests information about a Steam group officers (administrators and moderators).\n\x09*\n\x09* You can only ask about Steam groups that a user is a member of.\n\x09* This won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam group to get the officers list for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Requests information about a Steam group officers (administrators and moderators).\n\nYou can only ask about Steam groups that a user is a member of.\nThis won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.\n\n@param        SteamIDClan             The Steam group to get the officers list for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProFriends_RequestClanOfficerList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventRequestClanOfficerList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerList__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1541847835
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_RequestClanOfficerList_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventRequestClanOfficerList_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_RequestClanOfficerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_RequestClanOfficerList_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_RequestClanOfficerList_Statics::NewProp_SteamIDClan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_RequestClanOfficerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_RequestClanOfficerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "RequestClanOfficerList", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_RequestClanOfficerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_RequestClanOfficerList_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_RequestClanOfficerList_Statics::SteamProFriends_eventRequestClanOfficerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_RequestClanOfficerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_RequestClanOfficerList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_RequestClanOfficerList_Statics::SteamProFriends_eventRequestClanOfficerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_RequestClanOfficerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_RequestClanOfficerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execRequestClanOfficerList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestClanOfficerList(FOnRequestClanOfficerList(Z_Param_Out_Callback),Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// End Class USteamProFriends Function RequestClanOfficerList

// Begin Class USteamProFriends Function RequestEquippedProfileItems
struct Z_Construct_UFunction_USteamProFriends_RequestEquippedProfileItems_Statics
{
	struct SteamProFriends_eventRequestEquippedProfileItems_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09 * Steam Community items equipped by a user on their profile\n\x09 * You can register for EquippedProfileItemsChanged_t to know when a friend has changed their equipped profile items\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Steam Community items equipped by a user on their profile\nYou can register for EquippedProfileItemsChanged_t to know when a friend has changed their equipped profile items" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProFriends_RequestEquippedProfileItems_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventRequestEquippedProfileItems_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEquippedProfileItems__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2521892836
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_RequestEquippedProfileItems_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventRequestEquippedProfileItems_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_RequestEquippedProfileItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_RequestEquippedProfileItems_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_RequestEquippedProfileItems_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_RequestEquippedProfileItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_RequestEquippedProfileItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "RequestEquippedProfileItems", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_RequestEquippedProfileItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_RequestEquippedProfileItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_RequestEquippedProfileItems_Statics::SteamProFriends_eventRequestEquippedProfileItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_RequestEquippedProfileItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_RequestEquippedProfileItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_RequestEquippedProfileItems_Statics::SteamProFriends_eventRequestEquippedProfileItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_RequestEquippedProfileItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_RequestEquippedProfileItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execRequestEquippedProfileItems)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestEquippedProfileItems(FOnRequestEquippedProfileItems(Z_Param_Out_Callback),Z_Param_SteamID);
	P_NATIVE_END;
}
// End Class USteamProFriends Function RequestEquippedProfileItems

// Begin Class USteamProFriends Function RequestFriendRichPresence
struct Z_Construct_UFunction_USteamProFriends_RequestFriendRichPresence_Statics
{
	struct SteamProFriends_eventRequestFriendRichPresence_Parms
	{
		FSteamID SteamIDFriend;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Requests Rich Presence data from a specific user.\n\x09*\n\x09* This is used to get the Rich Presence information from a user that is not a friend of the current user, like someone in the same lobby or game server.\n\x09* This function is rate limited, if you call this too frequently for a particular user then it will just immediately post a Callback without requesting new data from the server.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the user to request the rich presence of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Requests Rich Presence data from a specific user.\n\nThis is used to get the Rich Presence information from a user that is not a friend of the current user, like someone in the same lobby or game server.\nThis function is rate limited, if you call this too frequently for a particular user then it will just immediately post a Callback without requesting new data from the server.\n\n@param        SteamIDFriend   The Steam ID of the user to request the rich presence of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_RequestFriendRichPresence_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventRequestFriendRichPresence_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_RequestFriendRichPresence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_RequestFriendRichPresence_Statics::NewProp_SteamIDFriend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_RequestFriendRichPresence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_RequestFriendRichPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "RequestFriendRichPresence", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_RequestFriendRichPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_RequestFriendRichPresence_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_RequestFriendRichPresence_Statics::SteamProFriends_eventRequestFriendRichPresence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_RequestFriendRichPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_RequestFriendRichPresence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_RequestFriendRichPresence_Statics::SteamProFriends_eventRequestFriendRichPresence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_RequestFriendRichPresence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_RequestFriendRichPresence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execRequestFriendRichPresence)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProFriends::RequestFriendRichPresence(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// End Class USteamProFriends Function RequestFriendRichPresence

// Begin Class USteamProFriends Function RequestUserInformation
struct Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics
{
	struct SteamProFriends_eventRequestUserInformation_Parms
	{
		FSteamID SteamIDUser;
		bool bRequireNameOnly;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Requests the persona name and optionally the avatar of a specified user.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09\x09The user to request the information of.\n\x09* @param\x09""bRequireNameOnly\x09Retrieve the Persona name only (true)? Or both the name and the avatar (false)?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Requests the persona name and optionally the avatar of a specified user.\n\n@param        SteamIDUser                     The user to request the information of.\n@param        bRequireNameOnly        Retrieve the Persona name only (true)? Or both the name and the avatar (false)?" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static void NewProp_bRequireNameOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireNameOnly;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventRequestUserInformation_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly_SetBit(void* Obj)
{
	((SteamProFriends_eventRequestUserInformation_Parms*)Obj)->bRequireNameOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly = { "bRequireNameOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventRequestUserInformation_Parms), &Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProFriends_eventRequestUserInformation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventRequestUserInformation_Parms), &Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "RequestUserInformation", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::SteamProFriends_eventRequestUserInformation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::SteamProFriends_eventRequestUserInformation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_RequestUserInformation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_RequestUserInformation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execRequestUserInformation)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_UBOOL(Z_Param_bRequireNameOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProFriends::RequestUserInformation(Z_Param_SteamIDUser,Z_Param_bRequireNameOnly);
	P_NATIVE_END;
}
// End Class USteamProFriends Function RequestUserInformation

// Begin Class USteamProFriends Function SendClanChatMessage
struct Z_Construct_UFunction_USteamProFriends_SendClanChatMessage_Statics
{
	struct SteamProFriends_eventSendClanChatMessage_Parms
	{
		FSteamID SteamIDClanChat;
		FString Text;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Sends a message to a Steam group chat room.\n\x09*\n\x09* @param\x09SteamIDClanChat\x09\x09The Steam ID of the group chat to send the message to.\n\x09* @param\x09Text\x09\x09\x09\x09The UTF-8 formatted message to send. This can be up to 2048 characters long.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Sends a message to a Steam group chat room.\n\n@param        SteamIDClanChat         The Steam ID of the group chat to send the message to.\n@param        Text                            The UTF-8 formatted message to send. This can be up to 2048 characters long." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_SendClanChatMessage_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventSendClanChatMessage_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_SendClanChatMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventSendClanChatMessage_Parms, Text), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProFriends_SendClanChatMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProFriends_eventSendClanChatMessage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_SendClanChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventSendClanChatMessage_Parms), &Z_Construct_UFunction_USteamProFriends_SendClanChatMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_SendClanChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_SendClanChatMessage_Statics::NewProp_SteamIDClanChat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_SendClanChatMessage_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_SendClanChatMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_SendClanChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_SendClanChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "SendClanChatMessage", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_SendClanChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_SendClanChatMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_SendClanChatMessage_Statics::SteamProFriends_eventSendClanChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_SendClanChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_SendClanChatMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_SendClanChatMessage_Statics::SteamProFriends_eventSendClanChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_SendClanChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_SendClanChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execSendClanChatMessage)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProFriends::SendClanChatMessage(Z_Param_SteamIDClanChat,Z_Param_Text);
	P_NATIVE_END;
}
// End Class USteamProFriends Function SendClanChatMessage

// Begin Class USteamProFriends Function SetInGameVoiceSpeaking
struct Z_Construct_UFunction_USteamProFriends_SetInGameVoiceSpeaking_Statics
{
	struct SteamProFriends_eventSetInGameVoiceSpeaking_Parms
	{
		FSteamID SteamIDUser;
		bool bSpeaking;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Let Steam know that the user is currently using voice chat in game.\n\x09*\n\x09* This will suppress the microphone for all voice communication in the Steam UI.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09Unused.\n\x09* @param\x09""bSpeaking\x09\x09""Did the user start speaking in game (true) or stopped speaking in game (false)?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Let Steam know that the user is currently using voice chat in game.\n\nThis will suppress the microphone for all voice communication in the Steam UI.\n\n@param        SteamIDUser             Unused.\n@param        bSpeaking               Did the user start speaking in game (true) or stopped speaking in game (false)?" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static void NewProp_bSpeaking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpeaking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_SetInGameVoiceSpeaking_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventSetInGameVoiceSpeaking_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking_SetBit(void* Obj)
{
	((SteamProFriends_eventSetInGameVoiceSpeaking_Parms*)Obj)->bSpeaking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking = { "bSpeaking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventSetInGameVoiceSpeaking_Parms), &Z_Construct_UFunction_USteamProFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_SetInGameVoiceSpeaking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_SetInGameVoiceSpeaking_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_SetInGameVoiceSpeaking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_SetInGameVoiceSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "SetInGameVoiceSpeaking", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_SetInGameVoiceSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_SetInGameVoiceSpeaking_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_SetInGameVoiceSpeaking_Statics::SteamProFriends_eventSetInGameVoiceSpeaking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_SetInGameVoiceSpeaking_Statics::SteamProFriends_eventSetInGameVoiceSpeaking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_SetInGameVoiceSpeaking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_SetInGameVoiceSpeaking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execSetInGameVoiceSpeaking)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_UBOOL(Z_Param_bSpeaking);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProFriends::SetInGameVoiceSpeaking(Z_Param_SteamIDUser,Z_Param_bSpeaking);
	P_NATIVE_END;
}
// End Class USteamProFriends Function SetInGameVoiceSpeaking

// Begin Class USteamProFriends Function SetListenForFriendsMessages
struct Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages_Statics
{
	struct SteamProFriends_eventSetListenForFriendsMessages_Parms
	{
		bool bInterceptEnabled;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Listens for Steam friends chat messages.\n\x09*\n\x09* You can then show these chats inline in the game. \n\x09* For example with a Blizzard style chat message system or the chat system in Dota 2.\n\x09* After enabling this you will receive GameConnectedFriendChatMsg_t \n\x09* Callbacks when ever the user receives a chat message. \n\x09* You can get the actual message data from this Callback with GetFriendMessage. You can send messages with ReplyToFriendMessage.\n\x09*\n\x09* @param\x09""bInterceptEnabled\x09Turn friends message interception on (true) or off (false)?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Listens for Steam friends chat messages.\n\nYou can then show these chats inline in the game.\nFor example with a Blizzard style chat message system or the chat system in Dota 2.\nAfter enabling this you will receive GameConnectedFriendChatMsg_t\nCallbacks when ever the user receives a chat message.\nYou can get the actual message data from this Callback with GetFriendMessage. You can send messages with ReplyToFriendMessage.\n\n@param        bInterceptEnabled       Turn friends message interception on (true) or off (false)?" },
	};
#endif // WITH_METADATA
	static void NewProp_bInterceptEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterceptEnabled;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled_SetBit(void* Obj)
{
	((SteamProFriends_eventSetListenForFriendsMessages_Parms*)Obj)->bInterceptEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled = { "bInterceptEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventSetListenForFriendsMessages_Parms), &Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProFriends_eventSetListenForFriendsMessages_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventSetListenForFriendsMessages_Parms), &Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "SetListenForFriendsMessages", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages_Statics::SteamProFriends_eventSetListenForFriendsMessages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages_Statics::SteamProFriends_eventSetListenForFriendsMessages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execSetListenForFriendsMessages)
{
	P_GET_UBOOL(Z_Param_bInterceptEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProFriends::SetListenForFriendsMessages(Z_Param_bInterceptEnabled);
	P_NATIVE_END;
}
// End Class USteamProFriends Function SetListenForFriendsMessages

// Begin Class USteamProFriends Function SetPersonaName
struct Z_Construct_UFunction_USteamProFriends_SetPersonaName_Statics
{
	struct SteamProFriends_eventSetPersonaName_Parms
	{
		FScriptDelegate Callback;
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Sets the current users persona name, stores it on the server and publishes the changes to all friends who are online.\n\x09*\n\x09* Changes take place locally immediately, and a PersonaStateChange_t Callback is posted, presuming success.\n\x09* If the name change fails to happen on the server, then an additional PersonaStateChange_t \n\x09* Callback will be posted to change the name back, in addition to the final result available in the call result.\n\x09*\n\x09* @param\x09Name\x09The users new persona name. Can not be longer than k_cchPersonaNameMax bytes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Sets the current users persona name, stores it on the server and publishes the changes to all friends who are online.\n\nChanges take place locally immediately, and a PersonaStateChange_t Callback is posted, presuming success.\nIf the name change fails to happen on the server, then an additional PersonaStateChange_t\nCallback will be posted to change the name back, in addition to the final result available in the call result.\n\n@param        Name    The users new persona name. Can not be longer than k_cchPersonaNameMax bytes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProFriends_SetPersonaName_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventSetPersonaName_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaName__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 605078339
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_SetPersonaName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventSetPersonaName_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_SetPersonaName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_SetPersonaName_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_SetPersonaName_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_SetPersonaName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_SetPersonaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "SetPersonaName", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_SetPersonaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_SetPersonaName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_SetPersonaName_Statics::SteamProFriends_eventSetPersonaName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_SetPersonaName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_SetPersonaName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_SetPersonaName_Statics::SteamProFriends_eventSetPersonaName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_SetPersonaName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_SetPersonaName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execSetPersonaName)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPersonaName(FOnSetPersonaName(Z_Param_Out_Callback),Z_Param_Name);
	P_NATIVE_END;
}
// End Class USteamProFriends Function SetPersonaName

// Begin Class USteamProFriends Function SetPlayedWith
struct Z_Construct_UFunction_USteamProFriends_SetPlayedWith_Statics
{
	struct SteamProFriends_eventSetPlayedWith_Parms
	{
		FSteamID SteamIDUserPlayedWith;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Mark a target user as 'played with'.\n\x09*\n\x09* The current user must be in game with the other player for the association to work.\n\x09*\n\x09* @param\x09SteamIDUserPlayedWith\x09The other user that we have played with.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Mark a target user as 'played with'.\n\nThe current user must be in game with the other player for the association to work.\n\n@param        SteamIDUserPlayedWith   The other user that we have played with." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUserPlayedWith;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProFriends_SetPlayedWith_Statics::NewProp_SteamIDUserPlayedWith = { "SteamIDUserPlayedWith", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventSetPlayedWith_Parms, SteamIDUserPlayedWith), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_SetPlayedWith_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_SetPlayedWith_Statics::NewProp_SteamIDUserPlayedWith,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_SetPlayedWith_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_SetPlayedWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "SetPlayedWith", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_SetPlayedWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_SetPlayedWith_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_SetPlayedWith_Statics::SteamProFriends_eventSetPlayedWith_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_SetPlayedWith_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_SetPlayedWith_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_SetPlayedWith_Statics::SteamProFriends_eventSetPlayedWith_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_SetPlayedWith()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_SetPlayedWith_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execSetPlayedWith)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUserPlayedWith);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProFriends::SetPlayedWith(Z_Param_SteamIDUserPlayedWith);
	P_NATIVE_END;
}
// End Class USteamProFriends Function SetPlayedWith

// Begin Class USteamProFriends Function SetRichPresence
struct Z_Construct_UFunction_USteamProFriends_SetRichPresence_Statics
{
	struct SteamProFriends_eventSetRichPresence_Parms
	{
		FString Key;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Sets a Rich Presence key/value for the current user that is automatically shared to all friends playing the same game.\n\x09*\n\x09* Each user can have up to 20 keys set as defined by k_cchMaxRichPresenceKeys.\n\x09*\n\x09* @param\x09Key\x09\x09The rich presence 'key' to set. This can not be longer than specified in k_cchMaxRichPresenceKeyLength.\n\x09* @param\x09Value\x09The rich presence 'value' to associate with pchKey. This can not be longer than specified in k_cchMaxRichPresenceValueLength. If this is set to an empty string (\"\") or NULL then the key is removed if it's set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Sets a Rich Presence key/value for the current user that is automatically shared to all friends playing the same game.\n\nEach user can have up to 20 keys set as defined by k_cchMaxRichPresenceKeys.\n\n@param        Key             The rich presence 'key' to set. This can not be longer than specified in k_cchMaxRichPresenceKeyLength.\n@param        Value   The rich presence 'value' to associate with pchKey. This can not be longer than specified in k_cchMaxRichPresenceValueLength. If this is set to an empty string (\"\") or NULL then the key is removed if it's set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_SetRichPresence_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventSetRichPresence_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProFriends_SetRichPresence_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProFriends_eventSetRichPresence_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProFriends_SetRichPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProFriends_eventSetRichPresence_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProFriends_SetRichPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProFriends_eventSetRichPresence_Parms), &Z_Construct_UFunction_USteamProFriends_SetRichPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProFriends_SetRichPresence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_SetRichPresence_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_SetRichPresence_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProFriends_SetRichPresence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_SetRichPresence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProFriends_SetRichPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProFriends, nullptr, "SetRichPresence", nullptr, nullptr, Z_Construct_UFunction_USteamProFriends_SetRichPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_SetRichPresence_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProFriends_SetRichPresence_Statics::SteamProFriends_eventSetRichPresence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProFriends_SetRichPresence_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProFriends_SetRichPresence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProFriends_SetRichPresence_Statics::SteamProFriends_eventSetRichPresence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProFriends_SetRichPresence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProFriends_SetRichPresence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProFriends::execSetRichPresence)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProFriends::SetRichPresence(Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USteamProFriends Function SetRichPresence

// Begin Class USteamProFriends
void USteamProFriends::StaticRegisterNativesUSteamProFriends()
{
	UClass* Class = USteamProFriends::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateGameOverlay", &USteamProFriends::execActivateGameOverlay },
		{ "ActivateGameOverlayInvitedialog", &USteamProFriends::execActivateGameOverlayInvitedialog },
		{ "ActivateGameOverlayInviteDialogConnectString", &USteamProFriends::execActivateGameOverlayInviteDialogConnectString },
		{ "ActivateGameOverlayToStore", &USteamProFriends::execActivateGameOverlayToStore },
		{ "ActivateGameOverlayToUser", &USteamProFriends::execActivateGameOverlayToUser },
		{ "ActivateGameOverlayToWebPage", &USteamProFriends::execActivateGameOverlayToWebPage },
		{ "BHasEquippedProfileItem", &USteamProFriends::execBHasEquippedProfileItem },
		{ "ClearRichPresence", &USteamProFriends::execClearRichPresence },
		{ "CloseClanChatWindowInSteam", &USteamProFriends::execCloseClanChatWindowInSteam },
		{ "DownloadClanActivityCounts", &USteamProFriends::execDownloadClanActivityCounts },
		{ "EnumerateFollowingList", &USteamProFriends::execEnumerateFollowingList },
		{ "GetChatMemberByIndex", &USteamProFriends::execGetChatMemberByIndex },
		{ "GetClanActivityCounts", &USteamProFriends::execGetClanActivityCounts },
		{ "GetClanByIndex", &USteamProFriends::execGetClanByIndex },
		{ "GetClanChatMemberCount", &USteamProFriends::execGetClanChatMemberCount },
		{ "GetClanChatMessage", &USteamProFriends::execGetClanChatMessage },
		{ "GetClanCount", &USteamProFriends::execGetClanCount },
		{ "GetClanName", &USteamProFriends::execGetClanName },
		{ "GetClanOfficerByIndex", &USteamProFriends::execGetClanOfficerByIndex },
		{ "GetClanOfficerCount", &USteamProFriends::execGetClanOfficerCount },
		{ "GetClanOwner", &USteamProFriends::execGetClanOwner },
		{ "GetClanTag", &USteamProFriends::execGetClanTag },
		{ "GetCoplayFriend", &USteamProFriends::execGetCoplayFriend },
		{ "GetCoplayFriendCount", &USteamProFriends::execGetCoplayFriendCount },
		{ "GetFollowerCount", &USteamProFriends::execGetFollowerCount },
		{ "GetFriendByIndex", &USteamProFriends::execGetFriendByIndex },
		{ "GetFriendCoplayGame", &USteamProFriends::execGetFriendCoplayGame },
		{ "GetFriendCoplayTime", &USteamProFriends::execGetFriendCoplayTime },
		{ "GetFriendCount", &USteamProFriends::execGetFriendCount },
		{ "GetFriendCountFromSource", &USteamProFriends::execGetFriendCountFromSource },
		{ "GetFriendFromSourceByIndex", &USteamProFriends::execGetFriendFromSourceByIndex },
		{ "GetFriendGamePlayed", &USteamProFriends::execGetFriendGamePlayed },
		{ "GetFriendMessage", &USteamProFriends::execGetFriendMessage },
		{ "GetFriendPersonaName", &USteamProFriends::execGetFriendPersonaName },
		{ "GetFriendPersonaNameHistory", &USteamProFriends::execGetFriendPersonaNameHistory },
		{ "GetFriendPersonaState", &USteamProFriends::execGetFriendPersonaState },
		{ "GetFriendRelationship", &USteamProFriends::execGetFriendRelationship },
		{ "GetFriendRichPresence", &USteamProFriends::execGetFriendRichPresence },
		{ "GetFriendRichPresenceKeyByIndex", &USteamProFriends::execGetFriendRichPresenceKeyByIndex },
		{ "GetFriendRichPresenceKeyCount", &USteamProFriends::execGetFriendRichPresenceKeyCount },
		{ "GetFriendsGroupCount", &USteamProFriends::execGetFriendsGroupCount },
		{ "GetFriendsGroupIDByIndex", &USteamProFriends::execGetFriendsGroupIDByIndex },
		{ "GetFriendsGroupMembersCount", &USteamProFriends::execGetFriendsGroupMembersCount },
		{ "GetFriendsGroupMembersList", &USteamProFriends::execGetFriendsGroupMembersList },
		{ "GetFriendsGroupName", &USteamProFriends::execGetFriendsGroupName },
		{ "GetFriendSteamLevel", &USteamProFriends::execGetFriendSteamLevel },
		{ "GetLargeFriendAvatar", &USteamProFriends::execGetLargeFriendAvatar },
		{ "GetMediumFriendAvatar", &USteamProFriends::execGetMediumFriendAvatar },
		{ "GetPersonaName", &USteamProFriends::execGetPersonaName },
		{ "GetPersonaName_Pure", &USteamProFriends::execGetPersonaName_Pure },
		{ "GetPersonaState", &USteamProFriends::execGetPersonaState },
		{ "GetPersonaState_Pure", &USteamProFriends::execGetPersonaState_Pure },
		{ "GetPlayerNickname", &USteamProFriends::execGetPlayerNickname },
		{ "GetPlayerNickname_Pure", &USteamProFriends::execGetPlayerNickname_Pure },
		{ "GetProfileItemPropertyString", &USteamProFriends::execGetProfileItemPropertyString },
		{ "GetProfileItemPropertyUint", &USteamProFriends::execGetProfileItemPropertyUint },
		{ "GetSmallFriendAvatar", &USteamProFriends::execGetSmallFriendAvatar },
		{ "GetSteamFriends", &USteamProFriends::execGetSteamFriends },
		{ "GetUserRestrictions", &USteamProFriends::execGetUserRestrictions },
		{ "HasFriend", &USteamProFriends::execHasFriend },
		{ "InviteUserToGame", &USteamProFriends::execInviteUserToGame },
		{ "IsClanChatAdmin", &USteamProFriends::execIsClanChatAdmin },
		{ "IsClanChatWindowOpenInSteam", &USteamProFriends::execIsClanChatWindowOpenInSteam },
		{ "IsClanOfficialGameGroup", &USteamProFriends::execIsClanOfficialGameGroup },
		{ "IsClanPublic", &USteamProFriends::execIsClanPublic },
		{ "IsFollowing", &USteamProFriends::execIsFollowing },
		{ "IsUserInSource", &USteamProFriends::execIsUserInSource },
		{ "JoinClanChatRoom", &USteamProFriends::execJoinClanChatRoom },
		{ "LeaveClanChatRoom", &USteamProFriends::execLeaveClanChatRoom },
		{ "OpenClanChatWindowInSteam", &USteamProFriends::execOpenClanChatWindowInSteam },
		{ "RegisterProtocolInOverlayBrowser", &USteamProFriends::execRegisterProtocolInOverlayBrowser },
		{ "ReplyToFriendMessage", &USteamProFriends::execReplyToFriendMessage },
		{ "RequestClanOfficerList", &USteamProFriends::execRequestClanOfficerList },
		{ "RequestEquippedProfileItems", &USteamProFriends::execRequestEquippedProfileItems },
		{ "RequestFriendRichPresence", &USteamProFriends::execRequestFriendRichPresence },
		{ "RequestUserInformation", &USteamProFriends::execRequestUserInformation },
		{ "SendClanChatMessage", &USteamProFriends::execSendClanChatMessage },
		{ "SetInGameVoiceSpeaking", &USteamProFriends::execSetInGameVoiceSpeaking },
		{ "SetListenForFriendsMessages", &USteamProFriends::execSetListenForFriendsMessages },
		{ "SetPersonaName", &USteamProFriends::execSetPersonaName },
		{ "SetPlayedWith", &USteamProFriends::execSetPlayedWith },
		{ "SetRichPresence", &USteamProFriends::execSetRichPresence },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProFriends);
UClass* Z_Construct_UClass_USteamProFriends_NoRegister()
{
	return USteamProFriends::StaticClass();
}
struct Z_Construct_UClass_USteamProFriends_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamFriends/SteamFriends.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvatarImageLoaded_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendRichPresenceUpdate_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameConnectedChatJoin_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameConnectedChatLeave_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameConnectedClanChatMsg_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameConnectedFriendChatMsg_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameLobbyJoinRequested_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameOverlayActivated_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameRichPresenceJoinRequested_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameServerChangeRequested_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersonaStateChange_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetPersonaNameResponse_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinClanChatRoomCompletionResult_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClanOfficerListResponse_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownloadClanActivityCountsResult_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedProfileItemsChanged_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AvatarImageLoaded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FriendRichPresenceUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedChatJoin;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedChatLeave;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedClanChatMsg;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedFriendChatMsg;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameLobbyJoinRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameOverlayActivated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameRichPresenceJoinRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameServerChangeRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PersonaStateChange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SetPersonaNameResponse;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_JoinClanChatRoomCompletionResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClanOfficerListResponse;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DownloadClanActivityCountsResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EquippedProfileItemsChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProFriends_ActivateGameOverlay, "ActivateGameOverlay" }, // 3562455337
		{ &Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInvitedialog, "ActivateGameOverlayInvitedialog" }, // 3123322506
		{ &Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayInviteDialogConnectString, "ActivateGameOverlayInviteDialogConnectString" }, // 1219480490
		{ &Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToStore, "ActivateGameOverlayToStore" }, // 393186555
		{ &Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToUser, "ActivateGameOverlayToUser" }, // 179335211
		{ &Z_Construct_UFunction_USteamProFriends_ActivateGameOverlayToWebPage, "ActivateGameOverlayToWebPage" }, // 3220071385
		{ &Z_Construct_UFunction_USteamProFriends_BHasEquippedProfileItem, "BHasEquippedProfileItem" }, // 1065545992
		{ &Z_Construct_UFunction_USteamProFriends_ClearRichPresence, "ClearRichPresence" }, // 192339356
		{ &Z_Construct_UFunction_USteamProFriends_CloseClanChatWindowInSteam, "CloseClanChatWindowInSteam" }, // 114360517
		{ &Z_Construct_UFunction_USteamProFriends_DownloadClanActivityCounts, "DownloadClanActivityCounts" }, // 2287960425
		{ &Z_Construct_UFunction_USteamProFriends_EnumerateFollowingList, "EnumerateFollowingList" }, // 109529853
		{ &Z_Construct_UFunction_USteamProFriends_GetChatMemberByIndex, "GetChatMemberByIndex" }, // 2392359636
		{ &Z_Construct_UFunction_USteamProFriends_GetClanActivityCounts, "GetClanActivityCounts" }, // 1862820166
		{ &Z_Construct_UFunction_USteamProFriends_GetClanByIndex, "GetClanByIndex" }, // 3104678718
		{ &Z_Construct_UFunction_USteamProFriends_GetClanChatMemberCount, "GetClanChatMemberCount" }, // 4175999969
		{ &Z_Construct_UFunction_USteamProFriends_GetClanChatMessage, "GetClanChatMessage" }, // 2344104005
		{ &Z_Construct_UFunction_USteamProFriends_GetClanCount, "GetClanCount" }, // 2271896855
		{ &Z_Construct_UFunction_USteamProFriends_GetClanName, "GetClanName" }, // 1371685145
		{ &Z_Construct_UFunction_USteamProFriends_GetClanOfficerByIndex, "GetClanOfficerByIndex" }, // 1929318006
		{ &Z_Construct_UFunction_USteamProFriends_GetClanOfficerCount, "GetClanOfficerCount" }, // 609664939
		{ &Z_Construct_UFunction_USteamProFriends_GetClanOwner, "GetClanOwner" }, // 1752354362
		{ &Z_Construct_UFunction_USteamProFriends_GetClanTag, "GetClanTag" }, // 2092749824
		{ &Z_Construct_UFunction_USteamProFriends_GetCoplayFriend, "GetCoplayFriend" }, // 3971732329
		{ &Z_Construct_UFunction_USteamProFriends_GetCoplayFriendCount, "GetCoplayFriendCount" }, // 3760409293
		{ &Z_Construct_UFunction_USteamProFriends_GetFollowerCount, "GetFollowerCount" }, // 2617616121
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendByIndex, "GetFriendByIndex" }, // 529453267
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendCoplayGame, "GetFriendCoplayGame" }, // 3651543983
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendCoplayTime, "GetFriendCoplayTime" }, // 3438088241
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendCount, "GetFriendCount" }, // 1312563153
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendCountFromSource, "GetFriendCountFromSource" }, // 531988059
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendFromSourceByIndex, "GetFriendFromSourceByIndex" }, // 2326454742
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendGamePlayed, "GetFriendGamePlayed" }, // 178599410
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendMessage, "GetFriendMessage" }, // 2697333015
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendPersonaName, "GetFriendPersonaName" }, // 151691419
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendPersonaNameHistory, "GetFriendPersonaNameHistory" }, // 857554424
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendPersonaState, "GetFriendPersonaState" }, // 2557447102
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendRelationship, "GetFriendRelationship" }, // 3753036010
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendRichPresence, "GetFriendRichPresence" }, // 2178759205
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyByIndex, "GetFriendRichPresenceKeyByIndex" }, // 1784234678
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendRichPresenceKeyCount, "GetFriendRichPresenceKeyCount" }, // 1130568485
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendsGroupCount, "GetFriendsGroupCount" }, // 4196813818
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendsGroupIDByIndex, "GetFriendsGroupIDByIndex" }, // 3557158992
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersCount, "GetFriendsGroupMembersCount" }, // 1350225474
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendsGroupMembersList, "GetFriendsGroupMembersList" }, // 4091952420
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendsGroupName, "GetFriendsGroupName" }, // 146363616
		{ &Z_Construct_UFunction_USteamProFriends_GetFriendSteamLevel, "GetFriendSteamLevel" }, // 427704734
		{ &Z_Construct_UFunction_USteamProFriends_GetLargeFriendAvatar, "GetLargeFriendAvatar" }, // 3374213169
		{ &Z_Construct_UFunction_USteamProFriends_GetMediumFriendAvatar, "GetMediumFriendAvatar" }, // 3921723840
		{ &Z_Construct_UFunction_USteamProFriends_GetPersonaName, "GetPersonaName" }, // 1012538435
		{ &Z_Construct_UFunction_USteamProFriends_GetPersonaName_Pure, "GetPersonaName_Pure" }, // 2935804941
		{ &Z_Construct_UFunction_USteamProFriends_GetPersonaState, "GetPersonaState" }, // 3183196253
		{ &Z_Construct_UFunction_USteamProFriends_GetPersonaState_Pure, "GetPersonaState_Pure" }, // 3239251931
		{ &Z_Construct_UFunction_USteamProFriends_GetPlayerNickname, "GetPlayerNickname" }, // 531338559
		{ &Z_Construct_UFunction_USteamProFriends_GetPlayerNickname_Pure, "GetPlayerNickname_Pure" }, // 518688689
		{ &Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyString, "GetProfileItemPropertyString" }, // 52294524
		{ &Z_Construct_UFunction_USteamProFriends_GetProfileItemPropertyUint, "GetProfileItemPropertyUint" }, // 2589604242
		{ &Z_Construct_UFunction_USteamProFriends_GetSmallFriendAvatar, "GetSmallFriendAvatar" }, // 3925125972
		{ &Z_Construct_UFunction_USteamProFriends_GetSteamFriends, "GetSteamFriends" }, // 117665909
		{ &Z_Construct_UFunction_USteamProFriends_GetUserRestrictions, "GetUserRestrictions" }, // 4120147261
		{ &Z_Construct_UFunction_USteamProFriends_HasFriend, "HasFriend" }, // 2217687121
		{ &Z_Construct_UFunction_USteamProFriends_InviteUserToGame, "InviteUserToGame" }, // 3517547347
		{ &Z_Construct_UFunction_USteamProFriends_IsClanChatAdmin, "IsClanChatAdmin" }, // 2505915395
		{ &Z_Construct_UFunction_USteamProFriends_IsClanChatWindowOpenInSteam, "IsClanChatWindowOpenInSteam" }, // 4209344592
		{ &Z_Construct_UFunction_USteamProFriends_IsClanOfficialGameGroup, "IsClanOfficialGameGroup" }, // 4099894460
		{ &Z_Construct_UFunction_USteamProFriends_IsClanPublic, "IsClanPublic" }, // 3327053473
		{ &Z_Construct_UFunction_USteamProFriends_IsFollowing, "IsFollowing" }, // 1983073618
		{ &Z_Construct_UFunction_USteamProFriends_IsUserInSource, "IsUserInSource" }, // 799666296
		{ &Z_Construct_UFunction_USteamProFriends_JoinClanChatRoom, "JoinClanChatRoom" }, // 2351513789
		{ &Z_Construct_UFunction_USteamProFriends_LeaveClanChatRoom, "LeaveClanChatRoom" }, // 2035568238
		{ &Z_Construct_UFunction_USteamProFriends_OpenClanChatWindowInSteam, "OpenClanChatWindowInSteam" }, // 3148422010
		{ &Z_Construct_UFunction_USteamProFriends_RegisterProtocolInOverlayBrowser, "RegisterProtocolInOverlayBrowser" }, // 3029634898
		{ &Z_Construct_UFunction_USteamProFriends_ReplyToFriendMessage, "ReplyToFriendMessage" }, // 4064000399
		{ &Z_Construct_UFunction_USteamProFriends_RequestClanOfficerList, "RequestClanOfficerList" }, // 4232297318
		{ &Z_Construct_UFunction_USteamProFriends_RequestEquippedProfileItems, "RequestEquippedProfileItems" }, // 3649360705
		{ &Z_Construct_UFunction_USteamProFriends_RequestFriendRichPresence, "RequestFriendRichPresence" }, // 3586988555
		{ &Z_Construct_UFunction_USteamProFriends_RequestUserInformation, "RequestUserInformation" }, // 4033879220
		{ &Z_Construct_UFunction_USteamProFriends_SendClanChatMessage, "SendClanChatMessage" }, // 1170470185
		{ &Z_Construct_UFunction_USteamProFriends_SetInGameVoiceSpeaking, "SetInGameVoiceSpeaking" }, // 4131934619
		{ &Z_Construct_UFunction_USteamProFriends_SetListenForFriendsMessages, "SetListenForFriendsMessages" }, // 595983354
		{ &Z_Construct_UFunction_USteamProFriends_SetPersonaName, "SetPersonaName" }, // 834196048
		{ &Z_Construct_UFunction_USteamProFriends_SetPlayedWith, "SetPlayedWith" }, // 540997069
		{ &Z_Construct_UFunction_USteamProFriends_SetRichPresence, "SetRichPresence" }, // 3206826634
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProFriends>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProFriends_Statics::NewProp_AvatarImageLoaded = { "AvatarImageLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProFriends, AvatarImageLoaded), Z_Construct_UDelegateFunction_SteamCorePro_OnAvatarImageLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvatarImageLoaded_MetaData), NewProp_AvatarImageLoaded_MetaData) }; // 260410598
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProFriends_Statics::NewProp_FriendRichPresenceUpdate = { "FriendRichPresenceUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProFriends, FriendRichPresenceUpdate), Z_Construct_UDelegateFunction_SteamCorePro_OnFriendRichPresenceUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendRichPresenceUpdate_MetaData), NewProp_FriendRichPresenceUpdate_MetaData) }; // 2203262412
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProFriends_Statics::NewProp_GameConnectedChatJoin = { "GameConnectedChatJoin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProFriends, GameConnectedChatJoin), Z_Construct_UDelegateFunction_SteamCorePro_OnGameConnectedChatJoin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameConnectedChatJoin_MetaData), NewProp_GameConnectedChatJoin_MetaData) }; // 1700233502
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProFriends_Statics::NewProp_GameConnectedChatLeave = { "GameConnectedChatLeave", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProFriends, GameConnectedChatLeave), Z_Construct_UDelegateFunction_SteamCorePro_OnGameConnectedChatLeave__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameConnectedChatLeave_MetaData), NewProp_GameConnectedChatLeave_MetaData) }; // 2078343743
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProFriends_Statics::NewProp_GameConnectedClanChatMsg = { "GameConnectedClanChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProFriends, GameConnectedClanChatMsg), Z_Construct_UDelegateFunction_SteamCorePro_OnGameConnectedClanChatMsg__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameConnectedClanChatMsg_MetaData), NewProp_GameConnectedClanChatMsg_MetaData) }; // 3292763160
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProFriends_Statics::NewProp_GameConnectedFriendChatMsg = { "GameConnectedFriendChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProFriends, GameConnectedFriendChatMsg), Z_Construct_UDelegateFunction_SteamCorePro_OnGameConnectedFriendChatMsg__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameConnectedFriendChatMsg_MetaData), NewProp_GameConnectedFriendChatMsg_MetaData) }; // 374590236
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProFriends_Statics::NewProp_GameLobbyJoinRequested = { "GameLobbyJoinRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProFriends, GameLobbyJoinRequested), Z_Construct_UDelegateFunction_SteamCorePro_OnGameLobbyJoinRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameLobbyJoinRequested_MetaData), NewProp_GameLobbyJoinRequested_MetaData) }; // 1291842131
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProFriends_Statics::NewProp_GameOverlayActivated = { "GameOverlayActivated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProFriends, GameOverlayActivated), Z_Construct_UDelegateFunction_SteamCorePro_OnGameOverlayActivated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameOverlayActivated_MetaData), NewProp_GameOverlayActivated_MetaData) }; // 3466087534
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProFriends_Statics::NewProp_GameRichPresenceJoinRequested = { "GameRichPresenceJoinRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProFriends, GameRichPresenceJoinRequested), Z_Construct_UDelegateFunction_SteamCorePro_OnGameRichPresenceJoinRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameRichPresenceJoinRequested_MetaData), NewProp_GameRichPresenceJoinRequested_MetaData) }; // 2238493996
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProFriends_Statics::NewProp_GameServerChangeRequested = { "GameServerChangeRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProFriends, GameServerChangeRequested), Z_Construct_UDelegateFunction_SteamCorePro_OnGameServerChangeRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameServerChangeRequested_MetaData), NewProp_GameServerChangeRequested_MetaData) }; // 798954608
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProFriends_Statics::NewProp_PersonaStateChange = { "PersonaStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProFriends, PersonaStateChange), Z_Construct_UDelegateFunction_SteamCorePro_OnPersonaStateChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersonaStateChange_MetaData), NewProp_PersonaStateChange_MetaData) }; // 3354268817
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProFriends_Statics::NewProp_SetPersonaNameResponse = { "SetPersonaNameResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProFriends, SetPersonaNameResponse), Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetPersonaNameResponse_MetaData), NewProp_SetPersonaNameResponse_MetaData) }; // 1396069918
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProFriends_Statics::NewProp_JoinClanChatRoomCompletionResult = { "JoinClanChatRoomCompletionResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProFriends, JoinClanChatRoomCompletionResult), Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomCompletionResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinClanChatRoomCompletionResult_MetaData), NewProp_JoinClanChatRoomCompletionResult_MetaData) }; // 1668227610
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProFriends_Statics::NewProp_ClanOfficerListResponse = { "ClanOfficerListResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProFriends, ClanOfficerListResponse), Z_Construct_UDelegateFunction_SteamCorePro_OnClanOfficerListResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClanOfficerListResponse_MetaData), NewProp_ClanOfficerListResponse_MetaData) }; // 117031478
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProFriends_Statics::NewProp_DownloadClanActivityCountsResult = { "DownloadClanActivityCountsResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProFriends, DownloadClanActivityCountsResult), Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownloadClanActivityCountsResult_MetaData), NewProp_DownloadClanActivityCountsResult_MetaData) }; // 1354722011
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProFriends_Statics::NewProp_EquippedProfileItemsChanged = { "EquippedProfileItemsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProFriends, EquippedProfileItemsChanged), Z_Construct_UDelegateFunction_SteamCorePro_OnEquippedProfileItemsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedProfileItemsChanged_MetaData), NewProp_EquippedProfileItemsChanged_MetaData) }; // 2487832278
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamProFriends_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProFriends_Statics::NewProp_AvatarImageLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProFriends_Statics::NewProp_FriendRichPresenceUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProFriends_Statics::NewProp_GameConnectedChatJoin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProFriends_Statics::NewProp_GameConnectedChatLeave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProFriends_Statics::NewProp_GameConnectedClanChatMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProFriends_Statics::NewProp_GameConnectedFriendChatMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProFriends_Statics::NewProp_GameLobbyJoinRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProFriends_Statics::NewProp_GameOverlayActivated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProFriends_Statics::NewProp_GameRichPresenceJoinRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProFriends_Statics::NewProp_GameServerChangeRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProFriends_Statics::NewProp_PersonaStateChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProFriends_Statics::NewProp_SetPersonaNameResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProFriends_Statics::NewProp_JoinClanChatRoomCompletionResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProFriends_Statics::NewProp_ClanOfficerListResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProFriends_Statics::NewProp_DownloadClanActivityCountsResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProFriends_Statics::NewProp_EquippedProfileItemsChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProFriends_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamProFriends_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProFriends_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProFriends_Statics::ClassParams = {
	&USteamProFriends::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamProFriends_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamProFriends_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProFriends_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProFriends_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProFriends()
{
	if (!Z_Registration_Info_UClass_USteamProFriends.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProFriends.OuterSingleton, Z_Construct_UClass_USteamProFriends_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProFriends.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProFriends>()
{
	return USteamProFriends::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProFriends);
// End Class USteamProFriends

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamFriends_SteamFriends_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProFriends, USteamProFriends::StaticClass, TEXT("USteamProFriends"), &Z_Registration_Info_UClass_USteamProFriends, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProFriends), 3335041441U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamFriends_SteamFriends_h_1315661100(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamFriends_SteamFriends_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamFriends_SteamFriends_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
