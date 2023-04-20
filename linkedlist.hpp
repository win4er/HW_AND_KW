#ifndef _linkedlist_hpp_
#define _linkedlist_hpp_

#include <iostream>

//#define SHOW_LL_INFO

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node();
    Node(int);
    ~Node();
};


class LinkedList {
    private:
        Node* head;
        Node* tail;
        int countN;


    public:
        LinkedList();
        ~LinkedList();
        void put_to_front(int el);
        void put_to_end(int el);
        int get_from_end();
        int get_from_front();
        void showar_up(char symb='\t');
        void showar_down(char symb='\t');
        int insert(int);
        bool Swap(int, int);
};
#endif