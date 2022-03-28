//
// Created by XamaX on 28.03.2022.
//

#include "LinkedList.h"
#include "iostream"

void LinkedList::print() {
    if (first == nullptr) return;
    Node *pNode = first;
    while (pNode) {
        std::cout << pNode->value << std::endl;
        pNode = pNode->next;
    }
    std::cout << std::endl;
};

void LinkedList::addFirst(int value) {
    Node *pNode = new Node(value);
    if (first == nullptr) {
        first = pNode;
        last = pNode;
        return;
    }
    Node *first_ = first;
    first = pNode;
    first->next = first_;
};

void LinkedList::addLast(int value) {
    Node *pNode = new Node(value);
    if (first == nullptr) {
        first = pNode;
        last = pNode;
        return;
    }
    last->next = pNode;
    last = pNode;
};

void LinkedList::removeFirst() {
    if (first == nullptr) {
        return;
    }
    Node *second = first->next;
    first = second;
    if (first == nullptr){
        last = first;
    }
};

void LinkedList::removeLast() {
    if (first == nullptr) {
        return;
    }
    Node *temp = first;
    while (temp->next->next) {
        temp = temp->next;
    }
    last = temp;
    temp->next = nullptr;
    if (first == nullptr){
        last = first;
    }
};

int LinkedList::getFirst() {
    return first->value;
};

int LinkedList::getLast() {
    return last->value;
};

int LinkedList::get(int value) {
    Node *iter = first;
    for (int i = 0; i < value; i++) {
        iter = iter->next;
    }
    return iter->value;
};
