#include "Transform.h"

Transform::Transform(std::shared_ptr<Shape> shape) : shape(std::move(shape)) {}

void Transform::shift(int dx, int dy, int dz) {
    shape->shift(dx, dy, dz);
}

void Transform::scale(double factorX, double factorY, double factorZ) {
    shape->scale(factorX, factorY, factorZ);
}