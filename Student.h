#include "Man.h"

class Student : public Man
{
private:
    int yearOfStudy;

public:
    Student(const string& n, int a, char g, double w, int y)
        : Man(n, a, g, w), yearOfStudy(y) {}

    void setYearOfStudy(int y) {
        if (y < 1) {
            throw invalid_argument("Year of study cannot be less than 1");
        }
        yearOfStudy = y;
    }

    void increaseYearOfStudy() {
        try {
            setYearOfStudy(yearOfStudy + 1);
        }
        catch (const invalid_argument& e) {
            cerr << "Error: " << e.what() << endl;
        }
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Weight: " << weight << endl;
        cout << "Year of Study: " << yearOfStudy << endl;
    }
};