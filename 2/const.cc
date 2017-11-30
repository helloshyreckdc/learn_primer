#include <iostream>
using namespace std;

int main()
{
	int i = -1;
//	int &r = 0; // not allowed
	const int &r = 0;
	int *const p2 = &i;
	const int *const p3 = &i;
//	const int &const r1 = i;
	
	const int *p4 = p3;
	return 0;
}
