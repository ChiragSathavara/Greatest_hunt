// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/ItemBase.h"
#include "SwordBase.generated.h"

/**
 * 
 */
class ASwordActor;
UCLASS()
class GREATESTHUNT_API USwordBase : public UItemBase
{
	GENERATED_BODY()

public:
	USwordBase();

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Item")
	TSubclassOf<ASwordActor> SwordBaseClass;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Item")
	ASwordActor* EquippedSword;
	
	virtual void Use(AHeroCharacter* Hero)override;
	void EquipItem(AHeroCharacter* myHero);
	void UnEquipItem(AHeroCharacter* myHero);
	
};

