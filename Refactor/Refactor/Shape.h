#pragma once
#include <cmath>

class Shape {
public:
    virtual double getSquare() const = 0;
    virtual double getVolume() const = 0;
    virtual void shift(int dx, int dy, int dz) = 0;
    virtual void scale(double factorX, double factorY, double factorZ) = 0;
    virtual ~Shape() = default;
};
