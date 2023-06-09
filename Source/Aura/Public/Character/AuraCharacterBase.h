// ©2023, indiependent.studio : taken entirely from Stephen Ulibarri's UE5.2 GAS Course.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBase.generated.h"

// Abstract to prevent this being added to the workspace in the editor. This is a base class and will not be instanced.
UCLASS(Abstract)
class AURA_API AAuraCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AAuraCharacterBase();

protected:
	virtual void BeginPlay() override;

	// removed Tick and SetupPlayerInputComponent because they're not needed in the base class

	// the trend is to use TObjectPtr instead of the raw pointers (like USkeletalMeshComponent*)
	// TObjectPtr has some in-editor benefits (but is the same as a raw pointer in a build), including:
	// Lazy Loading - an instance is only created when it's needed
	// Access Tracking - how often a pointer is accessed or dereferenced
	UPROPERTY(EditAnywhere, Category="Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
};
