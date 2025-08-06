// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GreatestHunt/Public/Interfaces/GameplayInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GREATESTHUNT_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
GREATESTHUNT_API UClass* Z_Construct_UClass_UGameplayInterface();
GREATESTHUNT_API UClass* Z_Construct_UClass_UGameplayInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_GreatestHunt();
// End Cross Module References

// Begin Interface UGameplayInterface Function OnInteraction
struct GameplayInterface_eventOnInteraction_Parms
{
	AHeroCharacter* MyHero;
};
void IGameplayInterface::OnInteraction(AHeroCharacter* MyHero)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInteraction instead.");
}
static FName NAME_UGameplayInterface_OnInteraction = FName(TEXT("OnInteraction"));
void IGameplayInterface::Execute_OnInteraction(UObject* O, AHeroCharacter* MyHero)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UGameplayInterface::StaticClass()));
	GameplayInterface_eventOnInteraction_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UGameplayInterface_OnInteraction);
	if (Func)
	{
		Parms.MyHero=MyHero;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IGameplayInterface*)(O->GetNativeInterfaceAddress(UGameplayInterface::StaticClass())))
	{
		I->OnInteraction_Implementation(MyHero);
	}
}
struct Z_Construct_UFunction_UGameplayInterface_OnInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/GameplayInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyHero;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayInterface_OnInteraction_Statics::NewProp_MyHero = { "MyHero", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayInterface_eventOnInteraction_Parms, MyHero), Z_Construct_UClass_AHeroCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayInterface_OnInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayInterface_OnInteraction_Statics::NewProp_MyHero,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayInterface_OnInteraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayInterface_OnInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayInterface, nullptr, "OnInteraction", nullptr, nullptr, Z_Construct_UFunction_UGameplayInterface_OnInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayInterface_OnInteraction_Statics::PropPointers), sizeof(GameplayInterface_eventOnInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayInterface_OnInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayInterface_OnInteraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayInterface_eventOnInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayInterface_OnInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayInterface_OnInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IGameplayInterface::execOnInteraction)
{
	P_GET_OBJECT(AHeroCharacter,Z_Param_MyHero);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInteraction_Implementation(Z_Param_MyHero);
	P_NATIVE_END;
}
// End Interface UGameplayInterface Function OnInteraction

// Begin Interface UGameplayInterface
void UGameplayInterface::StaticRegisterNativesUGameplayInterface()
{
	UClass* Class = UGameplayInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnInteraction", &IGameplayInterface::execOnInteraction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayInterface);
UClass* Z_Construct_UClass_UGameplayInterface_NoRegister()
{
	return UGameplayInterface::StaticClass();
}
struct Z_Construct_UClass_UGameplayInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/GameplayInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayInterface_OnInteraction, "OnInteraction" }, // 2749328089
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameplayInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameplayInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GreatestHunt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayInterface_Statics::ClassParams = {
	&UGameplayInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayInterface()
{
	if (!Z_Registration_Info_UClass_UGameplayInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayInterface.OuterSingleton, Z_Construct_UClass_UGameplayInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayInterface.OuterSingleton;
}
template<> GREATESTHUNT_API UClass* StaticClass<UGameplayInterface>()
{
	return UGameplayInterface::StaticClass();
}
UGameplayInterface::UGameplayInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayInterface);
UGameplayInterface::~UGameplayInterface() {}
// End Interface UGameplayInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Interfaces_GameplayInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayInterface, UGameplayInterface::StaticClass, TEXT("UGameplayInterface"), &Z_Registration_Info_UClass_UGameplayInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayInterface), 633130116U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Interfaces_GameplayInterface_h_2406203550(TEXT("/Script/GreatestHunt"),
	Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Interfaces_GameplayInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Interfaces_GameplayInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
