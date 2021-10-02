//
// Created by XamaX on 29.09.2021.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double coefficientA, coefficientB, coefficientC;
    cin >> coefficientA >> coefficientB >> coefficientC;

    if (coefficientA != 0) {
        double discriminant = coefficientB * coefficientB - 4 * coefficientA * coefficientC;
        if (discriminant < 0) {
            return 0;
        } else if (discriminant == 0) {
            double firstX = -coefficientB / (2 * coefficientA);
            cout << firstX;
        } else {
            double firstX = (-coefficientB + sqrt(discriminant)) / (2 * coefficientA);
            double secondX = (-coefficientB - sqrt(discriminant)) / (2 * coefficientA);
            cout << firstX << " " << secondX;
        }
    } else if (coefficientA == 0 && coefficientB == 0) {
        return 0;
    } else if (coefficientA == 0) {
        double firstX = (-coefficientC) / coefficientB;
        cout << firstX;
    } else if (coefficientB == 0) {
        double firstX = sqrt((-coefficientC) / coefficientB);
        cout << firstX;
    }

    return 0;
}
