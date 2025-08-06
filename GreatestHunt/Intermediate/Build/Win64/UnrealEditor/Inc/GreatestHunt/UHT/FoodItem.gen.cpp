// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GreatestHunt/Public/Items/FoodItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoodItem() {}

// Begin Cross Module References
GREATESTHUNT_API UClass* Z_Construct_UClass_UFoodItem();
GREATESTHUNT_API UClass* Z_Construct_UClass_UFoodItem_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_UItemBase();
UPackage* Z_Construct_UPackage__Script_GreatestHunt();
// End Cross Module References

// Begin Class UFoodItem
void UFoodItem::StaticRegisterNativesUFoodItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoodItem);
UClass* Z_Construct_UClass_UFoodItem_NoRegister()
{
	return UFoodItem::StaticClass();
}
struct Z_Construct_UClass_UFoodItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/FoodItem.h" },
		{ "ModuleRelativePath", "Public/Items/FoodItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthToHeal_MetaData[] = {
		{ "Category", "FoodItem" },
		{ "ModuleRelativePath", "Public/Items/FoodItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthToHeal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoodItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoodItem_Statics::NewProp_HealthToHeal = { "HealthToHeal", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoodItem, HealthToHeal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthToHeal_MetaData), NewProp_HealthToHeal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoodItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoodItem_Statics::NewProp_HealthToHeal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFoodItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFoodItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GreatestHunt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFoodItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoodItem_Statics::ClassParams = {
	&UFoodItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFoodItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFoodItem_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFoodItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UFoodItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFoodItem()
{
	if (!Z_Registration_Info_UClass_UFoodItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoodItem.OuterSingleton, Z_Construct_UClass_UFoodItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFoodItem.OuterSingleton;
}
template<> GREATESTHUNT_API UClass* StaticClass<UFoodItem>()
{
	return UFoodItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFoodItem);
UFoodItem::~UFoodItem() {}
// End Class UFoodItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Items_FoodItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFoodItem, UFoodItem::StaticClass, TEXT("UFoodItem"), &Z_Registration_Info_UClass_UFoodItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoodItem), 870321131U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Items_FoodItem_h_1163400578(TEXT("/Script/GreatestHunt"),
	Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Items_FoodItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Items_FoodItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
