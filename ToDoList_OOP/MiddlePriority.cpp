#include "MiddlePriority.h"

MiddlePriority* MiddlePriority::instance = nullptr;

MiddlePriority::MiddlePriority()
{
    priorityInt = 2;
    priorityStr = "Средний приоритет";
}

int MiddlePriority::getPriorityInt()
{
    return priorityInt;
}

std::string MiddlePriority::getPriorityStr()
{
    return priorityStr;
}

MiddlePriority* MiddlePriority::getInstance()
{
    if (instance == nullptr)
        instance = new MiddlePriority;
    return instance;
}


