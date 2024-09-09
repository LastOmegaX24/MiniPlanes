// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamParties/SteamProParties.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
#include "SteamCorePro/Public/SteamParties/SteamPartiesTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamProParties() {}

// Begin Cross Module References
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProParties();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProParties_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationData();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnActiveBeaconsDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnAvailableBeaconLocationsDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnReservationNotificationDelegate__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FPartyBeaconID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamPartyBeaconLocation();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProParties Function CancelReservation
struct Z_Construct_UFunction_USteamProParties_CancelReservation_Statics
{
	struct SteamProParties_eventCancelReservation_Parms
	{
		FPartyBeaconID BeaconId;
		FSteamID SteamIDUser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Host" },
		{ "Comment", "/**\n\x09* To cancel a reservation (due to timeout or user input), call this.\n\x09* Steam will open a new reservation slot.\n\x09* Note: The user may already be in-flight to your game, so it's possible they will still connect and try to join your party.\n\x09*\n\x09* @param\x09""BeaconId\n\x09* @param\x09SteamIDUser\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
		{ "ToolTip", "To cancel a reservation (due to timeout or user input), call this.\nSteam will open a new reservation slot.\nNote: The user may already be in-flight to your game, so it's possible they will still connect and try to join your party.\n\n@param        BeaconId\n@param        SteamIDUser" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProParties_CancelReservation_Statics::NewProp_BeaconId = { "BeaconId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventCancelReservation_Parms, BeaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 2716630048
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProParties_CancelReservation_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventCancelReservation_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParties_CancelReservation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_CancelReservation_Statics::NewProp_BeaconId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_CancelReservation_Statics::NewProp_SteamIDUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_CancelReservation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParties_CancelReservation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParties, nullptr, "CancelReservation", nullptr, nullptr, Z_Construct_UFunction_USteamProParties_CancelReservation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_CancelReservation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParties_CancelReservation_Statics::SteamProParties_eventCancelReservation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_CancelReservation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParties_CancelReservation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParties_CancelReservation_Statics::SteamProParties_eventCancelReservation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParties_CancelReservation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParties_CancelReservation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParties::execCancelReservation)
{
	P_GET_STRUCT(FPartyBeaconID,Z_Param_BeaconId);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProParties::CancelReservation(Z_Param_BeaconId,Z_Param_SteamIDUser);
	P_NATIVE_END;
}
// End Class USteamProParties Function CancelReservation

// Begin Class USteamProParties Function ChangeNumOpenSlots
struct Z_Construct_UFunction_USteamProParties_ChangeNumOpenSlots_Statics
{
	struct SteamProParties_eventChangeNumOpenSlots_Parms
	{
		FScriptDelegate Callback;
		FPartyBeaconID BeaconId;
		int32 OpenSlots;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Host" },
		{ "Comment", "/**\n\x09* If a user joins your party through other matchmaking (perhaps a direct Steam friend, or your own matchmaking system), your game should reduce the number of open slots that Steam is managing through the party beacon.\n\x09* For example, if you created a beacon with five slots, and Steam sent you two ReservationNotificationCallback_t callbacks, and then a third user joined directly, you would want to call ChangeNumOpenSlots with a value of 2 for unOpenSlots.\n\x09* That value represents the total number of new users that you would like Steam to send to your party.\n\x09*\n\x09* @param\x09""BeaconId\x09\x09\x09\x09""Beacon ID for the beacon created by your process.\n\x09* @param\x09OpenSlots\x09\x09\x09The new number of open slots in your party.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
		{ "ToolTip", "If a user joins your party through other matchmaking (perhaps a direct Steam friend, or your own matchmaking system), your game should reduce the number of open slots that Steam is managing through the party beacon.\nFor example, if you created a beacon with five slots, and Steam sent you two ReservationNotificationCallback_t callbacks, and then a third user joined directly, you would want to call ChangeNumOpenSlots with a value of 2 for unOpenSlots.\nThat value represents the total number of new users that you would like Steam to send to your party.\n\n@param        BeaconId                                Beacon ID for the beacon created by your process.\n@param        OpenSlots                       The new number of open slots in your party." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OpenSlots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProParties_ChangeNumOpenSlots_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventChangeNumOpenSlots_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlots__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 4007692018
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProParties_ChangeNumOpenSlots_Statics::NewProp_BeaconId = { "BeaconId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventChangeNumOpenSlots_Parms, BeaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 2716630048
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProParties_ChangeNumOpenSlots_Statics::NewProp_OpenSlots = { "OpenSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventChangeNumOpenSlots_Parms, OpenSlots), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParties_ChangeNumOpenSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_ChangeNumOpenSlots_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_ChangeNumOpenSlots_Statics::NewProp_BeaconId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_ChangeNumOpenSlots_Statics::NewProp_OpenSlots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_ChangeNumOpenSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParties_ChangeNumOpenSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParties, nullptr, "ChangeNumOpenSlots", nullptr, nullptr, Z_Construct_UFunction_USteamProParties_ChangeNumOpenSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_ChangeNumOpenSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParties_ChangeNumOpenSlots_Statics::SteamProParties_eventChangeNumOpenSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_ChangeNumOpenSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParties_ChangeNumOpenSlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParties_ChangeNumOpenSlots_Statics::SteamProParties_eventChangeNumOpenSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParties_ChangeNumOpenSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParties_ChangeNumOpenSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParties::execChangeNumOpenSlots)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FPartyBeaconID,Z_Param_BeaconId);
	P_GET_PROPERTY(FIntProperty,Z_Param_OpenSlots);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeNumOpenSlots(FOnChangeNumOpenSlots(Z_Param_Out_Callback),Z_Param_BeaconId,Z_Param_OpenSlots);
	P_NATIVE_END;
}
// End Class USteamProParties Function ChangeNumOpenSlots

// Begin Class USteamProParties Function CreateBeacon
struct Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics
{
	struct SteamProParties_eventCreateBeacon_Parms
	{
		FScriptDelegate Callback;
		int32 OpenSlots;
		FSteamPartyBeaconLocation BeaconLocation;
		FString ConnectString;
		FString Metadata;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Host" },
		{ "Comment", "/**\n\x09* Create a beacon. You can only create one beacon at a time. \n\x09* Steam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\x09*\n\x09* If users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\x09*\n\x09* @param\x09OpenSlots\x09\x09\x09\x09Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n\x09* @param\x09""BeaconLocation\x09\x09\x09Location information for the beacon. Should be one of the locations returned by ISteamParties::GetAvailableBeaconLocations.\n\x09* @param\x09""ConnectString\x09\x09\x09""Connect string that will be given to the game on launch for a user that follows the beacon.\n\x09* @param\x09Metadata\x09\x09\x09\x09""Additional game metadata that can be set on the beacon, and is exposed via ISteamParties::GetBeaconDetails.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
		{ "ToolTip", "Create a beacon. You can only create one beacon at a time.\nSteam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\nIf users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\n@param        OpenSlots                               Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n@param        BeaconLocation                  Location information for the beacon. Should be one of the locations returned by ISteamParties::GetAvailableBeaconLocations.\n@param        ConnectString                   Connect string that will be given to the game on launch for a user that follows the beacon.\n@param        Metadata                                Additional game metadata that can be set on the beacon, and is exposed via ISteamParties::GetBeaconDetails." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OpenSlots;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconLocation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventCreateBeacon_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeacon__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2966483249
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::NewProp_OpenSlots = { "OpenSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventCreateBeacon_Parms, OpenSlots), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::NewProp_BeaconLocation = { "BeaconLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventCreateBeacon_Parms, BeaconLocation), Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, METADATA_PARAMS(0, nullptr) }; // 3205846201
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventCreateBeacon_Parms, ConnectString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventCreateBeacon_Parms, Metadata), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::NewProp_OpenSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::NewProp_BeaconLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::NewProp_ConnectString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::NewProp_Metadata,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParties, nullptr, "CreateBeacon", nullptr, nullptr, Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::SteamProParties_eventCreateBeacon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::SteamProParties_eventCreateBeacon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParties_CreateBeacon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParties_CreateBeacon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParties::execCreateBeacon)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FIntProperty,Z_Param_OpenSlots);
	P_GET_STRUCT(FSteamPartyBeaconLocation,Z_Param_BeaconLocation);
	P_GET_PROPERTY(FStrProperty,Z_Param_ConnectString);
	P_GET_PROPERTY(FStrProperty,Z_Param_Metadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateBeacon(FOnCreateBeacon(Z_Param_Out_Callback),Z_Param_OpenSlots,Z_Param_BeaconLocation,Z_Param_ConnectString,Z_Param_Metadata);
	P_NATIVE_END;
}
// End Class USteamProParties Function CreateBeacon

// Begin Class USteamProParties Function DestroyBeacon
struct Z_Construct_UFunction_USteamProParties_DestroyBeacon_Statics
{
	struct SteamProParties_eventDestroyBeacon_Parms
	{
		FPartyBeaconID BeaconId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Host" },
		{ "Comment", "/**\n\x09* Call this method to destroy the Steam party beacon.\n\x09*\n\x09* This will immediately cause Steam to stop showing the beacon in the target location.\n\x09* Note that any users currently in-flight may still arrive at your party expecting to join.\n\x09* Your game should call this method when either the party has been filled and the game is beginning, or the user has decided to abandon creating a party.\n\x09* The beacon will be destroyed automatically when your game exits, but the preferred behavior is for the game to call DestroyBeacon at the right time.\n\x09*\n\x09* @param\x09""BeaconId\x09\x09""Beacon ID to be destroyed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
		{ "ToolTip", "Call this method to destroy the Steam party beacon.\n\nThis will immediately cause Steam to stop showing the beacon in the target location.\nNote that any users currently in-flight may still arrive at your party expecting to join.\nYour game should call this method when either the party has been filled and the game is beginning, or the user has decided to abandon creating a party.\nThe beacon will be destroyed automatically when your game exits, but the preferred behavior is for the game to call DestroyBeacon at the right time.\n\n@param        BeaconId                Beacon ID to be destroyed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProParties_DestroyBeacon_Statics::NewProp_BeaconId = { "BeaconId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventDestroyBeacon_Parms, BeaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 2716630048
void Z_Construct_UFunction_USteamProParties_DestroyBeacon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProParties_eventDestroyBeacon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProParties_DestroyBeacon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProParties_eventDestroyBeacon_Parms), &Z_Construct_UFunction_USteamProParties_DestroyBeacon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParties_DestroyBeacon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_DestroyBeacon_Statics::NewProp_BeaconId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_DestroyBeacon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_DestroyBeacon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParties_DestroyBeacon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParties, nullptr, "DestroyBeacon", nullptr, nullptr, Z_Construct_UFunction_USteamProParties_DestroyBeacon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_DestroyBeacon_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParties_DestroyBeacon_Statics::SteamProParties_eventDestroyBeacon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_DestroyBeacon_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParties_DestroyBeacon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParties_DestroyBeacon_Statics::SteamProParties_eventDestroyBeacon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParties_DestroyBeacon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParties_DestroyBeacon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParties::execDestroyBeacon)
{
	P_GET_STRUCT(FPartyBeaconID,Z_Param_BeaconId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProParties::DestroyBeacon(Z_Param_BeaconId);
	P_NATIVE_END;
}
// End Class USteamProParties Function DestroyBeacon

// Begin Class USteamProParties Function GetAvailableBeaconLocations
struct Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics
{
	struct SteamProParties_eventGetAvailableBeaconLocations_Parms
	{
		TArray<FSteamPartyBeaconLocation> LocationList;
		int32 MaxNumLocations;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Host" },
		{ "Comment", "/**\n\x09* Get the list of locations in which you can post a party beacon.\n\x09* \n\x09* @param\x09LocationList\x09\x09Output list of available beacon locations.\n\x09* @param\x09MaxNumLocations\x09The maximum number of entries to put into the above list. Should be >= the result from GetNumAvailableBeaconLocations.\n\x09*/" },
		{ "CPP_Default_MaxNumLocations", "10" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
		{ "ToolTip", "Get the list of locations in which you can post a party beacon.\n\n@param        LocationList            Output list of available beacon locations.\n@param        MaxNumLocations The maximum number of entries to put into the above list. Should be >= the result from GetNumAvailableBeaconLocations." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocationList;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumLocations;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::NewProp_LocationList_Inner = { "LocationList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, METADATA_PARAMS(0, nullptr) }; // 3205846201
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::NewProp_LocationList = { "LocationList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventGetAvailableBeaconLocations_Parms, LocationList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3205846201
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::NewProp_MaxNumLocations = { "MaxNumLocations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventGetAvailableBeaconLocations_Parms, MaxNumLocations), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProParties_eventGetAvailableBeaconLocations_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProParties_eventGetAvailableBeaconLocations_Parms), &Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::NewProp_LocationList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::NewProp_LocationList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::NewProp_MaxNumLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParties, nullptr, "GetAvailableBeaconLocations", nullptr, nullptr, Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::SteamProParties_eventGetAvailableBeaconLocations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::SteamProParties_eventGetAvailableBeaconLocations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParties::execGetAvailableBeaconLocations)
{
	P_GET_TARRAY_REF(FSteamPartyBeaconLocation,Z_Param_Out_LocationList);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxNumLocations);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProParties::GetAvailableBeaconLocations(Z_Param_Out_LocationList,Z_Param_MaxNumLocations);
	P_NATIVE_END;
}
// End Class USteamProParties Function GetAvailableBeaconLocations

// Begin Class USteamProParties Function GetBeaconByIndex
struct Z_Construct_UFunction_USteamProParties_GetBeaconByIndex_Statics
{
	struct SteamProParties_eventGetBeaconByIndex_Parms
	{
		int32 Index;
		FPartyBeaconID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Client" },
		{ "Comment", "/**\n\x09* Use with GetNumActiveBeacons to iterate the active beacons visible to the current user. \n\x09*\n\x09* unIndex is a zero-based index, so iterate over the range [0, GetNumActiveBeacons() - 1]. \n\x09* The return is a PartyBeaconID_t that can be used with ISteamParties::GetBeaconDetails to get information about the beacons suitable for display to the user.\n\x09* \n\x09* @param\x09Index\x09Index of Beacon.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
		{ "ToolTip", "Use with GetNumActiveBeacons to iterate the active beacons visible to the current user.\n\nunIndex is a zero-based index, so iterate over the range [0, GetNumActiveBeacons() - 1].\nThe return is a PartyBeaconID_t that can be used with ISteamParties::GetBeaconDetails to get information about the beacons suitable for display to the user.\n\n@param        Index   Index of Beacon." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProParties_GetBeaconByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventGetBeaconByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProParties_GetBeaconByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventGetBeaconByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 2716630048
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParties_GetBeaconByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetBeaconByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetBeaconByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetBeaconByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParties_GetBeaconByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParties, nullptr, "GetBeaconByIndex", nullptr, nullptr, Z_Construct_UFunction_USteamProParties_GetBeaconByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetBeaconByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParties_GetBeaconByIndex_Statics::SteamProParties_eventGetBeaconByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetBeaconByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParties_GetBeaconByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParties_GetBeaconByIndex_Statics::SteamProParties_eventGetBeaconByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParties_GetBeaconByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParties_GetBeaconByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParties::execGetBeaconByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPartyBeaconID*)Z_Param__Result=USteamProParties::GetBeaconByIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class USteamProParties Function GetBeaconByIndex

// Begin Class USteamProParties Function GetBeaconDetails
struct Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics
{
	struct SteamProParties_eventGetBeaconDetails_Parms
	{
		FPartyBeaconID BeaconId;
		FSteamID SteamIDBeaconOwner;
		FSteamPartyBeaconLocation Location;
		FString OutMetadata;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Client" },
		{ "Comment", "/**\n\x09* Get details about the specified beacon. \n\x09*\n\x09* You can use the ISteamFriends API to get further details about pSteamIDBeaconOwner, GetBeaconLocationData to get further details about pLocation. \n\x09* The pchMetadata contents are specific to your game, and will be whatever was set (if anything) by the game process that created the beacon.\n\x09* \n\x09* @param\x09""BeaconId\x09\x09\x09\x09""Beacon ID to query.\n\x09* @param\x09SteamIDBeaconOwner\x09\x09""Creator of the beacon.\n\x09* @param\x09Location\x09\x09\x09\x09Location the beacon has been posted.\n\x09* @param\x09OutMetadata\x09\x09\x09\x09""Buffer to receive any additional metadata the game has set on this beacon (e.g. game mode).\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
		{ "ToolTip", "Get details about the specified beacon.\n\nYou can use the ISteamFriends API to get further details about pSteamIDBeaconOwner, GetBeaconLocationData to get further details about pLocation.\nThe pchMetadata contents are specific to your game, and will be whatever was set (if anything) by the game process that created the beacon.\n\n@param        BeaconId                                Beacon ID to query.\n@param        SteamIDBeaconOwner              Creator of the beacon.\n@param        Location                                Location the beacon has been posted.\n@param        OutMetadata                             Buffer to receive any additional metadata the game has set on this beacon (e.g. game mode)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDBeaconOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMetadata;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::NewProp_BeaconId = { "BeaconId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventGetBeaconDetails_Parms, BeaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 2716630048
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::NewProp_SteamIDBeaconOwner = { "SteamIDBeaconOwner", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventGetBeaconDetails_Parms, SteamIDBeaconOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventGetBeaconDetails_Parms, Location), Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, METADATA_PARAMS(0, nullptr) }; // 3205846201
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::NewProp_OutMetadata = { "OutMetadata", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventGetBeaconDetails_Parms, OutMetadata), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProParties_eventGetBeaconDetails_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProParties_eventGetBeaconDetails_Parms), &Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::NewProp_BeaconId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::NewProp_SteamIDBeaconOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::NewProp_OutMetadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParties, nullptr, "GetBeaconDetails", nullptr, nullptr, Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::SteamProParties_eventGetBeaconDetails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::SteamProParties_eventGetBeaconDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParties_GetBeaconDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParties_GetBeaconDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParties::execGetBeaconDetails)
{
	P_GET_STRUCT(FPartyBeaconID,Z_Param_BeaconId);
	P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDBeaconOwner);
	P_GET_STRUCT_REF(FSteamPartyBeaconLocation,Z_Param_Out_Location);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutMetadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProParties::GetBeaconDetails(Z_Param_BeaconId,Z_Param_Out_SteamIDBeaconOwner,Z_Param_Out_Location,Z_Param_Out_OutMetadata);
	P_NATIVE_END;
}
// End Class USteamProParties Function GetBeaconDetails

// Begin Class USteamProParties Function GetBeaconLocationData
struct Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics
{
	struct SteamProParties_eventGetBeaconLocationData_Parms
	{
		FSteamPartyBeaconLocation BeaconLocation;
		ESteamPartiesBeaconLocationData EData;
		FString PCHDataStringOut;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Host" },
		{ "Comment", "/**\n\x09* Query general metadata for the given beacon location.\n\x09*\n\x09* For instance the Name, or the URL for an icon if the location type supports icons (for example, the icon for a Steam Chat Room Group).\n\x09*\n\x09* @param\x09""BeaconLocation\x09\x09\x09Location to query.\n\x09* @param\x09""EData\x09\x09\x09\x09\x09Type of location data you wish to get.\n\x09* @param\x09PCHDataStringOut\x09\x09Output buffer for location data string.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
		{ "ToolTip", "Query general metadata for the given beacon location.\n\nFor instance the Name, or the URL for an icon if the location type supports icons (for example, the icon for a Steam Chat Room Group).\n\n@param        BeaconLocation                  Location to query.\n@param        EData                                   Type of location data you wish to get.\n@param        PCHDataStringOut                Output buffer for location data string." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconLocation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EData_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PCHDataStringOut;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::NewProp_BeaconLocation = { "BeaconLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventGetBeaconLocationData_Parms, BeaconLocation), Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, METADATA_PARAMS(0, nullptr) }; // 3205846201
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::NewProp_EData_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::NewProp_EData = { "EData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventGetBeaconLocationData_Parms, EData), Z_Construct_UEnum_SteamCorePro_ESteamPartiesBeaconLocationData, METADATA_PARAMS(0, nullptr) }; // 1363549976
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::NewProp_PCHDataStringOut = { "PCHDataStringOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventGetBeaconLocationData_Parms, PCHDataStringOut), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProParties_eventGetBeaconLocationData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProParties_eventGetBeaconLocationData_Parms), &Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::NewProp_BeaconLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::NewProp_EData_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::NewProp_EData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::NewProp_PCHDataStringOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParties, nullptr, "GetBeaconLocationData", nullptr, nullptr, Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::SteamProParties_eventGetBeaconLocationData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::SteamProParties_eventGetBeaconLocationData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParties_GetBeaconLocationData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParties_GetBeaconLocationData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParties::execGetBeaconLocationData)
{
	P_GET_STRUCT(FSteamPartyBeaconLocation,Z_Param_BeaconLocation);
	P_GET_ENUM(ESteamPartiesBeaconLocationData,Z_Param_EData);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PCHDataStringOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProParties::GetBeaconLocationData(Z_Param_BeaconLocation,ESteamPartiesBeaconLocationData(Z_Param_EData),Z_Param_Out_PCHDataStringOut);
	P_NATIVE_END;
}
// End Class USteamProParties Function GetBeaconLocationData

// Begin Class USteamProParties Function GetNumActiveBeacons
struct Z_Construct_UFunction_USteamProParties_GetNumActiveBeacons_Statics
{
	struct SteamProParties_eventGetNumActiveBeacons_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Client" },
		{ "Comment", "/**\n\x09* This method has no parameters.\n\x09*\n\x09* Get the number of active party beacons created by other users for your game, that are visible to the current user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
		{ "ToolTip", "This method has no parameters.\n\nGet the number of active party beacons created by other users for your game, that are visible to the current user." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProParties_GetNumActiveBeacons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventGetNumActiveBeacons_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParties_GetNumActiveBeacons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetNumActiveBeacons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetNumActiveBeacons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParties_GetNumActiveBeacons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParties, nullptr, "GetNumActiveBeacons", nullptr, nullptr, Z_Construct_UFunction_USteamProParties_GetNumActiveBeacons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetNumActiveBeacons_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParties_GetNumActiveBeacons_Statics::SteamProParties_eventGetNumActiveBeacons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetNumActiveBeacons_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParties_GetNumActiveBeacons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParties_GetNumActiveBeacons_Statics::SteamProParties_eventGetNumActiveBeacons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParties_GetNumActiveBeacons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParties_GetNumActiveBeacons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParties::execGetNumActiveBeacons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProParties::GetNumActiveBeacons();
	P_NATIVE_END;
}
// End Class USteamProParties Function GetNumActiveBeacons

// Begin Class USteamProParties Function GetNumAvailableBeaconLocations
struct Z_Construct_UFunction_USteamProParties_GetNumAvailableBeaconLocations_Statics
{
	struct SteamProParties_eventGetNumAvailableBeaconLocations_Parms
	{
		int32 NumLocations;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Host" },
		{ "Comment", "/**\n\x09* Get the number of locations in which you are able to post a party beacon.\n\x09*\n\x09* Use this to size your result list for a call to ISteamParties::GetAvailableBeaconLocations.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
		{ "ToolTip", "Get the number of locations in which you are able to post a party beacon.\n\nUse this to size your result list for a call to ISteamParties::GetAvailableBeaconLocations." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLocations;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProParties_GetNumAvailableBeaconLocations_Statics::NewProp_NumLocations = { "NumLocations", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventGetNumAvailableBeaconLocations_Parms, NumLocations), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProParties_GetNumAvailableBeaconLocations_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProParties_eventGetNumAvailableBeaconLocations_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProParties_GetNumAvailableBeaconLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProParties_eventGetNumAvailableBeaconLocations_Parms), &Z_Construct_UFunction_USteamProParties_GetNumAvailableBeaconLocations_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParties_GetNumAvailableBeaconLocations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetNumAvailableBeaconLocations_Statics::NewProp_NumLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetNumAvailableBeaconLocations_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetNumAvailableBeaconLocations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParties_GetNumAvailableBeaconLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParties, nullptr, "GetNumAvailableBeaconLocations", nullptr, nullptr, Z_Construct_UFunction_USteamProParties_GetNumAvailableBeaconLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetNumAvailableBeaconLocations_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParties_GetNumAvailableBeaconLocations_Statics::SteamProParties_eventGetNumAvailableBeaconLocations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetNumAvailableBeaconLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParties_GetNumAvailableBeaconLocations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParties_GetNumAvailableBeaconLocations_Statics::SteamProParties_eventGetNumAvailableBeaconLocations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParties_GetNumAvailableBeaconLocations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParties_GetNumAvailableBeaconLocations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParties::execGetNumAvailableBeaconLocations)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumLocations);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProParties::GetNumAvailableBeaconLocations(Z_Param_Out_NumLocations);
	P_NATIVE_END;
}
// End Class USteamProParties Function GetNumAvailableBeaconLocations

// Begin Class USteamProParties Function GetSteamParties
struct Z_Construct_UFunction_USteamProParties_GetSteamParties_Statics
{
	struct SteamProParties_eventGetSteamParties_Parms
	{
		USteamProParties* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProParties_GetSteamParties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventGetSteamParties_Parms, ReturnValue), Z_Construct_UClass_USteamProParties_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParties_GetSteamParties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_GetSteamParties_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetSteamParties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParties_GetSteamParties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParties, nullptr, "GetSteamParties", nullptr, nullptr, Z_Construct_UFunction_USteamProParties_GetSteamParties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetSteamParties_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParties_GetSteamParties_Statics::SteamProParties_eventGetSteamParties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_GetSteamParties_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParties_GetSteamParties_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParties_GetSteamParties_Statics::SteamProParties_eventGetSteamParties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParties_GetSteamParties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParties_GetSteamParties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParties::execGetSteamParties)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProParties**)Z_Param__Result=USteamProParties::GetSteamParties();
	P_NATIVE_END;
}
// End Class USteamProParties Function GetSteamParties

// Begin Class USteamProParties Function JoinParty
struct Z_Construct_UFunction_USteamProParties_JoinParty_Statics
{
	struct SteamProParties_eventJoinParty_Parms
	{
		FScriptDelegate Callback;
		FPartyBeaconID BeaconId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Client" },
		{ "Comment", "/**\n\x09* When the user indicates they wish to join the party advertised by a given beacon, call this method. \n\x09* On success, Steam will reserve a slot for this user in the party and return the necessary \"join game\" string to use to complete the connection.\n\x09*\n\x09* @param\x09""beaconID\x09\x09\x09\x09""Beacon ID for the party you wish to join.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
		{ "ToolTip", "When the user indicates they wish to join the party advertised by a given beacon, call this method.\nOn success, Steam will reserve a slot for this user in the party and return the necessary \"join game\" string to use to complete the connection.\n\n@param        beaconID                                Beacon ID for the party you wish to join." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProParties_JoinParty_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventJoinParty_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnJoinParty__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1477597895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProParties_JoinParty_Statics::NewProp_BeaconId = { "BeaconId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventJoinParty_Parms, BeaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 2716630048
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParties_JoinParty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_JoinParty_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_JoinParty_Statics::NewProp_BeaconId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_JoinParty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParties_JoinParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParties, nullptr, "JoinParty", nullptr, nullptr, Z_Construct_UFunction_USteamProParties_JoinParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_JoinParty_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParties_JoinParty_Statics::SteamProParties_eventJoinParty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_JoinParty_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParties_JoinParty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParties_JoinParty_Statics::SteamProParties_eventJoinParty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParties_JoinParty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParties_JoinParty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParties::execJoinParty)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FPartyBeaconID,Z_Param_BeaconId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinParty(FOnJoinParty(Z_Param_Out_Callback),Z_Param_BeaconId);
	P_NATIVE_END;
}
// End Class USteamProParties Function JoinParty

// Begin Class USteamProParties Function OnReservationCompleted
struct Z_Construct_UFunction_USteamProParties_OnReservationCompleted_Statics
{
	struct SteamProParties_eventOnReservationCompleted_Parms
	{
		FPartyBeaconID BeaconId;
		FSteamID SteamIDUser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Host" },
		{ "Comment", "/**\n\x09* When a user follows your beacon, Steam will reserve one of the open party slots for them, and send your game a ReservationNotificationCallback_t callback. \n\x09* When that user joins your party, call OnReservationCompleted to notify Steam that the user has joined successfully.\n\x09*\n\x09* @param\x09""BeaconId\x09\x09""Beacon ID for the beacon created by your process.\n\x09* @param\x09SteamIDUser\x09\x09SteamID of the user joining your party.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
		{ "ToolTip", "When a user follows your beacon, Steam will reserve one of the open party slots for them, and send your game a ReservationNotificationCallback_t callback.\nWhen that user joins your party, call OnReservationCompleted to notify Steam that the user has joined successfully.\n\n@param        BeaconId                Beacon ID for the beacon created by your process.\n@param        SteamIDUser             SteamID of the user joining your party." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeaconId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProParties_OnReservationCompleted_Statics::NewProp_BeaconId = { "BeaconId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventOnReservationCompleted_Parms, BeaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(0, nullptr) }; // 2716630048
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProParties_OnReservationCompleted_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProParties_eventOnReservationCompleted_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProParties_OnReservationCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_OnReservationCompleted_Statics::NewProp_BeaconId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProParties_OnReservationCompleted_Statics::NewProp_SteamIDUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_OnReservationCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProParties_OnReservationCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProParties, nullptr, "OnReservationCompleted", nullptr, nullptr, Z_Construct_UFunction_USteamProParties_OnReservationCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_OnReservationCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProParties_OnReservationCompleted_Statics::SteamProParties_eventOnReservationCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProParties_OnReservationCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProParties_OnReservationCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProParties_OnReservationCompleted_Statics::SteamProParties_eventOnReservationCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProParties_OnReservationCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProParties_OnReservationCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProParties::execOnReservationCompleted)
{
	P_GET_STRUCT(FPartyBeaconID,Z_Param_BeaconId);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProParties::OnReservationCompleted(Z_Param_BeaconId,Z_Param_SteamIDUser);
	P_NATIVE_END;
}
// End Class USteamProParties Function OnReservationCompleted

// Begin Class USteamProParties
void USteamProParties::StaticRegisterNativesUSteamProParties()
{
	UClass* Class = USteamProParties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelReservation", &USteamProParties::execCancelReservation },
		{ "ChangeNumOpenSlots", &USteamProParties::execChangeNumOpenSlots },
		{ "CreateBeacon", &USteamProParties::execCreateBeacon },
		{ "DestroyBeacon", &USteamProParties::execDestroyBeacon },
		{ "GetAvailableBeaconLocations", &USteamProParties::execGetAvailableBeaconLocations },
		{ "GetBeaconByIndex", &USteamProParties::execGetBeaconByIndex },
		{ "GetBeaconDetails", &USteamProParties::execGetBeaconDetails },
		{ "GetBeaconLocationData", &USteamProParties::execGetBeaconLocationData },
		{ "GetNumActiveBeacons", &USteamProParties::execGetNumActiveBeacons },
		{ "GetNumAvailableBeaconLocations", &USteamProParties::execGetNumAvailableBeaconLocations },
		{ "GetSteamParties", &USteamProParties::execGetSteamParties },
		{ "JoinParty", &USteamProParties::execJoinParty },
		{ "OnReservationCompleted", &USteamProParties::execOnReservationCompleted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProParties);
UClass* Z_Construct_UClass_USteamProParties_NoRegister()
{
	return USteamProParties::StaticClass();
}
struct Z_Construct_UClass_USteamProParties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n* This API can be used to selectively advertise your multiplayer game session in a Steam chat room group. Tell Steam the number of player spots that are available for your party, and a join-game string, and it will show a beacon in the selected group and allow that many users to \xef\xbf\xbd""follow\xef\xbf\xbd the beacon to your party. Adjust the number of open slots if other players join through alternate matchmaking methods.\n* \n* For example, you can use ISteamParties in conjunction with a private lobby. Create a private lobby, and then use ISteamParties::CreateBeacon to create a party \"beacon\" for the number of players desired. The game connect string should indicate the ID of the private lobby.\n* The beacon will appear in Steam in the specified location (e.g. a Chat Room Group), and also via the in-game ISteamParties API as described below. Steam creates \"reservation\" slots for the number of desired players. Whenever a user follows the beacon, Steam will hold a reservation slot for them and launch the game using the given connect string.\n* The game session that created the beacon will be notified of this reservation, so the game can display the appropriate \"User <username> is joining your party\" or some other indicator. Once the user joins successfully, the game session should call ISteamParties::OnReservationCompleted to tell Steam that the user successfully joined (otherwise, Steam will eventually timeout their reservation and re-open the slot).\n* When all of the beacon slots are occupied - either by reservations for users still launching the game, or completed slots for users in the party - Steam will hide and disable the beacon.\n* To cancel the beacon - for instance when the party is full and the game begins - call ISteamParties::DestroyBeacon.\n* The client side of this operation - seeing and following beacons - can also be managed by your game. Using ISteamParties::GetNumActiveBeacons and ISteamParties::GetBeaconDetails, your game can get a list of beacons from other users that are currently active in locations relevant to the current user. If the user desires, call ISteamParties::JoinParty to \"follow\" one of those beacons.\n*/" },
		{ "IncludePath", "SteamParties/SteamProParties.h" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
		{ "ToolTip", "* This API can be used to selectively advertise your multiplayer game session in a Steam chat room group. Tell Steam the number of player spots that are available for your party, and a join-game string, and it will show a beacon in the selected group and allow that many users to \xef\xbf\xbd""follow\xef\xbf\xbd the beacon to your party. Adjust the number of open slots if other players join through alternate matchmaking methods.\n*\n* For example, you can use ISteamParties in conjunction with a private lobby. Create a private lobby, and then use ISteamParties::CreateBeacon to create a party \"beacon\" for the number of players desired. The game connect string should indicate the ID of the private lobby.\n* The beacon will appear in Steam in the specified location (e.g. a Chat Room Group), and also via the in-game ISteamParties API as described below. Steam creates \"reservation\" slots for the number of desired players. Whenever a user follows the beacon, Steam will hold a reservation slot for them and launch the game using the given connect string.\n* The game session that created the beacon will be notified of this reservation, so the game can display the appropriate \"User <username> is joining your party\" or some other indicator. Once the user joins successfully, the game session should call ISteamParties::OnReservationCompleted to tell Steam that the user successfully joined (otherwise, Steam will eventually timeout their reservation and re-open the slot).\n* When all of the beacon slots are occupied - either by reservations for users still launching the game, or completed slots for users in the party - Steam will hide and disable the beacon.\n* To cancel the beacon - for instance when the party is full and the game begins - call ISteamParties::DestroyBeacon.\n* The client side of this operation - seeing and following beacons - can also be managed by your game. Using ISteamParties::GetNumActiveBeacons and ISteamParties::GetBeaconDetails, your game can get a list of beacons from other users that are currently active in locations relevant to the current user. If the user desires, call ISteamParties::JoinParty to \"follow\" one of those beacons." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinPartyDelegate_MetaData[] = {
		{ "Category", "SteamCore|SteamParties|Delegates" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateBeaconDelegate_MetaData[] = {
		{ "Category", "SteamCore|SteamParties|Delegates" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReservationNotificationDelegate_MetaData[] = {
		{ "Category", "SteamCore|SteamParties|Delegates" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeNumOpenSlotsDelegate_MetaData[] = {
		{ "Category", "SteamCore|SteamParties|Delegates" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableBeaconLocationsDelegate_MetaData[] = {
		{ "Category", "SteamCore|SteamParties|Delegates" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveBeaconsDelegate_MetaData[] = {
		{ "Category", "SteamCore|SteamParties|Delegates" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamProParties.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_JoinPartyDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CreateBeaconDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ReservationNotificationDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ChangeNumOpenSlotsDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AvailableBeaconLocationsDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ActiveBeaconsDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProParties_CancelReservation, "CancelReservation" }, // 297729476
		{ &Z_Construct_UFunction_USteamProParties_ChangeNumOpenSlots, "ChangeNumOpenSlots" }, // 1523248501
		{ &Z_Construct_UFunction_USteamProParties_CreateBeacon, "CreateBeacon" }, // 1809352103
		{ &Z_Construct_UFunction_USteamProParties_DestroyBeacon, "DestroyBeacon" }, // 1185524685
		{ &Z_Construct_UFunction_USteamProParties_GetAvailableBeaconLocations, "GetAvailableBeaconLocations" }, // 1201801486
		{ &Z_Construct_UFunction_USteamProParties_GetBeaconByIndex, "GetBeaconByIndex" }, // 2558652988
		{ &Z_Construct_UFunction_USteamProParties_GetBeaconDetails, "GetBeaconDetails" }, // 1861387807
		{ &Z_Construct_UFunction_USteamProParties_GetBeaconLocationData, "GetBeaconLocationData" }, // 113936452
		{ &Z_Construct_UFunction_USteamProParties_GetNumActiveBeacons, "GetNumActiveBeacons" }, // 3739247011
		{ &Z_Construct_UFunction_USteamProParties_GetNumAvailableBeaconLocations, "GetNumAvailableBeaconLocations" }, // 1845216274
		{ &Z_Construct_UFunction_USteamProParties_GetSteamParties, "GetSteamParties" }, // 2266791254
		{ &Z_Construct_UFunction_USteamProParties_JoinParty, "JoinParty" }, // 3043799442
		{ &Z_Construct_UFunction_USteamProParties_OnReservationCompleted, "OnReservationCompleted" }, // 1732888378
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProParties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProParties_Statics::NewProp_JoinPartyDelegate = { "JoinPartyDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProParties, JoinPartyDelegate), Z_Construct_UDelegateFunction_SteamCorePro_OnJoinPartyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinPartyDelegate_MetaData), NewProp_JoinPartyDelegate_MetaData) }; // 4133581919
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProParties_Statics::NewProp_CreateBeaconDelegate = { "CreateBeaconDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProParties, CreateBeaconDelegate), Z_Construct_UDelegateFunction_SteamCorePro_OnCreateBeaconDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateBeaconDelegate_MetaData), NewProp_CreateBeaconDelegate_MetaData) }; // 1299437502
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProParties_Statics::NewProp_ReservationNotificationDelegate = { "ReservationNotificationDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProParties, ReservationNotificationDelegate), Z_Construct_UDelegateFunction_SteamCorePro_OnReservationNotificationDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReservationNotificationDelegate_MetaData), NewProp_ReservationNotificationDelegate_MetaData) }; // 911726478
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProParties_Statics::NewProp_ChangeNumOpenSlotsDelegate = { "ChangeNumOpenSlotsDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProParties, ChangeNumOpenSlotsDelegate), Z_Construct_UDelegateFunction_SteamCorePro_OnChangeNumOpenSlotsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeNumOpenSlotsDelegate_MetaData), NewProp_ChangeNumOpenSlotsDelegate_MetaData) }; // 2266373148
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProParties_Statics::NewProp_AvailableBeaconLocationsDelegate = { "AvailableBeaconLocationsDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProParties, AvailableBeaconLocationsDelegate), Z_Construct_UDelegateFunction_SteamCorePro_OnAvailableBeaconLocationsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableBeaconLocationsDelegate_MetaData), NewProp_AvailableBeaconLocationsDelegate_MetaData) }; // 4228542741
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProParties_Statics::NewProp_ActiveBeaconsDelegate = { "ActiveBeaconsDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProParties, ActiveBeaconsDelegate), Z_Construct_UDelegateFunction_SteamCorePro_OnActiveBeaconsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveBeaconsDelegate_MetaData), NewProp_ActiveBeaconsDelegate_MetaData) }; // 1085012673
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamProParties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProParties_Statics::NewProp_JoinPartyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProParties_Statics::NewProp_CreateBeaconDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProParties_Statics::NewProp_ReservationNotificationDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProParties_Statics::NewProp_ChangeNumOpenSlotsDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProParties_Statics::NewProp_AvailableBeaconLocationsDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProParties_Statics::NewProp_ActiveBeaconsDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProParties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamProParties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProParties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProParties_Statics::ClassParams = {
	&USteamProParties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamProParties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamProParties_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProParties_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProParties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProParties()
{
	if (!Z_Registration_Info_UClass_USteamProParties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProParties.OuterSingleton, Z_Construct_UClass_USteamProParties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProParties.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProParties>()
{
	return USteamProParties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProParties);
// End Class USteamProParties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamProParties_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProParties, USteamProParties::StaticClass, TEXT("USteamProParties"), &Z_Registration_Info_UClass_USteamProParties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProParties), 3974091080U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamProParties_h_1502439132(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamProParties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamProParties_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
