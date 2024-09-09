// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamFriends/SteamFriendsAsyncActions.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
#include "SteamCorePro/Public/SteamFriends/SteamFriendsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamFriendsAsyncActions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProAsyncAction();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName_NoRegister();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserInformationAsyncDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FClanOfficerListResponse();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsGetFollowerCount();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsIsFollowing();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSetPersonaNameResponse();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Delegate FOnSetPersonaNameAsyncDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnSetPersonaNameAsyncDelegate_Parms
	{
		FSetPersonaNameResponse data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSetPersonaNameAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FSetPersonaNameResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 684018612
void Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnSetPersonaNameAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnSetPersonaNameAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnSetPersonaNameAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSetPersonaNameAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSetPersonaNameAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSetPersonaNameAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSetPersonaNameAsyncDelegate, FSetPersonaNameResponse const& data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnSetPersonaNameAsyncDelegate_Parms
	{
		FSetPersonaNameResponse data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnSetPersonaNameAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnSetPersonaNameAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSetPersonaNameAsyncDelegate

// Begin Delegate FOnDownloadClanActivityCountsAsyncDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnDownloadClanActivityCountsAsyncDelegate_Parms
	{
		FDownloadClanActivityCountsResult data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnDownloadClanActivityCountsAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 2911122690
void Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnDownloadClanActivityCountsAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnDownloadClanActivityCountsAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnDownloadClanActivityCountsAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnDownloadClanActivityCountsAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDownloadClanActivityCountsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadClanActivityCountsAsyncDelegate, FDownloadClanActivityCountsResult const& data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnDownloadClanActivityCountsAsyncDelegate_Parms
	{
		FDownloadClanActivityCountsResult data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnDownloadClanActivityCountsAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnDownloadClanActivityCountsAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDownloadClanActivityCountsAsyncDelegate

// Begin Delegate FOnRequestClanOfficerListAsyncDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnRequestClanOfficerListAsyncDelegate_Parms
	{
		FClanOfficerListResponse data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnRequestClanOfficerListAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FClanOfficerListResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 3436289300
void Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnRequestClanOfficerListAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnRequestClanOfficerListAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnRequestClanOfficerListAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRequestClanOfficerListAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRequestClanOfficerListAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestClanOfficerListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestClanOfficerListAsyncDelegate, FClanOfficerListResponse const& data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnRequestClanOfficerListAsyncDelegate_Parms
	{
		FClanOfficerListResponse data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnRequestClanOfficerListAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestClanOfficerListAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRequestClanOfficerListAsyncDelegate

// Begin Delegate FOnJoinClanChatRoomAsyncDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnJoinClanChatRoomAsyncDelegate_Parms
	{
		FJoinClanChatRoomCompletionResult data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnJoinClanChatRoomAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 3391988778
void Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnJoinClanChatRoomAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnJoinClanChatRoomAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnJoinClanChatRoomAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnJoinClanChatRoomAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnJoinClanChatRoomAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoinClanChatRoomAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinClanChatRoomAsyncDelegate, FJoinClanChatRoomCompletionResult const& data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnJoinClanChatRoomAsyncDelegate_Parms
	{
		FJoinClanChatRoomCompletionResult data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnJoinClanChatRoomAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnJoinClanChatRoomAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnJoinClanChatRoomAsyncDelegate

// Begin Delegate FOnEnumerateFollowingListAsyncDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnEnumerateFollowingListAsyncDelegate_Parms
	{
		FFriendsEnumerateFollowingList data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnEnumerateFollowingListAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 3630814246
void Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnEnumerateFollowingListAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnEnumerateFollowingListAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnEnumerateFollowingListAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnEnumerateFollowingListAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnEnumerateFollowingListAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEnumerateFollowingListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEnumerateFollowingListAsyncDelegate, FFriendsEnumerateFollowingList const& data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnEnumerateFollowingListAsyncDelegate_Parms
	{
		FFriendsEnumerateFollowingList data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnEnumerateFollowingListAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnEnumerateFollowingListAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEnumerateFollowingListAsyncDelegate

// Begin Delegate FOnIsFollowingAsyncDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnIsFollowingAsyncDelegate_Parms
	{
		FFriendsIsFollowing data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnIsFollowingAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FFriendsIsFollowing, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 237650351
void Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnIsFollowingAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnIsFollowingAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnIsFollowingAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnIsFollowingAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnIsFollowingAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnIsFollowingAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnIsFollowingAsyncDelegate, FFriendsIsFollowing const& data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnIsFollowingAsyncDelegate_Parms
	{
		FFriendsIsFollowing data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnIsFollowingAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnIsFollowingAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnIsFollowingAsyncDelegate

// Begin Delegate FOnGetFollowerCountAsyncDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnGetFollowerCountAsyncDelegate_Parms
	{
		FFriendsGetFollowerCount data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnGetFollowerCountAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FFriendsGetFollowerCount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 1625428065
void Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnGetFollowerCountAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnGetFollowerCountAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnGetFollowerCountAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnGetFollowerCountAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnGetFollowerCountAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetFollowerCountAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetFollowerCountAsyncDelegate, FFriendsGetFollowerCount const& data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnGetFollowerCountAsyncDelegate_Parms
	{
		FFriendsGetFollowerCount data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnGetFollowerCountAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnGetFollowerCountAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGetFollowerCountAsyncDelegate

// Begin Delegate FOnRequestUserInformationAsyncDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnRequestUserInformationAsyncDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserInformationAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestUserInformationAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestUserInformationAsyncDelegate)
{
	OnRequestUserInformationAsyncDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnRequestUserInformationAsyncDelegate

// Begin Class USteamCoreProFriendsAsyncActionSetPersonaName Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_HandleCallback_Statics
{
	struct SteamCoreProFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms
	{
		FSetPersonaNameResponse Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FSetPersonaNameResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 684018612
void Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_HandleCallback_Statics::SteamCoreProFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_HandleCallback_Statics::SteamCoreProFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProFriendsAsyncActionSetPersonaName::execHandleCallback)
{
	P_GET_STRUCT_REF(FSetPersonaNameResponse,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProFriendsAsyncActionSetPersonaName Function HandleCallback

// Begin Class USteamCoreProFriendsAsyncActionSetPersonaName Function SetPersonaNameAsync
struct Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics
{
	struct SteamCoreProFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms
	{
		UObject* WorldContextObject;
		FString Name;
		float Timeout;
		USteamCoreProFriendsAsyncActionSetPersonaName* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Sets the current users persona name, stores it on the server and publishes the changes to all friends who are online.\n\x09* Changes take place locally immediately, and a PersonaStateChange_t callback is posted, presuming success.\n\x09* If the name change fails to happen on the server, then an additional PersonaStateChange_t\n\x09* callback will be posted to change the name back, in addition to the final result available in the call result.\n\x09*\n\x09* @param\x09Name\x09\x09The users new persona name. Can not be longer than k_cchPersonaNameMax bytes.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Set Persona Name" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Sets the current users persona name, stores it on the server and publishes the changes to all friends who are online.\nChanges take place locally immediately, and a PersonaStateChange_t callback is posted, presuming success.\nIf the name change fails to happen on the server, then an additional PersonaStateChange_t\ncallback will be posted to change the name back, in addition to the final result available in the call result.\n\n@param        Name            The users new persona name. Can not be longer than k_cchPersonaNameMax bytes.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName, nullptr, "SetPersonaNameAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::SteamCoreProFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::SteamCoreProFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProFriendsAsyncActionSetPersonaName::execSetPersonaNameAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProFriendsAsyncActionSetPersonaName**)Z_Param__Result=USteamCoreProFriendsAsyncActionSetPersonaName::SetPersonaNameAsync(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProFriendsAsyncActionSetPersonaName Function SetPersonaNameAsync

// Begin Class USteamCoreProFriendsAsyncActionSetPersonaName
void USteamCoreProFriendsAsyncActionSetPersonaName::StaticRegisterNativesUSteamCoreProFriendsAsyncActionSetPersonaName()
{
	UClass* Class = USteamCoreProFriendsAsyncActionSetPersonaName::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &USteamCoreProFriendsAsyncActionSetPersonaName::execHandleCallback },
		{ "SetPersonaNameAsync", &USteamCoreProFriendsAsyncActionSetPersonaName::execSetPersonaNameAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProFriendsAsyncActionSetPersonaName);
UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName_NoRegister()
{
	return USteamCoreProFriendsAsyncActionSetPersonaName::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProFriendsAsyncActionSetPersonaName\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProFriendsAsyncActionSetPersonaName\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_HandleCallback, "HandleCallback" }, // 1230119988
		{ &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionSetPersonaName_SetPersonaNameAsync, "SetPersonaNameAsync" }, // 13321727
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProFriendsAsyncActionSetPersonaName>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProFriendsAsyncActionSetPersonaName, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnSetPersonaNameAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3175509380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName_Statics::ClassParams = {
	&USteamCoreProFriendsAsyncActionSetPersonaName::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName()
{
	if (!Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionSetPersonaName.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionSetPersonaName.OuterSingleton, Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionSetPersonaName.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProFriendsAsyncActionSetPersonaName>()
{
	return USteamCoreProFriendsAsyncActionSetPersonaName::StaticClass();
}
USteamCoreProFriendsAsyncActionSetPersonaName::USteamCoreProFriendsAsyncActionSetPersonaName(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProFriendsAsyncActionSetPersonaName);
USteamCoreProFriendsAsyncActionSetPersonaName::~USteamCoreProFriendsAsyncActionSetPersonaName() {}
// End Class USteamCoreProFriendsAsyncActionSetPersonaName

// Begin Class USteamCoreProFriendsAsyncActionDownloadClanActivityCounts Function DownloadClanActivityCountsAsync
struct Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics
{
	struct SteamCoreProFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms
	{
		UObject* WorldContextObject;
		TArray<FSteamID> SteamIDClans;
		float Timeout;
		USteamCoreProFriendsAsyncActionDownloadClanActivityCounts* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Refresh the Steam Group activity data or get the data from groups other than one that the current\n\x09* user is a member.\n\x09* After receiving the callback you can then use GetClanActivityCounts to get the up to date user counts.\n\x09*\n\x09* @param\x09SteamIDClans\x09""A list of steam groups to get the updated data for.\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Download Clan Activity Counts" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Refresh the Steam Group activity data or get the data from groups other than one that the current\nuser is a member.\nAfter receiving the callback you can then use GetClanActivityCounts to get the up to date user counts.\n\n@param        SteamIDClans    A list of steam groups to get the updated data for.\n@param        Timeout                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClans_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamIDClans;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_SteamIDClans_Inner = { "SteamIDClans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_SteamIDClans = { "SteamIDClans", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms, SteamIDClans), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_SteamIDClans_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_SteamIDClans,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts, nullptr, "DownloadClanActivityCountsAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::SteamCoreProFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::SteamCoreProFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProFriendsAsyncActionDownloadClanActivityCounts::execDownloadClanActivityCountsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY(FSteamID,Z_Param_SteamIDClans);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProFriendsAsyncActionDownloadClanActivityCounts**)Z_Param__Result=USteamCoreProFriendsAsyncActionDownloadClanActivityCounts::DownloadClanActivityCountsAsync(Z_Param_WorldContextObject,Z_Param_SteamIDClans,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProFriendsAsyncActionDownloadClanActivityCounts Function DownloadClanActivityCountsAsync

// Begin Class USteamCoreProFriendsAsyncActionDownloadClanActivityCounts Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics
{
	struct SteamCoreProFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms
	{
		FDownloadClanActivityCountsResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2911122690
void Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::SteamCoreProFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::SteamCoreProFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProFriendsAsyncActionDownloadClanActivityCounts::execHandleCallback)
{
	P_GET_STRUCT_REF(FDownloadClanActivityCountsResult,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProFriendsAsyncActionDownloadClanActivityCounts Function HandleCallback

// Begin Class USteamCoreProFriendsAsyncActionDownloadClanActivityCounts
void USteamCoreProFriendsAsyncActionDownloadClanActivityCounts::StaticRegisterNativesUSteamCoreProFriendsAsyncActionDownloadClanActivityCounts()
{
	UClass* Class = USteamCoreProFriendsAsyncActionDownloadClanActivityCounts::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DownloadClanActivityCountsAsync", &USteamCoreProFriendsAsyncActionDownloadClanActivityCounts::execDownloadClanActivityCountsAsync },
		{ "HandleCallback", &USteamCoreProFriendsAsyncActionDownloadClanActivityCounts::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProFriendsAsyncActionDownloadClanActivityCounts);
UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_NoRegister()
{
	return USteamCoreProFriendsAsyncActionDownloadClanActivityCounts::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProFriendsAsyncActionDownloadClanActivityCounts\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProFriendsAsyncActionDownloadClanActivityCounts\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync, "DownloadClanActivityCountsAsync" }, // 764846236
		{ &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_HandleCallback, "HandleCallback" }, // 803947641
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProFriendsAsyncActionDownloadClanActivityCounts>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProFriendsAsyncActionDownloadClanActivityCounts, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 737910228
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_Statics::ClassParams = {
	&USteamCoreProFriendsAsyncActionDownloadClanActivityCounts::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts()
{
	if (!Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts.OuterSingleton, Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProFriendsAsyncActionDownloadClanActivityCounts>()
{
	return USteamCoreProFriendsAsyncActionDownloadClanActivityCounts::StaticClass();
}
USteamCoreProFriendsAsyncActionDownloadClanActivityCounts::USteamCoreProFriendsAsyncActionDownloadClanActivityCounts(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProFriendsAsyncActionDownloadClanActivityCounts);
USteamCoreProFriendsAsyncActionDownloadClanActivityCounts::~USteamCoreProFriendsAsyncActionDownloadClanActivityCounts() {}
// End Class USteamCoreProFriendsAsyncActionDownloadClanActivityCounts

// Begin Class USteamCoreProFriendsAsyncActionRequestClanOfficerList Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics
{
	struct SteamCoreProFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms
	{
		FClanOfficerListResponse Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FClanOfficerListResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3436289300
void Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::SteamCoreProFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::SteamCoreProFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProFriendsAsyncActionRequestClanOfficerList::execHandleCallback)
{
	P_GET_STRUCT_REF(FClanOfficerListResponse,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProFriendsAsyncActionRequestClanOfficerList Function HandleCallback

// Begin Class USteamCoreProFriendsAsyncActionRequestClanOfficerList Function RequestClanOfficerListAsync
struct Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics
{
	struct SteamCoreProFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamIDClan;
		float Timeout;
		USteamCoreProFriendsAsyncActionRequestClanOfficerList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Requests information about a Steam group officers (administrators and moderators).\n\x09* You can only ask about Steam groups that a user is a member of.\n\x09* This won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam group to get the officers list for.\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Clan Officer List" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Requests information about a Steam group officers (administrators and moderators).\nYou can only ask about Steam groups that a user is a member of.\nThis won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.\n\n@param        SteamIDClan             The Steam group to get the officers list for.\n@param        Timeout                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList, nullptr, "RequestClanOfficerListAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::SteamCoreProFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::SteamCoreProFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProFriendsAsyncActionRequestClanOfficerList::execRequestClanOfficerListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProFriendsAsyncActionRequestClanOfficerList**)Z_Param__Result=USteamCoreProFriendsAsyncActionRequestClanOfficerList::RequestClanOfficerListAsync(Z_Param_WorldContextObject,Z_Param_SteamIDClan,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProFriendsAsyncActionRequestClanOfficerList Function RequestClanOfficerListAsync

// Begin Class USteamCoreProFriendsAsyncActionRequestClanOfficerList
void USteamCoreProFriendsAsyncActionRequestClanOfficerList::StaticRegisterNativesUSteamCoreProFriendsAsyncActionRequestClanOfficerList()
{
	UClass* Class = USteamCoreProFriendsAsyncActionRequestClanOfficerList::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &USteamCoreProFriendsAsyncActionRequestClanOfficerList::execHandleCallback },
		{ "RequestClanOfficerListAsync", &USteamCoreProFriendsAsyncActionRequestClanOfficerList::execRequestClanOfficerListAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProFriendsAsyncActionRequestClanOfficerList);
UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList_NoRegister()
{
	return USteamCoreProFriendsAsyncActionRequestClanOfficerList::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProFriendsAsyncActionRequestClanOfficerList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProFriendsAsyncActionRequestClanOfficerList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_HandleCallback, "HandleCallback" }, // 3132290229
		{ &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync, "RequestClanOfficerListAsync" }, // 1800055759
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProFriendsAsyncActionRequestClanOfficerList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProFriendsAsyncActionRequestClanOfficerList, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestClanOfficerListAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1237723810
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList_Statics::ClassParams = {
	&USteamCoreProFriendsAsyncActionRequestClanOfficerList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList()
{
	if (!Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList.OuterSingleton, Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProFriendsAsyncActionRequestClanOfficerList>()
{
	return USteamCoreProFriendsAsyncActionRequestClanOfficerList::StaticClass();
}
USteamCoreProFriendsAsyncActionRequestClanOfficerList::USteamCoreProFriendsAsyncActionRequestClanOfficerList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProFriendsAsyncActionRequestClanOfficerList);
USteamCoreProFriendsAsyncActionRequestClanOfficerList::~USteamCoreProFriendsAsyncActionRequestClanOfficerList() {}
// End Class USteamCoreProFriendsAsyncActionRequestClanOfficerList

// Begin Class USteamCoreProFriendsAsyncActionJoinClanChatRoom Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics
{
	struct SteamCoreProFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms
	{
		FJoinClanChatRoomCompletionResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3391988778
void Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::SteamCoreProFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::SteamCoreProFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProFriendsAsyncActionJoinClanChatRoom::execHandleCallback)
{
	P_GET_STRUCT_REF(FJoinClanChatRoomCompletionResult,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProFriendsAsyncActionJoinClanChatRoom Function HandleCallback

// Begin Class USteamCoreProFriendsAsyncActionJoinClanChatRoom Function JoinClanChatRoomAsync
struct Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics
{
	struct SteamCoreProFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamIDClan;
		float Timeout;
		USteamCoreProFriendsAsyncActionJoinClanChatRoom* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Allows the user to join Steam group (clan) chats right within the game.\n\x09* The behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.\n\x09* You can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam ID of the Steam group to join.\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Join Clan Chat Room" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Allows the user to join Steam group (clan) chats right within the game.\nThe behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.\nYou can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.\n\n@param        SteamIDClan             The Steam ID of the Steam group to join.\n@param        Timeout                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom, nullptr, "JoinClanChatRoomAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::SteamCoreProFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::SteamCoreProFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProFriendsAsyncActionJoinClanChatRoom::execJoinClanChatRoomAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProFriendsAsyncActionJoinClanChatRoom**)Z_Param__Result=USteamCoreProFriendsAsyncActionJoinClanChatRoom::JoinClanChatRoomAsync(Z_Param_WorldContextObject,Z_Param_SteamIDClan,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProFriendsAsyncActionJoinClanChatRoom Function JoinClanChatRoomAsync

// Begin Class USteamCoreProFriendsAsyncActionJoinClanChatRoom
void USteamCoreProFriendsAsyncActionJoinClanChatRoom::StaticRegisterNativesUSteamCoreProFriendsAsyncActionJoinClanChatRoom()
{
	UClass* Class = USteamCoreProFriendsAsyncActionJoinClanChatRoom::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &USteamCoreProFriendsAsyncActionJoinClanChatRoom::execHandleCallback },
		{ "JoinClanChatRoomAsync", &USteamCoreProFriendsAsyncActionJoinClanChatRoom::execJoinClanChatRoomAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProFriendsAsyncActionJoinClanChatRoom);
UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom_NoRegister()
{
	return USteamCoreProFriendsAsyncActionJoinClanChatRoom::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProFriendsAsyncActionJoinClanChatRoom\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProFriendsAsyncActionJoinClanChatRoom\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_HandleCallback, "HandleCallback" }, // 3298005989
		{ &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync, "JoinClanChatRoomAsync" }, // 775609098
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProFriendsAsyncActionJoinClanChatRoom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProFriendsAsyncActionJoinClanChatRoom, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnJoinClanChatRoomAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2858324230
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom_Statics::ClassParams = {
	&USteamCoreProFriendsAsyncActionJoinClanChatRoom::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom()
{
	if (!Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom.OuterSingleton, Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProFriendsAsyncActionJoinClanChatRoom>()
{
	return USteamCoreProFriendsAsyncActionJoinClanChatRoom::StaticClass();
}
USteamCoreProFriendsAsyncActionJoinClanChatRoom::USteamCoreProFriendsAsyncActionJoinClanChatRoom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProFriendsAsyncActionJoinClanChatRoom);
USteamCoreProFriendsAsyncActionJoinClanChatRoom::~USteamCoreProFriendsAsyncActionJoinClanChatRoom() {}
// End Class USteamCoreProFriendsAsyncActionJoinClanChatRoom

// Begin Class USteamCoreProFriendsAsyncActionEnumerateFollowingList Function EnumerateFollowingListAsync
struct Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics
{
	struct SteamCoreProFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms
	{
		UObject* WorldContextObject;
		int32 StartIndex;
		float Timeout;
		USteamCoreProFriendsAsyncActionEnumerateFollowingList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Gets the list of users that the current user is following.\n\x09* You can be following people that are not your friends.\n\x09* Following allows you to receive updates when the person does things like\n\x09* post a new piece of content to the Steam Workshop.\n\x09*\n\x09* @param\x09StartIndex\x09The index to start receiving followers from. This should be 0 on the initial call.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Enumerate Following List" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Gets the list of users that the current user is following.\nYou can be following people that are not your friends.\nFollowing allows you to receive updates when the person does things like\npost a new piece of content to the Steam Workshop.\n\n@param        StartIndex      The index to start receiving followers from. This should be 0 on the initial call.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms, StartIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_StartIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList, nullptr, "EnumerateFollowingListAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::SteamCoreProFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::SteamCoreProFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProFriendsAsyncActionEnumerateFollowingList::execEnumerateFollowingListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProFriendsAsyncActionEnumerateFollowingList**)Z_Param__Result=USteamCoreProFriendsAsyncActionEnumerateFollowingList::EnumerateFollowingListAsync(Z_Param_WorldContextObject,Z_Param_StartIndex,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProFriendsAsyncActionEnumerateFollowingList Function EnumerateFollowingListAsync

// Begin Class USteamCoreProFriendsAsyncActionEnumerateFollowingList Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics
{
	struct SteamCoreProFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms
	{
		FFriendsEnumerateFollowingList Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3630814246
void Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::SteamCoreProFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::SteamCoreProFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProFriendsAsyncActionEnumerateFollowingList::execHandleCallback)
{
	P_GET_STRUCT_REF(FFriendsEnumerateFollowingList,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProFriendsAsyncActionEnumerateFollowingList Function HandleCallback

// Begin Class USteamCoreProFriendsAsyncActionEnumerateFollowingList
void USteamCoreProFriendsAsyncActionEnumerateFollowingList::StaticRegisterNativesUSteamCoreProFriendsAsyncActionEnumerateFollowingList()
{
	UClass* Class = USteamCoreProFriendsAsyncActionEnumerateFollowingList::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnumerateFollowingListAsync", &USteamCoreProFriendsAsyncActionEnumerateFollowingList::execEnumerateFollowingListAsync },
		{ "HandleCallback", &USteamCoreProFriendsAsyncActionEnumerateFollowingList::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProFriendsAsyncActionEnumerateFollowingList);
UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList_NoRegister()
{
	return USteamCoreProFriendsAsyncActionEnumerateFollowingList::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProFriendsAsyncActionEnumerateFollowingList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProFriendsAsyncActionEnumerateFollowingList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync, "EnumerateFollowingListAsync" }, // 3700758617
		{ &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionEnumerateFollowingList_HandleCallback, "HandleCallback" }, // 3114015753
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProFriendsAsyncActionEnumerateFollowingList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProFriendsAsyncActionEnumerateFollowingList, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnEnumerateFollowingListAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3028839570
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList_Statics::ClassParams = {
	&USteamCoreProFriendsAsyncActionEnumerateFollowingList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList()
{
	if (!Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList.OuterSingleton, Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProFriendsAsyncActionEnumerateFollowingList>()
{
	return USteamCoreProFriendsAsyncActionEnumerateFollowingList::StaticClass();
}
USteamCoreProFriendsAsyncActionEnumerateFollowingList::USteamCoreProFriendsAsyncActionEnumerateFollowingList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProFriendsAsyncActionEnumerateFollowingList);
USteamCoreProFriendsAsyncActionEnumerateFollowingList::~USteamCoreProFriendsAsyncActionEnumerateFollowingList() {}
// End Class USteamCoreProFriendsAsyncActionEnumerateFollowingList

// Begin Class USteamCoreProFriendsAsyncActionIsFollowing Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_HandleCallback_Statics
{
	struct SteamCoreProFriendsAsyncActionIsFollowing_eventHandleCallback_Parms
	{
		FFriendsIsFollowing Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionIsFollowing_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FFriendsIsFollowing, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 237650351
void Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProFriendsAsyncActionIsFollowing_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProFriendsAsyncActionIsFollowing_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_HandleCallback_Statics::SteamCoreProFriendsAsyncActionIsFollowing_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_HandleCallback_Statics::SteamCoreProFriendsAsyncActionIsFollowing_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProFriendsAsyncActionIsFollowing::execHandleCallback)
{
	P_GET_STRUCT_REF(FFriendsIsFollowing,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProFriendsAsyncActionIsFollowing Function HandleCallback

// Begin Class USteamCoreProFriendsAsyncActionIsFollowing Function IsFollowingAsync
struct Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics
{
	struct SteamCoreProFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamID;
		float Timeout;
		USteamCoreProFriendsAsyncActionIsFollowing* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Checks if the current user is following the specified user.\n\x09*\n\x09* @param\x09SteamID\x09\x09The Steam ID of the check if we are following.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Is Following" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Checks if the current user is following the specified user.\n\n@param        SteamID         The Steam ID of the check if we are following.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing, nullptr, "IsFollowingAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::SteamCoreProFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::SteamCoreProFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProFriendsAsyncActionIsFollowing::execIsFollowingAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProFriendsAsyncActionIsFollowing**)Z_Param__Result=USteamCoreProFriendsAsyncActionIsFollowing::IsFollowingAsync(Z_Param_WorldContextObject,Z_Param_SteamID,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProFriendsAsyncActionIsFollowing Function IsFollowingAsync

// Begin Class USteamCoreProFriendsAsyncActionIsFollowing
void USteamCoreProFriendsAsyncActionIsFollowing::StaticRegisterNativesUSteamCoreProFriendsAsyncActionIsFollowing()
{
	UClass* Class = USteamCoreProFriendsAsyncActionIsFollowing::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &USteamCoreProFriendsAsyncActionIsFollowing::execHandleCallback },
		{ "IsFollowingAsync", &USteamCoreProFriendsAsyncActionIsFollowing::execIsFollowingAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProFriendsAsyncActionIsFollowing);
UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing_NoRegister()
{
	return USteamCoreProFriendsAsyncActionIsFollowing::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProFriendsAsyncActionIsFollowing\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProFriendsAsyncActionIsFollowing\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_HandleCallback, "HandleCallback" }, // 3120153039
		{ &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionIsFollowing_IsFollowingAsync, "IsFollowingAsync" }, // 4195704003
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProFriendsAsyncActionIsFollowing>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProFriendsAsyncActionIsFollowing, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnIsFollowingAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2270904869
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing_Statics::ClassParams = {
	&USteamCoreProFriendsAsyncActionIsFollowing::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing()
{
	if (!Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionIsFollowing.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionIsFollowing.OuterSingleton, Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionIsFollowing.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProFriendsAsyncActionIsFollowing>()
{
	return USteamCoreProFriendsAsyncActionIsFollowing::StaticClass();
}
USteamCoreProFriendsAsyncActionIsFollowing::USteamCoreProFriendsAsyncActionIsFollowing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProFriendsAsyncActionIsFollowing);
USteamCoreProFriendsAsyncActionIsFollowing::~USteamCoreProFriendsAsyncActionIsFollowing() {}
// End Class USteamCoreProFriendsAsyncActionIsFollowing

// Begin Class USteamCoreProFriendsAsyncActionGetFollowerCount Function GetFollowerCountAsync
struct Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics
{
	struct SteamCoreProFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamID;
		float Timeout;
		USteamCoreProFriendsAsyncActionGetFollowerCount* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Gets the number of users following the specified user.\n\x09*\n\x09* @param\x09SteamID\x09\x09The user to get the follower count for.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Get Follower Count" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Gets the number of users following the specified user.\n\n@param        SteamID         The user to get the follower count for.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount, nullptr, "GetFollowerCountAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::SteamCoreProFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::SteamCoreProFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProFriendsAsyncActionGetFollowerCount::execGetFollowerCountAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProFriendsAsyncActionGetFollowerCount**)Z_Param__Result=USteamCoreProFriendsAsyncActionGetFollowerCount::GetFollowerCountAsync(Z_Param_WorldContextObject,Z_Param_SteamID,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProFriendsAsyncActionGetFollowerCount Function GetFollowerCountAsync

// Begin Class USteamCoreProFriendsAsyncActionGetFollowerCount Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_HandleCallback_Statics
{
	struct SteamCoreProFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms
	{
		FFriendsGetFollowerCount Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FFriendsGetFollowerCount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1625428065
void Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::SteamCoreProFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::SteamCoreProFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProFriendsAsyncActionGetFollowerCount::execHandleCallback)
{
	P_GET_STRUCT_REF(FFriendsGetFollowerCount,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProFriendsAsyncActionGetFollowerCount Function HandleCallback

// Begin Class USteamCoreProFriendsAsyncActionGetFollowerCount
void USteamCoreProFriendsAsyncActionGetFollowerCount::StaticRegisterNativesUSteamCoreProFriendsAsyncActionGetFollowerCount()
{
	UClass* Class = USteamCoreProFriendsAsyncActionGetFollowerCount::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFollowerCountAsync", &USteamCoreProFriendsAsyncActionGetFollowerCount::execGetFollowerCountAsync },
		{ "HandleCallback", &USteamCoreProFriendsAsyncActionGetFollowerCount::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProFriendsAsyncActionGetFollowerCount);
UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount_NoRegister()
{
	return USteamCoreProFriendsAsyncActionGetFollowerCount::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProFriendsAsyncActionGetFollowerCount\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProFriendsAsyncActionGetFollowerCount\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync, "GetFollowerCountAsync" }, // 2939011332
		{ &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionGetFollowerCount_HandleCallback, "HandleCallback" }, // 1853893707
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProFriendsAsyncActionGetFollowerCount>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProFriendsAsyncActionGetFollowerCount, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnGetFollowerCountAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 21433220
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount_Statics::ClassParams = {
	&USteamCoreProFriendsAsyncActionGetFollowerCount::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount()
{
	if (!Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount.OuterSingleton, Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProFriendsAsyncActionGetFollowerCount>()
{
	return USteamCoreProFriendsAsyncActionGetFollowerCount::StaticClass();
}
USteamCoreProFriendsAsyncActionGetFollowerCount::USteamCoreProFriendsAsyncActionGetFollowerCount(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProFriendsAsyncActionGetFollowerCount);
USteamCoreProFriendsAsyncActionGetFollowerCount::~USteamCoreProFriendsAsyncActionGetFollowerCount() {}
// End Class USteamCoreProFriendsAsyncActionGetFollowerCount

// Begin Class USteamCoreProFriendsAsyncActionRequestUserInformation Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_HandleCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation, nullptr, "HandleCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProFriendsAsyncActionRequestUserInformation::execHandleCallback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback();
	P_NATIVE_END;
}
// End Class USteamCoreProFriendsAsyncActionRequestUserInformation Function HandleCallback

// Begin Class USteamCoreProFriendsAsyncActionRequestUserInformation Function RequestUserInformationAsync
struct Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics
{
	struct SteamCoreProFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamIDUser;
		bool bRequireNameOnly;
		float Timeout;
		USteamCoreProFriendsAsyncActionRequestUserInformation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Requests the persona name and optionally the avatar of a specified user.\n\x09*\n\x09* Using this node you don't have to bind any OnPersonaStateChange callback delegate, it's handled automatically with this node.\n\x09*\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request User Information (Async)" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Requests the persona name and optionally the avatar of a specified user.\n\nUsing this node you don't have to bind any OnPersonaStateChange callback delegate, it's handled automatically with this node.\n\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static void NewProp_bRequireNameOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireNameOnly;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly_SetBit(void* Obj)
{
	((SteamCoreProFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms*)Obj)->bRequireNameOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly = { "bRequireNameOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms), &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation, nullptr, "RequestUserInformationAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::SteamCoreProFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::SteamCoreProFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProFriendsAsyncActionRequestUserInformation::execRequestUserInformationAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_UBOOL(Z_Param_bRequireNameOnly);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProFriendsAsyncActionRequestUserInformation**)Z_Param__Result=USteamCoreProFriendsAsyncActionRequestUserInformation::RequestUserInformationAsync(Z_Param_WorldContextObject,Z_Param_SteamIDUser,Z_Param_bRequireNameOnly,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProFriendsAsyncActionRequestUserInformation Function RequestUserInformationAsync

// Begin Class USteamCoreProFriendsAsyncActionRequestUserInformation
void USteamCoreProFriendsAsyncActionRequestUserInformation::StaticRegisterNativesUSteamCoreProFriendsAsyncActionRequestUserInformation()
{
	UClass* Class = USteamCoreProFriendsAsyncActionRequestUserInformation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &USteamCoreProFriendsAsyncActionRequestUserInformation::execHandleCallback },
		{ "RequestUserInformationAsync", &USteamCoreProFriendsAsyncActionRequestUserInformation::execRequestUserInformationAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProFriendsAsyncActionRequestUserInformation);
UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation_NoRegister()
{
	return USteamCoreProFriendsAsyncActionRequestUserInformation::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProFriendsAsyncActionRequestUserInformation\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProFriendsAsyncActionRequestUserInformation\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_HandleCallback, "HandleCallback" }, // 1124910194
		{ &Z_Construct_UFunction_USteamCoreProFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync, "RequestUserInformationAsync" }, // 1173071296
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProFriendsAsyncActionRequestUserInformation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProFriendsAsyncActionRequestUserInformation, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserInformationAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3757451747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation_Statics::ClassParams = {
	&USteamCoreProFriendsAsyncActionRequestUserInformation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation()
{
	if (!Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation.OuterSingleton, Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProFriendsAsyncActionRequestUserInformation>()
{
	return USteamCoreProFriendsAsyncActionRequestUserInformation::StaticClass();
}
USteamCoreProFriendsAsyncActionRequestUserInformation::USteamCoreProFriendsAsyncActionRequestUserInformation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProFriendsAsyncActionRequestUserInformation);
USteamCoreProFriendsAsyncActionRequestUserInformation::~USteamCoreProFriendsAsyncActionRequestUserInformation() {}
// End Class USteamCoreProFriendsAsyncActionRequestUserInformation

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamFriends_SteamFriendsAsyncActions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreProFriendsAsyncActionSetPersonaName, USteamCoreProFriendsAsyncActionSetPersonaName::StaticClass, TEXT("USteamCoreProFriendsAsyncActionSetPersonaName"), &Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionSetPersonaName, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProFriendsAsyncActionSetPersonaName), 2830342497U) },
		{ Z_Construct_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts, USteamCoreProFriendsAsyncActionDownloadClanActivityCounts::StaticClass, TEXT("USteamCoreProFriendsAsyncActionDownloadClanActivityCounts"), &Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionDownloadClanActivityCounts, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProFriendsAsyncActionDownloadClanActivityCounts), 405875123U) },
		{ Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList, USteamCoreProFriendsAsyncActionRequestClanOfficerList::StaticClass, TEXT("USteamCoreProFriendsAsyncActionRequestClanOfficerList"), &Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionRequestClanOfficerList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProFriendsAsyncActionRequestClanOfficerList), 298670214U) },
		{ Z_Construct_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom, USteamCoreProFriendsAsyncActionJoinClanChatRoom::StaticClass, TEXT("USteamCoreProFriendsAsyncActionJoinClanChatRoom"), &Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionJoinClanChatRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProFriendsAsyncActionJoinClanChatRoom), 1540058939U) },
		{ Z_Construct_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList, USteamCoreProFriendsAsyncActionEnumerateFollowingList::StaticClass, TEXT("USteamCoreProFriendsAsyncActionEnumerateFollowingList"), &Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionEnumerateFollowingList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProFriendsAsyncActionEnumerateFollowingList), 1019824738U) },
		{ Z_Construct_UClass_USteamCoreProFriendsAsyncActionIsFollowing, USteamCoreProFriendsAsyncActionIsFollowing::StaticClass, TEXT("USteamCoreProFriendsAsyncActionIsFollowing"), &Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionIsFollowing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProFriendsAsyncActionIsFollowing), 274988899U) },
		{ Z_Construct_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount, USteamCoreProFriendsAsyncActionGetFollowerCount::StaticClass, TEXT("USteamCoreProFriendsAsyncActionGetFollowerCount"), &Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionGetFollowerCount, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProFriendsAsyncActionGetFollowerCount), 1115954666U) },
		{ Z_Construct_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation, USteamCoreProFriendsAsyncActionRequestUserInformation::StaticClass, TEXT("USteamCoreProFriendsAsyncActionRequestUserInformation"), &Z_Registration_Info_UClass_USteamCoreProFriendsAsyncActionRequestUserInformation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProFriendsAsyncActionRequestUserInformation), 3917929888U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamFriends_SteamFriendsAsyncActions_h_1813661200(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamFriends_SteamFriendsAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamFriends_SteamFriendsAsyncActions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
