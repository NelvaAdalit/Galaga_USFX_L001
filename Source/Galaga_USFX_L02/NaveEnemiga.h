// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

class UstaticMeshComponent;	

UCLASS()
class GALAGA_USFX_L02_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNaveEnemiga;

protected://para la clase padre son privados y tambien para la clase hija tambien es privado

	float resistencia;//numero de disparos que puede aguantar 
	float velocidad;
	float danoProducido;////cada disparo (potencia de cada proyectil que dispara la nave)
	FString nombre;//name
	float tiempoDisparo;//tiempo que transcurre entre disparo
	int trayectoria;//cada valoro numerico represena aun funcoion que  la nave debe asumir en
	int capacidadPasajeros;
	int capacidadMunicion;
	int tipoNave;
	float Energia;
	float Experiencia;
	FVector posicion;
public:
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetDanoProducido() const { return danoProducido; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }
	FORCEINLINE int GetCapacidadMunicion()const { return capacidadMunicion; }
	FORCEINLINE int GetTipoNave()const { return tipoNave; }
	FORCEINLINE float GetEnergia()const { return Energia; }
	FORCEINLINE float Getexperiencia() const { return Experiencia; }
	FORCEINLINE FVector GetPosicion()const { return posicion; }

	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetDanoProducido(float _danoProducido) { danoProducido = _danoProducido; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetTiempoDisparo(float _tiempoDisparo) { tiempoDisparo = _tiempoDisparo; }
	FORCEINLINE void SetCapcidadMunicion(int _capacidadMunicion) { capacidadMunicion = _capacidadMunicion; }
	FORCEINLINE void SetTipoNave(int _tipoNave) { tipoNave = _tipoNave; }
	FORCEINLINE void Setenergia(float _energia) { Energia = _energia; }
	FORCEINLINE void Setexperiencia(float _Experiencia) { Experiencia = _Experiencia; }
	FORCEINLINE void Setposicion(FVector _posicion) { posicion = _posicion; }

	









public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
