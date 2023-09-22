// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetActor.h"

// Sets default values
ATargetActor::ATargetActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	maxHitPoints = 5;
	currentHitPoints = maxHitPoints;
}

// Called when the game starts or when spawned
void ATargetActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATargetActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATargetActor::TakeHit() {
	if (currentHitPoints > 0) {
		currentHitPoints--;

		if (currentHitPoints == 0) {
			Destroy();
		}
	}
}

