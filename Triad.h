#ifndef TRIAD_H
#define TRIAD_H

namespace TriadModule {
    class Triad {
    private:
        int num1;
        int num2;
        int num3;
    public:
        Triad(int a, int b, int c);
        void setNumbers(int a, int b, int c);
        int getSum() const;
        int getNum1() const { return num1; }
        int getNum2() const { return num2; }
        int getNum3() const { return num3; }

    };
}

#endif 