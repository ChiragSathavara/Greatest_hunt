// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/SwordBase.h"
#include "Pickup/SwordActor.h"
#include "Hero/HeroCharacter.h"

USwordBase::USwordBase()
{
	
}

void USwordBase::Use(AHeroCharacter* Hero)
{
	if (Hero->bItemEquipped == false)
	{
	     EquipItem(Hero);
	}
	else
	{
		UnEquipItem(Hero);
	}
	
}

void USwordBase::EquipItem(AHeroCharacter* myHero)
{
	if (SwordBaseClass == nullptr|| myHero == nullptr)
	{
	   return;
	}

	UWorld* PlayerWorld = myHero->GetWorld();

	if (PlayerWorld == nullptr)
	{
		return;
	}
	
	FActorSpawnParameters spawnParameters;
	spawnParameters.Owner = myHero;

	EquippedSword = GetWorld()->SpawnActor<ASwordActor>(SwordBaseClass, spawnParameters);
	if (EquippedSword)
	{
		EquippedSword->AttachToComponent(myHero->GetMesh(),FAttachmentTransformRules::SnapToTargetIncludingScale,"SwordHandHolder");
		myHero->WeaponSwordActor = EquippedSword;
		myHero->bItemEquipped = true;
	}
	
}
void USwordBase::UnEquipItem(AHeroCharacter* myHero)
{
	if (EquippedSword)
	{
		EquippedSword->Destroy();
		myHero->WeaponSwordActor = nullptr;
		EquippedSword = nullptr;
		myHero->bItemEquipped = false;
	}
}
