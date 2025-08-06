// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/InventoryComponent.h"

#include "Items/ItemBase.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	
}
// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	for (auto& DefaultAddedItem : DefaultItems)
	{
       Items.Add(DefaultAddedItem);
	}
	
}

bool UInventoryComponent::AddItem(UItemBase* item)
{
	if (Items.Num() >= Capacity || item == nullptr)
	{
		return false;
	}
	item->ItemWorld = GetWorld();
	item->OwningInventory = this;
	Items.Add(item);

	OnInventoryUpdated.Broadcast();
	return true;
}

bool UInventoryComponent::RemoveItem(UItemBase* item)
{
	if (item != nullptr)
	{
	    item->ItemWorld = nullptr;
		item->OwningInventory = nullptr;
		Items.Remove(item);

		OnInventoryUpdated.Broadcast();
		return true;
	}
	return false;
}






