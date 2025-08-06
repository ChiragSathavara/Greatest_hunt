// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_PlayAttackAnim.generated.h"

/**
 * 
 */
class AAINPCCharacter;

UCLASS()
class GREATESTHUNT_API UBTTask_PlayAttackAnim : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	UBTTask_PlayAttackAnim();



	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
