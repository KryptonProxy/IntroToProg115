// Fill out your copyright notice in the Description page of Project Settings.


#include "Test.h"

// Sets default values
ATest::ATest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATest::BeginPlay()
{
	Super::BeginPlay();

	//logging variable to the output log
	int intVar = 5;
	float floatVar = 3.7f;
	FString fstringVar = "an fstring variable"
		;	UE_LOG(LogTemp, Warning, TEXT("Hello World., %d %f %s"), intVar, floatVar, *fstringVar);
	
	//concatenate strings
	FString name = "Gary";
	int32 mana = 450;
	TArray<FStringFormatArg> args;
	args.Add(FStringFormatArg(name));
	args.Add(FStringFormatArg(mana));
	FString string = FString::Format(TEXT("name = {0} Mana = {1}"), args);

	UE_LOG(LogTemp, Warning, TEXT("Your String: %s"), *string);



}

// Called every frame
void ATest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

