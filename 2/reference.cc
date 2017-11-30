#include <iostream>
using namespace std;

int main()
{
	int i = 1, &r1 = i;
	double d = 1, &r2 = d;
//	r2 = 3.1415926;
//	r2 = r1;
//	i = r2;
//	r1 = d;
//	cout << i << endl << r1 << endl << d << endl << r2 << endl;
	
	i = 5, r1 = 10;
	int *p = &r1;
	cout << i << " " << r1 << *p << endl;
	return 0;
}	
