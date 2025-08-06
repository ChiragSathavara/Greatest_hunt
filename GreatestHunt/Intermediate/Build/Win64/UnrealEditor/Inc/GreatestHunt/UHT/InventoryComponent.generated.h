// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/InventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GREATESTHUNT_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define GREATESTHUNT_InventoryComponent_generated_h

#define FID_GreatestHunt_Source_GreatestHunt_Public_Inventory_InventoryComponent_h_10_DELEGATE \
GREATESTHUNT_API void FOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdated);


#define FID_GreatestHunt_Source_GreatestHunt_Public_Inventory_InventoryComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GreatestHunt"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_GreatestHunt_Source_GreatestHunt_Public_Inventory_InventoryComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryComponent(UInventoryComponent&&); \
	UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_GreatestHunt_Source_GreatestHunt_Public_Inventory_InventoryComponent_h_14_PROLOG
#define FID_GreatestHunt_Source_GreatestHunt_Public_Inventory_InventoryComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GreatestHunt_Source_GreatestHunt_Public_Inventory_InventoryComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_GreatestHunt_Source_GreatestHunt_Public_Inventory_InventoryComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GREATESTHUNT_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GreatestHunt_Source_GreatestHunt_Public_Inventory_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
