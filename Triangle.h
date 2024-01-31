#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "../App2_university/Triad.h"

namespace TriangleModule {
    class Triangle : public TriadModule::Triad {
    public:
        Triangle(int a, int b, int c) : TriadModule::Triad(a, b, c) {}
        double getAngleA() const;
        double getAngleB() const;
        double getAngleC() const;
        double getArea() const;
        double calculateAngle(double side1, double side2, double side3)const;
    };
}

#endif