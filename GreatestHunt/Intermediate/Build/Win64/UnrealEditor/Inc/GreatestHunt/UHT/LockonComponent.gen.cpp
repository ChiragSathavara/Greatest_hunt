// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GreatestHunt/Public/LockOn/LockonComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLockonComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GREATESTHUNT_API UClass* Z_Construct_UClass_ULockonComponent();
GREATESTHUNT_API UClass* Z_Construct_UClass_ULockonComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GreatestHunt();
// End Cross Module References

// Begin Class ULockonComponent Function EndLockOn
struct Z_Construct_UFunction_ULockonComponent_EndLockOn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LockOn/LockonComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockonComponent_EndLockOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockonComponent, nullptr, "EndLockOn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockonComponent_EndLockOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockonComponent_EndLockOn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULockonComponent_EndLockOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockonComponent_EndLockOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULockonComponent::execEndLockOn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndLockOn();
	P_NATIVE_END;
}
// End Class ULockonComponent Function EndLockOn

// Begin Class ULockonComponent Function StartLockon
struct Z_Construct_UFunction_ULockonComponent_StartLockon_Statics
{
	struct LockonComponent_eventStartLockon_Parms
	{
		float Radius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_Radius", "750.000000" },
		{ "ModuleRelativePath", "Public/LockOn/LockonComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LockonComponent_eventStartLockon_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockonComponent, nullptr, "StartLockon", nullptr, nullptr, Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::LockonComponent_eventStartLockon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::LockonComponent_eventStartLockon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULockonComponent_StartLockon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockonComponent_StartLockon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULockonComponent::execStartLockon)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartLockon(Z_Param_Radius);
	P_NATIVE_END;
}
// End Class ULockonComponent Function StartLockon

// Begin Class ULockonComponent Function ToggleLockOn
struct Z_Construct_UFunction_ULockonComponent_ToggleLockOn_Statics
{
	struct LockonComponent_eventToggleLockOn_Parms
	{
		float Radius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_Radius", "750.000000" },
		{ "ModuleRelativePath", "Public/LockOn/LockonComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULockonComponent_ToggleLockOn_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LockonComponent_eventToggleLockOn_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULockonComponent_ToggleLockOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockonComponent_ToggleLockOn_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockonComponent_ToggleLockOn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockonComponent_ToggleLockOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockonComponent, nullptr, "ToggleLockOn", nullptr, nullptr, Z_Construct_UFunction_ULockonComponent_ToggleLockOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockonComponent_ToggleLockOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULockonComponent_ToggleLockOn_Statics::LockonComponent_eventToggleLockOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockonComponent_ToggleLockOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockonComponent_ToggleLockOn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULockonComponent_ToggleLockOn_Statics::LockonComponent_eventToggleLockOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULockonComponent_ToggleLockOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockonComponent_ToggleLockOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULockonComponent::execToggleLockOn)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleLockOn(Z_Param_Radius);
	P_NATIVE_END;
}
// End Class ULockonComponent Function ToggleLockOn

// Begin Class ULockonComponent
void ULockonComponent::StaticRegisterNativesULockonComponent()
{
	UClass* Class = ULockonComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndLockOn", &ULockonComponent::execEndLockOn },
		{ "StartLockon", &ULockonComponent::execStartLockon },
		{ "ToggleLockOn", &ULockonComponent::execToggleLockOn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULockonComponent);
UClass* Z_Construct_UClass_ULockonComponent_NoRegister()
{
	return ULockonComponent::StaticClass();
}
struct Z_Construct_UClass_ULockonComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LockOn/LockonComponent.h" },
		{ "ModuleRelativePath", "Public/LockOn/LockonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActor_MetaData[] = {
		{ "Category", "LockonComponent" },
		{ "ModuleRelativePath", "Public/LockOn/LockonComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULockonComponent_EndLockOn, "EndLockOn" }, // 884157440
		{ &Z_Construct_UFunction_ULockonComponent_StartLockon, "StartLockon" }, // 3528266438
		{ &Z_Construct_UFunction_ULockonComponent_ToggleLockOn, "ToggleLockOn" }, // 1712128148
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULockonComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULockonComponent_Statics::NewProp_CurrentActor = { "CurrentActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockonComponent, CurrentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActor_MetaData), NewProp_CurrentActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULockonComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockonComponent_Statics::NewProp_CurrentActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockonComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULockonComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GreatestHunt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockonComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULockonComponent_Statics::ClassParams = {
	&ULockonComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULockonComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULockonComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockonComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULockonComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULockonComponent()
{
	if (!Z_Registration_Info_UClass_ULockonComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULockonComponent.OuterSingleton, Z_Construct_UClass_ULockonComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULockonComponent.OuterSingleton;
}
template<> GREATESTHUNT_API UClass* StaticClass<ULockonComponent>()
{
	return ULockonComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULockonComponent);
ULockonComponent::~ULockonComponent() {}
// End Class ULockonComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_LockOn_LockonComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULockonComponent, ULockonComponent::StaticClass, TEXT("ULockonComponent"), &Z_Registration_Info_UClass_ULockonComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULockonComponent), 1181988393U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_LockOn_LockonComponent_h_2826763933(TEXT("/Script/GreatestHunt"),
	Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_LockOn_LockonComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_LockOn_LockonComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
