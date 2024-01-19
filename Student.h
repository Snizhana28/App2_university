#include "Man.h"

class Student : public Man
{
private: 
	int yearOfStudy;

public:
	Student(const string& n, int a, char g, double w, int y) 
		: Man (n, a, g, w), yearOfStudy(y){}

	void setYearOfStudy(int y) { yearOfStudy = y; }
	void increaseYearOfStudy() { yearOfStudy++; }

	void displayInfo() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Gender: " << gender << endl;
		cout << "Weight: " << weight << endl;
		cout << "Year of Study: " << yearOfStudy << endl;
	}
};