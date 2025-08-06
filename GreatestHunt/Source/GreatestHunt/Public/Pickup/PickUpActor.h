// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/GameplayInterface.h"
#include "PickUpActor.generated.h"

class UStaticMeshComponent;
class UItemBase;

UCLASS()
class GREATESTHUNT_API APickUpActor : public AActor , public IGameplayInterface
{
	GENERATED_BODY()
	
public:
	
	// Sets default values for this actor's properties
	APickUpActor();

	virtual void OnInteraction_Implementation(AHeroCharacter* MyHero) override;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Pickup | Mesh")
	UStaticMeshComponent* PickUpMesh;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Pickup | Items")
	UItemBase* MyItemTemplate;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	
};
