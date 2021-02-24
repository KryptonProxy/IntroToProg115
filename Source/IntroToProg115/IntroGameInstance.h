// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "IntroGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class INTROTOPROG115_API UIntroGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:

	UIntroGameInstance(const FObjectInitializer & ObjectInitializer);

	virtual void Init();

	UFUNCTION(BlueprintCallable)
	void LoadMainMenu();

	TSubclassOf<class UUserWidget> MainMenuClass;

	UFUNCTION(BlueprintCallable)
	void InGameLoadMenu();

	TSubclassOf<class UUserWidget> InGameMenuClass;

	UFUNCTION(BlueprintCallable)
		void SayHi();

	UFUNCTION(exec)
		void Kill();

};
