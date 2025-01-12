// Fill out your copyright notice in the Description page of Project Settings.


#include "DodgeballFunctionLibrary.h"

bool UDodgeballFunctionLibrary::CanSeeActor(const UWorld* World, FVector Location, const AActor* TargetActor, TArray<const AActor*> IgnoreActors)
{
	if (TargetActor == nullptr) return false;

	FHitResult Hit;
	
	FVector Start = Location;
	FVector End = TargetActor->GetActorLocation();

	ECollisionChannel Channel = ECollisionChannel::ECC_GameTraceChannel1;

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActors(IgnoreActors);

	World->LineTraceSingleByChannel(Hit, Start, End, Channel, QueryParams);
	DrawDebugLine(World, Start, End, FColor::Red);
	
	return Hit.bBlockingHit == false;
}
