// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyRecord.generated.h"

UCLASS()
class GALAGA_USFX_L02_API AMyRecord : public AActor
{
	GENERATED_BODY()

	






public:	
	// Sets default values for this actor's properties
	AMyRecord();
private:
	FString minombre;
	float level;
	float date;
	float score;
	float duration;

public:

	FORCEINLINE FString GetMiNombre() const { return minombre; }
	FORCEINLINE float GetLevel() const { return level; }
	FORCEINLINE float GetDate() const { return date; }
	FORCEINLINE float GetScore() const { return score; }
	FORCEINLINE float GetDuration() const { return duration; }


	FORCEINLINE void SetMiNombre(FString _minombre) { minombre = _minombre; }
	FORCEINLINE void SetLevel(float _level) { level = _level; }
	FORCEINLINE void SetDate(float _date) { date = _date; }
	FORCEINLINE void SetDuration(float _duration) { duration = _duration; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
