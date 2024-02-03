#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    int product = 1;
    bool found = false;

    for (int i = 0; i < n; ++i) {
        if (vec[i] > 0 && vec[i] % 2 == 0) {
            product *= vec[i];
            found = true;
        }
    }
	if (found)
        cout << "The product of positive even elements of a vector: " << product;
	else
        cout << "There are no positive even elements in the vector";		

	return 0;
}
