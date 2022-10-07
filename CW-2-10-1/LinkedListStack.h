//
// Created by XamaX on 26.05.2022.
//

#ifndef KRIUCHKOV_CPP_LINKEDLISTSTACK_H
#define KRIUCHKOV_CPP_LINKEDLISTSTACK_H


#include "iostream"
#include "Node.h"
#pragma once
class LinkedListStack {
private:
    std::shared_ptr<Node> firstNode;
public:
    LinkedListStack();
    void push();
    int pop();
    int getTop();
};


#endif //KRIUCHKOV_CPP_LINKEDLISTSTACK_H
