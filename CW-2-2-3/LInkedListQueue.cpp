//
// Created by XamaX on 17.03.2022.
//

#include "LInkedListQueue.h"

struct LinkedListQueue::LinkedItemQueue {
    int value;
    LinkedItemQueue *nextItem;

    LinkedItemQueue(int value_) {
        value = value_;
        nextItem = nullptr;
    }
};

void LinkedListQueue::enqueue(int value) {
    if (lastItem == nullptr) {
        firstItem = new LinkedItemQueue(value);
        lastItem = firstItem;
    } else {
        LinkedItemQueue *lastItem_ = lastItem;
        lastItem = new LinkedItemQueue(value);
        lastItem_->nextItem = lastItem;
    }
}

int LinkedListQueue::dequeue() {
    if (firstItem != nullptr) {
        int value = firstItem->value;
        firstItem = firstItem->nextItem;
        return value;
    }
}

int LinkedListQueue::getFirst() {
    if (firstItem != nullptr) {
        return firstItem->value;
    }
}