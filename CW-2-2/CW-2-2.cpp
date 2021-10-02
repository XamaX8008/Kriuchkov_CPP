//
// Created by XamaX on 01.10.2021.
//
#include <iostream>;
#include <string>;

int main() {
    std::string wordIn;
    std::cin >> wordIn;
    int counter = 0;

    for (int i = 0; i < wordIn.size(); i++) {
        if (wordIn[i] == 'f') {
            counter++;
            if (counter == 2) {
                double index = i;
                std::cout << index;
            }
        }
    }

    if (counter == 0) {
        std::cout << -2;
    } else if (counter == 1) {
        std::cout << -1;
    }

    return 0;
}