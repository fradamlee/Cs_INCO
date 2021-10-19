#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <string>
#include <iostream>
#include <time.h>

#include "integer.hpp"

Integer::Integer()
{
}

void Integer::setItem(int _integer)
{
    integer = _integer;
}

int Integer::compare(int ele)
{
    if (ele < integer)
    {
        return 1;
    }
    else if (ele > integer)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int Integer::getItem()
{
    return integer;
}