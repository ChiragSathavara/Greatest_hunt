// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "AINPCController.generated.h"

class AHeroCharacter;
class AAINPCCharacter;
struct FAIStimulus;
/**
 * 
 */
UCLASS()
class GREATESTHUNT_API AAinpcController : public AAIController
{
	GENERATED_BODY()
public:
	AAinpcController();
	
	
	UPROPERTY(EditDefaultsOnly)
	bool bisCanPlayerSee;

	UPROPERTY(EditDefaultsOnly)
	bool bisPlayerisAlive;
	
	UPROPERTY()
	AHeroCharacter*  myCharacter;

	UPROPERTY(BlueprintReadOnly)
	AAINPCCharacter* AI ;
protected:
	virtual void OnPossess(APawn* InPawn) override;

	UPROPERTY(EditDefaultsOnly)
	class UAISenseConfig_Sight* SightConfig;
	
	void SetupPerceptionSys();

	UFUNCTION()
	void OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus);
};
