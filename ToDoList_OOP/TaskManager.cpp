#include "TaskManager.h"

void TaskManager::AddTask(ITask* task)
{
	tasks.push_back(task);
}

void TaskManager::DelTask(int index)
{
	if (index < 0 || index > tasks.size())
		throw std::exception("Error/ DelTask");

	delete tasks[index];
	tasks.erase(tasks.begin() + index);

}

ITask* TaskManager::SearchByDate(tm* date)
{
	for (int i = 0; i < tasks.size(); i++) {
		if (tasks[i]->getDate()->tm_year == date->tm_year)
			if (tasks[i]->getDate()->tm_mon == date->tm_mon)
				if (tasks[i]->getDate()->tm_mday == date->tm_mday)
					return tasks[i];
	}
}

ITask* TaskManager::SearchByTag(std::string tag)
{
	for (int i = 0; i < tasks.size(); i++) {
		if (tasks[i]->getTag() == tag)
			return tasks[i];
	}
}

ITask* TaskManager::SearchByPriority(IPriority* priority)
{
	for (int i = 0; i < tasks.size(); i++) {
		if (tasks[i]->getPriority() == priority)
			return tasks[i];
	}
}

std::vector<ITask*>& TaskManager::getTasks()
{
	return tasks;
}
