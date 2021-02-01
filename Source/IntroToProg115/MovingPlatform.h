// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class INTROTOPROG115_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	AMovingPlatform();

	// The rate at which the blocker mobes
	UPROPERTY(EditAnywhere)
	float Speed = 300;

	UPROPERTY(EditAnywhere, meta = (MakeEditWidget = true))
	FVector TargetLocation;
	// 0, 0, 0

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:

	FVector GlobalTargetLocation;
	FVector GlobalStartLocation;
};
