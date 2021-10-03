//
// Created by XamaX on 25.09.2021.
//
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int firstCoordinateOfStraightX, firstCoordinateOfStraightY, secondCoordinateOfStraightX,
        secondCoordinateOfStraightY;
    int pointCoordinateX,  pointCoordinateY;
    cin >> firstCoordinateOfStraightX >> firstCoordinateOfStraightY >> secondCoordinateOfStraightX
        >> secondCoordinateOfStraightY >> pointCoordinateX >> pointCoordinateY;

    double straightA = sqrt(abs((secondCoordinateOfStraightX - firstCoordinateOfStraightX) *
            (secondCoordinateOfStraightX - firstCoordinateOfStraightX) +
            (secondCoordinateOfStraightY - firstCoordinateOfStraightY) *
            (secondCoordinateOfStraightY - firstCoordinateOfStraightY)));
    double sideB = sqrt(abs((pointCoordinateX - secondCoordinateOfStraightX) *
            (pointCoordinateX - secondCoordinateOfStraightX) +
            (pointCoordinateY - secondCoordinateOfStraightY) *
            (pointCoordinateY - secondCoordinateOfStraightY)));
    double sideC = sqrt(abs((pointCoordinateX - firstCoordinateOfStraightX) *
            (pointCoordinateX - firstCoordinateOfStraightX) +
            (pointCoordinateY - firstCoordinateOfStraightY) *
            (pointCoordinateY - firstCoordinateOfStraightY)));
    double semiperimeter = (straightA + sideB + sideC) / 2;
    double distance = 2 / straightA * sqrt(semiperimeter * (semiperimeter - straightA) *
            (semiperimeter - sideB) *
            (semiperimeter - sideC));
    double firstSegmentStraightA = sqrt(sideC * sideC - distance * distance);
    double secondSegmentStraightA = sqrt(sideB * sideB - distance * distance);
    double relationship = firstSegmentStraightA / secondSegmentStraightA;
    double distanceCoordinateX = (firstCoordinateOfStraightX + relationship *
            secondCoordinateOfStraightX) /  (1 + relationship);
    double distanceCoordinateY = (firstCoordinateOfStraightY + relationship *
            secondCoordinateOfStraightY) /  (1 + relationship);

    cout << distance << " " << distanceCoordinateX << " " << distanceCoordinateY;

    return 0;
}