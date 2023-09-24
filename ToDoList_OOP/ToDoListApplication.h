#pragma once
#include "Task.h"
#include "TaskManager.h"
#include "SaveLoadControlSystem.h"
#include "Menu.h"

// Facade: (just menu)
class ToDoListApplication
{
	TaskManager tasks;
	SaveLoadControlSystem sl_cs;
	/*Menu menu;*/
public:
	void Start();
};

