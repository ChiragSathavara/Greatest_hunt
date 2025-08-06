// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/AINPCCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GREATESTHUNT_AINPCCharacter_generated_h
#error "AINPCCharacter.generated.h already included, missing '#pragma once' in AINPCCharacter.h"
#endif
#define GREATESTHUNT_AINPCCharacter_generated_h

#define FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetWeaponCollisionEnabled); \
	DECLARE_FUNCTION(execEnemyAttackEnd); \
	DECLARE_FUNCTION(execOnBoxEndOverlap); \
	DECLARE_FUNCTION(execOnBoxBeginOverlap); \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAINPCCharacter(); \
	friend struct Z_Construct_UClass_AAINPCCharacter_Statics; \
public: \
	DECLARE_CLASS(AAINPCCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GreatestHunt"), NO_API) \
	DECLARE_SERIALIZER(AAINPCCharacter)


#define FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAINPCCharacter(AAINPCCharacter&&); \
	AAINPCCharacter(const AAINPCCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAINPCCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAINPCCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAINPCCharacter) \
	NO_API virtual ~AAINPCCharacter();


#define FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCCharacter_h_21_PROLOG
#define FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GREATESTHUNT_API UClass* StaticClass<class AAINPCCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
