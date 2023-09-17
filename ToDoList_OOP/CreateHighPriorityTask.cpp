#include "CreateHighPriorityTask.h"

ITask* CreateHighPriorityTask::createTask()
{
    return new Task(HighPriority::getInstance());
}
