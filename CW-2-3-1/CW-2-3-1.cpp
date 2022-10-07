//
// Created by XamaX on 21.03.2022.
//

#include "Graph.h"
#include "iostream"

int main() {
    Graph* myGraph = new Graph();
    int firstValue, secondValue, thirdValue;

    std::cin >> firstValue >> secondValue >> thirdValue;

    Node *firstNode = new Node(firstValue), *secondNode = new Node(secondValue), *thirdNode = new Node(thirdValue);

    myGraph->addNode(firstNode);
    myGraph->addNode(secondNode);
    myGraph->addNode(thirdNode);

    std::vector<Node*> allNodes = myGraph->getNodes();

    firstNode->addNeighbour(secondNode);
    secondNode->addNeighbour(thirdNode);

    std::vector<Node*> firstNeighbors = firstNode->getNeighbours();
    std::vector<Node*> secondNeighbors = secondNode->getNeighbours();
    std::vector<Node*> thirdNeighbors = thirdNode->getNeighbours();

    bool testOfWidth = myGraph->searchInWidth(secondValue)->getValue() == secondNode->getValue();
    std::cout << testOfWidth << std::endl;

    bool testOfDepth = myGraph->searchInDepth(firstValue)->getValue() == firstNode->getValue();
    std::cout << testOfDepth << std::endl;

    return 0;
}
