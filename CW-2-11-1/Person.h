//
// Created by XamaX on 02.06.2022.
//

#ifndef KRUICHKOV_CPP_PERSON_H
#define KRUICHKOV_CPP_PERSON_H


#include "string"
class Person {
private:
    int age;
    std::string name;
    char sex;
public:
    Person(std::string name, int age, char sex);
    bool compareByName(Person* secondPerson);
    bool compareByAge(Person* secondPerson);
    bool compareBySex(Person* secondPerson);
};


#endif //KRUICHKOV_CPP_PERSON_H
