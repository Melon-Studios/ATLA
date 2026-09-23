// Copyright Melon Studios.

#pragma once

#include "CoreMinimal.h"
#include "CommonButtonBase.h"

#include "ATLACommonButtonBase.generated.h"

class UCommonTextBlock;

/**
 *	ATLA UI Common Button Base Class.
 */
UCLASS(Abstract, BlueprintType, meta = (DisableNativeTick))
class ATLA_API UATLACommonButtonBase : public UCommonButtonBase
{
	GENERATED_BODY()
	
public:
	//~ Begin UUserWidget Interface
	virtual void NativePreConstruct() override;
	//~ End UUserWidget Interface
	
	UFUNCTION(BlueprintCallable, Category = "ATLA|UI")
	void SetButtonText(FText InText);

private:
	UPROPERTY(meta = (BindWidgetOptional))
	UCommonTextBlock* CommonText_ButtonText;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Button", meta = (AllowPrivateAccess = true))
	FText ButtonDisplayText;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Button", meta = (AllowPrivateAccess = true))
	bool bUseUpperCaseForButtonText = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Button", meta = (AllowPrivateAccess = true))
	FText ButtonDescriptionText;
};
