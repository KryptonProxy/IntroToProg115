// Fill out your copyright notice in the Description page of Project Settings.


#include "IntroGameInstance.h"

#include "UObject/ConstructorHelpers.h"

#include "Engine/Engine.h"

#include "InGameMenu.h"

UIntroGameInstance::UIntroGameInstance(const FObjectInitializer& ObjectInitializer)
{
	UE_LOG(LogTemp, Warning, TEXT("Game Init"));

	ConstructorHelpers::FClassFinder<UUserWidget>InGameMenuBPClass(TEXT("/Game/UI/InGameMenu"));
	
	if (!ensure(InGameMenuBPClass.Class != nullptr)) return;
	InGameMenuClass = InGameMenuBPClass.Class;
}

void UIntroGameInstance::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("Game Instance Init"));
}

void UIntroGameInstance::InGameLoadMenu()
{
	if (!ensure(InGameMenuClass != nullptr)) return;
	UInGameMenu* GameMenu = CreateWidget<UInGameMenu>(this, InGameMenuClass);

	GameMenu->Setup();
}

void UIntroGameInstance::SayHi()
{
	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return;

	Engine->AddOnScreenDebugMessage(1, 3, FColor::Green, TEXT("Hi"));

}

void UIntroGameInstance::Kill()
{
	GetPrimaryPlayerController(true)->GetOwner()->Destroy();
}