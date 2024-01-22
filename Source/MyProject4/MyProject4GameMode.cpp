// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject4GameMode.h"
#include "MyProject4Character.h"
#include "UObject/ConstructorHelpers.h"

AMyProject4GameMode::AMyProject4GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
