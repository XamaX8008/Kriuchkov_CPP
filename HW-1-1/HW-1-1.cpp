//
// Created by XamaX on 29.09.2021.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if ((a != 0 && b != 0) || (a != 0 && b == 0)) {
        double discriminant = b * b - 4 * a * c;
        if (discriminant < 0) {
            return 0;
        } else if (discriminant == 0) {
            double firstX = -b / (2 * a);
            cout << firstX;
        } else {
            double firstX = (-b + sqrt(discriminant)) / (2 * a);
            double secondX = (-b - sqrt(discriminant)) / (2 * a);
            cout << firstX << " " << secondX;
        }
    } else if (a == 0 && b == 0) {
        cout << "Coefficients entered incorrectly";
    } else if (a == 0) {
        double firstX = (-c) / b;
        cout << firstX;
    } else if (b == 0) {
        double firstX = sqrt((-c) / b);
        cout << firstX;
    }

    return 0;
}
