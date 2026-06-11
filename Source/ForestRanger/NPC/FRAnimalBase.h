// FRAnimalBase.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FRAnimalBase.generated.h"

UCLASS()
class FORESTRANGER_API AFRAnimalBase : public ACharacter
{
	GENERATED_BODY()

public:
	AFRAnimalBase();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
