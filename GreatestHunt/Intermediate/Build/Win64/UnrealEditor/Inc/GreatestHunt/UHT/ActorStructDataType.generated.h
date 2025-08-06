// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ActorStructDataType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GREATESTHUNT_ActorStructDataType_generated_h
#error "ActorStructDataType.generated.h already included, missing '#pragma once' in ActorStructDataType.h"
#endif
#define GREATESTHUNT_ActorStructDataType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GreatestHunt_Source_GreatestHunt_Public_Data_ActorStructDataType_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::Katana) \
	op(EWeaponType::DoubleSword) 

enum class EWeaponType : uint8;
template<> struct TIsUEnumClass<EWeaponType> { enum { Value = true }; };
template<> GREATESTHUNT_API UEnum* StaticEnum<EWeaponType>();

#define FOREACH_ENUM_ECHARACTERACTIONTYPE(op) \
	op(ECharacterActionType::NotAttacking) \
	op(ECharacterActionType::Attacking) 

enum class ECharacterActionType : uint8;
template<> struct TIsUEnumClass<ECharacterActionType> { enum { Value = true }; };
template<> GREATESTHUNT_API UEnum* StaticEnum<ECharacterActionType>();

#define FOREACH_ENUM_ENPCSTATE(op) \
	op(Idle) \
	op(AttackTriggered) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
