#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <string>
#include <iostream>
#include <time.h>
//
#include "integer.hpp"
#include "listInteger.hpp"

class ListInteger
{
private:
    Integer data[100000];
    Integer aux[100000];
    // int testList[100000];
    int counter;
    void mergeSort(const int &, const int &);
    void quickSort(const int &, const int &);

public:
    ListInteger();
    void copyAll(const ListInteger &);
    ListInteger(const ListInteger &);
    void concatlist(const ListInteger &);
    void fillData();
    bool isEmpty();
    bool isFull();
    bool isSorted();
    void insert(const int &, const Integer &);
    //void insert(const int &, const int &);
    void delate(const int &);
    int first();
    int last();
    int previous(const int &);
    int next(const int &);
    /// in: (searchedWord, int position Integer element)  out: pos
    // int find(const string &, const int &);
    ////int find(const string &);
    /// in: pos  out: ele
    Integer getElement(const int &); ///
    //int getElement(const int &);
    //void sort();
    void print();
    // ////////////--------
    // void printTestList();
    // ////////////--------
    void reset();
    //int length();
    int linearSearch(Integer &); ///
    int binarySearch(Integer &); ///
    // bool isExactSong(Integer &, int &);
    void bubbleSort();
    void insertSort();
    void selectSort();
    void shellSort();
    void mergeSort();
    void quickSort();
    //void testSort(const int &);
    ListInteger &operator=(const ListInteger &);
};