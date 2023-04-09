#include "statarray.hpp"

int get_max(const int* ar, int size){
    if (size == 1){
        return ar[0];
    }
    int maxx = get_max(ar, --size);
    if (ar[size-1] > maxx)
        return ar[size-1];
    return maxx;
}

int get_min(const int* ar, int size){
    if (size == 1){
        return ar[0];
    }
    int minn = get_min(ar, --size);
    if (ar[size-1] < minn)
        return ar[size-1];
    return minn;
}


int binSearch(int* ar, int size, int el) {
    if (ar[size >> 1] == el) {
        return (size >> 1);
    }

    if (size == 1) {
        return -1;
    }

    if (el > ar[size >> 1]) {
        int bs = binSearch(&ar[size >> 1], size - (size >> 1), el);
        return bs + (size >> 1)*(bs != -1);
    }

    if (ar[size >> 1] > el) {
        return binSearch(ar, size >> 1, el);
    }


    return -1;
}