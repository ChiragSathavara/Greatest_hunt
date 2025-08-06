// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AIWeaponActor.generated.h"

class UBoxComponent;
class UStaticMeshComponent;
class AHeroCharacter;
class USceneComponent;

UCLASS()
class GREATESTHUNT_API AAIWeaponActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAIWeaponActor();

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI | Collision")
	UBoxComponent* BoxComp;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI | Collision")
	UStaticMeshComponent* WeaponMesh;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI | Collision")
	USceneComponent* StartComp;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI | Collision")
	USceneComponent* EndComp;
	
	UPROPERTY()
	AHeroCharacter* Hero;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
	UFUNCTION()
	void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
						   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
						   bool bFromSweep, const FHitResult& SweepResult);

	

	
};
