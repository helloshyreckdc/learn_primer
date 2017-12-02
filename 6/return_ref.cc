#include <iostream>
using namespace std;

int &get(int *arry, int index)
{
	return arry[index];
}

int main()
{
	int a[10];
	for(int i = 0; i != 10; i++)
		get(a, i) = i;
	for(int num : a)
		cout << num << endl;
	return 0;
}
