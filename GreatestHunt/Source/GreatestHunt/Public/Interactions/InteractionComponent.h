// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractionComponent.generated.h"

class AHeroCharacter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GREATESTHUNT_API UInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInteractionComponent();

	void PlayerInteraction(AHeroCharacter* HeroCharacter);

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Interactions | Data")
	float AmoutOfDistance = 300.f;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Interactions | Data")
	AActor* HitActor;
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;


		
};
