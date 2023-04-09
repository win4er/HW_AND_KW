#ifndef _selectionsort_hpp_
#define _selectionsort_hpp_
#include <iostream>

int getIndMax(int* ar, int size);
void swap(int& a, int& b);
void show_el(int* ar, int size);
bool isSortedUP(int* ar, int size);
bool isSortedDOWN(int* ar, int size);
void selection_sort_up(int* ar, int size);
void selection_sort_down(int* ar, int size);

#endif