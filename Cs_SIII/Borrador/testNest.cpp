#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <string>
#include <iostream>
#include <time.h>

#include "testNest.hpp"

TestNest::TestNest()
{
    nestedChar[0] = 'E';
    nestedChar[1] = 'l';
    nestedChar[2] = 'e';
}

TestNest::~TestNest() {}

char TestNest::getCharEle(int pos)
{
    return nestedChar[pos];
}