#pragma once
#include <iostream>

class IPriority abstract{
public:
	virtual int getPriorityInt() = 0;
	virtual std::string getPriorityStr() = 0;
};
