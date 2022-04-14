//
// Created by XamaX on 14.04.2022.
//

#include "Solution.h"

auto allBuses = std::map<std::string, std::vector<BusStop *>>();
std::vector<BusStop *> allStops = std::vector<BusStop *>();
std::map<std::string, int> allOperations = {
        {"NEW_BUS",        0},
        {"BUSES_FOR_STOP", 1},
        {"STOPS_FOR_BUS",  2},
        {"ALL_BUSES",      3}
};

void Solution::NEW_BUS() {
    std::string busName;
    std::cin >> busName;
    std::vector<BusStop *> busStops = std::vector<BusStop *>();

    int stopCount;
    std::cin >> stopCount;
    for (int i = 0; i < stopCount; i++) {
        std::string stopName;
        std::cin >> stopName;
        bool isExist = false;
        BusStop *neededStop = nullptr;
        for (auto &allStop: ::allStops) {
            if (allStop->returnNameOfStop() == stopName) {
                isExist = true;
                neededStop = allStop;
                break;
            }
        }
        if (isExist) {
            neededStop->addNewBus(busName);
        } else {
            neededStop = new BusStop(busName, stopName);
            ::allStops.push_back(neededStop);
        }
        busStops.push_back(neededStop);
    }
    ::allBuses[busName] = busStops;
}

void Solution::STOPS_FOR_BUS() {
    std::string busName;
    std::cin >> busName;
    if (::allBuses.count(busName)) {
        std::vector<BusStop *> thisListOfStops = ::allBuses[busName];
        for (auto &thisListOfStop: thisListOfStops) {
            std::cout << "Stop " << thisListOfStop->returnNameOfStop() << ": ";
            for (int j = 0; j < thisListOfStop->returnBuses().size() - 1; j++) {
                if (thisListOfStop->returnBuses()[j] != busName)
                    std::cout << thisListOfStop->returnBuses()[j] << " ";
            }
            if (thisListOfStop->returnBuses()[thisListOfStop->returnBuses().size() - 1] != busName)
                std::cout << thisListOfStop->returnBuses()[thisListOfStop->returnBuses().size() - 1] << std::endl;
            else if (thisListOfStop->returnBuses().size() != 1)
                std::cout << std::endl;
            else
                std::cout << "no interchange" << std::endl;
        }
    } else {
        std::cout << "No bus" << std::endl;
    }
}

void Solution::BUSES_FOR_STOP() {
    std::string nameOfStop;
    std::cin >> nameOfStop;
    bool isStopExist = false;
    std::vector<std::string> busesOfStop;
    for (auto &allStop: ::allStops) {
        if (allStop->returnNameOfStop() == nameOfStop) {
            isStopExist = true;
            busesOfStop = allStop->returnBuses();
            break;
        }
    }
    if (isStopExist) {
        for (int i = 0; i < busesOfStop.size() - 1; i++) {
            std::cout << busesOfStop[i] << " ";
        }
        std::cout << busesOfStop[busesOfStop.size() - 1] << std::endl;
    } else {
        std::cout << "No stop" << std::endl;
    }
}

void Solution::ALL_BUSES() {
    if (!::allBuses.empty()) {
        for (auto &item: ::allBuses) {
            std::cout << "Bus " << item.first << ":";
            for (auto &i: item.second) {
                std::cout << " " << i->returnNameOfStop();
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "No buses" << std::endl;
    }
}

void Solution::chooseOperation() {
    int amountOfOperations;
    std::cin >> amountOfOperations;
    for (int i = 0; i < amountOfOperations; i++) {
        std::string newOperation;
        std::cin >> newOperation;

        switch (::allOperations[newOperation]) {
            case 0:
                NEW_BUS();
                break;
            case 1:
                BUSES_FOR_STOP();
                break;
            case 2:
                STOPS_FOR_BUS();
                break;
            case 3:
                ALL_BUSES();
                break;
            default:
                break;
        }
    }
}
