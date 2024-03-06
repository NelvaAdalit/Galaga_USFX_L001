// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escenario.generated.h"

UCLASS()
class GALAGA_USFX_L02_API AEscenario : public AActor
{
	GENERATED_BODY()
private:
	float tamanoMapa;
	int numeroNavesEnemigas;
	float puntuaciondelJugador;
	float niveldeDificultad;
	float recursosDisponibles;
public:
	FORCEINLINE float GetTamanoMapa() const { return tamanoMapa; }
	FORCEINLINE int GetNumeroNavesEnemigas() const { return numeroNavesEnemigas; }
	FORCEINLINE float GetPuntuaciondelJugador() const { return puntuaciondelJugador; }
	FORCEINLINE float GetNiveldeDificultad() const { return niveldeDificultad; }
	FORCEINLINE float GetRecursosDisponibles() const { return recursosDisponibles; }

	FORCEINLINE void SetTamanoMapa(float _tamanoMapa) { tamanoMapa = _tamanoMapa; }
	FORCEINLINE void SetNumeroNavesEnemigas(float _numeroNavesEnemigas) { numeroNavesEnemigas = _numeroNavesEnemigas; }
	FORCEINLINE void SetPuntuaciondelJugador(float _puntuaciondelJugador) { puntuaciondelJugador = _puntuaciondelJugador; }
	FORCEINLINE void SetNiveldeDificultad(float _niveldeDificultad) { niveldeDificultad = _niveldeDificultad; }
	FORCEINLINE void SetRecursosDisponibles(float _recursosDisponibles) { recursosDisponibles = _recursosDisponibles; }
	
public:	
	// Sets default values for this actor's properties
	AEscenario();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
