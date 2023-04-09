#ifndef _sorts_hpp_
#define _sorts_hpp_

#include <cstring>
#include "array.hpp"


void bubble_sort(int*, int);
void insertion_sort(int*, int);
void selection_sort(int*, int);
void count_sort(int*, int, int = 0, int = 255);
void quickSort(int*, int);
static void merge(int*, int, int);
void mergeSort(int* ar, int size);

#endif
