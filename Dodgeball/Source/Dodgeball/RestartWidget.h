// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RestartWidget.generated.h"

/**
 * 
 */
UCLASS()
class DODGEBALL_API URestartWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	class UButton* RestartButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* ExitButton;

protected:
	UFUNCTION()
	void OnRestartClicked();

	UFUNCTION()
	void OnExitClicked();

	virtual void NativeConstruct() override;
};
