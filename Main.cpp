#include "Student.h"

int main()
{
	Student s("Snizhana", 18, 'W', 47.5, 2023);

	s.displayInfo();

	s.setName("Snizhana");
	s.setAge(19);
	s.setWeight(48.5);
	s.increaseYearOfStudy();

	cout << "\nChanged information" << endl;
	s.displayInfo();

	return 0;
}
