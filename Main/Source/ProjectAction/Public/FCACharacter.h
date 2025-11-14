// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "FCACharacter.generated.h"


class UInputAction;
class UInputMappingContext;


UCLASS()
class PROJECTACTION_API AFCACharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFCACharacter();

	// —— 在编辑器里把这些资产拖到类默认值即可 —— 
	UPROPERTY(EditDefaultsOnly, Category="Input")
	UInputMappingContext* IMC_Default = nullptr; // 输入映射表（把具体键位映射到 UInputAction）
	
	UPROPERTY(EditDefaultsOnly, Category="Input") TObjectPtr<UInputAction> IA_Move;
	UPROPERTY(EditDefaultsOnly, Category="Input") TObjectPtr<UInputAction> IA_Look;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta=(AllowPrivateAccess="true")) TObjectPtr<USpringArmComponent> SpringArm;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta=(AllowPrivateAccess="true")) TObjectPtr<UCameraComponent> FollowCamera;
	
	
	// Called to bind functionality to input
	//Setup用于绑定，PossessBy用于实际控制
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void PossessedBy(AController* NewController) override;

	//回调函数，具体会放在蓝图里面实现
	UFUNCTION(BlueprintImplementableEvent)
	void BP_OnMove(const FVector2D& Value); // 移动输入（Value.X 左右，Value.Y 前后）
	UFUNCTION(BlueprintImplementableEvent)
	void BP_OnLook(const FVector2D& Value); 


	//--------------速度设置--------------
	
private:
	// 把 IMC 添加到本地玩家的 EnhancedInput 子系统（单机本地也需要）
	void AddMappingContext_ForLocalPlayer();
	// —— 这些是绑定给 Enhanced Input 的 C++ 回调 —— 
	void OnMove(const FInputActionValue& Val);       // 移动输入回调
	void OnLook(const FInputActionValue& Val);       // 视角输入回调
};


