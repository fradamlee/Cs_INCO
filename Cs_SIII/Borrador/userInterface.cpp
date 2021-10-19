

#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <string>
#include <iostream>
#include <time.h>
//
#include "userInterface.hpp"

UserInterface::UserInterface()
{
}

void UserInterface::showMenu()
{
    int choice;
    std::cout << "\n[1] Testear metodos de ordenamiento \n[0] Salir\n";
    cin >> choice;
    if (choice == 1)
    {
        testSortMethods();
    }
    if (choice != 0)
    {
        UserInterface userInterface1;
        userInterface1.showMenu();
    }
};

void UserInterface::testSortMethods()
{
    int choice;
    cout << "Esribe el numero de elementos aleatorios que quieres llenar. Maximo 100 000" << endl;
    cin >> choice;
    //
    admin1.fillData(choice);
    //
    cout << "\n";
    isSortedMessage(admin1.isSortedMainList());
    cout << "Tiempo de ordenamiento con bubbleSort: " << admin1.getTime(1) << " s" << endl;
    isSortedMessage(admin1.isSortedTestList());
    cout << "\n";
    isSortedMessage(admin1.isSortedMainList());
    cout << "Tiempo de ordenamiento con insertSort: " << admin1.getTime(2) << " s" << endl;
    isSortedMessage(admin1.isSortedTestList());
    cout << "\n";
    isSortedMessage(admin1.isSortedMainList());
    cout << "Tiempo de ordenamiento con selectSort: " << admin1.getTime(3) << " s" << endl;
    isSortedMessage(admin1.isSortedTestList());
    cout << "\n";
    isSortedMessage(admin1.isSortedMainList());
    cout << "Tiempo de ordenamiento con shellSort: " << admin1.getTime(4) << " s" << endl;
    isSortedMessage(admin1.isSortedTestList());
    cout << "\n";
    isSortedMessage(admin1.isSortedMainList());
    cout << "Tiempo de ordenamiento con mergeSort: " << admin1.getTime(5) << " s" << endl;
    isSortedMessage(admin1.isSortedTestList());
    cout << "\n";
    isSortedMessage(admin1.isSortedMainList());
    cout << "Tiempo de ordenamiento con quickSort: " << admin1.getTime(6) << " s" << endl;
    isSortedMessage(admin1.isSortedTestList());
}

void UserInterface::isSortedMessage(bool isListSorted)
{
    if (isListSorted)
    {
        cout << "La lista está ordenada" << endl;
    }
    else
    {
        cout << "La lista está desordenada" << endl;
    }
}