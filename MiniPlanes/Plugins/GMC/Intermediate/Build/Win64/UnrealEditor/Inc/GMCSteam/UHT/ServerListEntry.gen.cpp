// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCSteam/Public/Widgets/ServerListEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerListEntry() {}

// Begin Cross Module References
GMCSTEAM_API UClass* Z_Construct_UClass_UServerListEntry();
GMCSTEAM_API UClass* Z_Construct_UClass_UServerListEntry_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_GMCSteam();
// End Cross Module References

// Begin Class UServerListEntry Function OnServerButtonClicked
struct Z_Construct_UFunction_UServerListEntry_OnServerButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/ServerListEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerListEntry_OnServerButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerListEntry, nullptr, "OnServerButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerListEntry_OnServerButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerListEntry_OnServerButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UServerListEntry_OnServerButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerListEntry_OnServerButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerListEntry::execOnServerButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnServerButtonClicked();
	P_NATIVE_END;
}
// End Class UServerListEntry Function OnServerButtonClicked

// Begin Class UServerListEntry
void UServerListEntry::StaticRegisterNativesUServerListEntry()
{
	UClass* Class = UServerListEntry::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnServerButtonClicked", &UServerListEntry::execOnServerButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UServerListEntry);
UClass* Z_Construct_UClass_UServerListEntry_NoRegister()
{
	return UServerListEntry::StaticClass();
}
struct Z_Construct_UClass_UServerListEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/// Provides the bindings for a widget Blueprint which represents an entry in the server browser list created by UMainMenu.\n" },
		{ "IncludePath", "Widgets/ServerListEntry.h" },
		{ "ModuleRelativePath", "Public/Widgets/ServerListEntry.h" },
		{ "ToolTip", "Provides the bindings for a widget Blueprint which represents an entry in the server browser list created by UMainMenu." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "Comment", "/// Name of the server for this entry.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ServerListEntry.h" },
		{ "ToolTip", "Name of the server for this entry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostName_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "Comment", "/// Username of the host for this server.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ServerListEntry.h" },
		{ "ToolTip", "Username of the host for this server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCurrentPlayers_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "Comment", "/// Number of players currently joined.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ServerListEntry.h" },
		{ "ToolTip", "Number of players currently joined." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumMaxPlayers_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "Comment", "/// Maximum number of players for this server.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ServerListEntry.h" },
		{ "ToolTip", "Maximum number of players for this server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ping_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "Comment", "/// Ping to the session (not provided by the Steam API).\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ServerListEntry.h" },
		{ "ToolTip", "Ping to the session (not provided by the Steam API)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "Comment", "/// Makes the server list entry clickable.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ServerListEntry.h" },
		{ "ToolTip", "Makes the server list entry clickable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ServerListEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HostName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NumCurrentPlayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NumMaxPlayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UServerListEntry_OnServerButtonClicked, "OnServerButtonClicked" }, // 2228424301
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UServerListEntry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerListEntry_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UServerListEntry, ServerName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerName_MetaData), NewProp_ServerName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerListEntry_Statics::NewProp_HostName = { "HostName", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UServerListEntry, HostName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostName_MetaData), NewProp_HostName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerListEntry_Statics::NewProp_NumCurrentPlayers = { "NumCurrentPlayers", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UServerListEntry, NumCurrentPlayers), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCurrentPlayers_MetaData), NewProp_NumCurrentPlayers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerListEntry_Statics::NewProp_NumMaxPlayers = { "NumMaxPlayers", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UServerListEntry, NumMaxPlayers), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumMaxPlayers_MetaData), NewProp_NumMaxPlayers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerListEntry_Statics::NewProp_Ping = { "Ping", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UServerListEntry, Ping), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ping_MetaData), NewProp_Ping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerListEntry_Statics::NewProp_ServerButton = { "ServerButton", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UServerListEntry, ServerButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerButton_MetaData), NewProp_ServerButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerListEntry_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UServerListEntry, Parent), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UServerListEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerListEntry_Statics::NewProp_ServerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerListEntry_Statics::NewProp_HostName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerListEntry_Statics::NewProp_NumCurrentPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerListEntry_Statics::NewProp_NumMaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerListEntry_Statics::NewProp_Ping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerListEntry_Statics::NewProp_ServerButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerListEntry_Statics::NewProp_Parent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UServerListEntry_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UServerListEntry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GMCSteam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UServerListEntry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UServerListEntry_Statics::ClassParams = {
	&UServerListEntry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UServerListEntry_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UServerListEntry_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UServerListEntry_Statics::Class_MetaDataParams), Z_Construct_UClass_UServerListEntry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UServerListEntry()
{
	if (!Z_Registration_Info_UClass_UServerListEntry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UServerListEntry.OuterSingleton, Z_Construct_UClass_UServerListEntry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UServerListEntry.OuterSingleton;
}
template<> GMCSTEAM_API UClass* StaticClass<UServerListEntry>()
{
	return UServerListEntry::StaticClass();
}
UServerListEntry::UServerListEntry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UServerListEntry);
UServerListEntry::~UServerListEntry() {}
// End Class UServerListEntry

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_Widgets_ServerListEntry_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UServerListEntry, UServerListEntry::StaticClass, TEXT("UServerListEntry"), &Z_Registration_Info_UClass_UServerListEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UServerListEntry), 854913080U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_Widgets_ServerListEntry_h_373027586(TEXT("/Script/GMCSteam"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_Widgets_ServerListEntry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_Widgets_ServerListEntry_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
