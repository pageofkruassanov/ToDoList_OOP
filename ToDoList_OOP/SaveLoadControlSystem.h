#pragma once
#include "ITask.h"
#include <iostream>
#include <vector>
#include <fstream>
#include "ISaveBinary.h"
#include "ILoadBinary.h"
#include "Task.h"
class SaveLoadControlSystem
{
public:
	void saveTasks(std::ofstream& outputData, std::vector<ITask*> tasks);
	std::vector<ITask*>& loadTasks(std::ifstream& inputData);
};

