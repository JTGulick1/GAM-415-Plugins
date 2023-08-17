// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h" 
#include "MyActorBox.generated.h"

UCLASS()
class MYPROJECT_API AMyActorBox : public AActor
{
	GENERATED_BODY()

public:
	AMyActorBox();
	virtual void GenerateBoxMesh();
	virtual void CreateBoxMesh(FVector BoxRadius, TArray <FVector>& Vertices, TArray <int32>&
		Triangles, TArray <FVector>& Normals, TArray <FVector2D>& UVs, TArray <FProcMeshTangent>&
		Tangents, TArray <FColor>& Colors);
	virtual void PostActorCreated();
	virtual void PostLoad();
private:
	UPROPERTY(VisibleAnywhere)
		UProceduralMeshComponent* mesh;

};
