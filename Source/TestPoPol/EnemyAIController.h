// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class TESTPOPOL_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()

public:
	AEnemyAIController();
	virtual void OnPossess(APawn* InPawn)override;

	static const FName HomePosKey;
	static const FName PatrolPosKey;
	static const FName TargetKey;					//�÷��̾� ���� Ű �̸� ����







private:
	UPROPERTY()
		class UBehaviorTree* BTAsset;

	UPROPERTY()
		class UBlackboardData* BBAsset;





};