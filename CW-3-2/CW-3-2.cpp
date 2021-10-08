//
// Created by XamaX on 08.10.2021.
//
#include <iostream>
#include <string>

int main() {
    std::string line;
    std::cin >> line;
    std::string minPalindrome = "";
    bool flag = true;

    for (int i = 0; i < line.length(); i++) {
        if (line[i + 1] == line[i]) {
            std::cout << line[i] << line[i + 1];
            return 0;
        }
        else if (line[i] == line[i + 2] && flag) {
            minPalindrome = minPalindrome + line[i] + line[i + 1] + line[i + 2];
            flag = false;
        }
    }
    std::cout << minPalindrome;

    return 0;
}
