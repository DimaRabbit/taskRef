#pragma once

#include <memory>
#include "Shape.h"

class Transform {
public:
    Transform(std::shared_ptr<Shape> shape);
    void shift(int dx, int dy, int dz);
    void scale(double factorX, double factorY, double factorZ);

private:
    std::shared_ptr<Shape> shape;
};
