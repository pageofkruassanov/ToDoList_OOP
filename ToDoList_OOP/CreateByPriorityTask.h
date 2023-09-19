#pragma once
#include "ITask.h"

// Factory method:
class CreateByPriorityTask abstract
{
public:
	virtual ITask* createTask() = 0;
};

