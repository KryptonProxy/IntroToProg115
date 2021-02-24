// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu.h"
#include "IntroGameInstance.h"
#include "Components/Button.h"
#include "IntroGameInstance.h"

bool UMainMenu::Initialize()
{
	const bool Success = Super::Initialize();
	if (!Success) return false;

	if (!ensure(PlayBtn != nullptr))
	{
		return false;
	}

	PlayBtn->OnClicked.AddDynamic(this, &UMainMenu::PlayPressed);

	if (!ensure(PlayBtn != nullptr)) return false;

	QuitBtn->OnClicked.AddDynamic(this, &UMainMenu::QuitPressed);

	return true;

}

void UMainMenu::PlayPressed()
{
	TakeDown();

	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	PlayerController->ConsoleCommand("open ThirdPersonExampleMap");
}

void UMainMenu::QuitPressed()
{
	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	PlayerController->ConsoleCommand("Quit");
}
