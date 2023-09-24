#pragma once
#include <iostream>
#include "IPriority.h"
#include "ITask.h"
class ISearch abstract
{
public:
	virtual ITask* SearchByDate(tm* date) = 0;
	virtual ITask* SearchByTag(std::string tag) = 0;
	virtual ITask* SearchByPriority(IPriority* priority) = 0;
};

