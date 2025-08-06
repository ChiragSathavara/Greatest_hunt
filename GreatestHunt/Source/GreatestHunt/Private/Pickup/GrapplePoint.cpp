// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup/GrapplePoint.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
AGrapplePoint::AGrapplePoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
    RootComponent = Mesh;

	SphereArea = CreateDefaultSubobject<USphereComponent>("SphereArea");
    SphereArea->SetupAttachment(Mesh);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>("ProMovement");

}

// Called when the game starts or when spawned
void AGrapplePoint::BeginPlay()
{
	Super::BeginPlay();

	SetLifeSpan(3.0f);
}

// Called every frame
void AGrapplePoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

