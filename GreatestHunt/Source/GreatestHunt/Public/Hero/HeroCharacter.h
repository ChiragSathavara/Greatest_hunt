// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"
#include "Data/ActorStructDataType.h"
#include "HeroCharacter.generated.h"

class ASwordActor;
class UCameraComponent;
class USpringArmComponent;
class UInteractionComponent;
class UInventoryComponent;
class UAnimMontage;
class USwordActor;
class ULockonComponent;
class UHeroAnimInstance;
class AAINPCCharacter;
class USkeletalMeshComponent;
class UCableComponent;
class USoundBase;
class AGrapplePoint;

UCLASS()
class GREATESTHUNT_API AHeroCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHeroCharacter();

	UPROPERTY()
	APlayerController* myPlayerController ;

	UPROPERTY()
	AAINPCCharacter* EnemyAI;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	UCableComponent* CableComp;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	UInteractionComponent* InteractionComp;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	UInventoryComponent* InventoryComp;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Components")
	ULockonComponent* LockonComp;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Inputs")
	UInputAction* MoveAction;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Inputs")
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Inputs")
	UInputAction* InteractAction;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Inputs")
	UInputAction* JumpAction;
	
	//UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Inputs")
	//UInputAction* DeathAction;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Inputs")
	UInputAction* GrappleAction;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Inputs")
	UInputAction* ShiftAction;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Inputs")
	UInputAction* AttackAction;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Inputs")
	UInputAction* BlockAction;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Inputs")
	UInputAction* StealthAction;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Inputs")
	UInputMappingContext* DefaultIMC;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data | Montage")
	UAnimMontage* AttackMontage1;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data | Montage")
	UAnimMontage* AttackMontage2;


	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data | Montage")
	UAnimMontage* HitMontagePlayer;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data | Montage")
	UAnimMontage* DeathMontage;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data | Montage")
	UAnimMontage* StealthMontage;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data")
	float Health;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data")
	bool bItemEquipped;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data")
	int PlayerWalkSpeed = 300.f;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data")
	int PlayerRunSpeed = 600.f;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data")
	ECharacterActionType ActionType;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data")
	bool bShouldRun;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data")
	bool bShouldAttack;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data")
	bool bCanStealth;
	
    UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data")
	ASwordActor* WeaponSwordActor;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data")
	bool bisplayerAlive;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data")
	bool bIsPlayerBlocking;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data")
	bool bIsGrappling;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data | Sound")
	USoundBase* PlayerDeathSound;
	
	UPROPERTY()
	float ParryWindowTime = 0.4f;

	FTimerHandle ParryWindowTimerHandle;
	
	UPROPERTY()
	UHeroAnimInstance* HeroAnimInstance;

	UPROPERTY()
	float MaxGrappleDistance = 1000.f;
	bool bisGrappling = false;
	FVector GrapplePointLocation;

	UPROPERTY()
	AGrapplePoint* GrappleActor;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data")
	TSubclassOf<AGrapplePoint> GrapplePointClass;
	
//AI SECTION

	UPROPERTY()
	class UAIPerceptionStimuliSourceComponent* StimulusSource;

	void SetupStimulusSource();

	void TeleportRotationLocationOfAttacker(USkeletalMeshComponent* Attacker);
	
    void PlayerJump();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void ShiftPressed();
	void ShiftReleased();
	void Interact();
	void Attack();
    void PlayAttackMontage();
   // void PlayDeathMontage();
	void PressedBlockAttack();
	void ReleaseBlockAttack();
	
	void PressedGrappling();
	void ReleaseGrappling();
	void GrappleLaunch(FVector SpawnLoc, FRotator SpawnRot);
	
	void Stealth();
	void PlayStealthMontage();

	UFUNCTION(BlueprintCallable)
	void EndAttacking();
	void EndStealthReset();

	UFUNCTION(BlueprintCallable)
	void SetWeaponCollisionEnabled(ECollisionEnabled::Type CollisionEnabled);

	UFUNCTION(BlueprintCallable)
	void Die();

	
	
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
	                         class AController* EventInstigator, AActor* DamageCauser) override;
public:

	void HitReactPlayer();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};



