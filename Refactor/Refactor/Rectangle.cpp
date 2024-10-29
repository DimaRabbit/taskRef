#include "Rectangle.h"

Rectangle::Rectangle(int x1, int y1, int x2, int y2) : x1(x1), y1(y1), x2(x2), y2(y2) {}

double Rectangle::getSquare() const {
    return std::abs(x1 - x2) * std::abs(y1 - y2);
}

double Rectangle::getVolume() const {
    return 0; // Плоская фигура, объема нет
}

void Rectangle::shift(int dx, int dy, int dz) {
    x1 += dx; y1 += dy;
    x2 += dx; y2 += dy;
}

void Rectangle::scale(double factorX, double factorY, double factorZ) {
    x1 = static_cast<int>(x1 * factorX);
    y1 = static_cast<int>(y1 * factorY);
    x2 = static_cast<int>(x2 * factorX);
    y2 = static_cast<int>(y2 * factorY);
}