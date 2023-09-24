#pragma once
#include "IPriority.h"

// Singltone:
class MiddlePriority : public IPriority
{
	static MiddlePriority* instance;
	int priorityInt;
	std::string priorityStr;
	MiddlePriority();
public:
	int getPriorityInt() override;
	std::string getPriorityStr() override;
	static MiddlePriority* getInstance();
};

