// started
#include <iostream>
#include <map>
#include "IPriority.h"
#include "HighPriority.h"
#include "ITask.h"
#include "Task.h"
#include "ISave.h"

using namespace std;

int main()
{
    /*map<string, int> priority;
    priority["���"] = 0;
    priority["�������"] = 1;
    priority["�������"] = 2;
    priority["������"] = 3;
    int* temp = &priority["����"];
    if (priority.find("����") != priority.end())
        cout << "error";
    else {
        cout << *temp << endl;
        cout << "done";
    }
    int temptemp;
    temptemp = priority["����"];
    cout << temptemp;*/
    ITask* task = new Task;
    dynamic_cast<ISave*>(task)->saveBinary();
}