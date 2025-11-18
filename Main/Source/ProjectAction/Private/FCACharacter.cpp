// Fill out your copyright notice in the Description page of Project Settings.


#include "FCACharacter.h"
#include "EnhancedInputComponent.h"               
#include "EnhancedInputSubsystems.h" 
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerState.h"
#include "HAL/PreprocessorHelpers.h"


// Sets default values
AFCACharacter::AFCACharacter()
{
	//GAS
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	APlayerState* PS = GetPlayerState();
	if (PS)
	{
		UAbilitySystemComponent* ASC = PS->FindComponentByClass<UAbilitySystemComponent>();
		if (ASC)
		{
			ASC->InitAbilityActorInfo(PS, this); // Owner = PlayerState, Avatar = Character
			UE_LOG(LogTemp, Warning, TEXT("InitAbilityActorInfo success"));
		}
	}

	if (PS == nullptr)
		UE_LOG(LogTemp, Warning, TEXT("PlayerState is nullptr"));

	
	
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// 角色不跟随控制器旋转（不然你一转相机，角色也跟着转）
	bUseControllerRotationYaw   = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll  = false;
	
	
	
	// 创建弹簧臂组件
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringComp"));
	SpringArm->SetupAttachment(RootComponent);
	// 使用Pawn控制旋转
	SpringArm->bUsePawnControlRotation = true;


	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	FollowCamera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	// 让角色由“移动方向”决定朝向（常见的第三人称手感）
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f);
	
	// SpringArm 用控制器旋转（相机跟随控制器转动来“绕角色转”）
	if (SpringArm)
	{
		UE_LOG(LogTemp, Warning, TEXT("SpringArm Founded"));
		SpringArm->bUsePawnControlRotation = true;
		// 可选：平滑/限制
		SpringArm->bEnableCameraLag = true;
		SpringArm->CameraLagSpeed   = 12.f;     // 平滑跟随
		SpringArm->bInheritPitch = true;
		SpringArm->bInheritYaw   = true;
		SpringArm->bInheritRoll  = false;       // 通常不需要 Roll
	}
	
	//

	// 摄像机本体不再叠加控制器旋转（否则会重复）
	if (FollowCamera)
	{
		UE_LOG(LogTemp, Warning, TEXT("FollowCamera Founded"));
		FollowCamera->bUsePawnControlRotation = false;
	}
}

void AFCACharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	AddMappingContext_ForLocalPlayer();
}

void AFCACharacter::BeginPlay()
{
	Super::BeginPlay();

	if (!AbilitySystemComponent) return;

	AbilitySystemComponent->InitAbilityActorInfo(this, this);
}

UAbilitySystemComponent* AFCACharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AFCACharacter::AddMappingContext_ForLocalPlayer()
{

	// 取到玩家控制器 → 本地玩家对象 → Enhanced Input 本地子系统
	if (APlayerController* PC = Cast<APlayerController>(Controller))
	{
		if (ULocalPlayer* LP = PC->GetLocalPlayer())
		{
			if (UEnhancedInputLocalPlayerSubsystem* Subsys = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LP))
			{
				// 可选：清理旧的映射，避免与其他状态/界面冲突
				// 单机项目里你也可以不清理，只要确保优先级合理
				Subsys->ClearAllMappings();

				if (IMC_Default)
				{
					// Priority=0：默认优先级；如果你有瞄准/载具/菜单等上下文，可用更高或更低的优先级切换
					Subsys->AddMappingContext(IMC_Default, /*Priority*/0);
				}
			}
		}
	}
}

void AFCACharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	// 【单机本地】把输入动作（UInputAction）绑定到 C++ 回调
	// 注意：需要 EnhancedInputComponent 才能 BindAction
	if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// 连续型输入（摇杆/WSAD）用 Triggered，按键按住每帧触发
		if (IA_Move) EIC->BindAction(IA_Move, ETriggerEvent::Triggered, this, &AFCACharacter::OnMove);
		if (IA_Look) EIC->BindAction(IA_Look, ETriggerEvent::Triggered, this, &AFCACharacter::OnLook);
		if (IA_Dodge) EIC->BindAction(IA_Dodge, ETriggerEvent::Triggered, this, &AFCACharacter::OnDodge);

		// 离散型输入（按一下）用 Started；也可按需要用 Completed/Triggered
		//if (IA_Jump) EIC->BindAction(IA_Jump, ETriggerEvent::Started,   this, &AMyCharacter::OnJumpPressed);
		//if (IA_AttackLight) EIC->BindAction(IA_AttackLight, ETriggerEvent::Started, this, &AMyCharacter::OnAttackLight);
	}

	
	// 如果 EIC 是空的，说明你的项目没启用 Enhanced Input 或 PlayerInputComponent 不是增强版
	// 记得在项目设置里启用 Enhanced Input，并在 PawnClass 使用 EnhancedInputComponent
}




//移动的回调函数处理
void AFCACharacter::OnLook(const FInputActionValue& Val)
{
	const FVector2D Axis = Val.Get<FVector2D>();

	

	
	// —— C++：实际旋转相机/控制器 —— 
	if (Controller)
	{
		// 约定：Axis.X 为水平，Axis.Y 为垂直
		AddControllerYawInput(Axis.X);
		AddControllerPitchInput(Axis.Y);
	}

	// —— 蓝图：表现层（比如相机抖动、UI 准星等）——
	BP_OnLook(Axis);
}

void AFCACharacter::OnDodge(const FInputActionValue& Val)
{
	if (this->AbilitySystemComponent)
	{
		FGameplayTagContainer DodgeTags;
		DodgeTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.Dodge")));
		this->AbilitySystemComponent->TryActivateAbilitiesByTag(DodgeTags);
	}
	
	UE_LOG(LogTemp, Warning, TEXT("Debug:OnDodge: Dodge Success!!"));
}


void AFCACharacter::OnMove(const FInputActionValue& Val)
{
	// 从输入值里取到 2D 向量（X=左右，Y=前后）
	const FVector2D Axis = Val.Get<FVector2D>();

	// —— C++：做“实质的位移”或设置 CharacterMovement —— 
	// 单机项目通常直接移动（示例：相对当前朝向前后/左右）
	// if (Controller)
	// {
	// 	//UE_LOG(LogTemp, Warning, TEXT("OnMove executed. Axis.x = %f, Axis.y = %f"), Axis.X, Axis.Y);
	//
	// 	
	// 	// if (Axis.Y != 0.f)
	// 	// {
	// 	// 	const FRotator YawRot(0.f, Controller->GetControlRotation().Yaw, 0.f);
	// 	// 	//todo AddMovementInput 这里我觉得ScaleValue直接给了Axis没有标准化的值是导致滑步的重要原因，需要排查
	// 	// 	AddMovementInput(FRotationMatrix(YawRot).GetUnitAxis(EAxis::X), Axis.Y);
	// 	// }
	// 	// if (Axis.X != 0.f)
	// 	// {
	// 	// 	const FRotator YawRot(0.f, Controller->GetControlRotation().Yaw, 0.f);
	// 	// 	AddMovementInput(FRotationMatrix(YawRot).GetUnitAxis(EAxis::Y), Axis.X);
	// 	// }
	// }

	if (!Controller)
	{
		return;
	}

	// Blueprint: GetControlRotation → 只用 Yaw，Pitch 置 0
	const FRotator ControlRot = Controller->GetControlRotation();
	const FRotator YawRot(0.f, ControlRot.Yaw, 0.f);

	// Blueprint: GetForwardVector / GetRightVector
	const FVector ForwardDir = FRotationMatrix(YawRot).GetUnitAxis(EAxis::X);
	const FVector RightDir   = FRotationMatrix(YawRot).GetUnitAxis(EAxis::Y);

	// Blueprint: AddMovementInput(Forward / Right, ScaleValue)
	if (Axis.Y != 0.f)
	{
		AddMovementInput(ForwardDir, Axis.Y);   // Forward / Backward
	}

	if (Axis.X != 0.f)
	{
		AddMovementInput(RightDir, Axis.X);     // Left / Right
	}

	//实际移动打算交给动画蓝图里面的Lyra系统处理

	// —— 蓝图：做“表现层”（动画参数/BlendSpace/足底特效等）——
	BP_OnMove(Axis); // 不实现也不会崩（空实现），实现了就能驱动动画蓝图参数
}
