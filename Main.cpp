#include "Student.h"

int main()
{
    try {
        Student s("Snizhana", 18, 'W', 47.5, 2023);

        s.displayInfo();

        s.setName("Snizhana");
        s.setAge(19);
        s.setWeight(48.5);
        s.increaseYearOfStudy();

        cout << "\nChanged information" << endl;
        s.displayInfo();
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }
    catch (const exception& e) {
        cerr << "Unexpected error: " << e.what() << endl;
    }
	return 0;
}
