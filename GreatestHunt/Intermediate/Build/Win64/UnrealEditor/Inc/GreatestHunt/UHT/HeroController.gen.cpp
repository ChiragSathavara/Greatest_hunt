// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GreatestHunt/Public/Hero/HeroController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
GREATESTHUNT_API UClass* Z_Construct_UClass_AHeroController();
GREATESTHUNT_API UClass* Z_Construct_UClass_AHeroController_NoRegister();
UPackage* Z_Construct_UPackage__Script_GreatestHunt();
// End Cross Module References

// Begin Class AHeroController
void AHeroController::StaticRegisterNativesAHeroController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeroController);
UClass* Z_Construct_UClass_AHeroController_NoRegister()
{
	return AHeroController::StaticClass();
}
struct Z_Construct_UClass_AHeroController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Hero/HeroController.h" },
		{ "ModuleRelativePath", "Public/Hero/HeroController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeroController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHeroController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_GreatestHunt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeroController_Statics::ClassParams = {
	&AHeroController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroController_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeroController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHeroController()
{
	if (!Z_Registration_Info_UClass_AHeroController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeroController.OuterSingleton, Z_Construct_UClass_AHeroController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHeroController.OuterSingleton;
}
template<> GREATESTHUNT_API UClass* StaticClass<AHeroController>()
{
	return AHeroController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroController);
AHeroController::~AHeroController() {}
// End Class AHeroController

// Begin Registration
struct Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Hero_HeroController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHeroController, AHeroController::StaticClass, TEXT("AHeroController"), &Z_Registration_Info_UClass_AHeroController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeroController), 4119693211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Hero_HeroController_h_3555065629(TEXT("/Script/GreatestHunt"),
	Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Hero_HeroController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Hero_HeroController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
