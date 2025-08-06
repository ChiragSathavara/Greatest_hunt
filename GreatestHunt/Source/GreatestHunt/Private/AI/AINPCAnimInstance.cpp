// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/AINPCAnimInstance.h"
#include "AI/AINPCCharacter.h"

void UAINPCAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	if (AICharacter == nullptr)
	{
		AICharacter = Cast<AAINPCCharacter>(TryGetPawnOwner());
	}
	
}

void UAINPCAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if (AICharacter != nullptr)
	{
		FVector Velocity = AICharacter->GetVelocity();
		Velocity.Z =0;
		bAIAlive = AICharacter->isAIAlive;
		speed = Velocity.Size();
	}
}
