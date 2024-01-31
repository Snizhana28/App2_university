#include "../App2_university/Triad.h"
namespace TriadModule {
    Triad::Triad(int a, int b, int c) : num1(a), num2(b), num3(c) {}

    void Triad::setNumbers(int a, int b, int c) {
        num1 = a;
        num2 = b;
        num3 = c;
    }

    int Triad::getSum() const {
        return num1 + num2 + num3;
    }
}