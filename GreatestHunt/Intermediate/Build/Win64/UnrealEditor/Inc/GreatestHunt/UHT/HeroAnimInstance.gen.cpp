// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GreatestHunt/Public/Animation/HeroAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
GREATESTHUNT_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_UHeroAnimInstance();
GREATESTHUNT_API UClass* Z_Construct_UClass_UHeroAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_GreatestHunt();
// End Cross Module References

// Begin Class UHeroAnimInstance
void UHeroAnimInstance::StaticRegisterNativesUHeroAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroAnimInstance);
UClass* Z_Construct_UClass_UHeroAnimInstance_NoRegister()
{
	return UHeroAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UHeroAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/HeroAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroCharacter_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSwordEquipped_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayerAttack_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayerDead_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayerBlocking_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayerJumping_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayerFlying_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/HeroAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeroCharacter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
	static void NewProp_bSwordEquipped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwordEquipped;
	static void NewProp_bPlayerAttack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerAttack;
	static void NewProp_bPlayerDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerDead;
	static void NewProp_bPlayerBlocking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerBlocking;
	static void NewProp_bPlayerJumping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerJumping;
	static void NewProp_bPlayerFlying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerFlying;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_HeroCharacter = { "HeroCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroAnimInstance, HeroCharacter), Z_Construct_UClass_AHeroCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroCharacter_MetaData), NewProp_HeroCharacter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroAnimInstance, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
void Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bSwordEquipped_SetBit(void* Obj)
{
	((UHeroAnimInstance*)Obj)->bSwordEquipped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bSwordEquipped = { "bSwordEquipped", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeroAnimInstance), &Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bSwordEquipped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSwordEquipped_MetaData), NewProp_bSwordEquipped_MetaData) };
void Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerAttack_SetBit(void* Obj)
{
	((UHeroAnimInstance*)Obj)->bPlayerAttack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerAttack = { "bPlayerAttack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeroAnimInstance), &Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerAttack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayerAttack_MetaData), NewProp_bPlayerAttack_MetaData) };
void Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerDead_SetBit(void* Obj)
{
	((UHeroAnimInstance*)Obj)->bPlayerDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerDead = { "bPlayerDead", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeroAnimInstance), &Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayerDead_MetaData), NewProp_bPlayerDead_MetaData) };
void Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerBlocking_SetBit(void* Obj)
{
	((UHeroAnimInstance*)Obj)->bPlayerBlocking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerBlocking = { "bPlayerBlocking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeroAnimInstance), &Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerBlocking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayerBlocking_MetaData), NewProp_bPlayerBlocking_MetaData) };
void Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerJumping_SetBit(void* Obj)
{
	((UHeroAnimInstance*)Obj)->bPlayerJumping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerJumping = { "bPlayerJumping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeroAnimInstance), &Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerJumping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayerJumping_MetaData), NewProp_bPlayerJumping_MetaData) };
void Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerFlying_SetBit(void* Obj)
{
	((UHeroAnimInstance*)Obj)->bPlayerFlying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerFlying = { "bPlayerFlying", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeroAnimInstance), &Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerFlying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayerFlying_MetaData), NewProp_bPlayerFlying_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_HeroCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bSwordEquipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerBlocking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerJumping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bPlayerFlying,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHeroAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_GreatestHunt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroAnimInstance_Statics::ClassParams = {
	&UHeroAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHeroAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroAnimInstance()
{
	if (!Z_Registration_Info_UClass_UHeroAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroAnimInstance.OuterSingleton, Z_Construct_UClass_UHeroAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroAnimInstance.OuterSingleton;
}
template<> GREATESTHUNT_API UClass* StaticClass<UHeroAnimInstance>()
{
	return UHeroAnimInstance::StaticClass();
}
UHeroAnimInstance::UHeroAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroAnimInstance);
UHeroAnimInstance::~UHeroAnimInstance() {}
// End Class UHeroAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Animation_HeroAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroAnimInstance, UHeroAnimInstance::StaticClass, TEXT("UHeroAnimInstance"), &Z_Registration_Info_UClass_UHeroAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroAnimInstance), 941927881U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Animation_HeroAnimInstance_h_719215429(TEXT("/Script/GreatestHunt"),
	Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Animation_HeroAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Animation_HeroAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
