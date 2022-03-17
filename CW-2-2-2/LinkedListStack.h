//
// Created by XamaX on 17.03.2022.
//

#ifndef KRUICHKOV_CPP_LINKEDLISTSTACK_H
#define KRUICHKOV_CPP_LINKEDLISTSTACK_H


class LinkedListStack {
private:
    struct LinkedItemStack;
public:
    LinkedItemStack* firstItem = nullptr;
    void push(int value);
    int pop();
    int getTop();
};

#endif //KRUICHKOV_CPP_LINKEDLISTSTACK_H
