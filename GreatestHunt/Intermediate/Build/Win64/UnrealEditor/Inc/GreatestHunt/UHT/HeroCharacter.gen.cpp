// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GreatestHunt/Public/Hero/HeroCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroCharacter() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_AAINPCCharacter_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_AGrapplePoint_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_AHeroCharacter();
GREATESTHUNT_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_ASwordActor_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_UHeroAnimInstance_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_ULockonComponent_NoRegister();
GREATESTHUNT_API UEnum* Z_Construct_UEnum_GreatestHunt_ECharacterActionType();
UPackage* Z_Construct_UPackage__Script_GreatestHunt();
// End Cross Module References

// Begin Class AHeroCharacter Function Die
struct Z_Construct_UFunction_AHeroCharacter_Die_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroCharacter_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroCharacter, nullptr, "Die", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroCharacter_Die_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHeroCharacter_Die_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHeroCharacter_Die()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroCharacter_Die_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHeroCharacter::execDie)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Die();
	P_NATIVE_END;
}
// End Class AHeroCharacter Function Die

// Begin Class AHeroCharacter Function EndAttacking
struct Z_Construct_UFunction_AHeroCharacter_EndAttacking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroCharacter_EndAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroCharacter, nullptr, "EndAttacking", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroCharacter_EndAttacking_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHeroCharacter_EndAttacking_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHeroCharacter_EndAttacking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroCharacter_EndAttacking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHeroCharacter::execEndAttacking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndAttacking();
	P_NATIVE_END;
}
// End Class AHeroCharacter Function EndAttacking

// Begin Class AHeroCharacter Function SetWeaponCollisionEnabled
struct Z_Construct_UFunction_AHeroCharacter_SetWeaponCollisionEnabled_Statics
{
	struct HeroCharacter_eventSetWeaponCollisionEnabled_Parms
	{
		TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHeroCharacter_SetWeaponCollisionEnabled_Statics::NewProp_CollisionEnabled = { "CollisionEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCharacter_eventSetWeaponCollisionEnabled_Parms, CollisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(0, nullptr) }; // 2362857466
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroCharacter_SetWeaponCollisionEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroCharacter_SetWeaponCollisionEnabled_Statics::NewProp_CollisionEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroCharacter_SetWeaponCollisionEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroCharacter_SetWeaponCollisionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroCharacter, nullptr, "SetWeaponCollisionEnabled", nullptr, nullptr, Z_Construct_UFunction_AHeroCharacter_SetWeaponCollisionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroCharacter_SetWeaponCollisionEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHeroCharacter_SetWeaponCollisionEnabled_Statics::HeroCharacter_eventSetWeaponCollisionEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroCharacter_SetWeaponCollisionEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHeroCharacter_SetWeaponCollisionEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHeroCharacter_SetWeaponCollisionEnabled_Statics::HeroCharacter_eventSetWeaponCollisionEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHeroCharacter_SetWeaponCollisionEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroCharacter_SetWeaponCollisionEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHeroCharacter::execSetWeaponCollisionEnabled)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_CollisionEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWeaponCollisionEnabled(ECollisionEnabled::Type(Z_Param_CollisionEnabled));
	P_NATIVE_END;
}
// End Class AHeroCharacter Function SetWeaponCollisionEnabled

// Begin Class AHeroCharacter
void AHeroCharacter::StaticRegisterNativesAHeroCharacter()
{
	UClass* Class = AHeroCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Die", &AHeroCharacter::execDie },
		{ "EndAttacking", &AHeroCharacter::execEndAttacking },
		{ "SetWeaponCollisionEnabled", &AHeroCharacter::execSetWeaponCollisionEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeroCharacter);
UClass* Z_Construct_UClass_AHeroCharacter_NoRegister()
{
	return AHeroCharacter::StaticClass();
}
struct Z_Construct_UClass_AHeroCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Hero/HeroCharacter.h" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_myPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyAI_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CableComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockonComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrappleAction_MetaData[] = {
		{ "Category", "Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=\"Inputs\")\n//UInputAction* DeathAction;\n" },
#endif
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=\"Inputs\")\nUInputAction* DeathAction;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShiftAction_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAction_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockAction_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StealthAction_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultIMC_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage1_MetaData[] = {
		{ "Category", "Data | Montage" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage2_MetaData[] = {
		{ "Category", "Data | Montage" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitMontagePlayer_MetaData[] = {
		{ "Category", "Data | Montage" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathMontage_MetaData[] = {
		{ "Category", "Data | Montage" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StealthMontage_MetaData[] = {
		{ "Category", "Data | Montage" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bItemEquipped_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerWalkSpeed_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRunSpeed_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionType_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRun_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAttack_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanStealth_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSwordActor_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bisplayerAlive_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerBlocking_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGrappling_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDeathSound_MetaData[] = {
		{ "Category", "Data | Sound" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParryWindowTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroAnimInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGrappleDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrappleActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrapplePointClass_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StimulusSource_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//AI SECTION\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hero/HeroCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI SECTION" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_myPlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyAI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CableComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockonComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrappleAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShiftAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StealthAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultIMC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitMontagePlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StealthMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static void NewProp_bItemEquipped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bItemEquipped;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerWalkSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerRunSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionType;
	static void NewProp_bShouldRun_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRun;
	static void NewProp_bShouldAttack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAttack;
	static void NewProp_bCanStealth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanStealth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponSwordActor;
	static void NewProp_bisplayerAlive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bisplayerAlive;
	static void NewProp_bIsPlayerBlocking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerBlocking;
	static void NewProp_bIsGrappling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGrappling;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerDeathSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ParryWindowTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeroAnimInstance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGrappleDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrappleActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GrapplePointClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StimulusSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHeroCharacter_Die, "Die" }, // 3966116920
		{ &Z_Construct_UFunction_AHeroCharacter_EndAttacking, "EndAttacking" }, // 4230731673
		{ &Z_Construct_UFunction_AHeroCharacter_SetWeaponCollisionEnabled, "SetWeaponCollisionEnabled" }, // 3828534310
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeroCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_myPlayerController = { "myPlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, myPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_myPlayerController_MetaData), NewProp_myPlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_EnemyAI = { "EnemyAI", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, EnemyAI), Z_Construct_UClass_AAINPCCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyAI_MetaData), NewProp_EnemyAI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_CableComp = { "CableComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, CableComp), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CableComp_MetaData), NewProp_CableComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, InteractionComp), Z_Construct_UClass_UInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_InventoryComp = { "InventoryComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, InventoryComp), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryComp_MetaData), NewProp_InventoryComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_LockonComp = { "LockonComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, LockonComp), Z_Construct_UClass_ULockonComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockonComp_MetaData), NewProp_LockonComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_GrappleAction = { "GrappleAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, GrappleAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrappleAction_MetaData), NewProp_GrappleAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ShiftAction = { "ShiftAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, ShiftAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShiftAction_MetaData), NewProp_ShiftAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_AttackAction = { "AttackAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, AttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAction_MetaData), NewProp_AttackAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_BlockAction = { "BlockAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, BlockAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockAction_MetaData), NewProp_BlockAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_StealthAction = { "StealthAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, StealthAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealthAction_MetaData), NewProp_StealthAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_DefaultIMC = { "DefaultIMC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, DefaultIMC), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultIMC_MetaData), NewProp_DefaultIMC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_AttackMontage1 = { "AttackMontage1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, AttackMontage1), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage1_MetaData), NewProp_AttackMontage1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_AttackMontage2 = { "AttackMontage2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, AttackMontage2), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage2_MetaData), NewProp_AttackMontage2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_HitMontagePlayer = { "HitMontagePlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, HitMontagePlayer), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitMontagePlayer_MetaData), NewProp_HitMontagePlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_DeathMontage = { "DeathMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, DeathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathMontage_MetaData), NewProp_DeathMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_StealthMontage = { "StealthMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, StealthMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealthMontage_MetaData), NewProp_StealthMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
void Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bItemEquipped_SetBit(void* Obj)
{
	((AHeroCharacter*)Obj)->bItemEquipped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bItemEquipped = { "bItemEquipped", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHeroCharacter), &Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bItemEquipped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bItemEquipped_MetaData), NewProp_bItemEquipped_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_PlayerWalkSpeed = { "PlayerWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, PlayerWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerWalkSpeed_MetaData), NewProp_PlayerWalkSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_PlayerRunSpeed = { "PlayerRunSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, PlayerRunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRunSpeed_MetaData), NewProp_PlayerRunSpeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, ActionType), Z_Construct_UEnum_GreatestHunt_ECharacterActionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionType_MetaData), NewProp_ActionType_MetaData) }; // 1062170452
void Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bShouldRun_SetBit(void* Obj)
{
	((AHeroCharacter*)Obj)->bShouldRun = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bShouldRun = { "bShouldRun", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHeroCharacter), &Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bShouldRun_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldRun_MetaData), NewProp_bShouldRun_MetaData) };
void Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bShouldAttack_SetBit(void* Obj)
{
	((AHeroCharacter*)Obj)->bShouldAttack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bShouldAttack = { "bShouldAttack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHeroCharacter), &Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bShouldAttack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldAttack_MetaData), NewProp_bShouldAttack_MetaData) };
void Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bCanStealth_SetBit(void* Obj)
{
	((AHeroCharacter*)Obj)->bCanStealth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bCanStealth = { "bCanStealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHeroCharacter), &Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bCanStealth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanStealth_MetaData), NewProp_bCanStealth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_WeaponSwordActor = { "WeaponSwordActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, WeaponSwordActor), Z_Construct_UClass_ASwordActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSwordActor_MetaData), NewProp_WeaponSwordActor_MetaData) };
void Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bisplayerAlive_SetBit(void* Obj)
{
	((AHeroCharacter*)Obj)->bisplayerAlive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bisplayerAlive = { "bisplayerAlive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHeroCharacter), &Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bisplayerAlive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bisplayerAlive_MetaData), NewProp_bisplayerAlive_MetaData) };
void Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsPlayerBlocking_SetBit(void* Obj)
{
	((AHeroCharacter*)Obj)->bIsPlayerBlocking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsPlayerBlocking = { "bIsPlayerBlocking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHeroCharacter), &Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsPlayerBlocking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlayerBlocking_MetaData), NewProp_bIsPlayerBlocking_MetaData) };
void Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsGrappling_SetBit(void* Obj)
{
	((AHeroCharacter*)Obj)->bIsGrappling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsGrappling = { "bIsGrappling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHeroCharacter), &Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsGrappling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGrappling_MetaData), NewProp_bIsGrappling_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_PlayerDeathSound = { "PlayerDeathSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, PlayerDeathSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerDeathSound_MetaData), NewProp_PlayerDeathSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ParryWindowTime = { "ParryWindowTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, ParryWindowTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParryWindowTime_MetaData), NewProp_ParryWindowTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_HeroAnimInstance = { "HeroAnimInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, HeroAnimInstance), Z_Construct_UClass_UHeroAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroAnimInstance_MetaData), NewProp_HeroAnimInstance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_MaxGrappleDistance = { "MaxGrappleDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, MaxGrappleDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGrappleDistance_MetaData), NewProp_MaxGrappleDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_GrappleActor = { "GrappleActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, GrappleActor), Z_Construct_UClass_AGrapplePoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrappleActor_MetaData), NewProp_GrappleActor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_GrapplePointClass = { "GrapplePointClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, GrapplePointClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGrapplePoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrapplePointClass_MetaData), NewProp_GrapplePointClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_StimulusSource = { "StimulusSource", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, StimulusSource), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StimulusSource_MetaData), NewProp_StimulusSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeroCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_myPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_EnemyAI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_CableComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_InteractionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_InventoryComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_LockonComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_GrappleAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ShiftAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_AttackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_BlockAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_StealthAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_DefaultIMC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_AttackMontage1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_AttackMontage2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_HitMontagePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_DeathMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_StealthMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bItemEquipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_PlayerWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_PlayerRunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ActionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ActionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bShouldRun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bShouldAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bCanStealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_WeaponSwordActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bisplayerAlive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsPlayerBlocking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_bIsGrappling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_PlayerDeathSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_ParryWindowTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_HeroAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_MaxGrappleDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_GrappleActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_GrapplePointClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_StimulusSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHeroCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GreatestHunt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeroCharacter_Statics::ClassParams = {
	&AHeroCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHeroCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHeroCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeroCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHeroCharacter()
{
	if (!Z_Registration_Info_UClass_AHeroCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeroCharacter.OuterSingleton, Z_Construct_UClass_AHeroCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHeroCharacter.OuterSingleton;
}
template<> GREATESTHUNT_API UClass* StaticClass<AHeroCharacter>()
{
	return AHeroCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroCharacter);
AHeroCharacter::~AHeroCharacter() {}
// End Class AHeroCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Hero_HeroCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHeroCharacter, AHeroCharacter::StaticClass, TEXT("AHeroCharacter"), &Z_Registration_Info_UClass_AHeroCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeroCharacter), 3935094875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Hero_HeroCharacter_h_1094341011(TEXT("/Script/GreatestHunt"),
	Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Hero_HeroCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Hero_HeroCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
