//
// Created by XamaX on 06.10.2021.
//

#include <iostream>;
#include <algorithm>;

int main() {
    int bottomLeftCoordinateOfFirstRectangleX, bottomLeftCoordinateOfFirstRectangleY,
        topLeftCoordinateOfFirstRectangleX, topLeftCoordinateOfFirstRectangleY,
        topRightCoordinateOfFirstRectangleX, topRightCoordinateOfFirstRectangleY,
        bottomRightCoordinateOfFirstRectangleX, bottomRightCoordinateOfFirstRectangleY;
    int bottomLeftCoordinateOfSecondRectangleX, bottomLeftCoordinateOfSecondRectangleY,
        topLeftCoordinateOfSecondRectangleX, topLeftCoordinateOfSecondRectangleY,
        topRightCoordinateOfSecondRectangleX, topRightCoordinateOfSecondRectangleY,
        bottomRightCoordinateOfSecondRectangleX, bottomRightCoordinateOfSecondRectangleY;
    std::cin >> bottomLeftCoordinateOfFirstRectangleX >> bottomLeftCoordinateOfFirstRectangleY >>
                topLeftCoordinateOfFirstRectangleX >> topLeftCoordinateOfFirstRectangleY >>
                topRightCoordinateOfFirstRectangleX >> topRightCoordinateOfFirstRectangleY >>
                bottomRightCoordinateOfFirstRectangleX >> bottomRightCoordinateOfFirstRectangleY >>
                bottomLeftCoordinateOfSecondRectangleX >> bottomLeftCoordinateOfSecondRectangleY >>
                topLeftCoordinateOfSecondRectangleX >> topLeftCoordinateOfSecondRectangleY >>
                topRightCoordinateOfSecondRectangleX >> topRightCoordinateOfSecondRectangleY >>
                bottomRightCoordinateOfSecondRectangleX >> bottomRightCoordinateOfSecondRectangleY;

    int maxLeft = std::max(bottomLeftCoordinateOfFirstRectangleX, bottomLeftCoordinateOfSecondRectangleX);
    int maxTop = std::min(topRightCoordinateOfFirstRectangleY, topRightCoordinateOfSecondRectangleY);
    int maxRight = std::min(topRightCoordinateOfFirstRectangleX, topRightCoordinateOfSecondRectangleX);
    int maxBottom = std::max(bottomLeftCoordinateOfFirstRectangleY, bottomLeftCoordinateOfSecondRectangleY);

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

