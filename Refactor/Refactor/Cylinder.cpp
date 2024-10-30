#include "Cylinder.h"
#include <cmath>    

Cylinder::Cylinder(int x, int y, double radius, double height)
    : x(x), y(y), radius(radius), height(height) {}

double Cylinder::getSquare() const { return 2 * M_PI * radius * (radius + height); }
double Cylinder::getVolume() const { return M_PI * radius * radius * height; }

void Cylinder::shift(int dx, int dy, int dz) { x += dx; y += dy; }

void Cylinder::scale(double factor) { radius *= factor; height *= factor; }

void Cylinder::scaleX(double factor) { radius *= factor; }
void Cylinder::scaleY(double factor) { radius *= factor; }
void Cylinder::scaleZ(double factor) { height *= factor; }