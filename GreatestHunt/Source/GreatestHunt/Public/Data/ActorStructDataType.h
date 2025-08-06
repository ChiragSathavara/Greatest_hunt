#pragma once


#include "CoreMinimal.h"
#include "ActorStructDataType.generated.h"


UENUM(Blueprintable)
enum class EWeaponType : uint8
{
	Katana UMETA(DisplayName = "Katana"),
	DoubleSword UMETA(DisplayName = "DoubleSword"),
	
	
};

UENUM(BlueprintType)
enum class ECharacterActionType : uint8
{
	NotAttacking UMETA(DisplayName = "NotAttacking"),
	Attacking UMETA(DisplayName = "Attacking")
};

UENUM(BlueprintType)
enum ENPCState
{
	Idle UMETA(DisplayName = "Idle"),
	AttackTriggered UMETA(DisplayName = "AttackTriggered")
};