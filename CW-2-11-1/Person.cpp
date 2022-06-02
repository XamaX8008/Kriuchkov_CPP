//
// Created by XamaX on 02.06.2022.
//

#include "Person.h"

Person::Person(std::string name, int age, char sex) {
    this->name = name;
    this->sex = sex;
    this->age = age;
}

bool Person::compareBySex(Person *secondPerson) {
    if (this->sex == 'M')
        return true;
    else if (secondPerson->sex == 'M')
        return false;
    else
        return true;
}

bool Person::compareByAge(Person *secondPerson) {
    return this->age < secondPerson->age;
}

bool Person::compareByName(Person *secondPerson) {
    return this->name < secondPerson->name;
}