// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveAlienigena.generated.h"

UCLASS()
class GALAGA_USFX_L02_API ANaveAlienigena : public AActor
{
	GENERATED_BODY()


public:	
	// Sets default values for this actor's properties
	ANaveAlienigena();
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Navealienigenamesh;
private:
	FString nombreAlienigena;
	float resistencia;
	float velocidad;
	float danoProducido;
	float tiempoDisparo;
	float posicionX;
	float posicionY;
	float posicionZ;

public:
	FORCEINLINE FString GetNombreAlienigena() const { return nombreAlienigena; }
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetDanoProducido() const { return danoProducido; }
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }
	FORCEINLINE float GetPosicionX() const { return posicionX; }
	FORCEINLINE float GetPosicionY() const { return posicionY; }
	FORCEINLINE float GetPosicionZ() const { return posicionZ; }

	FORCEINLINE void SetNombreAlienigena(FString _nombreAlienigena) { nombreAlienigena = _nombreAlienigena; }
	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetDanoProducido(float _danoProducido) { danoProducido = _danoProducido; }
	FORCEINLINE void SetTiempoDisparo(float _tiempoDisparo) { tiempoDisparo = _tiempoDisparo; }
	FORCEINLINE void SetPosicionX(float _posicionX) { posicionX = _posicionX; }
	FORCEINLINE void SetPosicionY(float _posicionY) { posicionY = _posicionY; }
	FORCEINLINE void SetPosicionZ(float _posicionZ) { posicionZ = _posicionZ; }


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
