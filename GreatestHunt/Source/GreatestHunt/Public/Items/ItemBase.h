// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemBase.generated.h"

class AHeroCharacter;
/**
 * 
 */
class UStaticMesh;
class UTexture2D;
class UInventoryComponent;

UCLASS(Abstract,BlueprintType,Blueprintable,EditInlineNew,DefaultToInstanced)
class GREATESTHUNT_API UItemBase : public UObject
{
	GENERATED_BODY()

public:
	UItemBase();

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Item")
	UStaticMesh* ItemMesh;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Item")
	UTexture2D* ItemThumbnail;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Item")
	FText ItemName;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Item")
	FText ItemDescription;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Item")
	FText UseActionText;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Item")
	bool isStackableitem;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Item")
	int Quantity;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Item")
	int MaxStackableItem;
	
	UPROPERTY()
	UWorld* ItemWorld;

	UPROPERTY(BlueprintReadWrite,Category="Item")
	UInventoryComponent* OwningInventory;

	UFUNCTION(BlueprintCallable)
	virtual void Use(AHeroCharacter* Hero);
	
	FORCEINLINE UWorld* GetWorld() const { return ItemWorld; }
};
