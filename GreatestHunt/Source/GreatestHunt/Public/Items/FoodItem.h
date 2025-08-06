// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/ItemBase.h"
#include "FoodItem.generated.h"

/**
 * 
 */
UCLASS()
class GREATESTHUNT_API UFoodItem : public UItemBase
{
	GENERATED_BODY()

public:

	UFoodItem();

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	float HealthToHeal;

	
	
	virtual void Use(AHeroCharacter* Hero)override;
};
