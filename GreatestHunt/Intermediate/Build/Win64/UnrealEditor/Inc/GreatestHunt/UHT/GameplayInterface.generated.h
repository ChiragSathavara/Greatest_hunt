// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/GameplayInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHeroCharacter;
#ifdef GREATESTHUNT_GameplayInterface_generated_h
#error "GameplayInterface.generated.h already included, missing '#pragma once' in GameplayInterface.h"
#endif
#define GREATESTHUNT_GameplayInterface_generated_h

#define FID_GreatestHunt_Source_GreatestHunt_Public_Interfaces_GameplayInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnInteraction_Implementation(AHeroCharacter* MyHero) {}; \
	DECLARE_FUNCTION(execOnInteraction);


#define FID_GreatestHunt_Source_GreatestHunt_Public_Interfaces_GameplayInterface_h_14_CALLBACK_WRAPPERS
#define FID_GreatestHunt_Source_GreatestHunt_Public_Interfaces_GameplayInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GREATESTHUNT_API UGameplayInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayInterface(UGameplayInterface&&); \
	UGameplayInterface(const UGameplayInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GREATESTHUNT_API, UGameplayInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayInterface) \
	GREATESTHUNT_API virtual ~UGameplayInterface();


#define FID_GreatestHunt_Source_GreatestHunt_Public_Interfaces_GameplayInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameplayInterface(); \
	friend struct Z_Construct_UClass_UGameplayInterface_Statics; \
public: \
	DECLARE_CLASS(UGameplayInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GreatestHunt"), GREATESTHUNT_API) \
	DECLARE_SERIALIZER(UGameplayInterface)


#define FID_GreatestHunt_Source_GreatestHunt_Public_Interfaces_GameplayInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_GreatestHunt_Source_GreatestHunt_Public_Interfaces_GameplayInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_GreatestHunt_Source_GreatestHunt_Public_Interfaces_GameplayInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GreatestHunt_Source_GreatestHunt_Public_Interfaces_GameplayInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameplayInterface() {} \
public: \
	typedef UGameplayInterface UClassType; \
	typedef IGameplayInterface ThisClass; \
	static void Execute_OnInteraction(UObject* O, AHeroCharacter* MyHero); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_GreatestHunt_Source_GreatestHunt_Public_Interfaces_GameplayInterface_h_11_PROLOG
#define FID_GreatestHunt_Source_GreatestHunt_Public_Interfaces_GameplayInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GreatestHunt_Source_GreatestHunt_Public_Interfaces_GameplayInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GreatestHunt_Source_GreatestHunt_Public_Interfaces_GameplayInterface_h_14_CALLBACK_WRAPPERS \
	FID_GreatestHunt_Source_GreatestHunt_Public_Interfaces_GameplayInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GREATESTHUNT_API UClass* StaticClass<class UGameplayInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GreatestHunt_Source_GreatestHunt_Public_Interfaces_GameplayInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
