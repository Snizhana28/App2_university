#include "../App2_university/Triangle.h"
#include <cmath>

namespace TriangleModule {
    const double PI = 3.14159265358979323846;

    double Triangle::getAngleA() const {
        double sideA = getNum1();
        double sideB = getNum2();
        double sideC = getNum3();
        return calculateAngle(sideB, sideC, sideA);
    }

    double Triangle::getAngleB() const {
        double sideA = getNum1();
        double sideB = getNum2();
        double sideC = getNum3();
        return calculateAngle(sideA, sideC, sideB);
    }

    double Triangle::getAngleC() const {
        double sideA = getNum1();
        double sideB = getNum2();
        double sideC = getNum3();
        return calculateAngle(sideA, sideB, sideC);
    }

    double Triangle::getArea() const {
        double sideA = getNum1();
        double sideB = getNum2();
        double sideC = getNum3();
        double s = getSum() / 2.0;
        return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
    }

    double Triangle::calculateAngle(double side1, double side2, double side3) const {
        return acos((side1 * side1 + side2 * side2 - side3 * side3) / (2.0 * side1 * side2)) * 180.0 / PI;
    }
}