// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LockOn/LockonComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GREATESTHUNT_LockonComponent_generated_h
#error "LockonComponent.generated.h already included, missing '#pragma once' in LockonComponent.h"
#endif
#define GREATESTHUNT_LockonComponent_generated_h

#define FID_GreatestHunt_Source_GreatestHunt_Public_LockOn_LockonComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleLockOn); \
	DECLARE_FUNCTION(execEndLockOn); \
	DECLARE_FUNCTION(execStartLockon);


#define FID_GreatestHunt_Source_GreatestHunt_Public_LockOn_LockonComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULockonComponent(); \
	friend struct Z_Construct_UClass_ULockonComponent_Statics; \
public: \
	DECLARE_CLASS(ULockonComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GreatestHunt"), NO_API) \
	DECLARE_SERIALIZER(ULockonComponent)


#define FID_GreatestHunt_Source_GreatestHunt_Public_LockOn_LockonComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULockonComponent(ULockonComponent&&); \
	ULockonComponent(const ULockonComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULockonComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULockonComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULockonComponent) \
	NO_API virtual ~ULockonComponent();


#define FID_GreatestHunt_Source_GreatestHunt_Public_LockOn_LockonComponent_h_10_PROLOG
#define FID_GreatestHunt_Source_GreatestHunt_Public_LockOn_LockonComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GreatestHunt_Source_GreatestHunt_Public_LockOn_LockonComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GreatestHunt_Source_GreatestHunt_Public_LockOn_LockonComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_GreatestHunt_Source_GreatestHunt_Public_LockOn_LockonComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GREATESTHUNT_API UClass* StaticClass<class ULockonComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GreatestHunt_Source_GreatestHunt_Public_LockOn_LockonComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
