// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Tasks/BTTask_FindPlayerLocation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GREATESTHUNT_BTTask_FindPlayerLocation_generated_h
#error "BTTask_FindPlayerLocation.generated.h already included, missing '#pragma once' in BTTask_FindPlayerLocation.h"
#endif
#define GREATESTHUNT_BTTask_FindPlayerLocation_generated_h

#define FID_GreatestHunt_Source_GreatestHunt_Public_AI_Tasks_BTTask_FindPlayerLocation_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTask_FindPlayerLocation(); \
	friend struct Z_Construct_UClass_UBTTask_FindPlayerLocation_Statics; \
public: \
	DECLARE_CLASS(UBTTask_FindPlayerLocation, UBTTask_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GreatestHunt"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_FindPlayerLocation)


#define FID_GreatestHunt_Source_GreatestHunt_Public_AI_Tasks_BTTask_FindPlayerLocation_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTask_FindPlayerLocation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTTask_FindPlayerLocation(UBTTask_FindPlayerLocation&&); \
	UBTTask_FindPlayerLocation(const UBTTask_FindPlayerLocation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_FindPlayerLocation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_FindPlayerLocation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_FindPlayerLocation) \
	NO_API virtual ~UBTTask_FindPlayerLocation();


#define FID_GreatestHunt_Source_GreatestHunt_Public_AI_Tasks_BTTask_FindPlayerLocation_h_12_PROLOG
#define FID_GreatestHunt_Source_GreatestHunt_Public_AI_Tasks_BTTask_FindPlayerLocation_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GreatestHunt_Source_GreatestHunt_Public_AI_Tasks_BTTask_FindPlayerLocation_h_15_INCLASS_NO_PURE_DECLS \
	FID_GreatestHunt_Source_GreatestHunt_Public_AI_Tasks_BTTask_FindPlayerLocation_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GREATESTHUNT_API UClass* StaticClass<class UBTTask_FindPlayerLocation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GreatestHunt_Source_GreatestHunt_Public_AI_Tasks_BTTask_FindPlayerLocation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
