#include "Line.h"

Line::Line(int x1, int y1, int z1, int x2, int y2, int z2)
    : x1(x1), y1(y1), z1(z1), x2(x2), y2(y2), z2(z2) {}

double Line::getSquare() const { return 0; }
double Line::getVolume() const { return 0; }

void Line::shift(int dx, int dy, int dz) {
    x1 += dx; y1 += dy; z1 += dz;
    x2 += dx; y2 += dy; z2 += dz;
}

void Line::scale(double factor) {
    x1 *= factor; y1 *= factor; z1 *= factor;
    x2 *= factor; y2 *= factor; z2 *= factor;
}

void Line::scaleX(double factor) { x1 *= factor; x2 *= factor; }
void Line::scaleY(double factor) { y1 *= factor; y2 *= factor; }
void Line::scaleZ(double factor) { z1 *= factor; z2 *= factor; }