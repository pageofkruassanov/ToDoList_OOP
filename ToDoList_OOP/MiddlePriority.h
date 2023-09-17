#pragma once
#include "IPriority.h"
class MiddlePriority : public IPriority
{
	static MiddlePriority* instance;
	int priority;
	MiddlePriority();
public:
	int getPriority() override;
	static MiddlePriority* getInstance();
};

