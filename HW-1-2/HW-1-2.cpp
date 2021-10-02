//
// Created by XamaX on 29.09.2021.
//

#include <iostream>

using namespace std;

int main() {
    double productPrice, firstConditionOfTheDiscount, secondConditionOfTheDiscount, firstDiscount, secondDiscount;
    cin >> productPrice >> firstConditionOfTheDiscount >> secondConditionOfTheDiscount >> firstDiscount
        >> secondDiscount;

    if (productPrice > secondConditionOfTheDiscount) {
        productPrice = (productPrice / 100) * (100 - secondDiscount);
        cout << productPrice;
    } else if (productPrice > firstConditionOfTheDiscount) {
        productPrice = (productPrice / 100) * (100 - firstDiscount);
        cout << productPrice;
    } else {
        cout << productPrice;
    }

    return 0;
}