#include<iostream>

int count_bit(int* ar, int size) {
    int MAX_count = 0;
    int MAX_number;
    int number;
    int count;
    for (int i = 0; i < size; i++) {
        count = 0;
        number = ar[i];
        while (number) {
            count += 1;
            number /= 2;
        }
        if (count >= MAX_count and ar[i] >= 0) {
            MAX_count = count;
            MAX_number = ar[i];
        }
    }
    return MAX_number;
}

int main() {
    int ar[5] = {1, 2, -256, 128};
    std::cout << count_bit(&ar[0], 5) << std::endl;
    return 0;
}