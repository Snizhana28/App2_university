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
	void setAge(int a) { age = a; }
	void setWeight(double w) { weight = w; }
};