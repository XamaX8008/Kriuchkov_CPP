//
// Created by XamaX on 13.10.2021.
//

#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
    int hourHand, minuteHand;
    std::cin >> hourHand >> minuteHand;

    if (hourHand != 0) {
        hourHand = abs(hourHand - 12);
    }

    if (minuteHand != 0) {
        minuteHand = abs(minuteHand - 60);
    }
    std::cout << hourHand << " " << minuteHand;

    return 0;
}