#pragma once
#include "CreateByPriorityTask.h"
#include "LowPriority.h"
#include "Task.h"
class CreateLowPriorityTask : public CreateByPriorityTask
{
public:
	ITask* createTask() override;
};

