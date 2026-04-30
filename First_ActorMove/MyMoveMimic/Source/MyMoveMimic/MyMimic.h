// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyMimic.generated.h"

UCLASS()
class MYMOVEMIMIC_API AMyMimic : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyMimic();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Move에 이동횟수를 세는 변수 MoveCount 추가.
	void Move();
	void Turn();

	//RandRange를 활용해서 특정 확률로 이벤트 발생시키기
	void TriggerEventWithProbability(float Probability);

	//[코드스니펫] TArray와 FVector를 활용해서 좌표 관리하기
	//TArray<FVector2D> StepLocations;
	// 
	//[코드스니펫] 두 좌표간 거리를 구하기
	//float Distance(FVector2D first, FVector2D second);

private:
	//Event 카운트
	int32 EventCount = 0;
	int32 CurrentCount = 0;

	//총 이동 거리 변수
	float TotalDistance = 0.0f;

	//이전 위치의 벡터 변수
	FVector PreviousLocation;

};
