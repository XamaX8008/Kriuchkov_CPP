//
// Created by XamaX on 22.03.2022.
//

#ifndef KRUICHKOV_CPP_NODE_H
#define KRUICHKOV_CPP_NODE_H
#pragma once
#include "vector"

class Node {
private:
    std::vector<Node*> neighbours;
    int value;
public:
    bool wasSeen = false;

    std::vector<Node*> getNeighbours();
    void addNeighbour(Node* neighbour);
    int getValue();

    Node(int value);
    Node(std::vector<Node*> neighbours, int value);
    ~Node() = default;
};

#endif //KRUICHKOV_CPP_NODE_H
