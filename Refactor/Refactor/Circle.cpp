#include "Circle.h"
#include <cmath>    

Circle::Circle(int x, int y, double radius) : x(x), y(y), radius(radius) {}

double Circle::getSquare() const { return M_PI * radius * radius; }
double Circle::getVolume() const { return 0; }

void Circle::shift(int dx, int dy, int dz) { x += dx; y += dy; }

void Circle::scale(double factor) { radius *= factor; }

void Circle::scaleX(double factor) { radius *= factor; }
void Circle::scaleY(double factor) { radius *= factor; }
void Circle::scaleZ(double) {}