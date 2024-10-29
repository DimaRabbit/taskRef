#include "Cube.h"

Cube::Cube(int x, int y, int z, int side) : x(x), y(y), z(z), side(side) {}

double Cube::getSquare() const {
    return 6 * side * side;
}

double Cube::getVolume() const {
    return side * side * side;
}

void Cube::shift(int dx, int dy, int dz) {
    x += dx; y += dy; z += dz;
}

void Cube::scale(double factorX, double factorY, double factorZ) {
    side = static_cast<int>(side * factorX);
}