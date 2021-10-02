//
// Created by XamaX on 25.09.2021.
//
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int firstCoordinateX, secondCoordinateX, thirdCoordinateX, firstCoordinateY, secondCoordinateY, thirdCoordinateY;
    cin >> firstCoordinateX >> firstCoordinateY >> secondCoordinateX >> secondCoordinateY >> thirdCoordinateX
        >> thirdCoordinateY;

    double sideA = sqrt(abs((secondCoordinateX - firstCoordinateX) * (secondCoordinateX - firstCoordinateX) +
            (secondCoordinateY - firstCoordinateY) * (secondCoordinateY - firstCoordinateY)));
    double sideB = sqrt(abs((thirdCoordinateX - secondCoordinateX) * (thirdCoordinateX - secondCoordinateX) +
            (thirdCoordinateY - secondCoordinateY) * (thirdCoordinateY - secondCoordinateY)));
    double sideC = sqrt(abs((thirdCoordinateX - firstCoordinateX) * (thirdCoordinateX - firstCoordinateX) +
            (thirdCoordinateY - firstCoordinateY) * (thirdCoordinateY - firstCoordinateY)));
    double halfMeter = (sideA + sideB + sideC) / 2;
    double distance = 2 / sideA * sqrt(halfMeter * (halfMeter - sideA) * (halfMeter - sideB) * (halfMeter - sideC));
    double sideDivisionA1 = sqrt(sideC * sideC - distance * distance);
    double sideDivisionA2 = sqrt(sideB * sideB - distance * distance);
    double relationship = sideDivisionA1 / sideDivisionA2;
    double fourthCoordinateX = (firstCoordinateX + relationship * secondCoordinateX) /  (1 + relationship);
    double fourthCoordinateY = (firstCoordinateY + relationship * secondCoordinateY) /  (1 + relationship);

    cout << distance << " " << fourthCoordinateX << " " << fourthCoordinateY;

    return 0;
}