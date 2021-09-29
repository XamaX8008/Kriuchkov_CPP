//
// Created by XamaX on 29.09.2021.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    double x1, x2, x, D;

    cin >> a >> b >> c;
    D = sqrt(b * b - 4 * a * c);
    if (D < 0) {
        return 0;
    }
    else if (D == 0) {
        x = -b / 2a;
        cout << x;
    }
    else {
        x1 = -b + sqrt(D) / 2a;
        x2 = -b - sqrt(D) / 2a;
        cout << x1 << x2;
    }

}