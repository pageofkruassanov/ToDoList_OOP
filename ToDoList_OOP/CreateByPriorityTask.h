#pragma once
#include "ITask.h"

class CreateByPriorityTask abstract
{
public:
	virtual ITask* createTask() = 0;
};

