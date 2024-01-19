#include "Liquid.h"

class Alcohol : public Liquid
{
private:
    double strength;
public:
    Alcohol(string n, double d, double s) 
		: Liquid(n, d), strength(s) {}
	virtual ~Alcohol() {}
    void setStrength(double s) { strength = s;}
	virtual void print() const override
	{
		Liquid::print();
		cout << "Strength: " << strength << endl;
	}
};