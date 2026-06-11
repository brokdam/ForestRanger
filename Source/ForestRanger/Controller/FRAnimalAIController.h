// FRAnimalController.h

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "FRAnimalAIController.generated.h"

UCLASS()
class FORESTRANGER_API AFRAnimalAIController : public AAIController
{
	GENERATED_BODY()
	
public: 
	UPROPERTY(EditDefaultsOnly)
	UBehaviorTree* BTAsset;
	
	virtual void OnPossess(APawn* InPawn) override;
	
};
