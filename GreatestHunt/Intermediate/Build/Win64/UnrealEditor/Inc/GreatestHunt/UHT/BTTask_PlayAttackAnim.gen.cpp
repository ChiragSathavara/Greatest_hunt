// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GreatestHunt/Public/AI/Tasks/BTTask_PlayAttackAnim.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PlayAttackAnim() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
GREATESTHUNT_API UClass* Z_Construct_UClass_UBTTask_PlayAttackAnim();
GREATESTHUNT_API UClass* Z_Construct_UClass_UBTTask_PlayAttackAnim_NoRegister();
UPackage* Z_Construct_UPackage__Script_GreatestHunt();
// End Cross Module References

// Begin Class UBTTask_PlayAttackAnim
void UBTTask_PlayAttackAnim::StaticRegisterNativesUBTTask_PlayAttackAnim()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_PlayAttackAnim);
UClass* Z_Construct_UClass_UBTTask_PlayAttackAnim_NoRegister()
{
	return UBTTask_PlayAttackAnim::StaticClass();
}
struct Z_Construct_UClass_UBTTask_PlayAttackAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AI/Tasks/BTTask_PlayAttackAnim.h" },
		{ "ModuleRelativePath", "Public/AI/Tasks/BTTask_PlayAttackAnim.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PlayAttackAnim>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_PlayAttackAnim_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GreatestHunt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAttackAnim_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PlayAttackAnim_Statics::ClassParams = {
	&UBTTask_PlayAttackAnim::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAttackAnim_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_PlayAttackAnim_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_PlayAttackAnim()
{
	if (!Z_Registration_Info_UClass_UBTTask_PlayAttackAnim.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_PlayAttackAnim.OuterSingleton, Z_Construct_UClass_UBTTask_PlayAttackAnim_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_PlayAttackAnim.OuterSingleton;
}
template<> GREATESTHUNT_API UClass* StaticClass<UBTTask_PlayAttackAnim>()
{
	return UBTTask_PlayAttackAnim::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PlayAttackAnim);
UBTTask_PlayAttackAnim::~UBTTask_PlayAttackAnim() {}
// End Class UBTTask_PlayAttackAnim

// Begin Registration
struct Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_AI_Tasks_BTTask_PlayAttackAnim_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_PlayAttackAnim, UBTTask_PlayAttackAnim::StaticClass, TEXT("UBTTask_PlayAttackAnim"), &Z_Registration_Info_UClass_UBTTask_PlayAttackAnim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_PlayAttackAnim), 2149018451U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_AI_Tasks_BTTask_PlayAttackAnim_h_2222543923(TEXT("/Script/GreatestHunt"),
	Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_AI_Tasks_BTTask_PlayAttackAnim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_AI_Tasks_BTTask_PlayAttackAnim_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
