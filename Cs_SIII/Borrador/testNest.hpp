#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <string>
#include <iostream>
#include <time.h>
//

class TestNest
{
private:
    char nestedChar[3];

public:
    TestNest();
    ~TestNest();
    char getCharEle(int);
};
