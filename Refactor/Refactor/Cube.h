#pragma once
#include "Shape.h"

class Cube : public Shape {
public:
    Cube(int x, int y, int z, int side);
    double getSquare() const override;
    double getVolume() const override;
    void shift(int dx, int dy, int dz) override;
    void scale(double factorX, double factorY, double factorZ) override;

private:
    int x, y, z, side;
};
