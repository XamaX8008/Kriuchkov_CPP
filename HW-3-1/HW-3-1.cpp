//
// Created by XamaX on 13.10.2021.
//

#include <iostream>

int main() {
    int hourHand, minuteHand;
    std::cin >> hourHand >> minuteHand;

    if (hourHand != 0) {
        hourHand = 12 - hourHand;
    }

    if (minuteHand != 0) {
        minuteHand = 60 - minuteHand;
    }
    std::cout << hourHand << " " << minuteHand;

    return 0;
}