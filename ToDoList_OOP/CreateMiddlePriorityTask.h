#pragma once
#include "CreateByPriorityTask.h"
#include "MiddlePriority.h"
#include "Task.h"
class CreateMiddlePriorityTask : public CreateByPriorityTask
{
public:
	ITask* createTask() override;
};

