#pragma once
#include <iostream>
#include "ITask.h"
#include "ISearch.h"
#include <vector>
class TaskManager : public ISearch
{
	std::vector<ITask*> tasks;
public:
	void AddTask(ITask* task);
	void DelTask(int index);
	ITask* SearchByDate(tm* date);
	ITask* SearchByTag(std::string tag);
	ITask* SearchByPriority(IPriority* priority);
};

