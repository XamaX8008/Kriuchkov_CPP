//
// Created by XamaX on 29.09.2021.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double quadraticCoefficient, linearCoefficient, freeMember;
    cin >> quadraticCoefficient >> linearCoefficient >> freeMember;

    if (quadraticCoefficient != 0) {
        double discriminant = linearCoefficient * linearCoefficient - 4 * quadraticCoefficient * freeMember;
        if (discriminant < 0) {
            return 0;
        } else if (discriminant == 0) {
            double firstRoot = -linearCoefficient / (2 * quadraticCoefficient);
            cout << firstRoot;
        } else {
            double firstRoot = (-linearCoefficient + sqrt(discriminant)) / (2 * quadraticCoefficient);
            double secondRoot = (-linearCoefficient - sqrt(discriminant)) / (2 * quadraticCoefficient);
            cout << firstRoot << " " << secondRoot;
        }
    } else if (quadraticCoefficient == 0 && linearCoefficient == 0) {
        return 0;
    } else if (quadraticCoefficient == 0) {
        double firstRoot = (-freeMember) / linearCoefficient;
        cout << firstRoot;
    } else if (linearCoefficient == 0) {
        double firstRoot = sqrt((-freeMember) / linearCoefficient);
        cout << firstRoot;
    }

    return 0;
}
