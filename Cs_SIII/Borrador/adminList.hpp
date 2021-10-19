#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <string>
#include <iostream>
#include <time.h>
#include <chrono>
#include <ctime>
//
#include "listInteger.hpp"

class AdminList
{
private:
    ListInteger mainList;
    ListInteger testList;

public:
    AdminList();
    void fillData(int);
    void testSortMethods(int);
    float getTime(int);
    void choiceMethod(int);
    bool isSortedMainList();
    bool isSortedTestList();
};