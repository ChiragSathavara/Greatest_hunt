// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup/PickUpActor.h"
#include "SwordActor.generated.h"

class UBoxComponent;
class USceneComponent;
class AAINPCCharacter;
class AAinpcController;

UCLASS()
class GREATESTHUNT_API ASwordActor : public APickUpActor
{
	GENERATED_BODY()

public:
	ASwordActor();

	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere,Category="Pickup")
	UBoxComponent* WeaponBox;
	UPROPERTY(EditAnywhere,Category="Pickup")
	USceneComponent* BoxTraceStart;
    UPROPERTY(EditAnywhere,Category="Pickup")
	USceneComponent* BoxTraceEnd;

	UPROPERTY()
	AAinpcController* NpcController;
	
	UPROPERTY()
	AAINPCCharacter* MyNpc;
	
	UFUNCTION()
	void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
						   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
						   bool bFromSweep, const FHitResult& SweepResult);

	
};
