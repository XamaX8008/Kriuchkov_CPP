//
// Created by XamaX on 26.05.2022.
//

#include "iostream"
#include "LinkedListStack.h"

int main() {
    std::unique_ptr<LinkedListStack> myStack = std::make_unique<LinkedListStack>();
    myStack->push();
    myStack->push();
    myStack->push();
    myStack->push();
    int a = myStack->getTop();
    int b = myStack->pop();
    int c = myStack->pop();
    std::cout << a << " " << b << " " << c;

    return 0;
}