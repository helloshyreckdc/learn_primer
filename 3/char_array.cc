#include <iostream>
#include <string>
using namespace std;

int main()
{
	const char a[] = "Hello";
	const char *p = a;
	while(*p)
	{
		cout << *p << endl;
		p++;
	}
	return 0;
}
