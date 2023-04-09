#include "selectionsort.hpp"

void swap(int& a, int& b){
    int c = a;
    a = b;
    b = c;
}

void SelectionSortUP(int* ar, int size){
    int min_ind;
    for (int i = 0; i < size; i++){
        min_ind = i;
        for (int j = i; j < size; j++){
            if (ar[j] < ar[min_ind])
                min_ind = j;
        }
        swap(ar[min_ind], ar[i]);
    }
    for (int i = 0; i < size; i++) {
        std::cout << ar[i] << " ";
    }
    std::cout << std::endl;
}

void SelectionSortDOWN(int* ar, int size){
    int min_ind;
    for (int i = 0; i < size; i++){
        min_ind = i;
        for (int j = i; j < size; j++){
            if (ar[j] > ar[min_ind])
                min_ind = j;
        }
        swap(ar[min_ind], ar[i]);
    }
    for (int i = 0; i < size; i++) {
        std::cout << ar[i] << " ";
    }
    std::cout << std::endl;
}
