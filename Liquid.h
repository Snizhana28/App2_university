#include "library.h"

class Liquid
{
protected:
    string name;
    double density;

public:
    Liquid(string n, double d) 
        : name(n), density(d) {}
    virtual ~Liquid() {}
    void setDensity(double d) { density = d; }
    virtual void print() const
    {
		cout << "\nName: " << name << endl;
		cout << "Density: " << density << endl;
	}
};