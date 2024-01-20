#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string text = "¿À√Œ–»“Ã";

	reverse(text.begin(), text.end());
	cout << text << endl;

	return 0;
}
