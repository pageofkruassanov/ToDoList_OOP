#include "HighPriority.h"

HighPriority* HighPriority::instance = nullptr;

HighPriority::HighPriority()
{
    priorityInt = 1;
    priorityStr = "Высокий приоритет";
}

HighPriority* HighPriority::getInstance()
{
    if (instance == nullptr)
        instance = new HighPriority;
    return instance;
}

std::string HighPriority::getPriorityStr()
{
    return priorityStr;
}

int HighPriority::getPriorityInt()
{
    return priorityInt;
}


