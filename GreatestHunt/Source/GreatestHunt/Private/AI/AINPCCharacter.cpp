// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/AINPCCharacter.h"

#include "AI/AINPCController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Hero/HeroCharacter.h"
#include "AI/AINPCAnimInstance.h"
#include "AI/AIWeapons/AISwordActor.h"
#include "Animation/AnimMontage.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"

//#include "Components/BoxComponent.h"

// Sets default values
AAINPCCharacter::AAINPCCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	GetCharacterMovement()->MaxWalkSpeed = 300.f;

	AttackRangeSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	AttackRangeSphere->SetupAttachment(GetRootComponent());

	StealthRangeBox = CreateDefaultSubobject<UBoxComponent>(TEXT("StealthBox"));
    StealthRangeBox->SetupAttachment(GetRootComponent());

	Attacker = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Attacker"));
	Attacker->SetupAttachment(GetRootComponent());
	
	
	StealthRangeBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	
	AttackRangeSphere->OnComponentBeginOverlap.AddDynamic(this,&AAINPCCharacter::OnSphereBeginOverlap);
    AttackRangeSphere->OnComponentEndOverlap.AddDynamic(this,&AAINPCCharacter::OnSphereEndOverlap);

	
	
	StealthRangeBox->OnComponentBeginOverlap.AddDynamic(this,&AAINPCCharacter::OnBoxBeginOverlap);
	StealthRangeBox->OnComponentEndOverlap.AddDynamic(this,&AAINPCCharacter::OnBoxEndOverlap);
	
	AIHealth = 100.f;
	UE_LOG(LogTemp,Log,TEXT("AI Health = %f"),AIHealth);
	isAIAlive = true;
	bUseControllerRotationYaw = true;

	
}  

// Called when the game starts or when spawned
void AAINPCCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	myNPCController = Cast<AAinpcController>(GetController());
	
	SwordEquipped();
}


void AAINPCCharacter::SwordEquipped()
{
	FActorSpawnParameters spawnParameters;
	spawnParameters.Owner = this;

	AIEquippedSword = GetWorld()->SpawnActor<AAISwordActor>(AISwordActorClass,spawnParameters);
	if (AIEquippedSword)
	{
		AIEquippedSword->AttachToComponent(this->GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale,
		                                   "SwordHandHolder");
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("NPC has no Equipped Sword"));
	}
}

void AAINPCCharacter::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                                           UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor || OtherActor == this)
	{
		return;
	}

	Hero = Cast<AHeroCharacter>(OtherActor);
	if (Hero)
	{
		if (isAIAlive)
		{
			if (myNPCController && myNPCController->GetBlackboardComponent())
			{
				myNPCController->GetBlackboardComponent()->SetValueAsBool("bisAttackRange", true);
				isAttackingRange = true;
				UE_LOG(LogTemp, Warning, TEXT("Player in Attacking Range"));
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("AI is dead (AI can't attack)"));
		}
	}
	
}

void AAINPCCharacter::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (!OtherActor || OtherActor == this)
	{
		return;
	}

	Hero = Cast<AHeroCharacter>(OtherActor);
	if (Hero)
	{
		if (myNPCController && myNPCController->GetBlackboardComponent())
		{
			myNPCController->GetBlackboardComponent()->SetValueAsBool("bisAttackRange", false);
			isAttackingRange = false;
			UE_LOG(LogTemp, Warning, TEXT("Player left Attacking Range"));
		}
	}
}

void AAINPCCharacter::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Hero = Cast<AHeroCharacter>(OtherActor);
	if (Hero)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player is in Stealth Range"));
		Hero->bCanStealth = true;
		Hero->EnemyAI = this;
	}
}

void AAINPCCharacter::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Hero = Cast<AHeroCharacter>(OtherActor);
	if (Hero)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player is not in Stealth Range!!"));
		Hero->bCanStealth = false;
		Hero->EnemyAI = nullptr;
	}
}

void AAINPCCharacter::EnemyAttack()
{
	if (!myNPCController)
	{
		return;
	}

	if (!Hero)
	{
		Hero = Cast<AHeroCharacter>(myNPCController->myCharacter);
	}

	if (!Hero || !Hero->bisplayerAlive)
	{
		UE_LOG(LogTemp, Warning, TEXT("Hero is nullptr or player is dead"));
		return;
	}

	MyNpcAnim = Cast<UAINPCAnimInstance>(GetMesh()->GetAnimInstance());
	bUseControllerRotationYaw = false;

	if (MyNpcAnim)
	{
		// Don't play if already playing a montage
		if (MyNpcAnim->Montage_IsPlaying(nullptr))
		{
			UE_LOG(LogTemp, Warning, TEXT("Montage already playing, skipping new attack."));
			return;
		}

		UAnimMontage* SelectedMontage = nullptr;
		int32 SelectedMontageIndex = FMath::RandRange(0, 1);
		switch (SelectedMontageIndex)
		{
		case 0:
			SelectedMontage = Attack1;
			break;
		case 1:
			SelectedMontage = Attack2;
			break;
		default:
			UE_LOG(LogTemp, Warning, TEXT("SelectedMontageIndex is not found"));
			break;
		}

		if (SelectedMontage)
		{
			MyNpcAnim->Montage_Play(SelectedMontage, 1.0f);
		}
	}
	
	
}


void AAINPCCharacter::EnemyAttackEnd()
{
	SetWeaponCollisionEnabled(ECollisionEnabled::NoCollision);
	bUseControllerRotationYaw = true;
}

void AAINPCCharacter::EnemyStealthVic()
{
	MyNpcAnim = Cast<UAINPCAnimInstance>(GetMesh()->GetAnimInstance());
	if (MyNpcAnim) 
	{
		//MyNpcAnim->Montage_Play(StealthVicMontage,1);

		//AttackRangeSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		FTimerHandle TimerHandle;
	    GetWorld()->GetTimerManager().SetTimer(TimerHandle,this,&AAINPCCharacter::AIDie,01.f,false);
	}
}

void AAINPCCharacter::EnemyHitReact()
{
	MyNpcAnim = Cast<UAINPCAnimInstance>(GetMesh()->GetAnimInstance());
	if (MyNpcAnim && HitMontage)
	{
		if (MyNpcAnim->Montage_IsPlaying(nullptr))
		{
			MyNpcAnim->Montage_Stop(0.2f);
		}
		SetWeaponCollisionEnabled(ECollisionEnabled::NoCollision);
		MyNpcAnim->Montage_Play(HitMontage);
		
	}
}

void AAINPCCharacter::AIDie()
{
	GetCharacterMovement()->DisableMovement();

	if (DeathSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this,DeathSound,GetActorLocation());
	}
	
	myNPCController = Cast<AAinpcController>(GetController());
	if (myNPCController && isAIAlive == true)
	{
		myNPCController->StopMovement();
		AttackRangeSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		isAIAlive = false;
		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle,this,&AAINPCCharacter::DeleteAIEnemy,6.f,false);
	}
}

float AAINPCCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
	class AController* EventInstigator, AActor* DamageCauser)
{
	AIHealth -= DamageAmount;

	if (AIHealth <= 0)
	{
		AIDie();
		UE_LOG(LogTemp,Log,TEXT("AI Health = %f"),AIHealth);
	}

	return DamageAmount;
}
// Called every frame
void AAINPCCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAINPCCharacter::DeleteAIEnemy()
{
	Destroy();
	AIEquippedSword->Destroy();
}

void AAINPCCharacter::SetWeaponCollisionEnabled(ECollisionEnabled::Type CollisionEnabled)
{
	if (AIEquippedSword != nullptr && AIEquippedSword->BoxComp != nullptr)
	{
		AIEquippedSword->BoxComp->SetCollisionEnabled(CollisionEnabled);
	}
	else
    {
		UE_LOG(LogTemp,Warning,TEXT("AISword is nullptr or AISword Weapon Box is nullptr"));
	}
}

