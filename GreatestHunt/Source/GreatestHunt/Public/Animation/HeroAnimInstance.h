// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HeroAnimInstance.generated.h"

/**
 * 
 */
class AHeroCharacter;
UCLASS()
class GREATESTHUNT_API UHeroAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animation")
	AHeroCharacter* HeroCharacter;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animation")
	float Speed;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animation")
	float Direction;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animation")
	bool bSwordEquipped;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animation")
	bool bPlayerAttack;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animation")
	bool bPlayerDead;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animation")
	bool bPlayerBlocking;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animation")
	bool bPlayerJumping;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Animation")
	bool bPlayerFlying;
};
