
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <string>
#include <iostream>
#include <time.h>

//
#include "adminList.hpp"

class UserInterface
{
private:
    AdminList admin1;

public:
    UserInterface();
    void showMenu();
    void testSortMethods();
    void isSortedMessage(bool);
};
