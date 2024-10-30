#pragma once
#include "Shape.h"

class Cylinder : public Shape {
private:
    int x, y;
    double radius, height;
public:
    Cylinder(int x, int y, double radius, double height);

    double getSquare() const override;
    double getVolume() const override;

    void shift(int dx, int dy, int dz = 0) override;
    void scale(double factor) override;
    void scaleX(double factor) override;
    void scaleY(double factor) override;
    void scaleZ(double factor) override;
};