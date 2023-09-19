#pragma once
#include <iostream>

class IPriority abstract{
public:
	virtual int getPriority() = 0;
	virtual ~IPriority() = default;
};
