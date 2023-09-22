// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TargetActor.generated.h"

UCLASS()
class FPSPROJECT_API ATargetActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATargetActor();

	void TakeHit();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Target")
		int maxHitPoints;

private:
	int currentHitPoints;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
