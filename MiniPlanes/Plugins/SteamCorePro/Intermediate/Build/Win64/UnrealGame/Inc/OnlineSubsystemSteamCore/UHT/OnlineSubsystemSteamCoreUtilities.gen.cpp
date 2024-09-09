// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemSteamCore/Private/OnlineSubsystemSteamCoreUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSubsystemSteamCoreUtilities() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ONLINESUBSYSTEMSTEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystemUtilities();
ONLINESUBSYSTEMSTEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystemUtilities_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemSteamCore();
// End Cross Module References

// Begin Class USteamCoreSubsystemUtilities Function SendSessionInviteToFriend
struct Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics
{
	struct SteamCoreSubsystemUtilities_eventSendSessionInviteToFriend_Parms
	{
		int32 LocalUserNum;
		FString FriendSteamId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Private/OnlineSubsystemSteamCoreUtilities.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendSteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FriendSteamId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSubsystemUtilities_eventSendSessionInviteToFriend_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::NewProp_FriendSteamId = { "FriendSteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreSubsystemUtilities_eventSendSessionInviteToFriend_Parms, FriendSteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendSteamId_MetaData), NewProp_FriendSteamId_MetaData) };
void Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamCoreSubsystemUtilities_eventSendSessionInviteToFriend_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreSubsystemUtilities_eventSendSessionInviteToFriend_Parms), &Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::NewProp_FriendSteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreSubsystemUtilities, nullptr, "SendSessionInviteToFriend", nullptr, nullptr, Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::SteamCoreSubsystemUtilities_eventSendSessionInviteToFriend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::SteamCoreSubsystemUtilities_eventSendSessionInviteToFriend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreSubsystemUtilities::execSendSessionInviteToFriend)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_GET_PROPERTY(FStrProperty,Z_Param_FriendSteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamCoreSubsystemUtilities::SendSessionInviteToFriend(Z_Param_LocalUserNum,Z_Param_FriendSteamId);
	P_NATIVE_END;
}
// End Class USteamCoreSubsystemUtilities Function SendSessionInviteToFriend

// Begin Class USteamCoreSubsystemUtilities
void USteamCoreSubsystemUtilities::StaticRegisterNativesUSteamCoreSubsystemUtilities()
{
	UClass* Class = USteamCoreSubsystemUtilities::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SendSessionInviteToFriend", &USteamCoreSubsystemUtilities::execSendSessionInviteToFriend },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreSubsystemUtilities);
UClass* Z_Construct_UClass_USteamCoreSubsystemUtilities_NoRegister()
{
	return USteamCoreSubsystemUtilities::StaticClass();
}
struct Z_Construct_UClass_USteamCoreSubsystemUtilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OnlineSubsystemSteamCoreUtilities.h" },
		{ "ModuleRelativePath", "Private/OnlineSubsystemSteamCoreUtilities.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreSubsystemUtilities_SendSessionInviteToFriend, "SendSessionInviteToFriend" }, // 1054678753
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSubsystemUtilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamCoreSubsystemUtilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemSteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSubsystemUtilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreSubsystemUtilities_Statics::ClassParams = {
	&USteamCoreSubsystemUtilities::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSubsystemUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreSubsystemUtilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreSubsystemUtilities()
{
	if (!Z_Registration_Info_UClass_USteamCoreSubsystemUtilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreSubsystemUtilities.OuterSingleton, Z_Construct_UClass_USteamCoreSubsystemUtilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreSubsystemUtilities.OuterSingleton;
}
template<> ONLINESUBSYSTEMSTEAMCORE_API UClass* StaticClass<USteamCoreSubsystemUtilities>()
{
	return USteamCoreSubsystemUtilities::StaticClass();
}
USteamCoreSubsystemUtilities::USteamCoreSubsystemUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreSubsystemUtilities);
USteamCoreSubsystemUtilities::~USteamCoreSubsystemUtilities() {}
// End Class USteamCoreSubsystemUtilities

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Private_OnlineSubsystemSteamCoreUtilities_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreSubsystemUtilities, USteamCoreSubsystemUtilities::StaticClass, TEXT("USteamCoreSubsystemUtilities"), &Z_Registration_Info_UClass_USteamCoreSubsystemUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreSubsystemUtilities), 2827723819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Private_OnlineSubsystemSteamCoreUtilities_h_679849503(TEXT("/Script/OnlineSubsystemSteamCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Private_OnlineSubsystemSteamCoreUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Private_OnlineSubsystemSteamCoreUtilities_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
