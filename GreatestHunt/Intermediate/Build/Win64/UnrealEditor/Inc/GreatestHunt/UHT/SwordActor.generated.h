// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickup/SwordActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GREATESTHUNT_SwordActor_generated_h
#error "SwordActor.generated.h already included, missing '#pragma once' in SwordActor.h"
#endif
#define GREATESTHUNT_SwordActor_generated_h

#define FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_SwordActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBoxBeginOverlap);


#define FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_SwordActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwordActor(); \
	friend struct Z_Construct_UClass_ASwordActor_Statics; \
public: \
	DECLARE_CLASS(ASwordActor, APickUpActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GreatestHunt"), NO_API) \
	DECLARE_SERIALIZER(ASwordActor)


#define FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_SwordActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASwordActor(ASwordActor&&); \
	ASwordActor(const ASwordActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwordActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwordActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASwordActor) \
	NO_API virtual ~ASwordActor();


#define FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_SwordActor_h_14_PROLOG
#define FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_SwordActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_SwordActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_SwordActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_SwordActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GREATESTHUNT_API UClass* StaticClass<class ASwordActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_SwordActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
