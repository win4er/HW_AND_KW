#include "recursive.hpp"

int main() {
    int size = 10;
    int ar[size];
    random_Fill_ar(&ar[0], size, 0, 100);
    show_ar(&ar[0], size, '\t');
    std::cout << get_max(&ar[0], size) << "\n";
    std::cout << get_min(&ar[0], size) << "\n";
    return 0;
}