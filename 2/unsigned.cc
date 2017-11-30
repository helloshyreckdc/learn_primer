#include <iostream>
using namespace std;

int main()
{
	unsigned u1 = 10, u2 = 42;
	int i = -42;
	cout << u1 + i << endl;
	cout << u1 - u2 << endl;
	cout << u2 - u1 << endl;

	int i1 = 10, i2 = 42;
	cout << i2 - i1 << endl;
	cout << i1 - i2 << endl;
	cout << i1 - u1 << endl;
	cout << u1 - i1 << endl;
	return 0;
}
