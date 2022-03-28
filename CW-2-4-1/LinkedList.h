//
// Created by XamaX on 28.03.2022.
//

#ifndef KRIUCHKOV_CPP_LINKEDLIST_H
#define KRIUCHKOV_CPP_LINKEDLIST_H


class LinkedList {

public:
    struct Node {
        int value;
        Node *next = nullptr;

        Node(int _value) {
            value = _value;
        };
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
};


#endif //KRIUCHKOV_CPP_LINKEDLIST_H
