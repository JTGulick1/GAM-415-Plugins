// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "MyActor.generated.h"

UCLASS()
class MYPROJECT_API AMyActor : public AActor
{

	GENERATED_BODY()

public:

	AMyActor();
	virtual void PostActorCreated() override;
	virtual void PostLoad() override;
	virtual void CreateSquare();
private:
	UPROPERTY(VisibleAnywhere)
		UProceduralMeshComponent* mesh;

};
