//
// Created by XamaX on 14.04.2022.
//

#include "BusStop.h"
#include <utility>

BusStop::BusStop(const std::string &bus, std::string stopName) {
    this->thisBuses.push_back(bus);
    this->nameOfStop = std::move(stopName);
}

void BusStop::addNewBus(const std::string &bus) {
    this->thisBuses.push_back(bus);
}

std::vector <std::string> BusStop::returnBuses() {
    return this->thisBuses;
}

std::string BusStop::returnNameOfStop() {
    return this->nameOfStop;
}
