// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "MyThirdPersonCharacter.generated.h"

UCLASS()
class MYTHIRDPERSON_API AMyThirdPersonCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MyTPS_Cam, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MyTPS_Cam, meta = (AllowPrivateAccess = "true"))
    	class UCameraComponent* FollowCamera;

public:
	// Sets default values for this character's properties
	AMyThirdPersonCharacter();

	UPROPERTY(EditAnywhere, Category = Input)
	class UInputMappingContext* IC_Character;
    
	UPROPERTY(EditAnywhere, Category = Input)
	class UInputAction* IA_Move;
    
	UPROPERTY(EditAnywhere, Category = Input)
	class UInputAction* IA_Jump;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
    
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	void Move(const FInputActionValue& Value);
};
