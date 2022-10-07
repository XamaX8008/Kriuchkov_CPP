//
// Created by XamaX on 03.04.2022.
//

#include "rationalNumbers.h"
#include "iostream"
#include "algorithm"

rationalNumbers::rationalNumbers(int numerator, int denominator) {
    this->numerator = numerator;

    if (denominator > 0) {
        this->denominator = denominator;
    } else {
        std::cout << "~ERROR~ The denominator should be natural!" << std::endl;
        exit(0);
    }
    this->shortenTheFraction();
}

rationalNumbers::rationalNumbers(int numerator) {
    this->numerator = numerator;
}

rationalNumbers *rationalNumbers::sumNumbers(rationalNumbers *otherNumber) {
    int LSD = this->LSD(otherNumber);
    int firstCoefficient = LSD / this->denominator;
    int secondCoefficient = LSD / otherNumber->denominator;

    auto *result = new rationalNumbers(0);

    int firstNumerator = this->numerator * firstCoefficient;
    int secondNumerator = otherNumber->numerator * secondCoefficient;

    result->numerator = firstNumerator + secondNumerator;
    result->denominator = LSD;

    if (result->numerator == 0) result->denominator = 1;

    result->shortenTheFraction();
    return result;
}

rationalNumbers *rationalNumbers::diffNumbers(rationalNumbers *otherNumber) {
    int LSD = this->LSD(otherNumber);
    int firstCoefficient = LSD / this->denominator;
    int secondCoefficient = LSD / otherNumber->denominator;

    auto *result = new rationalNumbers(0);

    int firstNumerator = this->numerator * firstCoefficient;
    int secondNumerator = otherNumber->numerator * secondCoefficient;

    result->numerator = firstNumerator - secondNumerator;
    result->denominator = LSD;

    if (result->numerator == 0) result->denominator = 1;

    result->shortenTheFraction();
    return result;
}

int rationalNumbers::LSD(rationalNumbers *otherNumber) {
    int firstDenominator = this->denominator;
    int secondDenominator = otherNumber->denominator;
    int max = std::max(secondDenominator, secondDenominator);

    for (int i = max; i > 0; i++) {
        if ((i % firstDenominator == 0) && (i % secondDenominator == 0)) {
            return i;
        }
    }

    return 1;
}

rationalNumbers *rationalNumbers::multiplyNumbers(rationalNumbers *otherNumber) {
    rationalNumbers *result = new rationalNumbers(this->numerator * otherNumber->numerator,
                                                  this->denominator * otherNumber->denominator);
    result->shortenTheFraction();
    return result;
}

rationalNumbers *rationalNumbers::divideNumbers(rationalNumbers *otherNumber) {
    bool isNegative = false;

    if (((this->numerator < 0) && (otherNumber->numerator >= 0)) ||
        ((this->numerator >= 0) && (otherNumber->numerator < 0)))
        isNegative = true;

    rationalNumbers *result = new rationalNumbers(1, 1);

    if (!isNegative) {
        result->numerator = this->numerator * otherNumber->denominator;
        result->denominator = this->denominator * otherNumber->numerator;
    } else {
        result->numerator = this->numerator * otherNumber->denominator * -1;
        result->denominator = this->denominator * otherNumber->numerator * -1;
    }

    result->shortenTheFraction();
    return result;
}

int rationalNumbers::GSD() {
    int numerator = abs(this->numerator);
    int denominator = this->denominator;

    while (numerator != denominator) {
        if (numerator > denominator) {
            long tmp = numerator;
            numerator = denominator;
            denominator = tmp;
        }
        denominator = denominator - numerator;
    }
    return numerator;
}

void rationalNumbers::shortenTheFraction() {
    int GSD = this->GSD();
    this->numerator = this->numerator / GSD;
    this->denominator = this->denominator / GSD;
}

int rationalNumbers::returnRationalNumber(bool whatToGive) {
    if (whatToGive) {
        return this->numerator;
    } else {
        return this->denominator;
    }
}