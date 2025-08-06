// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Hero/HeroController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GREATESTHUNT_HeroController_generated_h
#error "HeroController.generated.h already included, missing '#pragma once' in HeroController.h"
#endif
#define GREATESTHUNT_HeroController_generated_h

#define FID_GreatestHunt_Source_GreatestHunt_Public_Hero_HeroController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroController(); \
	friend struct Z_Construct_UClass_AHeroController_Statics; \
public: \
	DECLARE_CLASS(AHeroController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GreatestHunt"), NO_API) \
	DECLARE_SERIALIZER(AHeroController)


#define FID_GreatestHunt_Source_GreatestHunt_Public_Hero_HeroController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHeroController(AHeroController&&); \
	AHeroController(const AHeroController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeroController) \
	NO_API virtual ~AHeroController();


#define FID_GreatestHunt_Source_GreatestHunt_Public_Hero_HeroController_h_13_PROLOG
#define FID_GreatestHunt_Source_GreatestHunt_Public_Hero_HeroController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GreatestHunt_Source_GreatestHunt_Public_Hero_HeroController_h_16_INCLASS_NO_PURE_DECLS \
	FID_GreatestHunt_Source_GreatestHunt_Public_Hero_HeroController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GREATESTHUNT_API UClass* StaticClass<class AHeroController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GreatestHunt_Source_GreatestHunt_Public_Hero_HeroController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
