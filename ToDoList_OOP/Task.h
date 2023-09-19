#pragma once
#include "ITask.h"
#include "ISaveBinary.h"
#include <fstream>
#include "ILoadBinary.h"
#include "HighPriority.h"
#include "LowPriority.h"
#include "MiddlePriority.h"

using namespace std;
class Task : public ITask, public ISaveBinary, public ILoadBinary
{
protected:
	string name;
	string description;
	IPriority* priority;
	tm* date;
	string tag;
public:
	Task();
	Task(IPriority* priority) : priority{ priority }, name{ " " }, description{ " " }, tag{ " " }, date{ nullptr } {};
	void setName(std::string name);
	void setDescription(std::string description);
	void setPriority(IPriority* priority);
	void setDate(tm* date);
	void setTag(std::string tag);
	std::string getName();
	std::string getDescription(std::string description);
	IPriority* getPriority();
	tm* getDate();
	void saveToBinary(std::ofstream outputData) override;
	void loadFromBinary(std::ifstream inputData) override;
	~Task() override;
};

