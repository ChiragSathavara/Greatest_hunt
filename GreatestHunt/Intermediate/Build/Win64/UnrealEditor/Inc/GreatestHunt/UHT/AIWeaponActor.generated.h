// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/AIWeapons/AIWeaponActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GREATESTHUNT_AIWeaponActor_generated_h
#error "AIWeaponActor.generated.h already included, missing '#pragma once' in AIWeaponActor.h"
#endif
#define GREATESTHUNT_AIWeaponActor_generated_h

#define FID_GreatestHunt_Source_GreatestHunt_Public_AI_AIWeapons_AIWeaponActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBoxBeginOverlap);


#define FID_GreatestHunt_Source_GreatestHunt_Public_AI_AIWeapons_AIWeaponActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIWeaponActor(); \
	friend struct Z_Construct_UClass_AAIWeaponActor_Statics; \
public: \
	DECLARE_CLASS(AAIWeaponActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GreatestHunt"), NO_API) \
	DECLARE_SERIALIZER(AAIWeaponActor)


#define FID_GreatestHunt_Source_GreatestHunt_Public_AI_AIWeapons_AIWeaponActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAIWeaponActor(AAIWeaponActor&&); \
	AAIWeaponActor(const AAIWeaponActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIWeaponActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIWeaponActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIWeaponActor) \
	NO_API virtual ~AAIWeaponActor();


#define FID_GreatestHunt_Source_GreatestHunt_Public_AI_AIWeapons_AIWeaponActor_h_14_PROLOG
#define FID_GreatestHunt_Source_GreatestHunt_Public_AI_AIWeapons_AIWeaponActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GreatestHunt_Source_GreatestHunt_Public_AI_AIWeapons_AIWeaponActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GreatestHunt_Source_GreatestHunt_Public_AI_AIWeapons_AIWeaponActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_GreatestHunt_Source_GreatestHunt_Public_AI_AIWeapons_AIWeaponActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GREATESTHUNT_API UClass* StaticClass<class AAIWeaponActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GreatestHunt_Source_GreatestHunt_Public_AI_AIWeapons_AIWeaponActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
