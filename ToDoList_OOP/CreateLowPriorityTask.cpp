#include "CreateLowPriorityTask.h"

ITask* CreateLowPriorityTask::createTask()
{
    return new Task(LowPriority::getInstance());
}
