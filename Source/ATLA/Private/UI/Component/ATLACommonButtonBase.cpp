// Copyright Melon Studios.

#include "UI/Component/ATLACommonButtonBase.h"

#include "CommonTextBlock.h"

void UATLACommonButtonBase::NativePreConstruct()
{
	Super::NativeConstruct();

	SetButtonText(ButtonDisplayText);
}

void UATLACommonButtonBase::SetButtonText(FText InText)
{
	if (!CommonText_ButtonText || InText.IsEmpty()) return;

	CommonText_ButtonText->SetText(bUseUpperCaseForButtonText ? InText.ToUpper() : InText);
}
