// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	FVector MyVector = FVector(1, 2, 3);

	/*UPROPERTY(EditAnywhere)
	int32 MyIntA = 99;

	UPROPERTY(EditAnywhere)
	int32 MyIntB = 99;
	
	UPROPERTY(EditAnywhere)
	int32 MyIntC = 99;

	UPROPERTY(EditAnywhere)
	int32 Int32Sum = 0;
	
	UPROPERTY(EditAnywhere)
	float MyFloatA = 23.99;

	UPROPERTY(EditAnywhere)
	float MyFloatB = 99.23;
	
	UPROPERTY(EditAnywhere)
	float MyFloatC = 23.99;
	
	UPROPERTY(EditAnywhere)
	float FloatSum = 0;

	UPROPERTY(EditAnywhere)
	bool MyBool = true;*/
private:
	int32 testInt = 23;
};
