#include "Task.h"

Task::Task()
{
	name = " ";
	description = " ";
	tag = " ";
	priority = nullptr;
	date = nullptr;
}

void Task::setName(std::string name)
{
	this->name = name;
}

void Task::setDescription(std::string description)
{
	this->description = description;
}

void Task::setPriority(IPriority* priority)
{
	this->priority = priority;
}

void Task::setDate(tm* date)
{
	this->date = date;
}

void Task::setTag(std::string tag)
{
	this->tag = tag;
}

std::string Task::getName()
{
	return name;
}

std::string Task::getDescription()
{
	return description;
}

IPriority* Task::getPriority()
{
	return priority;
}

tm* Task::getDate()
{
	return date;
}

std::string Task::getTag()
{
	return tag;
}

void Task::saveToBinary(std::ofstream& outputData)
{
	if (date == nullptr || priority == nullptr)
		throw exception("Error/ saveToBinary / Uninitialized variables");
	if (outputData.is_open()) {
		int tempSize = name.size();
		// save for name:
		outputData.write(reinterpret_cast<char*>(&tempSize), sizeof(tempSize));
		outputData.write(name.c_str(), tempSize);
		// save for description:
		tempSize = description.size();
		outputData.write(reinterpret_cast<char*>(&tempSize), sizeof(tempSize));
		outputData.write(description.c_str(), tempSize);
		// save for IPriority:
		int tempPriority = priority->getPriorityInt();
		outputData.write(reinterpret_cast<char*>(&tempPriority), sizeof(tempPriority));
		// save for date:
		outputData.write(reinterpret_cast<char*>(&date->tm_year), sizeof(date->tm_year));
		outputData.write(reinterpret_cast<char*>(&date->tm_mon), sizeof(date->tm_mon));
		outputData.write(reinterpret_cast<char*>(&date->tm_mday), sizeof(date->tm_mday));
		// save for tag:
		tempSize = tag.size();
		outputData.write(reinterpret_cast<char*>(&tempSize), sizeof(tempSize));
		outputData.write(tag.c_str(), tempSize);
	}
	else {
		throw exception("Error/ saveToBinary");
	}
}

void Task::loadFromBinary(std::ifstream& inputData)
{
	if (inputData.is_open()) {
		int tempSize;
		char* buffer;
		// load for name:
		inputData.read(reinterpret_cast<char*>(&tempSize), sizeof(tempSize));
		buffer = new char[tempSize + 1];
		inputData.read(buffer, tempSize);
		buffer[tempSize] = '\0';
		name = buffer;
		delete[] buffer;
		// load for description:
		inputData.read(reinterpret_cast<char*>(&tempSize), sizeof(tempSize));
		buffer = new char[tempSize + 1];
		inputData.read(buffer, tempSize);
		buffer[tempSize] = '\0';
		description = buffer;
		delete[] buffer;
		// load for IPriority:
		int tempPriority;
		inputData.read(reinterpret_cast<char*>(&tempPriority), sizeof(tempPriority));
		if (tempPriority == 1)
			priority = HighPriority::getInstance();
		else if (tempPriority == 2)
			priority = MiddlePriority::getInstance();
		else
			priority = LowPriority::getInstance();
		// load for date:
		if (date != nullptr)
			delete date;
		date = new tm;
		inputData.read(reinterpret_cast<char*>(&date->tm_year), sizeof(date->tm_year));
		inputData.read(reinterpret_cast<char*>(&date->tm_mon), sizeof(date->tm_mon));
		inputData.read(reinterpret_cast<char*>(&date->tm_mday), sizeof(date->tm_mday));
		// load for tag:
		inputData.read(reinterpret_cast<char*>(&tempSize), sizeof(tempSize));
		buffer = new char[tempSize + 1];
		inputData.read(buffer, tempSize);
		buffer[tempSize] = '\0';
		tag = buffer;
		delete[] buffer;
	}
	else {
		throw exception("Error/ loadFromBinary");
	}

}

Task::~Task()
{
	if (date != nullptr)
		delete date;
}

