//
// Created by XamaX on 01.10.2021.
//
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string firstWord, secondWord, thirdWord;
    std::cin >> firstWord >> secondWord >> thirdWord;

    std::string minWord = std::min(firstWord, secondWord);
    minWord = std::min(minWord, thirdWord);

    std::cout << minWord;

    return 0;
}
