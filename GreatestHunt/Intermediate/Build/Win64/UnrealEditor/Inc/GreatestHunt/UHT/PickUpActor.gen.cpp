// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GreatestHunt/Public/Pickup/PickUpActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUpActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_APickUpActor();
GREATESTHUNT_API UClass* Z_Construct_UClass_APickUpActor_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_UGameplayInterface_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_GreatestHunt();
// End Cross Module References

// Begin Class APickUpActor
void APickUpActor::StaticRegisterNativesAPickUpActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickUpActor);
UClass* Z_Construct_UClass_APickUpActor_NoRegister()
{
	return APickUpActor::StaticClass();
}
struct Z_Construct_UClass_APickUpActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Pickup/PickUpActor.h" },
		{ "ModuleRelativePath", "Public/Pickup/PickUpActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickUpMesh_MetaData[] = {
		{ "Category", "Pickup | Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup/PickUpActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyItemTemplate_MetaData[] = {
		{ "Category", "Pickup | Items" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup/PickUpActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickUpMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyItemTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickUpActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUpActor_Statics::NewProp_PickUpMesh = { "PickUpMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUpActor, PickUpMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickUpMesh_MetaData), NewProp_PickUpMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUpActor_Statics::NewProp_MyItemTemplate = { "MyItemTemplate", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUpActor, MyItemTemplate), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyItemTemplate_MetaData), NewProp_MyItemTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickUpActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpActor_Statics::NewProp_PickUpMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpActor_Statics::NewProp_MyItemTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APickUpActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GreatestHunt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APickUpActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameplayInterface_NoRegister, (int32)VTABLE_OFFSET(APickUpActor, IGameplayInterface), false },  // 633130116
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APickUpActor_Statics::ClassParams = {
	&APickUpActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APickUpActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APickUpActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APickUpActor()
{
	if (!Z_Registration_Info_UClass_APickUpActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickUpActor.OuterSingleton, Z_Construct_UClass_APickUpActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APickUpActor.OuterSingleton;
}
template<> GREATESTHUNT_API UClass* StaticClass<APickUpActor>()
{
	return APickUpActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APickUpActor);
APickUpActor::~APickUpActor() {}
// End Class APickUpActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_PickUpActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickUpActor, APickUpActor::StaticClass, TEXT("APickUpActor"), &Z_Registration_Info_UClass_APickUpActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickUpActor), 3053884683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_PickUpActor_h_2225852519(TEXT("/Script/GreatestHunt"),
	Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_PickUpActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_PickUpActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
