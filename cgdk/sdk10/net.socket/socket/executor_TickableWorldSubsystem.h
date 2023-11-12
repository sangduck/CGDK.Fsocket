#pragma once

#include "CoreMinimal.h"
#include "../../net.socket.h"
#include "Subsystems/WorldSubsystem.h"
#include "executor_TickableWorldSubsystem.generated.h"

UCLASS()
class TEST_MMOG_API Uexecutor_TickableWorldSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()
	virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(YouClassName, STATGROUP_Tickables); }
	virtual void Tick(float DeltaTime) override { CGDK::executor::socket::run_executor(); }
};
