//
// Created by XamaX on 17.03.2022.
//

#ifndef KRUICHKOV_CPP_LINKEDLISTQUEUE_H
#define KRUICHKOV_CPP_LINKEDLISTQUEUE_H

class LinkedListQueue {
private:
    struct LinkedItemQueue;
public:
    LinkedItemQueue* firstItem = nullptr;
    LinkedItemQueue* lastItem = nullptr;
    void enqueue(int value);
    int dequeue();
    int getFirst();
};

#endif //KRUICHKOV_CPP_LINKEDLISTQUEUE_H
