//
// Created by XamaX on 01.10.2021.
//
#include <iostream>;
#include <string>;

int main() {
    std::string wordIn;
    std::cin >> wordIn;
    int firstCounter = 0, secondCounter = 0;

    for (int i = 0; i < wordIn.size(); i++) {
        if (wordIn[i] == 'f') {
            firstCounter++;
        }
    }

    if (firstCounter == 0) {
        std::cout << -2;
    } else if (firstCounter == 1) {
        std::cout << -1;
    } else {
        for (int i = 0; i < wordIn.size(); i++) {
            if (wordIn[i] == 'f') {
                secondCounter++;
                if (secondCounter == 2) {
                    std::cout << i;
                }
            }
        }
    }

    return 0;
}