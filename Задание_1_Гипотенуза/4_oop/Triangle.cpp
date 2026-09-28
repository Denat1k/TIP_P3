// Реализация класса Triangle.
#include <cmath>
#include "Triangle.h"

Triangle::Triangle(double a, double b) : a(a), b(b) {}

double Triangle::getHypotenuse() const {
    return sqrt(a * a + b * b);
}
