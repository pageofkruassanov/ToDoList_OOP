#include "MiddlePriority.h"

MiddlePriority* MiddlePriority::instance = nullptr;

MiddlePriority::MiddlePriority()
{
    priority = 2;
}

int MiddlePriority::getPriority()
{
    return priority;
}

MiddlePriority* MiddlePriority::getInstance()
{
    if (instance == nullptr)
        instance = new MiddlePriority;
    return instance;
}

MiddlePriority::~MiddlePriority()
{
    if (instance != nullptr)
        delete instance;
}
