// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/FoodItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GREATESTHUNT_FoodItem_generated_h
#error "FoodItem.generated.h already included, missing '#pragma once' in FoodItem.h"
#endif
#define GREATESTHUNT_FoodItem_generated_h

#define FID_GreatestHunt_Source_GreatestHunt_Public_Items_FoodItem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFoodItem(); \
	friend struct Z_Construct_UClass_UFoodItem_Statics; \
public: \
	DECLARE_CLASS(UFoodItem, UItemBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GreatestHunt"), NO_API) \
	DECLARE_SERIALIZER(UFoodItem)


#define FID_GreatestHunt_Source_GreatestHunt_Public_Items_FoodItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFoodItem(UFoodItem&&); \
	UFoodItem(const UFoodItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoodItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoodItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFoodItem) \
	NO_API virtual ~UFoodItem();


#define FID_GreatestHunt_Source_GreatestHunt_Public_Items_FoodItem_h_12_PROLOG
#define FID_GreatestHunt_Source_GreatestHunt_Public_Items_FoodItem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GreatestHunt_Source_GreatestHunt_Public_Items_FoodItem_h_15_INCLASS_NO_PURE_DECLS \
	FID_GreatestHunt_Source_GreatestHunt_Public_Items_FoodItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GREATESTHUNT_API UClass* StaticClass<class UFoodItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GreatestHunt_Source_GreatestHunt_Public_Items_FoodItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
