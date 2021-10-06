//
// Created by XamaX on 06.10.2021.
//

#include <iostream>;
#include <algorithm>;

int main() {
    int lowerLeftCoordinateOfFirstRectangleX, lowerLeftCoordinateOfFirstRectangleY,
        upperLeftCoordinateOfFirstRectangleX, upperLeftCoordinateOfFirstRectangleY,
        upperRightCoordinateOfFirstRectangleX, upperRightCoordinateOfFirstRectangleY,
        lowerRightCoordinateOfFirstRectangleX, lowerRightCoordinateOfFirstRectangleY;
    int lowerLeftCoordinateOfSecondRectangleX, lowerLeftCoordinateOfSecondRectangleY,
        upperLeftCoordinateOfSecondRectangleX, upperLeftCoordinateOfSecondRectangleY,
        upperRightCoordinateOfSecondRectangleX, upperRightCoordinateOfSecondRectangleY,
        lowerRightCoordinateOfSecondRectangleX, lowerRightCoordinateOfSecondRectangleY;
    std::cin >> lowerLeftCoordinateOfFirstRectangleX >> lowerLeftCoordinateOfFirstRectangleY >>
                upperLeftCoordinateOfFirstRectangleX >> upperLeftCoordinateOfFirstRectangleY >>
                upperRightCoordinateOfFirstRectangleX >> upperRightCoordinateOfFirstRectangleY >>
                lowerRightCoordinateOfFirstRectangleX >> lowerRightCoordinateOfFirstRectangleY >>
                lowerLeftCoordinateOfSecondRectangleX >> lowerLeftCoordinateOfSecondRectangleY >>
                upperLeftCoordinateOfSecondRectangleX >> upperLeftCoordinateOfSecondRectangleY >>
                upperRightCoordinateOfSecondRectangleX >> upperRightCoordinateOfSecondRectangleY >>
                lowerRightCoordinateOfSecondRectangleX >> lowerRightCoordinateOfSecondRectangleY;

    int maxLeft = std::max(lowerLeftCoordinateOfFirstRectangleX, lowerLeftCoordinateOfSecondRectangleX);
    int maxTop = std::min(upperRightCoordinateOfFirstRectangleY, upperRightCoordinateOfSecondRectangleY);
    int maxRight = std::min(upperRightCoordinateOfFirstRectangleX, upperRightCoordinateOfSecondRectangleX);
    int maxBottom = std::max(lowerLeftCoordinateOfFirstRectangleY, lowerLeftCoordinateOfSecondRectangleY);

    int width = maxRight - maxLeft;
    int height = maxTop - maxBottom;

    if (width < 0 || height < 0) {
        std::cout << "NO";
        return 0;
    } else {
        std::cout << "YES" << " " << width * height;
    }

    return 0;
}

