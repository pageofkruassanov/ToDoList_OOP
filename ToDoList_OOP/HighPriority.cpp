#include "HighPriority.h"

HighPriority* HighPriority::instance = nullptr;

HighPriority::HighPriority()
{
    priority = 1;
}

HighPriority* HighPriority::getInstance()
{
    if (instance == nullptr)
        instance = new HighPriority;
    return instance;
}

int HighPriority::getPriority()
{
    return priority;
}
