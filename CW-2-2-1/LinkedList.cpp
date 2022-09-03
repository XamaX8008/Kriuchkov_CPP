//
// Created by XamaX on 17.03.2022.
//

#include "LinkedList.h"

struct LinkedList::LinkedItem {
    int value;
    LinkedItem *nextItem;

    LinkedItem(int value_) {
        value = value_;
        nextItem = nullptr;
    }
};

void LinkedList::addFirst(int value) {
    if (lastItem == nullptr) {
        firstItem = new LinkedItem(value);
        lastItem = firstItem;
    } else {
        LinkedItem *firstItem_ = firstItem;
        firstItem = new LinkedItem(value);
        firstItem->nextItem = firstItem_;
    }
}

void LinkedList::addLast(int value) {
    if (lastItem == nullptr) {
        firstItem = new LinkedItem(value);
        lastItem = firstItem;
    } else {
        LinkedItem *lastItem_ = lastItem;
        lastItem = new LinkedItem(value);
        lastItem_->nextItem = lastItem;
    }
}

void LinkedList::removeFirst() {
    if (firstItem != nullptr) {
        firstItem = firstItem->nextItem;
    }
    if (firstItem == nullptr) {
        lastItem = firstItem;
    }
}

void LinkedList::removeLast() {
    LinkedItem *preLastItem = firstItem;
    if (preLastItem->nextItem == nullptr) {
        firstItem = nullptr;
        lastItem = nullptr;
    } else if (preLastItem != nullptr) {
        while (preLastItem->nextItem->nextItem != nullptr) {
            preLastItem = preLastItem->nextItem;
        }
        lastItem = preLastItem;
        lastItem->nextItem = nullptr;
    }
}

int LinkedList::getFirst() {
    return firstItem->value;
}

int LinkedList::getLast() {
    return lastItem->value;
}

int LinkedList::get(int index) {
    LinkedItem *tmpItem = firstItem;
    for (int i = 0; i < index; i++) {
        tmpItem = tmpItem->nextItem;
        if (tmpItem == nullptr) {
            return -1;
        }
    }
    return tmpItem->value;
}