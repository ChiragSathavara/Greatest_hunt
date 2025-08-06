// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup/SwordActor.h"
#include "Components/SceneComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/BoxComponent.h"
#include "AI/AINPCCharacter.h"
#include "AI/AINPCController.h"
#include "Kismet/GameplayStatics.h"

ASwordActor::ASwordActor()
{
	WeaponBox = CreateDefaultSubobject<UBoxComponent>("WeaponBoxComp");
	WeaponBox->SetupAttachment(GetRootComponent());
	WeaponBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	WeaponBox->SetCollisionResponseToAllChannels(ECR_Overlap);
	WeaponBox->SetCollisionResponseToChannel(ECC_Pawn,ECR_Ignore);

	BoxTraceStart = CreateDefaultSubobject<USceneComponent>("BoxTraceStart");
	BoxTraceStart->SetupAttachment(GetRootComponent());

	BoxTraceEnd = CreateDefaultSubobject<USceneComponent>("BoxTraceEnd");
	BoxTraceEnd->SetupAttachment(GetRootComponent());

	WeaponBox->OnComponentBeginOverlap.AddDynamic(this,&ASwordActor::OnBoxBeginOverlap);
}

void ASwordActor::BeginPlay()
{
	Super::BeginPlay();
}

void ASwordActor::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                                   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	FVector StartLocation = BoxTraceStart->GetComponentLocation();
	FVector EndLocation = BoxTraceEnd->GetComponentLocation();

	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(this);

	FHitResult Hit;

	bool bHit = UKismetSystemLibrary::BoxTraceSingle(
		this,
		StartLocation,
		EndLocation,
		FVector(4.f, 4.f, 4.f),                     // Box half size (you can tweak this)
		BoxTraceStart->GetComponentRotation(),     // Orientation
		TraceTypeQuery1,                           // Make sure this matches your collision channel
		false,
		ActorsToIgnore,
		EDrawDebugTrace::None,                     // Use ForDuration or Persistent if debugging
		Hit,
		true
	);

	if (bHit)
	{
		AActor* HitActor = Hit.GetActor();
		if (HitActor && HitActor != this)
		{
			MyNpc = Cast<AAINPCCharacter>(HitActor);
			if (MyNpc && MyNpc->isAIAlive)  
			{
				// Apply damage
				UGameplayStatics::ApplyDamage(MyNpc, 10.f, GetInstigatorController(), this, UDamageType::StaticClass());

				// Call NPC hit reaction
				MyNpc->EnemyHitReact();

				// Let the AI know it's been seen/hit
				NpcController = Cast<AAinpcController>(MyNpc->GetController());
				if (NpcController)
				{
					NpcController->bisCanPlayerSee = true;
				}

				UE_LOG(LogTemp, Warning, TEXT("Sword hit: %s"), *MyNpc->GetName());
			}
		}
	}
}


