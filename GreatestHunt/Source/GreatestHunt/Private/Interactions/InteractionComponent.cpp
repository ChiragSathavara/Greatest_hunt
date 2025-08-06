// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactions/InteractionComponent.h"
#include "Hero/HeroCharacter.h"
#include "Interfaces/GameplayInterface.h"


// Sets default values for this component's properties
UInteractionComponent::UInteractionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

void UInteractionComponent::PlayerInteraction(AHeroCharacter* HeroCharacter)
{
	if (HeroCharacter == nullptr)
	{
		return;
	}

	FVector EyeLocation;
	FRotator EyeRotation;

	HeroCharacter->GetActorEyesViewPoint(EyeLocation, EyeRotation);

	FVector EndLocation = EyeLocation + (EyeRotation.Vector() * AmoutOfDistance);

	FCollisionObjectQueryParams CollisionObjectParams;
	CollisionObjectParams.AddObjectTypesToQuery(ECC_WorldStatic);

	FHitResult Hit;
	
	bool bHit = GetWorld()->LineTraceSingleByObjectType(Hit,EyeLocation,EndLocation,CollisionObjectParams);

	DrawDebugLine(GetWorld(),EyeLocation,EndLocation,FColor::Red,false,2,0,1);
	HitActor = Hit.GetActor();
	if (bHit)
	{
		if (HitActor != nullptr && HitActor->Implements<UGameplayInterface>())
		{
			IGameplayInterface::Execute_OnInteraction(HitActor, HeroCharacter);
			DrawDebugSphere(GetWorld(),Hit.ImpactPoint,20,20,FColor::Green,false,false);
		}
		else
		{
			UE_LOG(LogTemp,Warning,TEXT("HitActor is nullptr"));
		}
	}
	else
	{
		UE_LOG(LogTemp,Warning,TEXT("bHit is false!"));
	}
	
}


// Called when the game starts
void UInteractionComponent::BeginPlay()
{
	Super::BeginPlay();
}



