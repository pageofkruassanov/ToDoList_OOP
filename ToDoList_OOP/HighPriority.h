#pragma once
#include "IPriority.h";
class HighPriority : public IPriority
{
	static HighPriority* instance;
	int priority;
	HighPriority();
public:
	static HighPriority* getInstance();
	int getPriority() override;
};

