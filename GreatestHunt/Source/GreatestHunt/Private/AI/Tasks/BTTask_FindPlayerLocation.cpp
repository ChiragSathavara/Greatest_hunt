// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Tasks/BTTask_FindPlayerLocation.h"
#include "NavigationSystem.h"
#include "AI/AINPCCharacter.h"
#include "AI/AINPCController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Hero/HeroCharacter.h"
#include "Kismet/GameplayStatics.h"

EBTNodeResult::Type UBTTask_FindPlayerLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (!BlackboardComp) return EBTNodeResult::Failed;

	ACharacter* Player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	if (!Player) return EBTNodeResult::Failed;
	
	AAinpcController* EnemyCont = Cast<AAinpcController>(OwnerComp.GetAIOwner());
	if (!EnemyCont) return EBTNodeResult::Failed;

	AAINPCCharacter* EnemyChar = Cast<AAINPCCharacter>(EnemyCont->GetPawn());
	if (!EnemyChar) return EBTNodeResult::Failed;
	
	const FVector PlayerLocation = Player->GetActorLocation();
	
	if (SearchBool && EnemyChar->isAIAlive == true)
	{
		FNavLocation NavLocation;
		if (UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld()))
		{
			if (NavSys->GetRandomPointInNavigableRadius(PlayerLocation, SearchRadius, NavLocation))
			{
				BlackboardComp->SetValueAsVector(GetSelectedBlackboardKey(), NavLocation.Location);
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}
		}
	}
	else
	{
		BlackboardComp->SetValueAsVector(GetSelectedBlackboardKey(), PlayerLocation);
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}
