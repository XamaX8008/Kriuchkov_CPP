//
// Created by XamaX on 26.05.2022.
//

#ifndef KRIUCHKOV_CPP_NODE_H
#define KRIUCHKOV_CPP_NODE_H


#include <memory>
#pragma once

class Node {
private:
    int value;

public:
    std::shared_ptr<Node> nextNode;
    Node(int value_);
    Node();
    int getValue();
};



#endif //KRIUCHKOV_CPP_NODE_H
