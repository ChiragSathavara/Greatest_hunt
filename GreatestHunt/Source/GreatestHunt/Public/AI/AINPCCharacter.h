// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AINPCCharacter.generated.h"


class AAISwordActor;
class UBehaviorTree;
class USphereComponent;
class AHeroCharacter;
class UAnimMontage;
class AAinpcController;
class UAINPCAnimInstance;
class UBoxComponent;
class USkeletalMeshComponent;
class USoundBase;

UCLASS()
class GREATESTHUNT_API AAINPCCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAINPCCharacter();

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI | Weapon")
	TSubclassOf<AAISwordActor>AISwordActorClass;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI | Weapon")
	AAISwordActor* AIEquippedSword;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI | Attacker")
	USkeletalMeshComponent*  Attacker;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI | Attack Range")
	USphereComponent* AttackRangeSphere;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI | Stealth Range")
	UBoxComponent* StealthRangeBox;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI | AttackRangeBool")
	bool isAttackingRange;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI | AttackRangeBool")
	bool isAIAlive;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI | AttackRangeBool")
	AHeroCharacter* Hero;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI | AttackRangeBool")
	 AAinpcController* myNPCController;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI | AttackAnim")
	UAnimMontage* Attack1;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI | AttackAnim")
	UAnimMontage* Attack2;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI | AttackAnim")
	UAnimMontage* HitMontage;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI | Sound")
	USoundBase* DeathSound;
	
	UPROPERTY(BlueprintReadOnly)
    float AIHealth;

	
	UPROPERTY()
	UAINPCAnimInstance* MyNpcAnim;

	
	
	void AIDie();
	
	void SwordEquipped();

	void EnemyAttack();

	void EnemyHitReact();

	void DeleteAIEnemy();
	
	UBehaviorTree* GetBehaviorTree() const { return Tree;}

	UFUNCTION()
	void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
							  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
							  bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
							UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	
	UFUNCTION()
	void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
							  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
							  bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnBoxEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
							UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	UFUNCTION(BlueprintCallable)
	void EnemyAttackEnd();

	void EnemyStealthVic();
	
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
								 class AController* EventInstigator, AActor* DamageCauser) override;

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI | Brain")
	UBehaviorTree* Tree;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void SetWeaponCollisionEnabled(ECollisionEnabled::Type CollisionEnabled);


};


