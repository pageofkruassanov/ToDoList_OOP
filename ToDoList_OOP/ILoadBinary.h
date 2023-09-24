#pragma once
#include <iostream>
#include <fstream>

class ILoadBinary abstract
{
public:
	virtual void loadFromBinary(std::ifstream& inputData) = 0;
};
