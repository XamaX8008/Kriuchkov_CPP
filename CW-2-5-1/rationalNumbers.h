//
// Created by XamaX on 03.04.2022.
//

#ifndef KRIUCHKOV_CPP_RATIONALNUMBERS_H
#define KRIUCHKOV_CPP_RATIONALNUMBERS_H

class rationalNumbers {
private:
    int numerator;
    int denominator = 1;
    int GSD();
    int LSD(rationalNumbers *otherNumber);
public:
    rationalNumbers *sumNumbers(rationalNumbers *otherNumber);
    rationalNumbers *multiplyNumbers(rationalNumbers *otherNumber);
    rationalNumbers *diffNumbers(rationalNumbers *otherNumber);
    rationalNumbers *divideNumbers(rationalNumbers *otherNumber);

    rationalNumbers(int numerator, int denominator);
    rationalNumbers(int numerator);
    ~rationalNumbers() = default;

    void shortenTheFraction();
    int returnRationalNumber(bool whatToGive);
};


#endif //KRIUCHKOV_CPP_RATIONALNUMBERS_H
