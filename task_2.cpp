#include "task_2.hpp"

int typeAr(int* ar, int size){
    int type_up = 0;
    int type_down = 0;
    for (int i = 0; i < size-1; i++){
        if (ar[i] >= ar[i+1])
            type_down++;
        if (ar[i] <= ar[i+1])
            type_up++;
    }
    return (type_down == size-1)*2 + (type_up == size-1);
}