#pragma once
#include "ITask.h"
#include "ISave.h"

using namespace std;
class Task : public ITask, public ISave
{
protected:
	string name;
	string descprition;
	IPriority* priority;
	tm* date;
	string tag;
public:
	Task() {};
	Task(IPriority* priority) : priority{ priority } {};
	void setName(std::string name);
	void setDescription(std::string description);
	void setPriority(IPriority* priority);
	void setDate(tm* date);
	void setTag(std::string tag);
	std::string getName();
	std::string getDescription(std::string description);
	IPriority* getPriority();
	tm* getDate();
	void saveBinary() override;
};

