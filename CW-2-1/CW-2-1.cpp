//
// Created by XamaX on 01.10.2021.
//
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string wordOne, wordTwo, wordThree;

    std::cin >> wordOne >> wordTwo >> wordThree;

    std::string minWordOneTwo = std::min(wordOne, wordTwo);
    std::string minWordTwoThree = std::min(minWordOneTwo, wordThree);

    std::cout << minWordTwoThree;

    return 0;
}
