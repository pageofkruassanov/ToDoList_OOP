#include "LowPriority.h"

LowPriority* LowPriority::instance = nullptr;


LowPriority::LowPriority()
{
    priority = 3;
}

int LowPriority::getPriority()
{
    return priority;
}

LowPriority* LowPriority::getInstance()
{
    if (instance == nullptr)
        instance = new LowPriority;
    return instance;
}
