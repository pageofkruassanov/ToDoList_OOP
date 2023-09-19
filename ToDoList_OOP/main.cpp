// started (not completed)
#include <iostream>
#include <map>
#include "IPriority.h"
#include "HighPriority.h"
#include "ITask.h"
#include "Task.h"
#include "ISaveBinary.h"

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
    /*string str1 = "Hello worldsakksakskaksakskakskaksaksakskaksakkaskasksakasksakaskasdk sadkaskdksakdsakdksksksakdak";
    string str2 = "o";
    cout << sizeof(str1) << endl << sizeof(str2) << endl;
    cout << str1.c_str();*/
    //int num1 = 11;
    //int num2 = 22;
    //int num3 = 33;
    //ofstream of ("binary_string.bin", std::ios::binary);
    //if (of.is_open()) {
    //    // «аписываем длину строки
    //    of.write(reinterpret_cast<char*>(&num1), sizeof(num1));
    //    {
    //        if (of.is_open()) {
    //            of.write(reinterpret_cast<char*>(&num2), sizeof(num2));
    //            if (of.is_open()) {
    //                of.write(reinterpret_cast<char*>(&num3), sizeof(num3));

    //            }
    //            else {
    //                std::cout << "Unable to create or open file." << std::endl;
    //            }
    //        }
    //        else {
    //            std::cout << "Unable to create or open file." << std::endl;
    //        }
    //    }
    //    // «аписываем саму строку
    //    of.close();
    //    std::cout << "String written to binary file." << std::endl;
    //}
    //else {
    //    std::cout << "Unable to create or open file." << std::endl;
    //}
    //std::ifstream inputFile("binary_string.bin", std::ios::binary);
    //int temp1, temp2, temp3;
    //inputFile.read(reinterpret_cast<char*>(&temp1), sizeof(temp1));
    //inputFile.read(reinterpret_cast<char*>(&temp2), sizeof(temp2));
    //inputFile.read(reinterpret_cast<char*>(&temp3), sizeof(temp3));
    //cout << endl << temp1 << " " << temp2 << " " << temp3;
    tm* date = new tm;
    date->tm_year = 2000;
    date->tm_mon = 12;
    ofstream of("binary_string.bin", std::ios::binary);
    of.write(reinterpret_cast<char*>(*(&date)), sizeof(*date));
    of.close();
    ifstream ist("binary_string.bin", std::ios::binary);
    tm* tempDate = new tm;
    ist.read(reinterpret_cast<char*>(*(&tempDate)), sizeof(*tempDate));
    cout << tempDate->tm_year << " " << tempDate->tm_mon;
}