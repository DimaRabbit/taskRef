#pragma once

#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle(int x1, int y1, int x2, int y2);
    double getSquare() const override;
    double getVolume() const override;
    void shift(int dx, int dy, int dz) override;
    void scale(double factorX, double factorY, double factorZ) override;

private:
    int x1, y1, x2, y2;
};

