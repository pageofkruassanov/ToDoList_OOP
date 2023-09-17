#pragma once
#include <iostream>
#include "IPriority.h"

class ITask abstract
{
public:
	virtual void setName(std::string name) = 0;
	virtual void setDescription(std::string description) = 0;
	virtual void setPriority(IPriority* priority) = 0;
	virtual void setDate(tm* date) = 0;
	virtual void setTag(std::string tag) = 0;
	virtual std::string getName() = 0;
	virtual std::string getDescription(std::string description) = 0;
	virtual IPriority* getPriority() = 0;
	virtual tm* getDate() = 0;
};
