//
// Created by XamaX on 29.09.2021.
//

#include <iostream>

using namespace std;

int main() {
    double productPrice, firstConditionOfDiscount, secondConditionOfDiscount, firstDiscount, secondDiscount;
    cin >> productPrice >> firstConditionOfDiscount >> secondConditionOfDiscount >> firstDiscount
        >> secondDiscount;

    if (productPrice > secondConditionOfDiscount) {
        productPrice = (productPrice / 100) * (100 - secondDiscount);
        cout << productPrice;
    } else if (productPrice > firstConditionOfDiscount) {
        productPrice = (productPrice / 100) * (100 - firstDiscount);
        cout << productPrice;
    } else {
        cout << productPrice;
    }

    return 0;
}