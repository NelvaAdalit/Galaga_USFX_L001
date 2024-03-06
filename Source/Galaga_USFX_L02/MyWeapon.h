// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyWeapon.generated.h"

UCLASS()
class GALAGA_USFX_L02_API AMyWeapon : public AActor
{
	GENERATED_BODY()


public:	
	// Sets default values for this actor's properties
	AMyWeapon();
private:
	FString tipoArma;
	float dano;
	float velocidad;
	float rangoAlcance;
	float cantidaddeMunicion;
	float cantidadMaximamunicion;
public:
public:
	FORCEINLINE FString GetTipoArmacia() const { return tipoArma; }
	FORCEINLINE float GetDano() const { return dano; }
	FORCEINLINE float GetRangoAlcance() const { return rangoAlcance; }
	FORCEINLINE float GetCantidaddeMunicion() const { return cantidaddeMunicion; }
	FORCEINLINE float GetCantidadMaximamunicion() const { return cantidadMaximamunicion; }


	FORCEINLINE void SetTipoArma(FString _tipoArma) { tipoArma = _tipoArma; }
	FORCEINLINE void SetDano(float _dano) { dano = _dano; }
	FORCEINLINE void SetRangoAlcance(float _rangoAlcance) { rangoAlcance = _rangoAlcance; }
	FORCEINLINE void SetCantidaddeMunicion(float _cantidaddeMunicion) { cantidaddeMunicion = _cantidaddeMunicion; }
	FORCEINLINE void SetCantidadMaximamunicion(float _cantidadMaximamunicion) { cantidadMaximamunicion = _cantidadMaximamunicion; }
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
