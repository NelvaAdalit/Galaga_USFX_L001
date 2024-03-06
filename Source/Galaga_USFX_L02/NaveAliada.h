// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveAliada.generated.h"

UCLASS()
class GALAGA_USFX_L02_API ANaveAliada : public AActor
{
	GENERATED_BODY()
private:

	FString nombreAliada;
	float salud;
	float velocidad;
	float armamento;//potencia de arma
	float defesnsa;// resistencia de la nave
	FVector posicion;
	int capacidadCarga;
	float energia;


public:
	FORCEINLINE FString GetNombreAliada()const { return nombreAliada; }
	FORCEINLINE float GetSalud() const { return salud; }
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetArmamento() const { return armamento; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }
	FORCEINLINE  int GetCapacidadCarga() const { return capacidadCarga; }
	FORCEINLINE float GetEnergia() const { return energia; }
public:
	FORCEINLINE void SetNombreAliada(FString _nombreAliada) { nombreAliada = _nombreAliada; }
	FORCEINLINE void SetVelocidad(float _salud) { salud = _salud; }
	FORCEINLINE void SetArmamento(float _armamento) { armamento = _armamento; }
	FORCEINLINE void SetPosicion(FVector _posicion) {posicion = _posicion; }
	FORCEINLINE void SetCapacidad(int _capacidadCarga) { capacidadCarga = _capacidadCarga; }
	FORCEINLINE void SetEnergia(float _energia) { energia = _energia; }

public:	
	// Sets default values for this actor's properties
	ANaveAliada();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
