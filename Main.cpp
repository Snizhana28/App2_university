#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cout << "Enter the number of elements in the array: ";
	cin >> n;
	vector<int> A(n);
	
	cout << "Enter the element of the array: ";
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	int min = *min_element(A.begin(), A.end());
	cout << "The minimum element of the array is " << min << " and its ordinal number is " << distance(A.begin(), min_element(A.begin(), A.end())) + 1 << endl;

	return 0;
}
