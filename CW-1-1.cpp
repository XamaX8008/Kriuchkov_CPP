//
// Created by XamaX on 25.09.2021.
//

#include <iostream>

using namespace std;
int main()
{
    int x1, x2, x3, y1, y2, y3;
    double a, b, c, p, r, q;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    a = sqrt(abs((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
    b = sqrt(abs((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2)));
    c = sqrt(abs((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1)));

    p = (a + b + c) / 2;

    r = 2 / a * sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "Distant of line  " << r;

}