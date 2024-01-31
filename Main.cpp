#include <iostream>
#include "../App2_university/Triangle.h"
using namespace std;

int main()
{
    TriangleModule::Triangle triangle(3, 4, 5);

    cout << "Sum of triangle sides: " << triangle.getSum() << endl;
    cout << "Area of triangle: " << triangle.getArea() << endl;
    cout << "<--- Angles of triangle ---> " << endl;
    cout << "Angle A: " << triangle.getAngleA() << " degrees" << endl;
    cout << "Angle B: " << triangle.getAngleB() << " degrees" << endl;
    cout << "Angle C: " << triangle.getAngleC() << " degrees" << endl;
	return 0;
}
