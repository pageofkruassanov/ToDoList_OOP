#pragma once
#include "IPriority.h";

// Singltone
class HighPriority : public IPriority
{
	static HighPriority* instance;
	int priorityInt;
	std::string priorityStr;
	HighPriority();
public:
	static HighPriority* getInstance();
	std::string getPriorityStr() override;
	int getPriorityInt() override;
};

