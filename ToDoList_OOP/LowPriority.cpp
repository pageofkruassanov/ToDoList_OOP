#include "LowPriority.h"

LowPriority* LowPriority::instance = nullptr;


LowPriority::LowPriority()
{
    priorityInt = 3;
    priorityStr = "Низкий приоритет";
}

int LowPriority::getPriorityInt()
{
    return priorityInt;
}

std::string LowPriority::getPriorityStr()
{
    return priorityStr;
}

LowPriority* LowPriority::getInstance()
{
    if (instance == nullptr)
        instance = new LowPriority;
    return instance;
}


