// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Enemy.generated.h"

UCLASS()
class MYPROJECT18_API AEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemy();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	//keep track of elapsed time
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float RunningTime;

	//Health Values
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float Blue_Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float Red_Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float Green_Health;
	
	
};
