//
// Created by XamaX on 02.06.2022.
//

#ifndef KRUICHKOV_CPP_MYVECT_H
#define KRUICHKOV_CPP_MYVECT_H

#include "vector"
#include <algorithm>
#include "Person.h"

template <class T>
class MyVector {
private:
    std::vector<T> vector;
public:
    MyVector() {
        vector = std::vector<T>();
    }

    void push_back(Person person) {
        vector.push_back(person);
    }

    void reverse() {
        std::reverse(vector.begin(), vector.end());
    }

    void sort(bool(*comp)(T, T)) {
        std::sort(this->vect.begin(), this->vect.end(), comp);
    }
};

#endif //KRUICHKOV_CPP_MYVECT_H
