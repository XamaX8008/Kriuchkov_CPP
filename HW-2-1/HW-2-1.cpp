//
// Created by XamaX on 05.10.2021.
//

#include <iostream>;
#include <string>;
#include <cmath>;

int main() {
    int number, baseOfNumberSystem;
    std::cin >> number >> baseOfNumberSystem;

    int result = 0;
    int count = 0;

    while (number != 0) {
        result += (number % baseOfNumberSystem) * pow(10, count);
        number /= baseOfNumberSystem;
        count++;
    }

    std::cout << result;

    return 0;
}
