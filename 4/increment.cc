#include <iostream>
using namespace std;

int main()
{
	int a[3] = {1, 2, 3};
	int *p = a;
	while(p != end(a))
	{
//		cout << *p++ << endl;
		cout << *++p << endl;
	}
	return 0;
}
