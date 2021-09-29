//
// Created by XamaX on 29.09.2021.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x1, x2, x, D, a, b, c;

    cin >> a >> b >> c;
    if (a != 0 && b != 0 && c != 0) {
        D = b * b - 4 * a * c;
        if (D < 0) {
            return 0;
        } else if (D == 0) {
            x = -b / (2 * a);
            cout << x;
        } else {
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            cout << x1 << " " << x2;
        }
    } else if ((b == 0 && c == 0) || (a == 0 && b == 0)) {
        cout << 0;
    } else if (a == 0) {
        x = (-c) / b;
        cout << x;
    } else if (b == 0) {
        x = sqrt((-c) / b);
        cout << x;
    } else if(c == 0) {
        x1 = 0;
        x2 = (-b) / a;
        cout << x1 << " " << x2;
    }
}
