//
// Created by XamaX on 28.03.2022.
//

#include "LinkedList.h"
#include "DoubleLinkedList.h"

int main() {
    LinkedList* myList = new LinkedList();
    myList->addFirst(5);
    myList->addLast(3);
    myList->print();

    auto* doubleLinkedList = new DoubleLinkedList();
    *doubleLinkedList = doubleLinkedList->fromSingleToDouble(myList->first);
    doubleLinkedList->print();

    return 0;
}