#pragma once
#include "Shape.h"

class Line : public Shape {
private:
    int x1, y1, z1, x2, y2, z2;
public:
    Line(int x1, int y1, int z1, int x2, int y2, int z2);

    double getSquare() const override;
    double getVolume() const override;

    void shift(int dx, int dy, int dz = 0) override;
    void scale(double factor) override;
    void scaleX(double factor) override;
    void scaleY(double factor) override;
    void scaleZ(double factor) override;
};