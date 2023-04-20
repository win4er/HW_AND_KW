#include "linkedlist.hpp"

int main() {

    LinkedList array;
    int SIZE = 10;
    for (int i = 0; i < SIZE; i++) {
        array.put_to_end(i);
    }
    array.showar_up();
    array.showar_down();
    delete &array;

    for (int i = 0; i < SIZE; i++) {
        array.put_to_front(i);
    }
    array.showar_up();
    array.showar_down();
    std::cout << array.get_from_end();
    return 0;
}
