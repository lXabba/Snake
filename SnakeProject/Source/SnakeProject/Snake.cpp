// Fill out your copyright notice in the Description page of Project Settings.


#include "Snake.h"
#include "SnakeElementBase.h"

// Sets default values
ASnake::ASnake()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ElementSize = 100.f;

}

// Called when the game starts or when spawned
void ASnake::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASnake::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASnake::AddSnakeElement()
{
	FVector NewLocation(SnakeElements.Num() * ElementSize, 0, 0);
	FTransform NewTransform(NewLocation);
	auto NewSnakeElement = GetWorld()->SpawnActor<ASnakeElementBase>(SnakeElementClass, NewTransform);
	SnakeElements.Add(NewSnakeElement);
}

