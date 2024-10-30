#pragma once
#include <cmath> /

#ifndef M_PI
#define M_PI 3.14159265358979323846 
#endif

class Shape {
public:
    virtual double getSquare() const = 0;
    virtual double getVolume() const = 0;
    virtual void shift(int dx, int dy, int dz = 0) = 0;
    virtual void scale(double factorX, double factorY, double factorZ) = 0;
    virtual void scaleX(double factor) = 0;
    virtual void scaleY(double factor) = 0;
    virtual void scaleZ(double factor) = 0;
    virtual ~Shape() = default;
};