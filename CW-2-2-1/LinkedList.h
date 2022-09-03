//
// Created by XamaX on 17.03.2022.
//

#ifndef KRUICHKOV_CPP_LINKEDLIST_H
#define KRUICHKOV_CPP_LINKEDLIST_H


class LinkedList {
private:
    struct LinkedItem;
public:
    LinkedItem* firstItem = nullptr;
    LinkedItem* lastItem = nullptr;
    void addFirst(int value);
    void addLast(int value);
    void removeFirst();
    void removeLast();
    int getFirst();
    int getLast();
    int get(int index);
};



#endif //KRUICHKOV_CPP_LINKEDLIST_H
