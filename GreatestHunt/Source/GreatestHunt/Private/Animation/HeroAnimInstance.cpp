// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/HeroAnimInstance.h"
#include "Hero/HeroCharacter.h"
#include "KismetAnimationLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"

void UHeroAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	if (!HeroCharacter)
	{
		HeroCharacter= Cast<AHeroCharacter>(TryGetPawnOwner());
	}
}

void UHeroAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (HeroCharacter)
	{
		FVector Velocity = HeroCharacter->GetVelocity();
		Velocity.Z = 0;
		Speed = Velocity.Size();
		bSwordEquipped = HeroCharacter->bItemEquipped;
		bPlayerDead = HeroCharacter->bisplayerAlive;
		bPlayerBlocking = HeroCharacter->bIsPlayerBlocking;
		bPlayerJumping = HeroCharacter->GetCharacterMovement()->IsFalling();
		bPlayerFlying = HeroCharacter->GetCharacterMovement()->IsFlying();
		Direction = UKismetAnimationLibrary::CalculateDirection(Velocity , HeroCharacter->GetActorRotation());
	}
}