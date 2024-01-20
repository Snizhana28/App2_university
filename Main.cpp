#include "Student.h"

int main()
{
    try
    {
        Student s("Snizhana", 18, 'W', 47.5, 2023);

        s.displayInfo();

        s.setName("Snizhana");
        s.setAge(-858);
        s.setWeight(48.5);
        s.increaseYearOfStudy();

        cout << "\nChanged information" << endl;
        s.displayInfo();
    }
    catch (const std::exception& e)
    {
        cerr << "Exception: " << e.what() << endl;
    }
    catch (...)
    {
        cerr << "An unknown exception occurred in main()" << endl;
    }
	return 0;
}
