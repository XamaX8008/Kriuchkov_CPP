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
    int pointCoordinateX, pointCoordinateY;
    cin >> firstCoordinateOfStraightX >> firstCoordinateOfStraightY >> secondCoordinateOfStraightX
        >> secondCoordinateOfStraightY >> pointCoordinateX >> pointCoordinateY;

    double straight = sqrt(
        abs(
            (secondCoordinateOfStraightX - firstCoordinateOfStraightX) *
            (secondCoordinateOfStraightX - firstCoordinateOfStraightX) +
            (secondCoordinateOfStraightY - firstCoordinateOfStraightY) *
            (secondCoordinateOfStraightY - firstCoordinateOfStraightY)
        )
    );
    double firstSideTriangle = sqrt(
        abs(
            (pointCoordinateX - secondCoordinateOfStraightX) *
            (pointCoordinateX - secondCoordinateOfStraightX) +
            (pointCoordinateY - secondCoordinateOfStraightY) *
            (pointCoordinateY - secondCoordinateOfStraightY)
        )
    );
    double secondSideTriangle = sqrt(
        abs(
            (pointCoordinateX - firstCoordinateOfStraightX) *
            (pointCoordinateX - firstCoordinateOfStraightX) +
            (pointCoordinateY - firstCoordinateOfStraightY) *
            (pointCoordinateY - firstCoordinateOfStraightY)
        )
    );
    double semiperimeter = (straight + firstSideTriangle + secondSideTriangle) / 2;
    double distance = 2 / straight * sqrt(
            semiperimeter * (semiperimeter - straight) *
            (semiperimeter - firstSideTriangle) *
            (semiperimeter - secondSideTriangle)
    );
    double firstSegmentStraightA = sqrt(secondSideTriangle * secondSideTriangle - distance * distance);
    double secondSegmentStraightA = sqrt(firstSideTriangle * firstSideTriangle - distance * distance);
    double relationship = firstSegmentStraightA / secondSegmentStraightA;
    double distanceCoordinateX = (firstCoordinateOfStraightX + relationship *
            secondCoordinateOfStraightX) /  (1 + relationship);
    double distanceCoordinateY = (firstCoordinateOfStraightY + relationship *
            secondCoordinateOfStraightY) /  (1 + relationship);

    cout << distance << " " << distanceCoordinateX << " " << distanceCoordinateY;

    return 0;
}