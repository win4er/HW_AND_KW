#include "selectionsort.hpp"

void swap(int& a, int& b){
    int c = a;
    a = b;
    b = c;
}

void show_el(int* ar, int size){
    for (int i = 0; i < size; i++){
        std::cout << ar[i] << " ";
    }
    std::cout << std::endl;
}

int getIndMax(int* ar, int size) {
    for (int i = 0; i < size; i++) {
        int flag = 1;
        for (int j = 0; j < size; j++) {
            if (ar[j] > ar[i]) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            return i;
        }
    }
}

void selection_sort_down(int* ar, int size) {
    for (int i = 0; i < size; i++) {
        swap(ar[i], ar[getIndMax(&ar[i], size-i)+i]);
    }
}

void selection_sort_up(int* ar, int size) {
    for (int i = 0; i < size; i++) {
        swap(ar[size-i-1], ar[getIndMax(&ar[0], size-i)]);
    }
}

bool isSortedUP(int* ar, int size) {
    for (int i = 0; i < size - 1; i++) {
        if (ar[i] > ar[i + 1]) {
            return false;
        }
    }
    return true;
}

bool isSortedDOWN(int* ar, int size) {
    for (int i = 0; i < size - 1; i++) {
        if (ar[i] < ar[i + 1]) {
            return false;
        }
    }
    return true;
}