#pragma once
#include "IPriority.h"

// Singltone:
class LowPriority : public IPriority
{
	static LowPriority* instance;
	int priorityInt;
	std::string priorityStr;
	LowPriority();
public:
	int getPriorityInt() override;
	std::string getPriorityStr() override;
	static LowPriority* getInstance();
};

