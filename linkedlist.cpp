#include "linkedlist.hpp"

Node::Node() {
    next = nullptr;
    prev = nullptr;
    data = 0;
}

Node::Node(int DATA) {
  next = nullptr;
  prev = nullptr;
  data = DATA;
}

Node::~Node() {
    delete [] prev;
    delete [] next;
}


LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
    countN = 0;
}

LinkedList::~LinkedList() {
    delete [] tail;
    countN = 0;
}

void LinkedList::put_to_end(int el) {
    Node* n;
    n = new Node(el);
    n->data = el;
    countN += 1;
    if (countN == 1) {
        tail = n;
        head = n;
    }
    else {
        tail->next = n;
        n->prev = tail;
        tail = n;
    }
}

void LinkedList::put_to_front(int el) {
    Node* n;
    n = new Node(el);
    n->data = el;
    countN += 1;
    if (countN == 1) {
        tail = n;
        head = n;
    }
    else {
        tail->prev = n;
        n->next = head;
        head = n;
    }
}

void LinkedList::showar_up(char symb) {
    Node* NODE;
    for (int i = 0; i < countN; i++) {
        if (i == 0) {
            NODE = head;
        } else {
            NODE = NODE->next;
        }
        std::cout << NODE->data << symb;
    }
    std::cout << std::endl;
}

void LinkedList::showar_down(char symb) {
    Node* NODE;
    for (int i = 0; i < countN; i++) {
        if (i == 0) {
            NODE = tail;
        } else {
            NODE = NODE->prev;
        }
        std::cout << NODE->data << symb;
    }
    std::cout << std::endl;
}

int LinkedList::get_from_end() {
    return tail->data;
}

int LinkedList::get_from_front() {
    return head->data;
}