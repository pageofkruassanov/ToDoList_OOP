#pragma once
#include "IPriority.h"
class LowPriority : public IPriority
{
	static LowPriority* instance;
	int priority;
	LowPriority();
public:
	int getPriority() override;
	static LowPriority* getInstance();


};

