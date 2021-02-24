// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "MainMenu.generated.h"

/**
 *
 */
UCLASS()
class INTROTOPROG115_API UMainMenu : public UMenuWidget
{
	GENERATED_BODY()

public:

protected:

	UFUNCTION()
		virtual bool Initialize();

private:

	UPROPERTY(meta = (BindWidget))
		class UButton* PlayBtn;

	UPROPERTY(meta = (BindWidget))
		class UButton* QuitBtn;

	UFUNCTION()
		void PlayPressed();

	UFUNCTION()
		void QuitPressed();

};
