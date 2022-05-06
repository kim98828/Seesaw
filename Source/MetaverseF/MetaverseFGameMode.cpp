// Copyright Epic Games, Inc. All Rights Reserved.

#include "MetaverseFGameMode.h"
#include "MetaverseFCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMetaverseFGameMode::AMetaverseFGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
