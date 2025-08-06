// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LockonComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GREATESTHUNT_API ULockonComponent : public UActorComponent
{
	GENERATED_BODY()

	ACharacter* OwnerRef;
	 APlayerController* OwnerController;
	class UCharacterMovementComponent* OwnerMovement;
	class USpringArmComponent* SpringArm;
public:	
	
	// Sets default values for this component's properties
	ULockonComponent();
	UPROPERTY(EditAnywhere)
	AActor* CurrentActor;
	
	UFUNCTION(BlueprintCallable)
	void StartLockon(float Radius = 750.f);

	UFUNCTION(BlueprintCallable)
	void EndLockOn();

	UFUNCTION(BlueprintCallable)
	void ToggleLockOn(float Radius = 750.f);
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};


