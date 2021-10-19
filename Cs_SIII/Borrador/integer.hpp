#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <string>
#include <iostream>
#include <time.h>

class Integer
{
private:
    int integer;

public:
    Integer();
    void setItem(int);
    int compare(int);
    int getItem();
};