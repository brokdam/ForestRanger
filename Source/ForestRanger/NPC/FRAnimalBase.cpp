// FRAnimalBase.cpp

#include "FRAnimalBase.h"

AFRAnimalBase::AFRAnimalBase()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AFRAnimalBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFRAnimalBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFRAnimalBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

