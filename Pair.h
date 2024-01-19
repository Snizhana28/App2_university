#include <iostream>
#include <cmath>
using namespace std;

class Pair
{
protected:
	double first;
	double second;
public:
	Pair(double x, double y) : first(x), second(y) {}
	void setFirst(double x) { first = x;}
	void setSecond(double y) { second = y;}

	double getFirst() const { return first; }
	double getSecond() const { return second; }

	double calculateMult() const { return first * second; }

};



