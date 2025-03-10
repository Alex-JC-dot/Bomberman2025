// Fill out your copyright notice in the Description page of Project Settings.

#include "Bloque.h"
#include "MyGameModeBase.h"

void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red,
		TEXT("Aparecio el ACTOOR"));
	FTransform SpawnLocation;
	GetWorld()->SpawnActor<ABloque>(
		ABloque::StaticClass(), SpawnLocation);
	FTimerHandle Timer;
	SpawnedActor = GetWorld()->SpawnActor<ABloque>
		(ABloque::StaticClass(), SpawnLocation);
	GetWorldTimerManager().SetTimer(Timer, this,
		&AMyGameModeBase::DestroyActorFunction, 10.0f, false);
};
void AMyGameModeBase::DestroyActorFunction()
{
	if (SpawnedActor != nullptr)
	{
		SpawnedActor->Destroy();
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,
			TEXT("¡Actor eliminado correctamente!"));
		GEngine->AddOnScreenDebugMessage(-1, 7.0f, FColor::Green, TEXT(" Bob ha muerto xd"));
	}
}