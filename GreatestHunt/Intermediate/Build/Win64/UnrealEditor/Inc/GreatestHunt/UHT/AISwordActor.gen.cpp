// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GreatestHunt/Public/AI/AIWeapons/AISwordActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISwordActor() {}

// Begin Cross Module References
GREATESTHUNT_API UClass* Z_Construct_UClass_AAISwordActor();
GREATESTHUNT_API UClass* Z_Construct_UClass_AAISwordActor_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_AAIWeaponActor();
UPackage* Z_Construct_UPackage__Script_GreatestHunt();
// End Cross Module References

// Begin Class AAISwordActor
void AAISwordActor::StaticRegisterNativesAAISwordActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAISwordActor);
UClass* Z_Construct_UClass_AAISwordActor_NoRegister()
{
	return AAISwordActor::StaticClass();
}
struct Z_Construct_UClass_AAISwordActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/AIWeapons/AISwordActor.h" },
		{ "ModuleRelativePath", "Public/AI/AIWeapons/AISwordActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAISwordActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAISwordActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIWeaponActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GreatestHunt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAISwordActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAISwordActor_Statics::ClassParams = {
	&AAISwordActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAISwordActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAISwordActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAISwordActor()
{
	if (!Z_Registration_Info_UClass_AAISwordActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAISwordActor.OuterSingleton, Z_Construct_UClass_AAISwordActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAISwordActor.OuterSingleton;
}
template<> GREATESTHUNT_API UClass* StaticClass<AAISwordActor>()
{
	return AAISwordActor::StaticClass();
}
AAISwordActor::AAISwordActor() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAISwordActor);
AAISwordActor::~AAISwordActor() {}
// End Class AAISwordActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_AI_AIWeapons_AISwordActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAISwordActor, AAISwordActor::StaticClass, TEXT("AAISwordActor"), &Z_Registration_Info_UClass_AAISwordActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAISwordActor), 1669225683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_AI_AIWeapons_AISwordActor_h_1643021971(TEXT("/Script/GreatestHunt"),
	Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_AI_AIWeapons_AISwordActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_AI_AIWeapons_AISwordActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
