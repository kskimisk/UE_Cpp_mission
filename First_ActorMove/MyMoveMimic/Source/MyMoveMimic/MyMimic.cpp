// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMimic.h"

// Sets default values
AMyMimic::AMyMimic()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyMimic::BeginPlay()
{
	Super::BeginPlay();
	

	// 0. 0.50에서 시작
	SetActorLocation(FVector(0, 0, 50));

	//카운트 횟수 초기화
	EventCount = 0;
	CurrentCount = 0;

	//총 거리를 0으로, 이전 위치를 초기 액터의 위치로 지정
	TotalDistance = 0.0f;
	PreviousLocation = GetActorLocation();

	//Move와 Turn의 횟수(10회까지)
	for (int32 i = 0; i < 10; ++i)
		Move();
	for (int32 i = 0; i < 10; ++i)
		Turn();

	
		if (GEngine)
		{
			// %d 자리에 누적된 EventCount 숫자가 들어갑니다.
			FString ReportMsg = FString::Printf(TEXT("Report: %d Event || Total Distance : %.2f"), EventCount, TotalDistance);

			// 화면에 노란색으로 10초 동안 띄워줍니다.
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, ReportMsg);
		}
}



// Called every frame
void AMyMimic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyMimic::Move()
{
	FVector Target;

	// -50 ~ 50까지 Random
	Target.X = FMath::FRandRange(-50.0, 50.0);
	Target.Y = FMath::FRandRange(-50.0, 50.0);
	Target.Z = 0;

	AddActorWorldOffset(Target);

	//현재 몇 번째 이동했는지 Count.
	CurrentCount++;

	FVector CurrentLocation = GetActorLocation();

	//Move에서 이동하는 거리 계산
	// 1. 이전 좌표와 현재 좌표 사이의 거리를 계산
	float StepDistance = FVector::Dist(PreviousLocation, CurrentLocation);

	// 2. 1번의 거리를 총 거리에 누적하여 더함.
	TotalDistance += StepDistance;

	//3. 다시 이동하기 전, 이전위치에 놓여있던 좌표를 현재 위치로 덮어쓰기.
	PreviousLocation = CurrentLocation;


	// 도전과제 1번(실시간 출력)
	FString StatusMsg = FString::Printf(TEXT("[%d Moved] Now : %s"), CurrentCount, *CurrentLocation.ToString());

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Purple, StatusMsg);
	}
	UE_LOG(LogTemp, Warning, TEXT("Location = %s"), *StatusMsg);


	// 도전과제 2번(50% 확률 이벤트 발생)
	TriggerEventWithProbability(50.0f);

}

void AMyMimic::Turn()
{
	FRotator DeltaRotation;
	DeltaRotation.Yaw = FMath::FRandRange(-180.0, 180.0);
	DeltaRotation.Pitch = 0;
	DeltaRotation.Roll = 0;

	AddActorWorldRotation(DeltaRotation);

	FRotator CurrentRotation = GetActorRotation();
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, CurrentRotation.ToString());
	}
	UE_LOG(LogTemp, Warning, TEXT("Rotation = %s"), *CurrentRotation.ToString());

}






//void AMyMimic::TriggerEventWithProbability(float Probability)
//{
//	//첫 번째 코드스니펫 참고
//	int32 RandomValue = FMath::RandRange(1, 100); // 1 ~ 100의 난수 생성
//	if (RandomValue <= Probability)
//	{
//		UE_LOG(LogTemp, Log, TEXT("Event Triggered!"));
//		if (GEngine)
//		{
//			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, TEXT("Event_Occ"));
//
//			//총 이벤트 발생 횟수 카운트
//			EventCount++;
//		}
//	}
//	else
//	{
//		UE_LOG(LogTemp, Log, TEXT("Event Not Triggered"));
//
//	}
//}


void AMyMimic::TriggerEventWithProbability(float Probability)
{
	// 동전뒤집기 : 0이나 1 둘 중 하나의 난수를 생성.
	int32 CoinFlip = FMath::RandRange(0, 1);

	// 1이 나오면 이벤트 발생 (둘 중 하니니까 50% 확률)
	if (CoinFlip == 1)
	{
		UE_LOG(LogTemp, Log, TEXT("Event Triggered!"));
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, TEXT("Event_Occ"));
			EventCount++;
		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Event Not Triggered"));
	}
}