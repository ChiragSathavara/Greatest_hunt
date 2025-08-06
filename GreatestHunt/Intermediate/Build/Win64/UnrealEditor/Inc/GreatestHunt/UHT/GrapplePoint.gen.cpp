// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GreatestHunt/Public/Pickup/GrapplePoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrapplePoint() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_AGrapplePoint();
GREATESTHUNT_API UClass* Z_Construct_UClass_AGrapplePoint_NoRegister();
UPackage* Z_Construct_UPackage__Script_GreatestHunt();
// End Cross Module References

// Begin Class AGrapplePoint
void AGrapplePoint::StaticRegisterNativesAGrapplePoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrapplePoint);
UClass* Z_Construct_UClass_AGrapplePoint_NoRegister()
{
	return AGrapplePoint::StaticClass();
}
struct Z_Construct_UClass_AGrapplePoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Pickup/GrapplePoint.h" },
		{ "ModuleRelativePath", "Public/Pickup/GrapplePoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereArea_MetaData[] = {
		{ "Category", "GrapplePoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup/GrapplePoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "GrapplePoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup/GrapplePoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "GrapplePoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup/GrapplePoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereArea;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrapplePoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrapplePoint_Statics::NewProp_SphereArea = { "SphereArea", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrapplePoint, SphereArea), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereArea_MetaData), NewProp_SphereArea_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrapplePoint_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrapplePoint, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrapplePoint_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrapplePoint, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrapplePoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrapplePoint_Statics::NewProp_SphereArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrapplePoint_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrapplePoint_Statics::NewProp_ProjectileMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrapplePoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGrapplePoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GreatestHunt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrapplePoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrapplePoint_Statics::ClassParams = {
	&AGrapplePoint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGrapplePoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGrapplePoint_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrapplePoint_Statics::Class_MetaDataParams), Z_Construct_UClass_AGrapplePoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGrapplePoint()
{
	if (!Z_Registration_Info_UClass_AGrapplePoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrapplePoint.OuterSingleton, Z_Construct_UClass_AGrapplePoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGrapplePoint.OuterSingleton;
}
template<> GREATESTHUNT_API UClass* StaticClass<AGrapplePoint>()
{
	return AGrapplePoint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGrapplePoint);
AGrapplePoint::~AGrapplePoint() {}
// End Class AGrapplePoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_GrapplePoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGrapplePoint, AGrapplePoint::StaticClass, TEXT("AGrapplePoint"), &Z_Registration_Info_UClass_AGrapplePoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrapplePoint), 4063050496U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_GrapplePoint_h_613910166(TEXT("/Script/GreatestHunt"),
	Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_GrapplePoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_GrapplePoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
