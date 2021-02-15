// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameMenu.h"
#include "IntroGameInstance.h"
#include "Components/Button.h"

bool UInGameMenu::Initialize()
{
	const bool Success = Super::Initialize();
	if (!Success) return false;

	if (!ensure(ResumeBtn != nullptr))
	{
		return false;
	}

	ResumeBtn->OnClicked.AddDynamic(this, &UInGameMenu::ResumePressed);

	if (!ensure(ResumeBtn != nullptr)) return false;

	QuitBtn->OnClicked.AddDynamic(this, &UInGameMenu::QuitPressed);

	return true;
	
}

void UInGameMenu::ResumePressed()
{
	TakeDown();
}

void UInGameMenu::QuitPressed()
{
	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	PlayerController->ConsoleCommand("Quit");
}
