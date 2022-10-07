//
// Created by XamaX on 26.05.2022.
//

#include "LinkedListStack.h"

LinkedListStack::LinkedListStack() {
    firstNode = nullptr;
}

void LinkedListStack::push() {
    int value;
    std::cin >> value;
    if (firstNode == nullptr) {
        firstNode = std::make_shared<Node>(value);
    } else {
        std::shared_ptr<Node> secondNode = firstNode;
        firstNode = std::make_shared<Node>(value);
        firstNode->nextNode = secondNode;
    }
};

int LinkedListStack::pop() {
    int value = firstNode->getValue();
    firstNode = firstNode->nextNode;
    return value;
};

int LinkedListStack::getTop() {
    return firstNode->getValue();
};