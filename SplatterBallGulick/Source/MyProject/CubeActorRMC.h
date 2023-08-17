// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RuntimeMeshComponent.h" 
#include "Components/runtimemeshcomponentstatic.h"
#include "CubeActorRMC.generated.h"

UCLASS()
class MYPROJECT_API ACubeActorRMC : public AActor
{
	GENERATED_BODY()

public:
	ACubeActorRMC();
	virtual void GenerateBoxMesh();
	virtual void CreateBoxMesh(FVector BoxRadius, TArray <FVector>& Vertices, TArray <int32>&
		Triangles, TArray <FVector>& Normals, TArray <FVector2D>& UVs, TArray <FRuntimeMeshTangent>&
		Tangents, TArray <FColor>& Colors);
	virtual void PostActorCreated() override;
	virtual void PostLoad() override;
private:
	UPROPERTY(VisibleAnywhere)
		URuntimeMeshComponentStatic* cube1;

};
