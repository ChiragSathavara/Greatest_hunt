// Fill out your copyright notice in the Description page of Project Settings.


#include "Hero/HeroCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "AI/AINPCCharacter.h"
#include "Animation/HeroAnimInstance.h"
#include "Components/BoxComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interactions/InteractionComponent.h"
#include "Inventory/InventoryComponent.h"
#include "Pickup/SwordActor.h"
#include "LockOn/LockonComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Perception/AISense_Sight.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "CableComponent.h"
#include "Pickup/GrapplePoint.h"


// Sets default values
AHeroCharacter::AHeroCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>("Spring Arm");
	SpringArm->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);

	InteractionComp = CreateDefaultSubobject<UInteractionComponent>("InteractionComponent");
	InventoryComp = CreateDefaultSubobject<UInventoryComponent>("InventoryComponent");

	CableComp = CreateDefaultSubobject<UCableComponent>("CableComponent");
	CableComp->SetupAttachment(RootComponent);
	CableComp->SetVisibility(false);
	
	Health = 2000.f;

	GetCharacterMovement()->MaxWalkSpeed = PlayerWalkSpeed;
	bItemEquipped = false;
	bShouldRun = false;
	bShouldAttack = false;
	bisplayerAlive = true;
	ActionType = ECharacterActionType::NotAttacking;

	
	LockonComp = CreateDefaultSubobject<ULockonComponent>("Lockon");

	SetupStimulusSource();
}

void AHeroCharacter::SetupStimulusSource()
{
	StimulusSource = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>("StimulusSource");
	if (StimulusSource)
	{
		StimulusSource->RegisterForSense(TSubclassOf<UAISense_Sight>());
		StimulusSource->RegisterWithPerceptionSystem();
	}
}

void AHeroCharacter::TeleportRotationLocationOfAttacker(USkeletalMeshComponent* Attacker)
{
	if (!Attacker || !Attacker->GetOwner()) return;

	AActor* AttackerOwner = Attacker->GetOwner();

	// Get attacker's world transform
	FVector AttackerLocation = AttackerOwner->GetActorLocation();
	FRotator AttackerRotation = AttackerOwner->GetActorRotation();

	// Offset behind attacker (backstab position)
	const float BackstabDistance = 100.f;
	FVector BackstabLocation = AttackerLocation - AttackerOwner->GetActorForwardVector() * BackstabDistance;

	// Rotate to face same direction as attacker
	FRotator HeroRotation = AttackerRotation;

	// Apply teleport
	SetActorLocationAndRotation(BackstabLocation, HeroRotation, false, nullptr, ETeleportType::TeleportPhysics);
}


// Called when the game starts or when spawned
void AHeroCharacter::BeginPlay()
{
	Super::BeginPlay();
	myPlayerController = Cast<APlayerController>(GetController());
	if (myPlayerController)
	{
		UEnhancedInputLocalPlayerSubsystem* mySubSys = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(myPlayerController->GetLocalPlayer());
		if (mySubSys)
		{
			mySubSys->AddMappingContext(DefaultIMC,0);
		}
	}
	
}

void AHeroCharacter::Move(const FInputActionValue& Value)
{
	
	if (Controller)
	{
		FVector2D MoveValue = Value.Get<FVector2D>();

		// Get control rotation and zero out pitch/roll
		FRotator ControlRotation = GetControlRotation();
		ControlRotation.Pitch = 0.0f;
		ControlRotation.Roll = 0.0f;

		// Get forward and right vectors based on control rotation
		FVector ForwardDirection = FRotationMatrix(ControlRotation).GetUnitAxis(EAxis::X);
		FVector RightDirection = FRotationMatrix(ControlRotation).GetUnitAxis(EAxis::Y);

		// Apply movement
		AddMovementInput(ForwardDirection, MoveValue.X);
		AddMovementInput(RightDirection, MoveValue.Y);
	}
}

void AHeroCharacter::Look(const FInputActionValue& Value)
{
	if (Controller)
	{
		FVector2D LookValue = Value.Get<FVector2D>();

		// Get control rotation and zero out pitch/roll
	
		// Add Yaw (Left/Right) and Pitch (Up/Down) input
		AddControllerYawInput(LookValue.X);
		AddControllerPitchInput(LookValue.Y);
	}
}

void AHeroCharacter::Interact()
{
	InteractionComp->PlayerInteraction(this);
}

void AHeroCharacter::Attack()
{    if (ActionType != ECharacterActionType::NotAttacking || !bItemEquipped)
     {
	   return; // Ignore if already attacking or nothing is equipped
     }
	
	PlayAttackMontage();
	ActionType = ECharacterActionType::Attacking;
	UE_LOG(LogTemp, Warning, TEXT("Attack() called - ActionType: %d"), (int32)ActionType);
}

void AHeroCharacter::PlayAttackMontage()
{
	if (ActionType != ECharacterActionType::NotAttacking || !bItemEquipped ||bisGrappling == true)
	{
		return;
	}
	HeroAnimInstance = Cast<UHeroAnimInstance>(GetMesh()->GetAnimInstance());
	if (HeroAnimInstance && AttackMontage1)
	{
		int32 SectionNumber = FMath::RandRange(0,1);
	    UAnimMontage* SelectedMontage = nullptr;
		switch (SectionNumber)
		{
			case 0:
				SelectedMontage = AttackMontage1;
			break;

		    case 1:
		    	SelectedMontage = AttackMontage2;
			break;

			default:
			    UE_LOG(LogTemp, Warning, TEXT("Section number is invalid"));
			break;
		}
		if (SelectedMontage)
		{
			HeroAnimInstance->Montage_Play(SelectedMontage);
			ActionType = ECharacterActionType::Attacking;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Selected Montage is nullptr"));
		}
	}
}

void AHeroCharacter::PressedBlockAttack()
{
	if (bItemEquipped == true || bisGrappling == false)
	{
		bIsPlayerBlocking = true;
		GetCharacterMovement()->MaxWalkSpeed = PlayerWalkSpeed;
		
	}
	
}

void AHeroCharacter::ReleaseBlockAttack()
{
	bIsPlayerBlocking = false;
	GetCharacterMovement()->MaxWalkSpeed = PlayerWalkSpeed;
}

void AHeroCharacter::PressedGrappling()
{
	FVector StartLocation = GetActorLocation();
	FRotator CameraRot = Camera->GetComponentRotation();
	FVector EndLocation = StartLocation + (CameraRot.Vector() * MaxGrappleDistance);

	FHitResult Hit;

	// Perform sweep using a sphere
	bool bHit = GetWorld()->SweepSingleByChannel(
		Hit,
		StartLocation,
		EndLocation,
		FQuat::Identity,
		ECC_GameTraceChannel3,
		FCollisionShape::MakeSphere(100.f)
	);

	
	if (bHit)
	{
		UE_LOG(LogTemp, Warning, TEXT("Grappling hit"));

		bisGrappling = true;

		GetCharacterMovement()->SetMovementMode(MOVE_Flying);

		CableComp->SetVisibility(true);

		//GrappleLaunch(StartLocation,CameraRot);
		
		GrapplePointLocation = Hit.ImpactPoint;

		// Debug draw: sphere at end location and line
		DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Blue, false, 2.0f);
		DrawDebugSphere(GetWorld(), EndLocation, 100.f, 12, FColor::Green, false, 2.0f);

	}
	
}

void AHeroCharacter::ReleaseGrappling()
{
	bisGrappling = false;
	if (!GetCharacterMovement()->IsFalling())
	{
		CableComp->SetVisibility(false);
		GetCharacterMovement()->SetMovementMode(MOVE_Walking);
	}
	
}

void AHeroCharacter::GrappleLaunch(FVector SpawnLoc, FRotator SpawnRot)
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	GrappleActor = GetWorld()->SpawnActor<AGrapplePoint>(GrapplePointClass, SpawnLoc, SpawnRot,SpawnParams);
}

void AHeroCharacter::Stealth()
{
	if (!EnemyAI)
	{
		return;
	}
	if (bItemEquipped == true)
	{
		EnemyAI->EnemyStealthVic();
		PlayStealthMontage();
		TeleportRotationLocationOfAttacker(EnemyAI->Attacker);
		
		FTimerHandle TimerHandle;
		
		GetWorld()->GetTimerManager().SetTimer(TimerHandle,
			   this,&AHeroCharacter::EndStealthReset,2.f,false);
	}
	
}

void AHeroCharacter::PlayStealthMontage()
{
	HeroAnimInstance = Cast<UHeroAnimInstance>(GetMesh()->GetAnimInstance());
	if (HeroAnimInstance)
	{
		HeroAnimInstance->Montage_Play(StealthMontage,1);
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		Camera->bUsePawnControlRotation = true;
	}
}

void AHeroCharacter::HitReactPlayer()
{
		HeroAnimInstance = Cast<UHeroAnimInstance>(GetMesh()->GetAnimInstance());
		if (HeroAnimInstance)
		{
			if (HeroAnimInstance->IsAnyMontagePlaying())
			{
				HeroAnimInstance->Montage_Stop(0.2f);
			}
			SetWeaponCollisionEnabled(ECollisionEnabled::NoCollision);
			HeroAnimInstance->Montage_Play(HitMontagePlayer);
			ActionType = ECharacterActionType::NotAttacking;
		}
}

void AHeroCharacter::EndAttacking()
{
	GetCharacterMovement()->MaxWalkSpeed = PlayerWalkSpeed;
	ActionType = ECharacterActionType::NotAttacking;
	SetWeaponCollisionEnabled(ECollisionEnabled::NoCollision);
	UE_LOG(LogTemp, Warning, TEXT("Attack ended"));
}

void AHeroCharacter::EndStealthReset()
{
	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	Camera->bUsePawnControlRotation = false;
}

void AHeroCharacter::SetWeaponCollisionEnabled(ECollisionEnabled::Type CollisionEnabled)
{
	if (WeaponSwordActor!= nullptr && WeaponSwordActor->WeaponBox != nullptr)
	{
		WeaponSwordActor->WeaponBox->SetCollisionEnabled(CollisionEnabled);
	}

}

void AHeroCharacter::Die()
{
	// Disable player input AFTER playing the montage
	if (myPlayerController)
	{
		DisableInput(myPlayerController);
		bisplayerAlive = false;
	}
	if (PlayerDeathSound)
	{
	    UGameplayStatics::PlaySoundAtLocation(this, PlayerDeathSound, GetActorLocation());
	}

	// Unregister from AI perception system if applicable
	if (StimulusSource)
	{
		StimulusSource->UnregisterFromPerceptionSystem();
	}
}


void AHeroCharacter::PlayerJump()
{
	if (bIsPlayerBlocking == false)
	{
		Jump();
	}

}


float AHeroCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
                                 class AController* EventInstigator, AActor* DamageCauser)
{
	
	Health -= DamageAmount;

	UE_LOG(LogTemp, Warning, TEXT("%s took %f damage"), *GetName(), DamageAmount);

	if (Health <= 0.f)
	{
		Die();
		UE_LOG(LogTemp,Warning,TEXT("Player is Dead Play DEATH animation"));
	}

	return DamageAmount;
}


void AHeroCharacter::ShiftPressed()
{
	if (bIsPlayerBlocking == false || bisGrappling == false)
	{
		bShouldRun = true;
		GetCharacterMovement()->MaxWalkSpeed = PlayerRunSpeed;
	}

}

void AHeroCharacter::ShiftReleased()
{
	bShouldRun = false;
	GetCharacterMovement()->MaxWalkSpeed = PlayerWalkSpeed;
}

// Called every frame
void AHeroCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	if (bisGrappling)
	{
		CableComp->EndLocation = GetActorTransform().InverseTransformPosition(GrapplePointLocation);

		FVector DirectionToGrapple = (GrapplePointLocation - GetActorLocation()).GetSafeNormal();
		FVector CurrentVelocity = GetCharacterMovement()->Velocity;
		FVector TargetVelocity = DirectionToGrapple * 2000.f; // Define GrappleSpeed

		// Calculate the velocity change needed to reach the target speed
		FVector VelocityChange = TargetVelocity - CurrentVelocity;

		// Apply an acceleration force to reach the target velocity
		GetCharacterMovement()->AddForce(VelocityChange * GetCharacterMovement()->Mass / DeltaTime);
	}
}

// Called to bind functionality to input
void AHeroCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* MyEnhancedInputComp = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (MyEnhancedInputComp)
	{
		MyEnhancedInputComp->BindAction( MoveAction,ETriggerEvent::Triggered,this,&AHeroCharacter::Move);
		MyEnhancedInputComp->BindAction( LookAction,ETriggerEvent::Triggered,this,&AHeroCharacter::Look);
		MyEnhancedInputComp->BindAction( InteractAction,ETriggerEvent::Started,this,&AHeroCharacter::Interact);
		MyEnhancedInputComp->BindAction( ShiftAction,ETriggerEvent::Started,this,&AHeroCharacter::ShiftPressed);
		MyEnhancedInputComp->BindAction( ShiftAction,ETriggerEvent::Completed,this,&AHeroCharacter::ShiftReleased);
		MyEnhancedInputComp->BindAction( AttackAction,ETriggerEvent::Started,this,&AHeroCharacter::Attack);
		MyEnhancedInputComp->BindAction( BlockAction,ETriggerEvent::Started,this,&AHeroCharacter::PressedBlockAttack);
		MyEnhancedInputComp->BindAction( BlockAction,ETriggerEvent::Completed,this,&AHeroCharacter::ReleaseBlockAttack);
		MyEnhancedInputComp->BindAction( StealthAction,ETriggerEvent::Started,this,&AHeroCharacter::Stealth);
		MyEnhancedInputComp->BindAction( JumpAction,ETriggerEvent::Started,this,&AHeroCharacter::PlayerJump);
		MyEnhancedInputComp->BindAction( GrappleAction,ETriggerEvent::Started,this,&AHeroCharacter::PressedGrappling);
		MyEnhancedInputComp->BindAction( GrappleAction,ETriggerEvent::Completed,this,&AHeroCharacter::ReleaseGrappling);
		
	}
}

