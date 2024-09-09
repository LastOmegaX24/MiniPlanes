// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreShared/Public/SteamCoreSharedTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreSharedTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
STEAMCORESHARED_API UEnum* Z_Construct_UEnum_SteamCoreShared_EOnlineFriendSteamCorePresenceState();
STEAMCORESHARED_API UEnum* Z_Construct_UEnum_SteamCoreShared_ESteamLobbyDistanceFilter();
STEAMCORESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint();
STEAMCORESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint();
UPackage* Z_Construct_UPackage__Script_SteamCoreShared();
// End Cross Module References

// Begin Enum ESteamLobbyDistanceFilter
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter;
static UEnum* ESteamLobbyDistanceFilter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCoreShared_ESteamLobbyDistanceFilter, (UObject*)Z_Construct_UPackage__Script_SteamCoreShared(), TEXT("ESteamLobbyDistanceFilter"));
	}
	return Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.OuterSingleton;
}
template<> STEAMCORESHARED_API UEnum* StaticEnum<ESteamLobbyDistanceFilter>()
{
	return ESteamLobbyDistanceFilter_StaticEnum();
}
struct Z_Construct_UEnum_SteamCoreShared_ESteamLobbyDistanceFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// lobby search distance. Lobby results are sorted from closest to farthest.\n" },
		{ "k_ELobbyDistanceFilterClose.Comment", "// only lobbies in the same immediate region will be returned\n" },
		{ "k_ELobbyDistanceFilterClose.DisplayName", "Close" },
		{ "k_ELobbyDistanceFilterClose.Name", "ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterClose" },
		{ "k_ELobbyDistanceFilterClose.ToolTip", "only lobbies in the same immediate region will be returned" },
		{ "k_ELobbyDistanceFilterDefault.Comment", "// only lobbies in the same region or near by regions\n" },
		{ "k_ELobbyDistanceFilterDefault.DisplayName", "Default" },
		{ "k_ELobbyDistanceFilterDefault.Name", "ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterDefault" },
		{ "k_ELobbyDistanceFilterDefault.ToolTip", "only lobbies in the same region or near by regions" },
		{ "k_ELobbyDistanceFilterFar.Comment", "// for games that don't have many latency requirements, will return lobbies about half-way around the globe\n" },
		{ "k_ELobbyDistanceFilterFar.DisplayName", "Far" },
		{ "k_ELobbyDistanceFilterFar.Name", "ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterFar" },
		{ "k_ELobbyDistanceFilterFar.ToolTip", "for games that don't have many latency requirements, will return lobbies about half-way around the globe" },
		{ "k_ELobbyDistanceFilterWorldwide.Comment", "// no filtering, will match lobbies as far as India to NY (not recommended, expect multiple seconds of latency between the clients)\n" },
		{ "k_ELobbyDistanceFilterWorldwide.DisplayName", "WorldWide" },
		{ "k_ELobbyDistanceFilterWorldwide.Name", "ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterWorldwide" },
		{ "k_ELobbyDistanceFilterWorldwide.ToolTip", "no filtering, will match lobbies as far as India to NY (not recommended, expect multiple seconds of latency between the clients)" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedTypes.h" },
		{ "ToolTip", "lobby search distance. Lobby results are sorted from closest to farthest." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterClose", (int64)ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterClose },
		{ "ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterDefault", (int64)ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterDefault },
		{ "ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterFar", (int64)ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterFar },
		{ "ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterWorldwide", (int64)ESteamLobbyDistanceFilter::k_ELobbyDistanceFilterWorldwide },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCoreShared_ESteamLobbyDistanceFilter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCoreShared,
	nullptr,
	"ESteamLobbyDistanceFilter",
	"ESteamLobbyDistanceFilter",
	Z_Construct_UEnum_SteamCoreShared_ESteamLobbyDistanceFilter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreShared_ESteamLobbyDistanceFilter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreShared_ESteamLobbyDistanceFilter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCoreShared_ESteamLobbyDistanceFilter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCoreShared_ESteamLobbyDistanceFilter()
{
	if (!Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.InnerSingleton, Z_Construct_UEnum_SteamCoreShared_ESteamLobbyDistanceFilter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.InnerSingleton;
}
// End Enum ESteamLobbyDistanceFilter

// Begin Enum EOnlineFriendSteamCorePresenceState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOnlineFriendSteamCorePresenceState;
static UEnum* EOnlineFriendSteamCorePresenceState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOnlineFriendSteamCorePresenceState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOnlineFriendSteamCorePresenceState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCoreShared_EOnlineFriendSteamCorePresenceState, (UObject*)Z_Construct_UPackage__Script_SteamCoreShared(), TEXT("EOnlineFriendSteamCorePresenceState"));
	}
	return Z_Registration_Info_UEnum_EOnlineFriendSteamCorePresenceState.OuterSingleton;
}
template<> STEAMCORESHARED_API UEnum* StaticEnum<EOnlineFriendSteamCorePresenceState>()
{
	return EOnlineFriendSteamCorePresenceState_StaticEnum();
}
struct Z_Construct_UEnum_SteamCoreShared_EOnlineFriendSteamCorePresenceState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Away.Comment", "/** User is away */" },
		{ "Away.Name", "EOnlineFriendSteamCorePresenceState::Away" },
		{ "Away.ToolTip", "User is away" },
		{ "BlueprintType", "true" },
		{ "DoNotDisturb.Comment", "/** User is in do not disturb mode */" },
		{ "DoNotDisturb.Name", "EOnlineFriendSteamCorePresenceState::DoNotDisturb" },
		{ "DoNotDisturb.ToolTip", "User is in do not disturb mode" },
		{ "ExtendedAway.Comment", "/** User is away for >2 hours (can change depending on platform) */" },
		{ "ExtendedAway.Name", "EOnlineFriendSteamCorePresenceState::ExtendedAway" },
		{ "ExtendedAway.ToolTip", "User is away for >2 hours (can change depending on platform)" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedTypes.h" },
		{ "Offline.Comment", "/** User is offline */" },
		{ "Offline.Name", "EOnlineFriendSteamCorePresenceState::Offline" },
		{ "Offline.ToolTip", "User is offline" },
		{ "Online.Comment", "/** User is online */" },
		{ "Online.Name", "EOnlineFriendSteamCorePresenceState::Online" },
		{ "Online.ToolTip", "User is online" },
		{ "Unknown.Comment", "/** Default */" },
		{ "Unknown.Name", "EOnlineFriendSteamCorePresenceState::Unknown" },
		{ "Unknown.ToolTip", "Default" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOnlineFriendSteamCorePresenceState::Offline", (int64)EOnlineFriendSteamCorePresenceState::Offline },
		{ "EOnlineFriendSteamCorePresenceState::Online", (int64)EOnlineFriendSteamCorePresenceState::Online },
		{ "EOnlineFriendSteamCorePresenceState::Away", (int64)EOnlineFriendSteamCorePresenceState::Away },
		{ "EOnlineFriendSteamCorePresenceState::ExtendedAway", (int64)EOnlineFriendSteamCorePresenceState::ExtendedAway },
		{ "EOnlineFriendSteamCorePresenceState::DoNotDisturb", (int64)EOnlineFriendSteamCorePresenceState::DoNotDisturb },
		{ "EOnlineFriendSteamCorePresenceState::Unknown", (int64)EOnlineFriendSteamCorePresenceState::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCoreShared_EOnlineFriendSteamCorePresenceState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCoreShared,
	nullptr,
	"EOnlineFriendSteamCorePresenceState",
	"EOnlineFriendSteamCorePresenceState",
	Z_Construct_UEnum_SteamCoreShared_EOnlineFriendSteamCorePresenceState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreShared_EOnlineFriendSteamCorePresenceState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreShared_EOnlineFriendSteamCorePresenceState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCoreShared_EOnlineFriendSteamCorePresenceState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCoreShared_EOnlineFriendSteamCorePresenceState()
{
	if (!Z_Registration_Info_UEnum_EOnlineFriendSteamCorePresenceState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOnlineFriendSteamCorePresenceState.InnerSingleton, Z_Construct_UEnum_SteamCoreShared_EOnlineFriendSteamCorePresenceState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOnlineFriendSteamCorePresenceState.InnerSingleton;
}
// End Enum EOnlineFriendSteamCorePresenceState

// Begin ScriptStruct FOnlineUserPresenceSteamCoreBlueprint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineUserPresenceSteamCoreBlueprint;
class UScriptStruct* FOnlineUserPresenceSteamCoreBlueprint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineUserPresenceSteamCoreBlueprint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineUserPresenceSteamCoreBlueprint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint, (UObject*)Z_Construct_UPackage__Script_SteamCoreShared(), TEXT("OnlineUserPresenceSteamCoreBlueprint"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineUserPresenceSteamCoreBlueprint.OuterSingleton;
}
template<> STEAMCORESHARED_API UScriptStruct* StaticStruct<FOnlineUserPresenceSteamCoreBlueprint>()
{
	return FOnlineUserPresenceSteamCoreBlueprint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOnline_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlaying_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayingThisGame_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsJoinable_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasVoiceSupport_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastOnline_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresenceState_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsOnline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOnline;
	static void NewProp_bIsPlaying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
	static void NewProp_bIsPlayingThisGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayingThisGame;
	static void NewProp_bIsJoinable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsJoinable;
	static void NewProp_bHasVoiceSupport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasVoiceSupport;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastOnline;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PresenceState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PresenceState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineUserPresenceSteamCoreBlueprint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bIsOnline_SetBit(void* Obj)
{
	((FOnlineUserPresenceSteamCoreBlueprint*)Obj)->bIsOnline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bIsOnline = { "bIsOnline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOnlineUserPresenceSteamCoreBlueprint), &Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bIsOnline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOnline_MetaData), NewProp_bIsOnline_MetaData) };
void Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
{
	((FOnlineUserPresenceSteamCoreBlueprint*)Obj)->bIsPlaying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOnlineUserPresenceSteamCoreBlueprint), &Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlaying_MetaData), NewProp_bIsPlaying_MetaData) };
void Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bIsPlayingThisGame_SetBit(void* Obj)
{
	((FOnlineUserPresenceSteamCoreBlueprint*)Obj)->bIsPlayingThisGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bIsPlayingThisGame = { "bIsPlayingThisGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOnlineUserPresenceSteamCoreBlueprint), &Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bIsPlayingThisGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlayingThisGame_MetaData), NewProp_bIsPlayingThisGame_MetaData) };
void Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bIsJoinable_SetBit(void* Obj)
{
	((FOnlineUserPresenceSteamCoreBlueprint*)Obj)->bIsJoinable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bIsJoinable = { "bIsJoinable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOnlineUserPresenceSteamCoreBlueprint), &Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bIsJoinable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsJoinable_MetaData), NewProp_bIsJoinable_MetaData) };
void Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bHasVoiceSupport_SetBit(void* Obj)
{
	((FOnlineUserPresenceSteamCoreBlueprint*)Obj)->bHasVoiceSupport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bHasVoiceSupport = { "bHasVoiceSupport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOnlineUserPresenceSteamCoreBlueprint), &Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bHasVoiceSupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasVoiceSupport_MetaData), NewProp_bHasVoiceSupport_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_LastOnline = { "LastOnline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineUserPresenceSteamCoreBlueprint, LastOnline), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastOnline_MetaData), NewProp_LastOnline_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_PresenceState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_PresenceState = { "PresenceState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineUserPresenceSteamCoreBlueprint, PresenceState), Z_Construct_UEnum_SteamCoreShared_EOnlineFriendSteamCorePresenceState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresenceState_MetaData), NewProp_PresenceState_MetaData) }; // 3266359519
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bIsOnline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bIsPlaying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bIsPlayingThisGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bIsJoinable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_bHasVoiceSupport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_LastOnline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_PresenceState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewProp_PresenceState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreShared,
	nullptr,
	&NewStructOps,
	"OnlineUserPresenceSteamCoreBlueprint",
	Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::PropPointers),
	sizeof(FOnlineUserPresenceSteamCoreBlueprint),
	alignof(FOnlineUserPresenceSteamCoreBlueprint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineUserPresenceSteamCoreBlueprint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineUserPresenceSteamCoreBlueprint.InnerSingleton, Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OnlineUserPresenceSteamCoreBlueprint.InnerSingleton;
}
// End ScriptStruct FOnlineUserPresenceSteamCoreBlueprint

// Begin ScriptStruct FOnlineFriendSteamCoreBlueprint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineFriendSteamCoreBlueprint;
class UScriptStruct* FOnlineFriendSteamCoreBlueprint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineFriendSteamCoreBlueprint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineFriendSteamCoreBlueprint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint, (UObject*)Z_Construct_UPackage__Script_SteamCoreShared(), TEXT("OnlineFriendSteamCoreBlueprint"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineFriendSteamCoreBlueprint.OuterSingleton;
}
template<> STEAMCORESHARED_API UScriptStruct* StaticStruct<FOnlineFriendSteamCoreBlueprint>()
{
	return FOnlineFriendSteamCoreBlueprint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealName_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Presence_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SteamCoreSharedTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RealName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Presence;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineFriendSteamCoreBlueprint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineFriendSteamCoreBlueprint, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint_Statics::NewProp_RealName = { "RealName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineFriendSteamCoreBlueprint, RealName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealName_MetaData), NewProp_RealName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint_Statics::NewProp_Presence = { "Presence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineFriendSteamCoreBlueprint, Presence), Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Presence_MetaData), NewProp_Presence_MetaData) }; // 4142339965
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineFriendSteamCoreBlueprint, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint_Statics::NewProp_RealName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint_Statics::NewProp_Presence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint_Statics::NewProp_SteamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreShared,
	nullptr,
	&NewStructOps,
	"OnlineFriendSteamCoreBlueprint",
	Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint_Statics::PropPointers),
	sizeof(FOnlineFriendSteamCoreBlueprint),
	alignof(FOnlineFriendSteamCoreBlueprint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineFriendSteamCoreBlueprint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineFriendSteamCoreBlueprint.InnerSingleton, Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OnlineFriendSteamCoreBlueprint.InnerSingleton;
}
// End ScriptStruct FOnlineFriendSteamCoreBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCoreShared_Public_SteamCoreSharedTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamLobbyDistanceFilter_StaticEnum, TEXT("ESteamLobbyDistanceFilter"), &Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2147738176U) },
		{ EOnlineFriendSteamCorePresenceState_StaticEnum, TEXT("EOnlineFriendSteamCorePresenceState"), &Z_Registration_Info_UEnum_EOnlineFriendSteamCorePresenceState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3266359519U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOnlineUserPresenceSteamCoreBlueprint::StaticStruct, Z_Construct_UScriptStruct_FOnlineUserPresenceSteamCoreBlueprint_Statics::NewStructOps, TEXT("OnlineUserPresenceSteamCoreBlueprint"), &Z_Registration_Info_UScriptStruct_OnlineUserPresenceSteamCoreBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineUserPresenceSteamCoreBlueprint), 4142339965U) },
		{ FOnlineFriendSteamCoreBlueprint::StaticStruct, Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint_Statics::NewStructOps, TEXT("OnlineFriendSteamCoreBlueprint"), &Z_Registration_Info_UScriptStruct_OnlineFriendSteamCoreBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineFriendSteamCoreBlueprint), 2940509208U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCoreShared_Public_SteamCoreSharedTypes_h_2360681437(TEXT("/Script/SteamCoreShared"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCoreShared_Public_SteamCoreSharedTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCoreShared_Public_SteamCoreSharedTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCoreShared_Public_SteamCoreSharedTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCoreShared_Public_SteamCoreSharedTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
