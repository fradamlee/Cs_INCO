#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <string>
#include <iostream>
#include <time.h>
//
#include "testA1.hpp"
//
//#include "testNest.hpp"

TestA1::TestA1(){};
TestA1::~TestA1() {}

void TestA1::procA1()
{
    //
    cout << testNest.getCharEle(0) << endl;
}