//
// Created by XamaX on 03.04.2022.
//

#include "iostream"
#include "rationalNumbers.h"

int main() {
    rationalNumbers* number1 = new rationalNumbers(11, 12);
    rationalNumbers* number2 = new rationalNumbers(-8, 4);

    rationalNumbers* result = number1->diffNumbers(number2);

    std::cout << " " << result->returnRationalNumber(true) << std::endl << "---" <<  std::endl << " " <<result->returnRationalNumber(false);

    return 0;
}

