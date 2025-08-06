// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GreatestHunt/Public/Items/SwordBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwordBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GREATESTHUNT_API UClass* Z_Construct_UClass_ASwordActor_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_UItemBase();
GREATESTHUNT_API UClass* Z_Construct_UClass_USwordBase();
GREATESTHUNT_API UClass* Z_Construct_UClass_USwordBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_GreatestHunt();
// End Cross Module References

// Begin Class USwordBase
void USwordBase::StaticRegisterNativesUSwordBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USwordBase);
UClass* Z_Construct_UClass_USwordBase_NoRegister()
{
	return USwordBase::StaticClass();
}
struct Z_Construct_UClass_USwordBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/SwordBase.h" },
		{ "ModuleRelativePath", "Public/Items/SwordBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwordBaseClass_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/SwordBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedSword_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/SwordBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SwordBaseClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedSword;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwordBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USwordBase_Statics::NewProp_SwordBaseClass = { "SwordBaseClass", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwordBase, SwordBaseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASwordActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwordBaseClass_MetaData), NewProp_SwordBaseClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwordBase_Statics::NewProp_EquippedSword = { "EquippedSword", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwordBase, EquippedSword), Z_Construct_UClass_ASwordActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedSword_MetaData), NewProp_EquippedSword_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USwordBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwordBase_Statics::NewProp_SwordBaseClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwordBase_Statics::NewProp_EquippedSword,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USwordBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USwordBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GreatestHunt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USwordBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USwordBase_Statics::ClassParams = {
	&USwordBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USwordBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USwordBase_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USwordBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USwordBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USwordBase()
{
	if (!Z_Registration_Info_UClass_USwordBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USwordBase.OuterSingleton, Z_Construct_UClass_USwordBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USwordBase.OuterSingleton;
}
template<> GREATESTHUNT_API UClass* StaticClass<USwordBase>()
{
	return USwordBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USwordBase);
USwordBase::~USwordBase() {}
// End Class USwordBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Items_SwordBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USwordBase, USwordBase::StaticClass, TEXT("USwordBase"), &Z_Registration_Info_UClass_USwordBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USwordBase), 234695883U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Items_SwordBase_h_2727665735(TEXT("/Script/GreatestHunt"),
	Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Items_SwordBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Items_SwordBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
