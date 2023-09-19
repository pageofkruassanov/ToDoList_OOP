#pragma once
#include <iostream>

class ISaveBinary
{
public:
	virtual void saveToBinary(std::ofstream outputData) = 0;
};

