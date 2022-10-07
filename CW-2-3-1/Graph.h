//
// Created by XamaX on 21.03.2022.
//

#ifndef KRIUCHKOV_CPP_GRAPH_H
#define KRIUCHKOV_CPP_GRAPH_H
#include "Node.h"

class Graph {
private:
    std::vector<Node*> nodes;
    static Node* getNextNeighbor(Node* parentNode);
public:
    std::vector<Node*> getNodes();
    void addNode(Node* node);
    void zeroingFlags(std::vector<Node*>& nodes);
    Node* searchInDepth(int value);
    Node* searchInWidth(int value);

    Graph();
    ~Graph() = default;
};

#endif //KRIUCHKOV_CPP_GRAPH_H
