#pragma once
#include "CreateByPriorityTask.h"
#include "HighPriority.h"
#include "Task.h"
class CreateHighPriorityTask : public CreateByPriorityTask
{
public:
	ITask* createTask() override;
};

