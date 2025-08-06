// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/AINPCController.h"
#include "AI/AINPCCharacter.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Components/BoxComponent.h"
#include "Hero/HeroCharacter.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"


AAinpcController::AAinpcController()
{
	SetupPerceptionSys();
}

void AAinpcController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	UE_LOG(LogTemp, Warning, TEXT("AI Controller possessed: %s"), *InPawn->GetName());

	AI = Cast<AAINPCCharacter>(InPawn);
	if (AI)
	{
		if (UBehaviorTree* Tree = AI->GetBehaviorTree())
		{
			UBlackboardComponent* b;
			UseBlackboard(Tree->BlackboardAsset,b);
			Blackboard = b;
			RunBehaviorTree(Tree);
		}
	}
	
}

void AAinpcController::SetupPerceptionSys()
{
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
	SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>("PerceptionSysComp"));
	
	SightConfig->SightRadius = 1000.0f;
	SightConfig->LoseSightRadius  = SightConfig->SightRadius + 25.f;
	SightConfig->PeripheralVisionAngleDegrees = 100.f;
	SightConfig->SetMaxAge(10);
	SightConfig->AutoSuccessRangeFromLastSeenLocation = 1020.f;
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
	GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this,&AAinpcController::OnTargetDetected);
	GetPerceptionComponent()->ConfigureSense(*SightConfig);
}

void AAinpcController::OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus)
{
	myCharacter = Cast<AHeroCharacter>(Actor);
	
		if (!myCharacter || !AI)
		{
			return;
		}
	
	
	bisCanPlayerSee = Stimulus.WasSuccessfullySensed();

	GetBlackboardComponent()->SetValueAsBool("CanSeePlayer", bisCanPlayerSee);

	GetBlackboardComponent()->SetValueAsObject("TargetActor",myCharacter);

	if (AI->StealthRangeBox)
	{
		AI->StealthRangeBox->SetCollisionEnabled(bisCanPlayerSee ? ECollisionEnabled::NoCollision : ECollisionEnabled::QueryOnly);
	}
	
}
