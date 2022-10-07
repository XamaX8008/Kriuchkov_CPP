//
// Created by HP on 15.04.2022.
//

#include "iostream"
#include "rationalNumbers.h"

int main() {
    try {
        auto *number1 = new rationalNumbers(8, 1);
        auto *number2 = new rationalNumbers(1, 7);
        rationalNumbers *result = number1->divideNumbers(number2);

        std::cout << " " << result->returnRationalNumber(true) << std::endl << "---" << std::endl << " "
                  << result->returnRationalNumber(false);
    } catch (std::runtime_error e) {
        std::cerr << e.what() << std::endl;
        exit(0);
    }


    return 0;
}