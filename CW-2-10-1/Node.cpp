//
// Created by XamaX on 26.05.2022.
//

#include "Node.h"

Node::Node(int value_) {
    value = value_;
    nextNode = nullptr;
};

Node::Node() {
    value = 0;
    nextNode = nullptr;
}

int Node::getValue() {
    return this->value;
}
