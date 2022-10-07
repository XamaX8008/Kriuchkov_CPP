//
// Created by XamaX on 21.03.2022.
//

#include "Graph.h"
#include "queue"
#include "stack"

/* -------Возвращает узлы графа------- */
std::vector<Node *> Graph::getNodes() {
    return this->nodes;
}

/* ----Добаваляет узел в граф---- */
void Graph::addNode(Node *node) {
    this->nodes.push_back(node);
}

/* ------------Конструктор------------ */
Graph::Graph() {
    this->nodes = std::vector<Node *>();
}

/* -----------------Обнуление флагов---------------- */
void Graph::zeroingFlags(std::vector<Node *> &nodes) {
    for (auto &node: this->nodes) {
        node->wasSeen = false;
    }
}

/* ------------Поиск следующего узла стека---------- */
Node *Graph::getNextNeighbor(Node *parentNode) {
    Node *nextNode = nullptr;
    for (auto i: parentNode->getNeighbours()) {
        if (!i->wasSeen) {
            nextNode = i;
            break;
        }
    }

    return nextNode;
}

/* ------------Поиск в глубину------------ */
Node *Graph::searchInDepth(int value) {
    std::stack<Node *> myStack;
    myStack.push(this->nodes[0]);
    this->nodes[0]->wasSeen = true;
    while (!myStack.empty()) {
        if (myStack.top()->getValue() == value) {
            zeroingFlags(this->nodes);
            return myStack.top();
        }
        Node *tmpNode = getNextNeighbor(myStack.top());
        if (tmpNode == nullptr) {
            myStack.pop();
        } else {
            myStack.push(tmpNode);
        }
    }
    zeroingFlags(this->nodes);
}

/* -----------------Поиск в ширину---------------- */
Node *Graph::searchInWidth(int value) {
    std::queue<Node *> myQueue;
    myQueue.push(this->nodes[0]);
    this->nodes[0]->wasSeen = true;
    while (!myQueue.empty()) {
        if (myQueue.front()->getValue() == value) {
            zeroingFlags(this->nodes);
            return myQueue.front();
        }
        for (auto i: myQueue.front()->getNeighbours()) {
            if (!i->wasSeen) {
                myQueue.push(i);
                i->wasSeen = true;
            }
        }
        myQueue.pop();
    }
    zeroingFlags(this->nodes);
}

