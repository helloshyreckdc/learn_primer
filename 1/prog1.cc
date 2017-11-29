#include <iostream>
using namespace std;
int main()
{
	cout << "/*" << endl;
	cout << "*/" << endl;
//  This is wrong
//	cout << /* "*/" */ << endl; 
	cout << /* "*/" /* "/*" */ << endl;
//	cout << "Enter two numbers:" << endl;
//	int v1, v2;
//	cin >> v1 >> v2;
//	cout << "Sum is " << v1 + v2 << endl;
//	return 0;
}
