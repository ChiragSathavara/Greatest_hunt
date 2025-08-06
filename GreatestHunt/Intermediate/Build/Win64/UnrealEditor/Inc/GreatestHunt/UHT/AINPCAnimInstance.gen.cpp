// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GreatestHunt/Public/AI/AINPCAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAINPCAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
GREATESTHUNT_API UClass* Z_Construct_UClass_AAINPCCharacter_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_UAINPCAnimInstance();
GREATESTHUNT_API UClass* Z_Construct_UClass_UAINPCAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_GreatestHunt();
// End Cross Module References

// Begin Class UAINPCAnimInstance
void UAINPCAnimInstance::StaticRegisterNativesUAINPCAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAINPCAnimInstance);
UClass* Z_Construct_UClass_UAINPCAnimInstance_NoRegister()
{
	return UAINPCAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UAINPCAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AI/AINPCAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AI/AINPCAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AICharacter_MetaData[] = {
		{ "Category", "AnimInstance" },
		{ "ModuleRelativePath", "Public/AI/AINPCAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAIAlive_MetaData[] = {
		{ "Category", "AnimInstance" },
		{ "ModuleRelativePath", "Public/AI/AINPCAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "Category", "AnimInstance" },
		{ "ModuleRelativePath", "Public/AI/AINPCAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AICanSurrender_MetaData[] = {
		{ "Category", "AnimInstance" },
		{ "ModuleRelativePath", "Public/AI/AINPCAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AICharacter;
	static void NewProp_bAIAlive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAIAlive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static void NewProp_AICanSurrender_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AICanSurrender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAINPCAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAINPCAnimInstance_Statics::NewProp_AICharacter = { "AICharacter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAINPCAnimInstance, AICharacter), Z_Construct_UClass_AAINPCCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AICharacter_MetaData), NewProp_AICharacter_MetaData) };
void Z_Construct_UClass_UAINPCAnimInstance_Statics::NewProp_bAIAlive_SetBit(void* Obj)
{
	((UAINPCAnimInstance*)Obj)->bAIAlive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAINPCAnimInstance_Statics::NewProp_bAIAlive = { "bAIAlive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAINPCAnimInstance), &Z_Construct_UClass_UAINPCAnimInstance_Statics::NewProp_bAIAlive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAIAlive_MetaData), NewProp_bAIAlive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAINPCAnimInstance_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAINPCAnimInstance, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
void Z_Construct_UClass_UAINPCAnimInstance_Statics::NewProp_AICanSurrender_SetBit(void* Obj)
{
	((UAINPCAnimInstance*)Obj)->AICanSurrender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAINPCAnimInstance_Statics::NewProp_AICanSurrender = { "AICanSurrender", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAINPCAnimInstance), &Z_Construct_UClass_UAINPCAnimInstance_Statics::NewProp_AICanSurrender_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AICanSurrender_MetaData), NewProp_AICanSurrender_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAINPCAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAINPCAnimInstance_Statics::NewProp_AICharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAINPCAnimInstance_Statics::NewProp_bAIAlive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAINPCAnimInstance_Statics::NewProp_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAINPCAnimInstance_Statics::NewProp_AICanSurrender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAINPCAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAINPCAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_GreatestHunt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAINPCAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAINPCAnimInstance_Statics::ClassParams = {
	&UAINPCAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAINPCAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAINPCAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAINPCAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAINPCAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAINPCAnimInstance()
{
	if (!Z_Registration_Info_UClass_UAINPCAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAINPCAnimInstance.OuterSingleton, Z_Construct_UClass_UAINPCAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAINPCAnimInstance.OuterSingleton;
}
template<> GREATESTHUNT_API UClass* StaticClass<UAINPCAnimInstance>()
{
	return UAINPCAnimInstance::StaticClass();
}
UAINPCAnimInstance::UAINPCAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAINPCAnimInstance);
UAINPCAnimInstance::~UAINPCAnimInstance() {}
// End Class UAINPCAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAINPCAnimInstance, UAINPCAnimInstance::StaticClass, TEXT("UAINPCAnimInstance"), &Z_Registration_Info_UClass_UAINPCAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAINPCAnimInstance), 2767708014U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCAnimInstance_h_364305850(TEXT("/Script/GreatestHunt"),
	Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
