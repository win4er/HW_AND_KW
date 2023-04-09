#include "iostream"


int func(int* ar, int N, int element) {
    for (int i = 0; i < N; i++) {
        if (element > ar[i]) {
            continue;
        }
        if (element == ar[i]) {
            return i;
        }
    }
    return element;
}


int main() {
    int N = 5;
    int ar[5] = {0, 1, 9, 100, 300};
    int element;
    element = 100;
    std::cout << "element: " << element << "\tindex/element: " << func(&ar[0], N, element) << std::endl;
    element = 100000;
    std::cout << "element: " << element << "\tindex/element: " << func(&ar[0], N, element) << std::endl;
    return 0;
}