// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAlienigena.h"

// Sets default values
ANaveAlienigena::ANaveAlienigena()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipAlienigena(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_Out.Shape_Trim_90_Out'"));
	// Create the mesh component
	Navealienigenamesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipAlienigena"));
	Navealienigenamesh->SetStaticMesh(ShipAlienigena.Object);
	Navealienigenamesh->SetRelativeScale3D(FVector(5.55f, 5.55f, 5.55f));
	Navealienigenamesh->SetupAttachment(RootComponent);//root princpal
	RootComponent = Navealienigenamesh;

}

// Called when the game starts or when spawned
void ANaveAlienigena::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveAlienigena::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

