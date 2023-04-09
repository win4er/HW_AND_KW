#include<iostream>
#include <time.h>
#include <string.h>


bool getStatInfo(int* ar, int sizeAr, int* statAr, int sizeStat) {
    bool error_status = true;
    for (int i = 0; i < sizeAr; i++) {
        if (sizeStat < ar[i]) {
            std::cout << "error" << std::endl;
            error_status = false;
            continue;
        }
        statAr[ar[i]]++;
    }
    return error_status;
}

int get_Count_Number(int* ar, int size, int number){
    int count = 0;
    for(int i = 0; i < size; count+=(ar[i]==number), i++);
    return count;
}

void CountSort(int *inputArNeedSort, int sizeInput) {
    int countNum[100];
    memset(countNum, 0x00, 100 * sizeof(int));
    if (getStatInfo(inputArNeedSort, sizeInput, &countNum[0], 100) == false) {
        std::cout << "can`t sort" << std::endl;
    }

    int curIndexInputAr = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < countNum[i]; j++) {
            inputArNeedSort[curIndexInputAr++] = i;
        }
    }
}

void show_el(int* ar, int size){
    for (int i = 0; i < size; i++){
        std::cout << ar[i] << " ";
    }
    std::cout << std::endl;
}

void random_Fill_ar(int* ar, int size, int min, int max){
    srand(time(nullptr));
    for (int i = 0; i < size; i++){
        ar[i] = min + rand() % (max - min + 1);
    }
}

bool test_randomFill(int *ar, int size) {
    int count = 0;
    for (int i = 0; i < size - 1; i++) {
        if (ar[i] == ar[i + 1]) {
            count++;
        }
    }
    if (count == size) {
        return false;
    }
    else {
        return true;
    }
}