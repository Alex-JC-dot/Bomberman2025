


#include "Bob.h"

ABob::ABob()
{
	PrimaryActorTick.bCanEverTick = true;

}
void ABob::BeginPlay()
{
	Super::BeginPlay();
	SetLifeSpan(10);

}
void ABob::EndPlay(const EEndPlayReason::Type EndPlayReason) {
	Super::EndPlay(EndPlayReason);
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 7.0f, FColor::Green, TEXT("💀 ¡Bob ha sido eliminado!"));
	}
}

void ABob::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


