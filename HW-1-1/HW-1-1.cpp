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
            double root = -linearCoefficient / (2 * quadraticCoefficient);
            cout << root;
        } else {
            double firstRoot = (-linearCoefficient + sqrt(discriminant)) / (2 * quadraticCoefficient);
            double secondRoot = (-linearCoefficient - sqrt(discriminant)) / (2 * quadraticCoefficient);
            cout << firstRoot << " " << secondRoot;
        }
    } else if (linearCoefficient == 0) {
        return 0;
    } else {
        double root = (-freeMember) / linearCoefficient;
        cout << root;
    }

    return 0;
}
