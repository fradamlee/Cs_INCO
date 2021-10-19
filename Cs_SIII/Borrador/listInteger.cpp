#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <string>
#include <iostream>
#include <time.h>
//
#include "listInteger.hpp"
#include "listexception.h"
#include "integer.hpp"

// Private

void ListInteger::copyAll(const ListInteger &lst)
{
    int i = 0;
    while (i <= lst.counter)
    {
        data[i] = lst.data[i];
        i++;
    }
    counter = lst.counter;
}

// Public

ListInteger::ListInteger() : counter(-1){};

ListInteger::ListInteger(const ListInteger &lst)
{
    copyAll(lst);
}

void ListInteger::concatlist(const ListInteger &lst)
{
    int localIter = counter;
    int newIter = 0;
    while (localIter <= lst.counter + counter)
    {
        data[localIter + 1] = lst.data[newIter];
        localIter++;
        newIter++;
    }
    counter += lst.counter + 1;
}

bool ListInteger::isEmpty()
{
    return counter == -1;
}

bool ListInteger::isFull()
{
    return counter >= 100000;
}

bool ListInteger::isSorted()
{
    int lastVal = 0;
    for (int i = 0; i <= counter; i++)
    {
        if (data[i].compare(lastVal) == -1)
        {
            return false;
        }
        else
        {
            lastVal = data[i].getItem();
        }
    }
    return true;
}

void ListInteger::insert(const int &pos, const Integer &ele)
{
    if (isFull())
    {
        throw ListException("Desbordamiento de datos, insertData");
    }
    if (pos < -1 || pos > counter)
    {
        throw ListException("Posicion invalida, insertData");
    }
    for (int i = counter; i > pos; i--)
    {
        data[i + 1] = data[i];
    }
    data[pos + 1] = ele;
    counter++;
}

void ListInteger::delate(const int &pos)
{
    if (pos < -1 || pos > counter)
    {
        throw ListException("Posicion invalida, insertData");
    }
    for (int i = pos; i < counter; i++)
    {
        data[i] = data[i + 1];
    }
    counter--;
}

int ListInteger::first()
{
    if (isEmpty())
    {
        return -1;
    }
    return 0;
}

int ListInteger::last()
{
    return counter;
}

int ListInteger::previous(const int &pos)
{
    if (pos < 0 || pos > counter)
    {
        return -1;
    }
    return pos - 1;
}

int ListInteger::next(const int &pos)
{
    if (pos < -1 || pos >= counter)
    {
        return -1;
    }
    return pos + 1;
}

Integer ListInteger::getElement(const int &pos)
{
    if (pos < -1 || pos > counter)
    {
        throw ListException("Posicion invalida, getElement");
    }
    return data[pos];
}

void ListInteger::print()
{
    for (int i = 0; i <= counter; i++)
    {
        std::cout << data[i].getItem() << endl;
    }
    std::cout << endl;
}

////////////--------
// void ListInteger::printTestList()
// {
//     for (int i = 0; i <= counter; i++)
//     {
//         std::cout << testList[i] << endl;
//     }
//     std::cout << endl;
// }
// ////////////--------

void ListInteger::reset()
{
    counter = -1;
}

int ListInteger::linearSearch(Integer &searchedSong)
{
    for (int iter1 = 0; iter1 <= counter; iter1++)
    {

        if (searchedSong.compare(data[iter1].getItem()) == 0)
        {
            return iter1;
        }
    }
    return -1;
}

int ListInteger::binarySearch(Integer &searchedSong)
{
    int first = 0, last = counter, middleVal, criteriaVal;
    for (int sortChecker = 0; first <= last && sortChecker <= counter; sortChecker++)
    {
        middleVal = (first + last) / 2;
        criteriaVal = searchedSong.compare(data[middleVal].getItem());

        if (criteriaVal == -1)
        {
            last = middleVal - 1;
        }
        else if (criteriaVal == 1)
        {
            first = middleVal + 1;
        }
        else
        {
            return middleVal;
        }
    }
    return -1;
}

void ListInteger::bubbleSort()
{
    int first, last = counter;
    while (last > 0)
    {
        first = 0;
        while (first < last)
        {
            if (data[first].compare(data[first + 1].getItem()) == 1)
            {
                Integer tempSong = data[first];
                data[first] = data[first + 1];
                data[first + 1] = tempSong;
            }
            first++;
        }
        last--;
    }
}

void ListInteger::insertSort()
{
    for (int iter1 = 1; iter1 <= counter; iter1++)
    {
        Integer tempSong = data[iter1];
        int iter2 = iter1;
        while (iter2 > 0 && tempSong.compare(data[iter2 - 1].getItem()) == -1)
        {
            data[iter2] = data[iter2 - 1];
            iter2--;
        }
        if (iter1 != iter2)
        {
            data[iter2] = tempSong;
        }
    }
}

void ListInteger::selectSort()
{
    int minVal;
    for (int iter1 = 0; iter1 < counter; iter1++)
    {
        minVal = iter1;
        int iter2 = iter1 + 1;
        while (iter2 <= counter)
        {
            if (data[minVal].compare(data[iter2].getItem()) == 1)
            {
                minVal = iter2;
            }
            iter2++;
        }
        if (iter1 != iter2)
        {
            Integer tempSong = data[iter1];
            data[iter1] = data[minVal];
            data[minVal] = tempSong;
        }
    }
}

void ListInteger::shellSort()
{
    float factor = 0.5;
    for (int iter1Dif = (counter + 1) / 2; iter1Dif > 0; iter1Dif *= factor)
    {
        for (int iter2 = 0; (iter2 + iter1Dif) <= (counter + 1); iter2++)
        {
            for (int iter3 = iter2; (iter3 - iter1Dif) >= 0 && data[iter3].compare(data[iter3 - iter1Dif].getItem()) == -1; iter3 -= iter1Dif)
            {
                Integer tempSong = data[iter3 - iter1Dif];
                data[iter3 - iter1Dif] = data[iter3];
                data[iter3] = tempSong;
            }
        }
    }
}

void ListInteger::mergeSort()
{
    mergeSort(0, counter);
}

void ListInteger::mergeSort(const int &left, const int &right)
{
    if (left >= right)
    {
        return;
    }

    int middlePos = (left + right) / 2;
    mergeSort(left, middlePos);
    mergeSort(middlePos + 1, right);

    // static Integer aux[counter];
    for (int i = left; i <= right; i++)
    {
        aux[i] = data[i];
    }

    int counterLeft(left), counterRight(middlePos + 1), mainCounter(left);
    while (counterLeft <= middlePos && counterRight <= right)
    {
        while (counterLeft <= middlePos && aux[counterLeft].compare(aux[counterRight].getItem()) < 1)
        {
            data[mainCounter++] = aux[counterLeft++];
        }
        while (counterLeft <= middlePos && counterRight <= right && aux[counterLeft].compare(aux[counterRight].getItem()) > -1)
        {
            data[mainCounter++] = aux[counterRight++];
        }
    }
    while (counterLeft <= middlePos)
    {
        data[mainCounter++] = aux[counterLeft++];
    }
    while (counterRight <= right)
    {
        data[mainCounter++] = aux[counterRight++];
    }
}

void ListInteger::quickSort()
{
    quickSort(0, counter);
}

void ListInteger::quickSort(const int &left, const int &right)
{
    if (left >= right)
    {
        return;
    }
    int counterLeft(left), counterRight(right);
    while (counterLeft < counterRight)
    {
        while (counterLeft < counterRight && data[counterLeft].compare(data[right].getItem()) < 1)
        {
            counterLeft++;
        }
        while (counterLeft < counterRight && data[counterRight].compare(data[right].getItem()) > -1)
        {
            counterRight--;
        }
        if (counterLeft != counterRight)
        {
            Integer tempEle = data[counterLeft];
            data[counterLeft] = data[counterRight];
            data[counterRight] = tempEle;
        }
    }
    if (counterLeft != right)
    {
        Integer tempEle = data[counterLeft];
        data[counterLeft] = data[right];
        data[right] = tempEle;
    }
    quickSort(left, counterLeft - 1);
    quickSort(counterLeft + 1, right);
}

ListInteger &ListInteger::operator=(const ListInteger &lst)
{
    copyAll(lst);
    return *this;
}