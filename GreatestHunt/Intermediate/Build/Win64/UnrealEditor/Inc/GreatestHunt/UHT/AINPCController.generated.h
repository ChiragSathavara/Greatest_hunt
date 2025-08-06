// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/AINPCController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef GREATESTHUNT_AINPCController_generated_h
#error "AINPCController.generated.h already included, missing '#pragma once' in AINPCController.h"
#endif
#define GREATESTHUNT_AINPCController_generated_h

#define FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTargetDetected);


#define FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAinpcController(); \
	friend struct Z_Construct_UClass_AAinpcController_Statics; \
public: \
	DECLARE_CLASS(AAinpcController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GreatestHunt"), NO_API) \
	DECLARE_SERIALIZER(AAinpcController)


#define FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCController_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAinpcController(AAinpcController&&); \
	AAinpcController(const AAinpcController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAinpcController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAinpcController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAinpcController) \
	NO_API virtual ~AAinpcController();


#define FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCController_h_16_PROLOG
#define FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCController_h_19_INCLASS_NO_PURE_DECLS \
	FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GREATESTHUNT_API UClass* StaticClass<class AAinpcController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GreatestHunt_Source_GreatestHunt_Public_AI_AINPCController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
