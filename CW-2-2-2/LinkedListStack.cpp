//
// Created by XamaX on 17.03.2022.
//

#include "LinkedListStack.h"

struct LinkedListStack::LinkedItemStack {
    int value;
    LinkedItemStack *nextItem;

    LinkedItemStack(int value_) {
        value = value_;
        nextItem = nullptr;
    }
};

void LinkedListStack::push(int value) {
    if (firstItem == nullptr) {
        firstItem = new LinkedItemStack(value);
    } else {
        LinkedItemStack *firstItem_ = firstItem;
        firstItem = new LinkedItemStack(value);
        firstItem->nextItem = firstItem_;
    }
}

int LinkedListStack::pop() {
    if (firstItem != nullptr) {
        int value = firstItem->value;
        firstItem = firstItem->nextItem;
        return value;
    }
}

int LinkedListStack::getTop() {
    if (firstItem != nullptr) {
        return firstItem->value;
    }
}