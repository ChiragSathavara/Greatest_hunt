// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/AIWeapons/AIWeaponActor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Hero/HeroCharacter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AAIWeaponActor::AAIWeaponActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>("WeaponMesh");
	WeaponMesh->SetupAttachment(GetRootComponent());

	BoxComp = CreateDefaultSubobject<UBoxComponent>("BoxComponent");
	BoxComp->SetupAttachment(WeaponMesh);

	BoxComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	BoxComp->SetCollisionResponseToAllChannels(ECR_Overlap);

	BoxComp->OnComponentBeginOverlap.AddDynamic(this,&AAIWeaponActor::OnBoxBeginOverlap);

	StartComp = CreateDefaultSubobject<USceneComponent>("StartComp");
	StartComp->SetupAttachment(WeaponMesh);

	EndComp = CreateDefaultSubobject<USceneComponent>("EndComp");
	EndComp->SetupAttachment(WeaponMesh);
}

// Called when the game starts or when spawned
void AAIWeaponActor::BeginPlay()
{
	Super::BeginPlay();
	
	AActor* MyOwner = GetOwner();
	if (MyOwner)
	{
		// Ignore collision with owner's root component
		BoxComp->IgnoreActorWhenMoving(MyOwner, true);
	}
}

void AAIWeaponActor::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                                       UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	FVector StartLocation = StartComp->GetComponentLocation();

	FVector EndLocation = EndComp->GetComponentLocation();

	FHitResult Hit;

	TArray<AActor*> ignoredActors;
	ignoredActors.Add(this);

	bool bhitPlayer = UKismetSystemLibrary::BoxTraceSingle(this,StartLocation,EndLocation,FVector(5.f,5.f,5.f),StartComp->GetComponentRotation(),TraceTypeQuery1,false,ignoredActors,EDrawDebugTrace::None,Hit,true);

	if (bhitPlayer)
	{
		if (AActor* HitActor = Hit.GetActor())
		{
			Hero = Cast<AHeroCharacter>(HitActor);
			if (Hero)
			{
				if (Hero->bIsPlayerBlocking == false)
				{
					UGameplayStatics::ApplyDamage(Hero,25,GetInstigatorController(),this,UDamageType::StaticClass());
					Hero->HitReactPlayer();
					UE_LOG(LogTemp, Warning, TEXT("HitActor: %s"), *Hero->GetName());
				}
				else
				{
					UE_LOG(LogTemp,Warning, TEXT("Attack is Block HitActor: %s"), *Hero->GetName());
				}
			}
				
		}
	}
}


