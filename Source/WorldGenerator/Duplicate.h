// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Duplicate.generated.h"

/**
 * 
 */
UCLASS()
class WORLDGENERATOR_API UDuplicate : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "ActorFuncions", meta = (WorldContext = WorldContextObject))
	static AActor* Duplicate(AActor* InputActor);
};
