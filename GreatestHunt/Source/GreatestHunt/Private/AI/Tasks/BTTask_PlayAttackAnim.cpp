// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Tasks/BTTask_PlayAttackAnim.h"
#include "AI/AINPCCharacter.h"
#include "AI/AINPCController.h"



UBTTask_PlayAttackAnim::UBTTask_PlayAttackAnim()
{
	NodeName = "Play Enemy Attack Animation";
}

EBTNodeResult::Type UBTTask_PlayAttackAnim::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAinpcController* myNPCController = Cast<AAinpcController>(OwnerComp.GetAIOwner());
	if (myNPCController == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	AAINPCCharacter* myNPCCharacter = Cast<AAINPCCharacter>(myNPCController->GetPawn());
	if (myNPCCharacter == nullptr)
	{
		return EBTNodeResult::Failed;
	}
	
	myNPCCharacter->EnemyAttack();

	FinishLatentTask(OwnerComp,EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;

	
}
