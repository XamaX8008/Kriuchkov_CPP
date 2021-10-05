//
// Created by XamaX on 05.10.2021.
//

#include <iostream>;
#include <string>;
#include <cmath>;

int main() {
    int number, numberSystem;
    std::cin >> number >> numberSystem;

    int result = 0, count = 0;
    while (number != 0) {
        result += (number % numberSystem) * pow(10, count);
        number /= numberSystem;
        count++;
    }

    std::cout << result;

    return 0;
}
