#include "Man.h"

class Student : public Man
{
private:
	int yearOfStudy;

public:
	Student(const string& n, int a, char g, double w, int y)
		: Man(n, a, g, w), yearOfStudy(y) {}

	void setYearOfStudy(int y) 
	{
		try
		{
			if (y < 0)
			{
				throw invalid_argument("Year of study cannot be negative");
			}
			yearOfStudy = y;
		}
		catch (const invalid_argument& e)
		{
			cerr << "Invalid argument: " << e.what() << endl;
		}
	}
	void increaseYearOfStudy() { yearOfStudy++; }

	void displayInfo() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Gender: " << gender << endl;
		cout << "Weight: " << weight << endl;
		cout << "Year of Study: " << yearOfStudy << endl;
	}
};