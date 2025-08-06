// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup/PickUpActor.h"
#include "Components/StaticMeshComponent.h"
#include "Hero/HeroCharacter.h"
#include "Items/ItemBase.h"
#include "Inventory/InventoryComponent.h"

// Sets default values
APickUpActor::APickUpActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PickUpMesh = CreateDefaultSubobject<UStaticMeshComponent>("PickUpMesh");
	RootComponent = PickUpMesh;
}

void APickUpActor::OnInteraction_Implementation(AHeroCharacter* MyHero)
{
	if (MyItemTemplate == nullptr || MyHero == nullptr)
	{
		return;
	}
	UInventoryComponent* myInventory = MyHero->FindComponentByClass<UInventoryComponent>();
	if (myInventory == nullptr)
	{
		return;
	}
	UItemBase* InventoryItem = DuplicateObject<UItemBase>(MyItemTemplate,this);

	if (InventoryItem == nullptr)
	{
		return;
	}

	if (myInventory->AddItem(InventoryItem))
	{
		Destroy();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("APickUpActor::OnInteraction - Inventory full or failed to add item '%s'."), *InventoryItem->GetName());
	}
	
}

// Called when the game starts or when spawned
void APickUpActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickUpActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


