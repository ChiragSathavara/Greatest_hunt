// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

class AHeroCharacter;
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryUpdated);

class UItemBase;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GREATESTHUNT_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Inventory")
	TArray<UItemBase*> DefaultItems;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Inventory")
	TArray<UItemBase*> Items;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Inventory")
	int32 Capacity = 15;

	UPROPERTY(BlueprintAssignable,Category="Item")
	FOnInventoryUpdated OnInventoryUpdated;

	bool AddItem(UItemBase* item);
	bool RemoveItem(UItemBase* item);
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	
};
