// FRAnimalController.cpp

#include "FRAnimalAIController.h"

void AFRAnimalAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	
	RunBehaviorTree(BTAsset);
}
