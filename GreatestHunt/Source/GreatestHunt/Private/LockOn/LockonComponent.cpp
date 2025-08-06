// Fill out your copyright notice in the Description page of Project Settings.


#include "LockOn/LockonComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetMathLibrary.h"


// Sets default values for this component's properties
ULockonComponent::ULockonComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}
// Called when the game starts
void ULockonComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerRef = GetOwner<ACharacter>();
	OwnerController = GetWorld()->GetFirstPlayerController();
	OwnerMovement = OwnerRef->GetCharacterMovement();
	SpringArm = OwnerRef ->FindComponentByClass<USpringArmComponent>();
	
}
void ULockonComponent::StartLockon(float Radius)
{

	UE_LOG(LogTemp, Warning, TEXT("Lock On"));
	FHitResult LockOnHit;
	FVector CurrentLocation{ OwnerRef->GetActorLocation() };
	FCollisionShape Sphere {FCollisionShape::MakeSphere(Radius)};
	FCollisionQueryParams IgnoreParams{
		FName{ TEXT("Ignore Query Params")},false,OwnerRef
	};
	
	
	bool bHasFoundTarget = GetWorld()->SweepSingleByChannel( LockOnHit,CurrentLocation,CurrentLocation,FQuat::Identity,ECollisionChannel::ECC_GameTraceChannel1,Sphere,IgnoreParams);

	if(bHasFoundTarget)
	{
		CurrentActor = LockOnHit.GetActor();
		OwnerController->SetIgnoreLookInput(true);
		OwnerMovement->bOrientRotationToMovement = false;
		OwnerMovement->bUseControllerDesiredRotation = true;
		SpringArm->SocketOffset = FVector(0, 0, 40.0);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("bHasFoundTarget is false"));
	}

}
void ULockonComponent::EndLockOn()
{
	CurrentActor = nullptr;
	OwnerMovement->bUseControllerDesiredRotation = false;
	OwnerMovement->bOrientRotationToMovement = false;
	SpringArm->SocketOffset = FVector(0, 0, 40.0);

	OwnerController->ResetIgnoreLookInput();
}

void ULockonComponent::ToggleLockOn(float Radius)
{
	if (IsValid(CurrentActor))
	{
		EndLockOn();
	}
	else
	{
		StartLockon(Radius);
	}
}

// Called every frame
void ULockonComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!IsValid(CurrentActor))
	{
		return;
	}
	FVector CurrentLocation{ OwnerRef->GetActorLocation() };
	FVector TargetLocation{CurrentActor->GetActorLocation()};

	TargetLocation.Z -= 125;
	
	FRotator NewRotation = UKismetMathLibrary::FindLookAtRotation(CurrentLocation,TargetLocation);

	OwnerController->SetControlRotation(NewRotation);
}

