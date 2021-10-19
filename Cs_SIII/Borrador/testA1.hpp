#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <string>
#include <iostream>
#include <time.h>
//
#include "testNest.hpp"

class TestA1
{
private:
    TestNest testNest;

public:
    TestA1();
    ~TestA1();
    void procA1();
};