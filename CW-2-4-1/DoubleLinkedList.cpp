//
// Created by XamaX on 28.03.2022.
//

#include "DoubleLinkedList.h"
#include "iostream"

void DoubleLinkedList::print() {
    if (first == nullptr) return;
    Node *pNode = first;
    while (pNode) {
        if (pNode->prev) {
            std::cout << pNode->prev->value << " prev ";
        }
        std::cout << pNode->value << " now";
        if (pNode->next) {
            std::cout << " " << pNode->next->value << " next";
        }
        std::cout << std::endl;
        pNode = pNode->next;
    }
    std::cout << std::endl;
};

void DoubleLinkedList::addFirst(int value) {
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

void DoubleLinkedList::addLast(int value) {
    Node *pNode = new Node(value);
    if (first == nullptr) {
        first = pNode;
        last = pNode;
        return;
    }
    last->next = pNode;
    last = pNode;
};

void DoubleLinkedList::removeFirst() {
    if (first == nullptr) {
        return;
    }
    Node *second = first->next;
    first = second;
};

void DoubleLinkedList::removeLast() {
    if (first == nullptr) {
        return;
    }
    Node *temp = first;
    while (temp->next->next) {
        temp = temp->next;
    }
    last = temp;
    temp->next = nullptr;
};

int DoubleLinkedList::getFirst() {
    return first->value;
};

int DoubleLinkedList::getLast() {
    return last->value;
};

int DoubleLinkedList::get(int value) {
    Node *iter = first;
    for (int i = 0; i < value; i++) {
        iter = iter->next;
    }
    return iter->value;
}

DoubleLinkedList DoubleLinkedList::fromSingleToDouble(LinkedList::Node *node) {
    DoubleLinkedList *doubleLinkedList = new DoubleLinkedList();

    Node *mappedNode = new Node(node->value);

    doubleLinkedList->first = mappedNode;

    LinkedList::Node* tempSingleNode = node;
// 5 3 2 9
    while (tempSingleNode->next) {
        Node *tempNode = mappedNode;
        mappedNode = new Node(tempSingleNode->next->value);
        tempNode->next = mappedNode;
        mappedNode->prev = tempNode;
        tempSingleNode = tempSingleNode->next;
    }

    doubleLinkedList->last = mappedNode;

    return *doubleLinkedList;
}