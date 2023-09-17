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
    priority["сок"] = 0;
    priority["высокий"] = 1;
    priority["средний"] = 2;
    priority["низкий"] = 3;
    int* temp = &priority["окей"];
    if (priority.find("окей") != priority.end())
        cout << "error";
    else {
        cout << *temp << endl;
        cout << "done";
    }
    int temptemp;
    temptemp = priority["дача"];
    cout << temptemp;*/
    ITask* task = new Task;
    dynamic_cast<ISave*>(task)->saveBinary();
}