//
// Created by XamaX on 22.03.2022.
//

#include "Node.h"

#include "Node.h"

/* -----Конструктор без передачи соседей----- */
Node::Node(int value) {
    this->neighbours = std::vector<Node *>();
    this->value = value;
}

/* ---------Добавляет соседа узлу-------- */
void Node::addNeighbour(Node *neighbour) {
    this->neighbours.push_back(neighbour);
    neighbour->neighbours.push_back(this);
}

/* ---------Конструктор с передачей соседей--------- */
Node::Node(std::vector<Node *> neighbours, int value) {
    this->neighbours = neighbours;
    this->value = value;
}

/* --------Возвращает соседей узла-------- */
std::vector<Node *> Node::getNeighbours() {
    return this->neighbours;
}

/* ----Возвращает значение узла---- */
int Node::getValue() {
    return this->value;
}