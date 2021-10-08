//
// Created by XamaX on 08.10.2021.
//

#include <iostream>
#include <string>

int main() {
    std::string line;
    std::cin >> line;

    for (int i = 0; i < line.length() / 2; i++) {
        if (line[i] != line[line.length() - i - 1]) {
            std::cout << "false";
            return 0;
        }
    }
    std::cout << "true";

    return 0;
}
