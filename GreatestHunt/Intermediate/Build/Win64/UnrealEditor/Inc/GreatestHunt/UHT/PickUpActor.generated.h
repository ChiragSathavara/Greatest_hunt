// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickup/PickUpActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GREATESTHUNT_PickUpActor_generated_h
#error "PickUpActor.generated.h already included, missing '#pragma once' in PickUpActor.h"
#endif
#define GREATESTHUNT_PickUpActor_generated_h

#define FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_PickUpActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickUpActor(); \
	friend struct Z_Construct_UClass_APickUpActor_Statics; \
public: \
	DECLARE_CLASS(APickUpActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GreatestHunt"), NO_API) \
	DECLARE_SERIALIZER(APickUpActor) \
	virtual UObject* _getUObject() const override { return const_cast<APickUpActor*>(this); }


#define FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_PickUpActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APickUpActor(APickUpActor&&); \
	APickUpActor(const APickUpActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUpActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUpActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickUpActor) \
	NO_API virtual ~APickUpActor();


#define FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_PickUpActor_h_13_PROLOG
#define FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_PickUpActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_PickUpActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_PickUpActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GREATESTHUNT_API UClass* StaticClass<class APickUpActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GreatestHunt_Source_GreatestHunt_Public_Pickup_PickUpActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
