// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/FoodItem.h"

#include "Hero/HeroCharacter.h"
#include "Inventory/InventoryComponent.h"

UFoodItem::UFoodItem()
{
	HealthToHeal = 25.f;
	isStackableitem = true;
	if (isStackableitem == true)
	{
		MaxStackableItem = 5;
		Quantity = MaxStackableItem; 
	}
	
}

void UFoodItem::Use(AHeroCharacter* Hero)
{
	if (Hero == nullptr)
	{
		return;
	}

	if (Quantity > 0)
	{
		Hero->Health += HealthToHeal;
		Quantity--;

		if (Quantity == 0)
		{
			if (Hero->InventoryComp != nullptr)
			{
				Hero->InventoryComp->RemoveItem(this);
			}
		}
		
	}
	
}
