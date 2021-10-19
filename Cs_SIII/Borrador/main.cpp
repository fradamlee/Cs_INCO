
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <string>
#include <iostream>
#include <time.h>

#include "listexception.h"
//#include "testA1.hpp"kf

int main()
{
    std::string str = "123.0";
    float num;
    num = std::stof(str);
    cout << num << endl;
    return 0;
}
