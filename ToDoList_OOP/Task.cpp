#include "Task.h"

void Task::setName(std::string name)
{
	this->name = name;
}

void Task::setDescription(std::string description)
{
	this->descprition = description;
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

std::string Task::getDescription(std::string description)
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

void Task::saveBinary()
{
	cout << "Save binary";
}
