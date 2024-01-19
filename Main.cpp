#include "Rightangled.h"

int main()
{
    Rightangled triangle1(5.0, 4.0);
    Rightangled triangle2(6.0, 12.0);

    cout << "Triangle 1: " << triangle1 << endl;
    cout << "Triangle 2: " << triangle2 << endl;

    Rightangled sum = triangle1 + triangle2;
    cout << "Sum of triangles: " << sum << endl;

    Rightangled scaled = triangle1 * 2.0;
    cout << "Scaled triangle: " << scaled << endl;
	return 0;
}
