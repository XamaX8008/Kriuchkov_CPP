//
// Created by XamaX on 14.04.2022.
//

#ifndef KRIUCHKOV_CPP_BUSSTOP_H
#define KRIUCHKOV_CPP_BUSSTOP_H

#include "map"
#include "string"
#include "vector"
#include "iostream"

class BusStop {
private:
    std::vector <std::string> thisBuses;
    std::string nameOfStop;
public:
    std::string returnNameOfStop();

    std::vector <std::string> returnBuses();

    void addNewBus(const std::string &bus);

    BusStop(const std::string &bus, std::string stopName);

    ~BusStop() = default;
};

#endif //KRIUCHKOV_CPP_BUSSTOP_H
