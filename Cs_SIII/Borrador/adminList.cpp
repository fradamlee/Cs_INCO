#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <string>
#include <iostream>
#include <time.h>
#include <chrono>
#include <ctime>
//
#include "adminList.hpp"
#include "listInteger.hpp"

AdminList::AdminList()
{
}

void AdminList::fillData(int numElements)
{
    srand(time(NULL)); //inicializar el generador de números aleatorios
    int x;
    for (int i = 0; i < numElements; i++)
    {
        x = rand() % 1000000 + 1;
        Integer integer;
        integer.setItem(x);
        mainList.insert(mainList.last(), integer);
    }
}

float AdminList::getTime(int choice)
{
    testList.copyAll(mainList);

    std::chrono::time_point<std::chrono::system_clock> start, end;

    start = std::chrono::system_clock::now();
    choiceMethod(choice);
    end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    float time = elapsed_seconds.count();
    return time;
}

void AdminList::choiceMethod(int choice)
{
    if (choice == 1)
    {
        testList.bubbleSort();
    }
    else if (choice == 2)
    {
        testList.insertSort();
    }
    else if (choice == 3)
    {
        testList.selectSort();
    }
    else if (choice == 4)
    {
        testList.shellSort();
    }
    else if (choice == 5)
    {
        testList.mergeSort();
    }
    else
    {
        testList.quickSort();
    }
}

bool AdminList::isSortedMainList()
{
    return mainList.isSorted();
}

bool AdminList::isSortedTestList()
{
    return testList.isSorted();
}
