#include "CreateMiddlePriorityTask.h"

ITask* CreateMiddlePriorityTask::createTask()
{
    return new Task(MiddlePriority::getInstance());
}
