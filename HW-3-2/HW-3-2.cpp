//
// Created by XamaX on 13.10.2021.
//

#include <iostream>

int main() {
    int number;
    std::cin >> number;

    long value = 1;

    if (number == 0) {
        std::cout << 0;
        return 0;
    }
    else if (number == 1) {
        std::cout << 1;
        return 0;
    }
    else {
        long lastValue = 0;
        long hold;
        for (int i = 1; i < number; i++) {
            hold = value;
            value += lastValue;
            lastValue = hold;
        }
    }

    std::cout << value;

    return 0;
}