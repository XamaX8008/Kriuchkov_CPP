//
// Created by XamaX on 28.03.2022.
//

#ifndef KRIUCHKOV_CPP_DOUBLELINKEDLIST_H
#define KRIUCHKOV_CPP_DOUBLELINKEDLIST_H
#include "LinkedList.h"

class DoubleLinkedList {
public:
    struct Node {
        int value;
        Node *next;
        Node *prev;

        Node(int _value) {
            value = _value;
            next = nullptr;
            prev = nullptr;
        };
        ~Node() = default;
    };
    Node *first = nullptr;
    Node *last = nullptr;
public:
    void addFirst(int value);
    void addLast(int value);
    void removeFirst();
    void removeLast();
    int getFirst();
    int getLast();
    int get(int value);
    void print();
    DoubleLinkedList fromSingleToDouble(LinkedList::Node *node);
};


#endif //KRIUCHKOV_CPP_DOUBLELINKEDLIST_H
