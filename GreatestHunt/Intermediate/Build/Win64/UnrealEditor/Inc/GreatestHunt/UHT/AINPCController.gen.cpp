// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GreatestHunt/Public/AI/AINPCController.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAINPCController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_AAINPCCharacter_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_AAinpcController();
GREATESTHUNT_API UClass* Z_Construct_UClass_AAinpcController_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_GreatestHunt();
// End Cross Module References

// Begin Class AAinpcController Function OnTargetDetected
struct Z_Construct_UFunction_AAinpcController_OnTargetDetected_Statics
{
	struct AinpcController_eventOnTargetDetected_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/AINPCController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stimulus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAinpcController_OnTargetDetected_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AinpcController_eventOnTargetDetected_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAinpcController_OnTargetDetected_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AinpcController_eventOnTargetDetected_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stimulus_MetaData), NewProp_Stimulus_MetaData) }; // 177100813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAinpcController_OnTargetDetected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAinpcController_OnTargetDetected_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAinpcController_OnTargetDetected_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAinpcController_OnTargetDetected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAinpcController_OnTargetDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAinpcController, nullptr, "OnTargetDetected", nullptr, nullptr, Z_Construct_UFunction_AAinpcController_OnTargetDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAinpcController_OnTargetDetected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAinpcController_OnTargetDetected_Statics::AinpcController_eventOnTargetDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAinpcController_OnTargetDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAinpcController_OnTargetDetected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAinpcController_OnTargetDetected_Statics::AinpcController_eventOnTargetDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAinpcController_OnTargetDetected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAinpcController_OnTargetDetected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAinpcController::execOnTargetDetected)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetDetected(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// End Class AAinpcController Function OnTargetDetected

// Begin Class AAinpcController
void AAinpcController::StaticRegisterNativesAAinpcController()
{
	UClass* Class = AAinpcController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTargetDetected", &AAinpcController::execOnTargetDetected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAinpcController);
UClass* Z_Construct_UClass_AAinpcController_NoRegister()
{
	return AAinpcController::StaticClass();
}
struct Z_Construct_UClass_AAinpcController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/AINPCController.h" },
		{ "ModuleRelativePath", "Public/AI/AINPCController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bisCanPlayerSee_MetaData[] = {
		{ "Category", "AinpcController" },
		{ "ModuleRelativePath", "Public/AI/AINPCController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bisPlayerisAlive_MetaData[] = {
		{ "Category", "AinpcController" },
		{ "ModuleRelativePath", "Public/AI/AINPCController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_myCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/AINPCController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AI_MetaData[] = {
		{ "Category", "AinpcController" },
		{ "ModuleRelativePath", "Public/AI/AINPCController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[] = {
		{ "Category", "AinpcController" },
		{ "ModuleRelativePath", "Public/AI/AINPCController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bisCanPlayerSee_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bisCanPlayerSee;
	static void NewProp_bisPlayerisAlive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bisPlayerisAlive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_myCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAinpcController_OnTargetDetected, "OnTargetDetected" }, // 2251843934
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAinpcController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AAinpcController_Statics::NewProp_bisCanPlayerSee_SetBit(void* Obj)
{
	((AAinpcController*)Obj)->bisCanPlayerSee = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAinpcController_Statics::NewProp_bisCanPlayerSee = { "bisCanPlayerSee", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAinpcController), &Z_Construct_UClass_AAinpcController_Statics::NewProp_bisCanPlayerSee_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bisCanPlayerSee_MetaData), NewProp_bisCanPlayerSee_MetaData) };
void Z_Construct_UClass_AAinpcController_Statics::NewProp_bisPlayerisAlive_SetBit(void* Obj)
{
	((AAinpcController*)Obj)->bisPlayerisAlive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAinpcController_Statics::NewProp_bisPlayerisAlive = { "bisPlayerisAlive", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAinpcController), &Z_Construct_UClass_AAinpcController_Statics::NewProp_bisPlayerisAlive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bisPlayerisAlive_MetaData), NewProp_bisPlayerisAlive_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAinpcController_Statics::NewProp_myCharacter = { "myCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAinpcController, myCharacter), Z_Construct_UClass_AHeroCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_myCharacter_MetaData), NewProp_myCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAinpcController_Statics::NewProp_AI = { "AI", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAinpcController, AI), Z_Construct_UClass_AAINPCCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AI_MetaData), NewProp_AI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAinpcController_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAinpcController, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightConfig_MetaData), NewProp_SightConfig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAinpcController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAinpcController_Statics::NewProp_bisCanPlayerSee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAinpcController_Statics::NewProp_bisPlayerisAlive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAinpcController_Statics::NewProp_myCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAinpcController_Statics::NewProp_AI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAinpcController_Statics::NewProp_SightConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAinpcController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAinpcController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_GreatestHunt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAinpcController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAinpcController_Statics::ClassParams = {
	&AAinpcController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAinpcController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAinpcController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAinpcController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAinpcController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAinpcController()
{
	if (!Z_Registration_Info_UClass_AAinpcController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAinpcController.OuterSingleton, Z_Construct_UClass_AAinpcController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAinpcController.OuterSingleton;
}
template<> GREATESTHUNT_API UClass* StaticClass<AAinpcController>()
{
	return AAinpcController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAinpcController);
AAinpcController::~AAinpcController() {}
// End Class AAinpcController

// Begin Registration
struct Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAinpcController, AAinpcController::StaticClass, TEXT("AAinpcController"), &Z_Registration_Info_UClass_AAinpcController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAinpcController), 795553749U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCController_h_3101570165(TEXT("/Script/GreatestHunt"),
	Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
