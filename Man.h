#include <iostream>
using namespace std;

class Man
{
protected:
    string name;
    int age;
    char gender;
    double weight;

public:
    Man(const string& n, int a, char g, double w)
        : name(n), age(a), gender(g), weight(w) {}

    void setName(const string& n) { name = n; }
    void setAge(int a) {
        if (a < 0) {
            throw invalid_argument("Age cannot be negative");
        }
        age = a;
    }

    void setWeight(double w) {
        if (w < 0) {
            throw invalid_argument("Weight cannot be negative");
        }
        weight = w;
    }
};
