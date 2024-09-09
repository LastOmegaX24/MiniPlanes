// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreShared_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SteamCoreShared;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SteamCoreShared()
	{
		if (!Z_Registration_Info_UPackage__Script_SteamCoreShared.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SteamCoreShared",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xECEB6F15,
				0x05FD6E8B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SteamCoreShared.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SteamCoreShared.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SteamCoreShared(Z_Construct_UPackage__Script_SteamCoreShared, TEXT("/Script/SteamCoreShared"), Z_Registration_Info_UPackage__Script_SteamCoreShared, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xECEB6F15, 0x05FD6E8B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
