#pragma once
#include "Task.h"
#include "TaskManager.h"

// Facade:
class ToDoListApplication
{
	TaskManager tasks;
	// place for menu class;

public:

	~ToDoListApplication();
};

