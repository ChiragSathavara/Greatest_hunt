// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGreatestHunt_init() {}
	GREATESTHUNT_API UFunction* Z_Construct_UDelegateFunction_GreatestHunt_OnInventoryUpdated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GreatestHunt;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GreatestHunt()
	{
		if (!Z_Registration_Info_UPackage__Script_GreatestHunt.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GreatestHunt_OnInventoryUpdated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GreatestHunt",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD910F5B7,
				0x954784BD,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GreatestHunt.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GreatestHunt.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GreatestHunt(Z_Construct_UPackage__Script_GreatestHunt, TEXT("/Script/GreatestHunt"), Z_Registration_Info_UPackage__Script_GreatestHunt, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD910F5B7, 0x954784BD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
