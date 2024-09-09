// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamMatchmaking/SteamMatchmakingTypes.h"
#include "OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamMatchmakingTypes() {}

// Begin Cross Module References
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamChatEntryType();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamChatMemberStateChange();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamChatRoomEnterResponse();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamFavoriteFlags();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamLobbyComparison();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamLobbyType();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamResult();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamSessionFindType();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListAccountsUpdated__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListChanged__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatMsg__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatUpdate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyDataUpdate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyEnter__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyGameCreated__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyInvite__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyKicked__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FCreateLobbyData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FFavoritesListChanged();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FJoinLobbyData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatMsg();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatUpdate();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyDataUpdate();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyEnterData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyGameCreated();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyInviteData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyKickedData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyMatchList();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Enum ESteamSessionFindType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamSessionFindType;
static UEnum* ESteamSessionFindType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamSessionFindType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamSessionFindType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamSessionFindType, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamSessionFindType"));
	}
	return Z_Registration_Info_UEnum_ESteamSessionFindType.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamSessionFindType>()
{
	return ESteamSessionFindType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamSessionFindType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "Dedicated.Name", "ESteamSessionFindType::Dedicated" },
		{ "Listen.Name", "ESteamSessionFindType::Listen" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamSessionFindType::Listen", (int64)ESteamSessionFindType::Listen },
		{ "ESteamSessionFindType::Dedicated", (int64)ESteamSessionFindType::Dedicated },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamSessionFindType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamSessionFindType",
	"ESteamSessionFindType",
	Z_Construct_UEnum_SteamCorePro_ESteamSessionFindType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamSessionFindType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamSessionFindType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamSessionFindType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamSessionFindType()
{
	if (!Z_Registration_Info_UEnum_ESteamSessionFindType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamSessionFindType.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamSessionFindType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamSessionFindType.InnerSingleton;
}
// End Enum ESteamSessionFindType

// Begin Enum ESteamLobbyType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLobbyType;
static UEnum* ESteamLobbyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamLobbyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamLobbyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamLobbyType, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamLobbyType"));
	}
	return Z_Registration_Info_UEnum_ESteamLobbyType.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamLobbyType>()
{
	return ESteamLobbyType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamLobbyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FriendsOnly.Name", "ESteamLobbyType::FriendsOnly" },
		{ "Invisible.Name", "ESteamLobbyType::Invisible" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
		{ "Private.Name", "ESteamLobbyType::Private" },
		{ "Public.Name", "ESteamLobbyType::Public" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamLobbyType::Private", (int64)ESteamLobbyType::Private },
		{ "ESteamLobbyType::FriendsOnly", (int64)ESteamLobbyType::FriendsOnly },
		{ "ESteamLobbyType::Public", (int64)ESteamLobbyType::Public },
		{ "ESteamLobbyType::Invisible", (int64)ESteamLobbyType::Invisible },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamLobbyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamLobbyType",
	"ESteamLobbyType",
	Z_Construct_UEnum_SteamCorePro_ESteamLobbyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamLobbyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamLobbyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamLobbyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamLobbyType()
{
	if (!Z_Registration_Info_UEnum_ESteamLobbyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLobbyType.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamLobbyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamLobbyType.InnerSingleton;
}
// End Enum ESteamLobbyType

// Begin Enum ESteamLobbyComparison
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLobbyComparison;
static UEnum* ESteamLobbyComparison_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamLobbyComparison.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamLobbyComparison.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamLobbyComparison, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamLobbyComparison"));
	}
	return Z_Registration_Info_UEnum_ESteamLobbyComparison.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamLobbyComparison>()
{
	return ESteamLobbyComparison_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamLobbyComparison_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// lobby search filter tools\n" },
		{ "Equal.Name", "ESteamLobbyComparison::Equal" },
		{ "EqualToOrGreaterThan.Name", "ESteamLobbyComparison::EqualToOrGreaterThan" },
		{ "EqualToOrLessThan.Name", "ESteamLobbyComparison::EqualToOrLessThan" },
		{ "GreaterThan.Name", "ESteamLobbyComparison::GreaterThan" },
		{ "LessThan.Name", "ESteamLobbyComparison::LessThan" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
		{ "NotEqual.Name", "ESteamLobbyComparison::NotEqual" },
		{ "ToolTip", "lobby search filter tools" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamLobbyComparison::EqualToOrLessThan", (int64)ESteamLobbyComparison::EqualToOrLessThan },
		{ "ESteamLobbyComparison::LessThan", (int64)ESteamLobbyComparison::LessThan },
		{ "ESteamLobbyComparison::Equal", (int64)ESteamLobbyComparison::Equal },
		{ "ESteamLobbyComparison::GreaterThan", (int64)ESteamLobbyComparison::GreaterThan },
		{ "ESteamLobbyComparison::EqualToOrGreaterThan", (int64)ESteamLobbyComparison::EqualToOrGreaterThan },
		{ "ESteamLobbyComparison::NotEqual", (int64)ESteamLobbyComparison::NotEqual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamLobbyComparison_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamLobbyComparison",
	"ESteamLobbyComparison",
	Z_Construct_UEnum_SteamCorePro_ESteamLobbyComparison_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamLobbyComparison_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamLobbyComparison_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamLobbyComparison_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamLobbyComparison()
{
	if (!Z_Registration_Info_UEnum_ESteamLobbyComparison.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLobbyComparison.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamLobbyComparison_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamLobbyComparison.InnerSingleton;
}
// End Enum ESteamLobbyComparison

// Begin Enum ESteamChatMemberStateChange
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamChatMemberStateChange;
static UEnum* ESteamChatMemberStateChange_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamChatMemberStateChange.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamChatMemberStateChange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamChatMemberStateChange, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamChatMemberStateChange"));
	}
	return Z_Registration_Info_UEnum_ESteamChatMemberStateChange.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamChatMemberStateChange>()
{
	return ESteamChatMemberStateChange_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamChatMemberStateChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Banned.Name", "ESteamChatMemberStateChange::Banned" },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Disconnected.Name", "ESteamChatMemberStateChange::Disconnected" },
		{ "Entered.Name", "ESteamChatMemberStateChange::Entered" },
		{ "Kicked.Name", "ESteamChatMemberStateChange::Kicked" },
		{ "Left.Name", "ESteamChatMemberStateChange::Left" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
		{ "None.Name", "ESteamChatMemberStateChange::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamChatMemberStateChange::None", (int64)ESteamChatMemberStateChange::None },
		{ "ESteamChatMemberStateChange::Entered", (int64)ESteamChatMemberStateChange::Entered },
		{ "ESteamChatMemberStateChange::Left", (int64)ESteamChatMemberStateChange::Left },
		{ "ESteamChatMemberStateChange::Disconnected", (int64)ESteamChatMemberStateChange::Disconnected },
		{ "ESteamChatMemberStateChange::Kicked", (int64)ESteamChatMemberStateChange::Kicked },
		{ "ESteamChatMemberStateChange::Banned", (int64)ESteamChatMemberStateChange::Banned },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamChatMemberStateChange_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamChatMemberStateChange",
	"ESteamChatMemberStateChange",
	Z_Construct_UEnum_SteamCorePro_ESteamChatMemberStateChange_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamChatMemberStateChange_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamChatMemberStateChange_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamChatMemberStateChange_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamChatMemberStateChange()
{
	if (!Z_Registration_Info_UEnum_ESteamChatMemberStateChange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamChatMemberStateChange.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamChatMemberStateChange_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamChatMemberStateChange.InnerSingleton;
}
// End Enum ESteamChatMemberStateChange

// Begin Enum ESteamFavoriteFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamFavoriteFlags;
static UEnum* ESteamFavoriteFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamFavoriteFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamFavoriteFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamFavoriteFlags, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamFavoriteFlags"));
	}
	return Z_Registration_Info_UEnum_ESteamFavoriteFlags.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamFavoriteFlags>()
{
	return ESteamFavoriteFlags_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamFavoriteFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Favorite.Name", "ESteamFavoriteFlags::Favorite" },
		{ "History.Name", "ESteamFavoriteFlags::History" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
		{ "None.Name", "ESteamFavoriteFlags::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamFavoriteFlags::None", (int64)ESteamFavoriteFlags::None },
		{ "ESteamFavoriteFlags::Favorite", (int64)ESteamFavoriteFlags::Favorite },
		{ "ESteamFavoriteFlags::History", (int64)ESteamFavoriteFlags::History },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamFavoriteFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamFavoriteFlags",
	"ESteamFavoriteFlags",
	Z_Construct_UEnum_SteamCorePro_ESteamFavoriteFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamFavoriteFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamFavoriteFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamFavoriteFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamFavoriteFlags()
{
	if (!Z_Registration_Info_UEnum_ESteamFavoriteFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamFavoriteFlags.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamFavoriteFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamFavoriteFlags.InnerSingleton;
}
// End Enum ESteamFavoriteFlags

// Begin ScriptStruct FFavoritesListAccountsUpdated
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FavoritesListAccountsUpdated;
class UScriptStruct* FFavoritesListAccountsUpdated::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FavoritesListAccountsUpdated.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FavoritesListAccountsUpdated.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("FavoritesListAccountsUpdated"));
	}
	return Z_Registration_Info_UScriptStruct_FavoritesListAccountsUpdated.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FFavoritesListAccountsUpdated>()
{
	return FFavoritesListAccountsUpdated::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFavoritesListAccountsUpdated>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFavoritesListAccountsUpdated, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"FavoritesListAccountsUpdated",
	Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::PropPointers),
	sizeof(FFavoritesListAccountsUpdated),
	alignof(FFavoritesListAccountsUpdated),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated()
{
	if (!Z_Registration_Info_UScriptStruct_FavoritesListAccountsUpdated.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FavoritesListAccountsUpdated.InnerSingleton, Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FavoritesListAccountsUpdated.InnerSingleton;
}
// End ScriptStruct FFavoritesListAccountsUpdated

// Begin ScriptStruct FFavoritesListChanged
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FavoritesListChanged;
class UScriptStruct* FFavoritesListChanged::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FavoritesListChanged.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FavoritesListChanged.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFavoritesListChanged, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("FavoritesListChanged"));
	}
	return Z_Registration_Info_UScriptStruct_FavoritesListChanged.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FFavoritesListChanged>()
{
	return FFavoritesListChanged::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFavoritesListChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryPort_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionPort_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdd_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static void NewProp_bAdd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFavoritesListChanged>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFavoritesListChanged, IP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IP_MetaData), NewProp_IP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFavoritesListChanged, QueryPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryPort_MetaData), NewProp_QueryPort_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFavoritesListChanged, ConnectionPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionPort_MetaData), NewProp_ConnectionPort_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFavoritesListChanged, AppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppID_MetaData), NewProp_AppID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCorePro_ESteamFavoriteFlags, METADATA_PARAMS(0, nullptr) }; // 1738200489
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFavoritesListChanged, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) }; // 1738200489
void Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd_SetBit(void* Obj)
{
	((FFavoritesListChanged*)Obj)->bAdd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd = { "bAdd", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFavoritesListChanged), &Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdd_MetaData), NewProp_bAdd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFavoritesListChanged, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamID_MetaData), NewProp_SteamID_MetaData) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_ConnectionPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"FavoritesListChanged",
	Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::PropPointers),
	sizeof(FFavoritesListChanged),
	alignof(FFavoritesListChanged),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFavoritesListChanged()
{
	if (!Z_Registration_Info_UScriptStruct_FavoritesListChanged.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FavoritesListChanged.InnerSingleton, Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FavoritesListChanged.InnerSingleton;
}
// End ScriptStruct FFavoritesListChanged

// Begin ScriptStruct FLobbyChatMsg
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyChatMsg;
class UScriptStruct* FLobbyChatMsg::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyChatMsg.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyChatMsg.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyChatMsg, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("LobbyChatMsg"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyChatMsg.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FLobbyChatMsg>()
{
	return FLobbyChatMsg::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLobbyChatMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatEntryType_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatID_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChatID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyChatMsg>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyChatMsg, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDLobby_MetaData), NewProp_SteamIDLobby_MetaData) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyChatMsg, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDUser_MetaData), NewProp_SteamIDUser_MetaData) }; // 4251036166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyChatMsg, ChatEntryType), Z_Construct_UEnum_SteamCorePro_ESteamChatEntryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatEntryType_MetaData), NewProp_ChatEntryType_MetaData) }; // 2368510614
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatID = { "ChatID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyChatMsg, ChatID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatID_MetaData), NewProp_ChatID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"LobbyChatMsg",
	Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::PropPointers),
	sizeof(FLobbyChatMsg),
	alignof(FLobbyChatMsg),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatMsg()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyChatMsg.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyChatMsg.InnerSingleton, Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LobbyChatMsg.InnerSingleton;
}
// End ScriptStruct FLobbyChatMsg

// Begin ScriptStruct FLobbyChatUpdate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyChatUpdate;
class UScriptStruct* FLobbyChatUpdate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyChatUpdate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyChatUpdate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyChatUpdate, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("LobbyChatUpdate"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyChatUpdate.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FLobbyChatUpdate>()
{
	return FLobbyChatUpdate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUserChanged_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDMakingChange_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatMemberStateChange_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUserChanged;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDMakingChange;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatMemberStateChange_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatMemberStateChange_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChatMemberStateChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyChatUpdate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyChatUpdate, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDLobby_MetaData), NewProp_SteamIDLobby_MetaData) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDUserChanged = { "SteamIDUserChanged", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyChatUpdate, SteamIDUserChanged), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDUserChanged_MetaData), NewProp_SteamIDUserChanged_MetaData) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDMakingChange = { "SteamIDMakingChange", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyChatUpdate, SteamIDMakingChange), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDMakingChange_MetaData), NewProp_SteamIDMakingChange_MetaData) }; // 4251036166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner = { "ChatMemberStateChange", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCorePro_ESteamChatMemberStateChange, METADATA_PARAMS(0, nullptr) }; // 3349578239
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange = { "ChatMemberStateChange", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyChatUpdate, ChatMemberStateChange), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatMemberStateChange_MetaData), NewProp_ChatMemberStateChange_MetaData) }; // 3349578239
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDUserChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDMakingChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"LobbyChatUpdate",
	Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::PropPointers),
	sizeof(FLobbyChatUpdate),
	alignof(FLobbyChatUpdate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatUpdate()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyChatUpdate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyChatUpdate.InnerSingleton, Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LobbyChatUpdate.InnerSingleton;
}
// End ScriptStruct FLobbyChatUpdate

// Begin ScriptStruct FLobbyDataUpdate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyDataUpdate;
class UScriptStruct* FLobbyDataUpdate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyDataUpdate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyDataUpdate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyDataUpdate, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("LobbyDataUpdate"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyDataUpdate.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FLobbyDataUpdate>()
{
	return FLobbyDataUpdate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDMember_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDMember;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyDataUpdate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyDataUpdate, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDLobby_MetaData), NewProp_SteamIDLobby_MetaData) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDMember = { "SteamIDMember", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyDataUpdate, SteamIDMember), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDMember_MetaData), NewProp_SteamIDMember_MetaData) }; // 4251036166
void Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FLobbyDataUpdate*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLobbyDataUpdate), &Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDMember,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"LobbyDataUpdate",
	Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::PropPointers),
	sizeof(FLobbyDataUpdate),
	alignof(FLobbyDataUpdate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLobbyDataUpdate()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyDataUpdate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyDataUpdate.InnerSingleton, Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LobbyDataUpdate.InnerSingleton;
}
// End ScriptStruct FLobbyDataUpdate

// Begin ScriptStruct FLobbyEnterData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyEnterData;
class UScriptStruct* FLobbyEnterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyEnterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyEnterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyEnterData, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("LobbyEnterData"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyEnterData.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FLobbyEnterData>()
{
	return FLobbyEnterData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLobbyEnterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatRoomEnterResponse_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static void NewProp_bLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatRoomEnterResponse_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatRoomEnterResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyEnterData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyEnterData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDLobby_MetaData), NewProp_SteamIDLobby_MetaData) }; // 4251036166
void Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked_SetBit(void* Obj)
{
	((FLobbyEnterData*)Obj)->bLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLobbyEnterData), &Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocked_MetaData), NewProp_bLocked_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse = { "ChatRoomEnterResponse", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyEnterData, ChatRoomEnterResponse), Z_Construct_UEnum_SteamCorePro_ESteamChatRoomEnterResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatRoomEnterResponse_MetaData), NewProp_ChatRoomEnterResponse_MetaData) }; // 2630473137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyEnterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"LobbyEnterData",
	Z_Construct_UScriptStruct_FLobbyEnterData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::PropPointers),
	sizeof(FLobbyEnterData),
	alignof(FLobbyEnterData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLobbyEnterData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLobbyEnterData()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyEnterData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyEnterData.InnerSingleton, Z_Construct_UScriptStruct_FLobbyEnterData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LobbyEnterData.InnerSingleton;
}
// End ScriptStruct FLobbyEnterData

// Begin ScriptStruct FLobbyGameCreated
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyGameCreated;
class UScriptStruct* FLobbyGameCreated::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyGameCreated.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyGameCreated.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyGameCreated, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("LobbyGameCreated"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyGameCreated.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FLobbyGameCreated>()
{
	return FLobbyGameCreated::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLobbyGameCreated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDGameServer_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyGameCreated>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyGameCreated, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDLobby_MetaData), NewProp_SteamIDLobby_MetaData) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyGameCreated, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDGameServer_MetaData), NewProp_SteamIDGameServer_MetaData) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyGameCreated, IP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IP_MetaData), NewProp_IP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyGameCreated, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDGameServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_Port,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"LobbyGameCreated",
	Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::PropPointers),
	sizeof(FLobbyGameCreated),
	alignof(FLobbyGameCreated),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLobbyGameCreated()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyGameCreated.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyGameCreated.InnerSingleton, Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LobbyGameCreated.InnerSingleton;
}
// End ScriptStruct FLobbyGameCreated

// Begin ScriptStruct FLobbyInviteData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyInviteData;
class UScriptStruct* FLobbyInviteData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyInviteData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyInviteData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyInviteData, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("LobbyInviteData"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyInviteData.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FLobbyInviteData>()
{
	return FLobbyInviteData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLobbyInviteData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyInviteData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyInviteData, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDUser_MetaData), NewProp_SteamIDUser_MetaData) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyInviteData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDLobby_MetaData), NewProp_SteamIDLobby_MetaData) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyInviteData, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 1935638068
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyInviteData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_GameID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"LobbyInviteData",
	Z_Construct_UScriptStruct_FLobbyInviteData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::PropPointers),
	sizeof(FLobbyInviteData),
	alignof(FLobbyInviteData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLobbyInviteData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLobbyInviteData()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyInviteData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyInviteData.InnerSingleton, Z_Construct_UScriptStruct_FLobbyInviteData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LobbyInviteData.InnerSingleton;
}
// End ScriptStruct FLobbyInviteData

// Begin ScriptStruct FLobbyKickedData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyKickedData;
class UScriptStruct* FLobbyKickedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyKickedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyKickedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyKickedData, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("LobbyKickedData"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyKickedData.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FLobbyKickedData>()
{
	return FLobbyKickedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLobbyKickedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDAdmin_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKickedDueToDisconnect_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDAdmin;
	static void NewProp_bKickedDueToDisconnect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKickedDueToDisconnect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyKickedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyKickedData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDLobby_MetaData), NewProp_SteamIDLobby_MetaData) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDAdmin = { "SteamIDAdmin", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyKickedData, SteamIDAdmin), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDAdmin_MetaData), NewProp_SteamIDAdmin_MetaData) }; // 4251036166
void Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect_SetBit(void* Obj)
{
	((FLobbyKickedData*)Obj)->bKickedDueToDisconnect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect = { "bKickedDueToDisconnect", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLobbyKickedData), &Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKickedDueToDisconnect_MetaData), NewProp_bKickedDueToDisconnect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyKickedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDAdmin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"LobbyKickedData",
	Z_Construct_UScriptStruct_FLobbyKickedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::PropPointers),
	sizeof(FLobbyKickedData),
	alignof(FLobbyKickedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLobbyKickedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLobbyKickedData()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyKickedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyKickedData.InnerSingleton, Z_Construct_UScriptStruct_FLobbyKickedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LobbyKickedData.InnerSingleton;
}
// End ScriptStruct FLobbyKickedData

// Begin ScriptStruct FLobbyMatchList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyMatchList;
class UScriptStruct* FLobbyMatchList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyMatchList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyMatchList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyMatchList, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("LobbyMatchList"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyMatchList.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FLobbyMatchList>()
{
	return FLobbyMatchList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLobbyMatchList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbiesMatching_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LobbiesMatching;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyMatchList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLobbyMatchList_Statics::NewProp_LobbiesMatching = { "LobbiesMatching", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyMatchList, LobbiesMatching), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbiesMatching_MetaData), NewProp_LobbiesMatching_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyMatchList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyMatchList_Statics::NewProp_LobbiesMatching,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyMatchList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyMatchList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"LobbyMatchList",
	Z_Construct_UScriptStruct_FLobbyMatchList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyMatchList_Statics::PropPointers),
	sizeof(FLobbyMatchList),
	alignof(FLobbyMatchList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyMatchList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLobbyMatchList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLobbyMatchList()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyMatchList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyMatchList.InnerSingleton, Z_Construct_UScriptStruct_FLobbyMatchList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LobbyMatchList.InnerSingleton;
}
// End ScriptStruct FLobbyMatchList

// Begin ScriptStruct FCreateLobbyData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateLobbyData;
class UScriptStruct* FCreateLobbyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateLobbyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateLobbyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateLobbyData, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("CreateLobbyData"));
	}
	return Z_Registration_Info_UScriptStruct_CreateLobbyData.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FCreateLobbyData>()
{
	return FCreateLobbyData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreateLobbyData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateLobbyData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLobbyData, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLobbyData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDLobby_MetaData), NewProp_SteamIDLobby_MetaData) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_SteamIDLobby,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateLobbyData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"CreateLobbyData",
	Z_Construct_UScriptStruct_FCreateLobbyData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::PropPointers),
	sizeof(FCreateLobbyData),
	alignof(FCreateLobbyData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateLobbyData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateLobbyData()
{
	if (!Z_Registration_Info_UScriptStruct_CreateLobbyData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateLobbyData.InnerSingleton, Z_Construct_UScriptStruct_FCreateLobbyData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreateLobbyData.InnerSingleton;
}
// End ScriptStruct FCreateLobbyData

// Begin ScriptStruct FJoinLobbyData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JoinLobbyData;
class UScriptStruct* FJoinLobbyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JoinLobbyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JoinLobbyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJoinLobbyData, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("JoinLobbyData"));
	}
	return Z_Registration_Info_UScriptStruct_JoinLobbyData.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FJoinLobbyData>()
{
	return FJoinLobbyData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FJoinLobbyData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatRoomEnterResponse_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static void NewProp_bLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatRoomEnterResponse_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatRoomEnterResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoinLobbyData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoinLobbyData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDLobby_MetaData), NewProp_SteamIDLobby_MetaData) }; // 4251036166
void Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked_SetBit(void* Obj)
{
	((FJoinLobbyData*)Obj)->bLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJoinLobbyData), &Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocked_MetaData), NewProp_bLocked_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse = { "ChatRoomEnterResponse", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoinLobbyData, ChatRoomEnterResponse), Z_Construct_UEnum_SteamCorePro_ESteamChatRoomEnterResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatRoomEnterResponse_MetaData), NewProp_ChatRoomEnterResponse_MetaData) }; // 2630473137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoinLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"JoinLobbyData",
	Z_Construct_UScriptStruct_FJoinLobbyData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::PropPointers),
	sizeof(FJoinLobbyData),
	alignof(FJoinLobbyData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJoinLobbyData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJoinLobbyData()
{
	if (!Z_Registration_Info_UScriptStruct_JoinLobbyData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JoinLobbyData.InnerSingleton, Z_Construct_UScriptStruct_FJoinLobbyData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_JoinLobbyData.InnerSingleton;
}
// End ScriptStruct FJoinLobbyData

// Begin Delegate FOnFavoritesListAccountsUpdated
struct Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListAccountsUpdated__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnFavoritesListAccountsUpdated_Parms
	{
		FFavoritesListAccountsUpdated Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnFavoritesListAccountsUpdated_Parms, Data), Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3318344405
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnFavoritesListAccountsUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFavoritesListAccountsUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFavoritesListAccountsUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListAccountsUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFavoritesListAccountsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnFavoritesListAccountsUpdated, FFavoritesListAccountsUpdated const& Data)
{
	struct _Script_SteamCorePro_eventOnFavoritesListAccountsUpdated_Parms
	{
		FFavoritesListAccountsUpdated Data;
	};
	_Script_SteamCorePro_eventOnFavoritesListAccountsUpdated_Parms Parms;
	Parms.Data=Data;
	OnFavoritesListAccountsUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFavoritesListAccountsUpdated

// Begin Delegate FOnFavoritesListChanged
struct Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListChanged__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnFavoritesListChanged_Parms
	{
		FFavoritesListChanged Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnFavoritesListChanged_Parms, Data), Z_Construct_UScriptStruct_FFavoritesListChanged, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1116882559
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnFavoritesListChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListChanged__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFavoritesListChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListChanged__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFavoritesListChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnFavoritesListChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFavoritesListChanged_DelegateWrapper(const FMulticastScriptDelegate& OnFavoritesListChanged, FFavoritesListChanged const& Data)
{
	struct _Script_SteamCorePro_eventOnFavoritesListChanged_Parms
	{
		FFavoritesListChanged Data;
	};
	_Script_SteamCorePro_eventOnFavoritesListChanged_Parms Parms;
	Parms.Data=Data;
	OnFavoritesListChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFavoritesListChanged

// Begin Delegate FOnLobbyChatMsg
struct Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatMsg__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnLobbyChatMsg_Parms
	{
		FLobbyChatMsg Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatMsg__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnLobbyChatMsg_Parms, Data), Z_Construct_UScriptStruct_FLobbyChatMsg, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4108380005
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatMsg__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatMsg__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatMsg__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatMsg__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnLobbyChatMsg__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatMsg__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatMsg__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatMsg__DelegateSignature_Statics::_Script_SteamCorePro_eventOnLobbyChatMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatMsg__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatMsg__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatMsg__DelegateSignature_Statics::_Script_SteamCorePro_eventOnLobbyChatMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatMsg__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatMsg__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyChatMsg_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyChatMsg, FLobbyChatMsg const& Data)
{
	struct _Script_SteamCorePro_eventOnLobbyChatMsg_Parms
	{
		FLobbyChatMsg Data;
	};
	_Script_SteamCorePro_eventOnLobbyChatMsg_Parms Parms;
	Parms.Data=Data;
	OnLobbyChatMsg.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLobbyChatMsg

// Begin Delegate FOnLobbyChatUpdate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatUpdate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnLobbyChatUpdate_Parms
	{
		FLobbyChatUpdate Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatUpdate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnLobbyChatUpdate_Parms, Data), Z_Construct_UScriptStruct_FLobbyChatUpdate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3824181457
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatUpdate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatUpdate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnLobbyChatUpdate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatUpdate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnLobbyChatUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatUpdate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnLobbyChatUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyChatUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyChatUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyChatUpdate, FLobbyChatUpdate const& Data)
{
	struct _Script_SteamCorePro_eventOnLobbyChatUpdate_Parms
	{
		FLobbyChatUpdate Data;
	};
	_Script_SteamCorePro_eventOnLobbyChatUpdate_Parms Parms;
	Parms.Data=Data;
	OnLobbyChatUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLobbyChatUpdate

// Begin Delegate FOnLobbyDataUpdate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyDataUpdate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnLobbyDataUpdate_Parms
	{
		FLobbyDataUpdate Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyDataUpdate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnLobbyDataUpdate_Parms, Data), Z_Construct_UScriptStruct_FLobbyDataUpdate, METADATA_PARAMS(0, nullptr) }; // 1205617729
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyDataUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyDataUpdate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyDataUpdate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyDataUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnLobbyDataUpdate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyDataUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyDataUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyDataUpdate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnLobbyDataUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyDataUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyDataUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyDataUpdate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnLobbyDataUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyDataUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyDataUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyDataUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyDataUpdate, FLobbyDataUpdate Data)
{
	struct _Script_SteamCorePro_eventOnLobbyDataUpdate_Parms
	{
		FLobbyDataUpdate Data;
	};
	_Script_SteamCorePro_eventOnLobbyDataUpdate_Parms Parms;
	Parms.Data=Data;
	OnLobbyDataUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLobbyDataUpdate

// Begin Delegate FOnLobbyEnter
struct Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyEnter__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnLobbyEnter_Parms
	{
		FLobbyEnterData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyEnter__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnLobbyEnter_Parms, Data), Z_Construct_UScriptStruct_FLobbyEnterData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2948874360
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyEnter__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyEnter__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyEnter__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyEnter__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnLobbyEnter__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyEnter__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyEnter__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyEnter__DelegateSignature_Statics::_Script_SteamCorePro_eventOnLobbyEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyEnter__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyEnter__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyEnter__DelegateSignature_Statics::_Script_SteamCorePro_eventOnLobbyEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyEnter__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyEnter__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyEnter_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyEnter, FLobbyEnterData const& Data)
{
	struct _Script_SteamCorePro_eventOnLobbyEnter_Parms
	{
		FLobbyEnterData Data;
	};
	_Script_SteamCorePro_eventOnLobbyEnter_Parms Parms;
	Parms.Data=Data;
	OnLobbyEnter.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLobbyEnter

// Begin Delegate FOnLobbyGameCreated
struct Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyGameCreated__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnLobbyGameCreated_Parms
	{
		FLobbyGameCreated Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyGameCreated__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnLobbyGameCreated_Parms, Data), Z_Construct_UScriptStruct_FLobbyGameCreated, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2720538470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyGameCreated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyGameCreated__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyGameCreated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyGameCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnLobbyGameCreated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyGameCreated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyGameCreated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyGameCreated__DelegateSignature_Statics::_Script_SteamCorePro_eventOnLobbyGameCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyGameCreated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyGameCreated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyGameCreated__DelegateSignature_Statics::_Script_SteamCorePro_eventOnLobbyGameCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyGameCreated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyGameCreated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyGameCreated_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyGameCreated, FLobbyGameCreated const& Data)
{
	struct _Script_SteamCorePro_eventOnLobbyGameCreated_Parms
	{
		FLobbyGameCreated Data;
	};
	_Script_SteamCorePro_eventOnLobbyGameCreated_Parms Parms;
	Parms.Data=Data;
	OnLobbyGameCreated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLobbyGameCreated

// Begin Delegate FOnLobbyInvite
struct Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyInvite__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnLobbyInvite_Parms
	{
		FLobbyInviteData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyInvite__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnLobbyInvite_Parms, Data), Z_Construct_UScriptStruct_FLobbyInviteData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2065799941
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyInvite__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyInvite__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyInvite__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyInvite__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnLobbyInvite__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyInvite__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyInvite__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyInvite__DelegateSignature_Statics::_Script_SteamCorePro_eventOnLobbyInvite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyInvite__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyInvite__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyInvite__DelegateSignature_Statics::_Script_SteamCorePro_eventOnLobbyInvite_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyInvite__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyInvite__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyInvite_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyInvite, FLobbyInviteData const& Data)
{
	struct _Script_SteamCorePro_eventOnLobbyInvite_Parms
	{
		FLobbyInviteData Data;
	};
	_Script_SteamCorePro_eventOnLobbyInvite_Parms Parms;
	Parms.Data=Data;
	OnLobbyInvite.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLobbyInvite

// Begin Delegate FOnLobbyKicked
struct Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyKicked__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnLobbyKicked_Parms
	{
		FLobbyKickedData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyKicked__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnLobbyKicked_Parms, Data), Z_Construct_UScriptStruct_FLobbyKickedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 939395064
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyKicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyKicked__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyKicked__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyKicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnLobbyKicked__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyKicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyKicked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyKicked__DelegateSignature_Statics::_Script_SteamCorePro_eventOnLobbyKicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyKicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyKicked__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyKicked__DelegateSignature_Statics::_Script_SteamCorePro_eventOnLobbyKicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyKicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnLobbyKicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyKicked_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyKicked, FLobbyKickedData const& Data)
{
	struct _Script_SteamCorePro_eventOnLobbyKicked_Parms
	{
		FLobbyKickedData Data;
	};
	_Script_SteamCorePro_eventOnLobbyKicked_Parms Parms;
	Parms.Data=Data;
	OnLobbyKicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLobbyKicked

// Begin Delegate FOnRequestLobbyList
struct Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnRequestLobbyList_Parms
	{
		FLobbyMatchList Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnRequestLobbyList_Parms, Data), Z_Construct_UScriptStruct_FLobbyMatchList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3498988421
void Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnRequestLobbyList_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnRequestLobbyList_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnRequestLobbyList__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRequestLobbyList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRequestLobbyList_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyList__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestLobbyList_DelegateWrapper(const FScriptDelegate& OnRequestLobbyList, FLobbyMatchList const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnRequestLobbyList_Parms
	{
		FLobbyMatchList Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnRequestLobbyList_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestLobbyList.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnRequestLobbyList

// Begin Delegate FOnCreateLobby
struct Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnCreateLobby_Parms
	{
		FCreateLobbyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnCreateLobby_Parms, Data), Z_Construct_UScriptStruct_FCreateLobbyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1972013807
void Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnCreateLobby_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnCreateLobby_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnCreateLobby__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature_Statics::_Script_SteamCorePro_eventOnCreateLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature_Statics::_Script_SteamCorePro_eventOnCreateLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobby__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCreateLobby_DelegateWrapper(const FScriptDelegate& OnCreateLobby, FCreateLobbyData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnCreateLobby_Parms
	{
		FCreateLobbyData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnCreateLobby_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnCreateLobby.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnCreateLobby

// Begin Delegate FOnJoinLobby
struct Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnJoinLobby_Parms
	{
		FJoinLobbyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnJoinLobby_Parms, Data), Z_Construct_UScriptStruct_FJoinLobbyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 6361406
void Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnJoinLobby_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnJoinLobby_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnJoinLobby__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature_Statics::_Script_SteamCorePro_eventOnJoinLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature_Statics::_Script_SteamCorePro_eventOnJoinLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobby__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoinLobby_DelegateWrapper(const FScriptDelegate& OnJoinLobby, FJoinLobbyData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnJoinLobby_Parms
	{
		FJoinLobbyData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnJoinLobby_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnJoinLobby.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnJoinLobby

// Begin Delegate FOnFindSessions
struct Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnFindSessions_Parms
	{
		TArray<FBlueprintSessionResult> Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(0, nullptr) }; // 1307808723
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnFindSessions_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1307808723
void Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnFindSessions_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnFindSessions_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnFindSessions__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFindSessions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFindSessions_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnFindSessions__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFindSessions_DelegateWrapper(const FScriptDelegate& OnFindSessions, TArray<FBlueprintSessionResult> const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnFindSessions_Parms
	{
		TArray<FBlueprintSessionResult> Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnFindSessions_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFindSessions.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnFindSessions

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmakingTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamSessionFindType_StaticEnum, TEXT("ESteamSessionFindType"), &Z_Registration_Info_UEnum_ESteamSessionFindType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2422448065U) },
		{ ESteamLobbyType_StaticEnum, TEXT("ESteamLobbyType"), &Z_Registration_Info_UEnum_ESteamLobbyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3095676667U) },
		{ ESteamLobbyComparison_StaticEnum, TEXT("ESteamLobbyComparison"), &Z_Registration_Info_UEnum_ESteamLobbyComparison, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 77414464U) },
		{ ESteamChatMemberStateChange_StaticEnum, TEXT("ESteamChatMemberStateChange"), &Z_Registration_Info_UEnum_ESteamChatMemberStateChange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3349578239U) },
		{ ESteamFavoriteFlags_StaticEnum, TEXT("ESteamFavoriteFlags"), &Z_Registration_Info_UEnum_ESteamFavoriteFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1738200489U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFavoritesListAccountsUpdated::StaticStruct, Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewStructOps, TEXT("FavoritesListAccountsUpdated"), &Z_Registration_Info_UScriptStruct_FavoritesListAccountsUpdated, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFavoritesListAccountsUpdated), 3318344405U) },
		{ FFavoritesListChanged::StaticStruct, Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewStructOps, TEXT("FavoritesListChanged"), &Z_Registration_Info_UScriptStruct_FavoritesListChanged, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFavoritesListChanged), 1116882559U) },
		{ FLobbyChatMsg::StaticStruct, Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewStructOps, TEXT("LobbyChatMsg"), &Z_Registration_Info_UScriptStruct_LobbyChatMsg, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyChatMsg), 4108380005U) },
		{ FLobbyChatUpdate::StaticStruct, Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewStructOps, TEXT("LobbyChatUpdate"), &Z_Registration_Info_UScriptStruct_LobbyChatUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyChatUpdate), 3824181457U) },
		{ FLobbyDataUpdate::StaticStruct, Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewStructOps, TEXT("LobbyDataUpdate"), &Z_Registration_Info_UScriptStruct_LobbyDataUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyDataUpdate), 1205617729U) },
		{ FLobbyEnterData::StaticStruct, Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewStructOps, TEXT("LobbyEnterData"), &Z_Registration_Info_UScriptStruct_LobbyEnterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyEnterData), 2948874360U) },
		{ FLobbyGameCreated::StaticStruct, Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewStructOps, TEXT("LobbyGameCreated"), &Z_Registration_Info_UScriptStruct_LobbyGameCreated, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyGameCreated), 2720538470U) },
		{ FLobbyInviteData::StaticStruct, Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewStructOps, TEXT("LobbyInviteData"), &Z_Registration_Info_UScriptStruct_LobbyInviteData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyInviteData), 2065799941U) },
		{ FLobbyKickedData::StaticStruct, Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewStructOps, TEXT("LobbyKickedData"), &Z_Registration_Info_UScriptStruct_LobbyKickedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyKickedData), 939395064U) },
		{ FLobbyMatchList::StaticStruct, Z_Construct_UScriptStruct_FLobbyMatchList_Statics::NewStructOps, TEXT("LobbyMatchList"), &Z_Registration_Info_UScriptStruct_LobbyMatchList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyMatchList), 3498988421U) },
		{ FCreateLobbyData::StaticStruct, Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewStructOps, TEXT("CreateLobbyData"), &Z_Registration_Info_UScriptStruct_CreateLobbyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateLobbyData), 1972013807U) },
		{ FJoinLobbyData::StaticStruct, Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewStructOps, TEXT("JoinLobbyData"), &Z_Registration_Info_UScriptStruct_JoinLobbyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJoinLobbyData), 6361406U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmakingTypes_h_2855023001(TEXT("/Script/SteamCorePro"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmakingTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmakingTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmakingTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmakingTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
