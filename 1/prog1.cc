#include <iostream>
using namespace std;
/* test cout, cin, cerr, clog */
//int main()
//{
//	cout << "Enter two numbers:" << endl;
//	int v1, v2;
//	cin >> v1 >> v2;
//	cout << "Sum is " << v1 + v2 << endl;
//	return 0;
//}

/* test comment */
//int main()
//{
//	cout << "/*" << endl;
//	cout << "*/" << endl;
////  This is wrong
////	cout << /* "*/" */ << endl; 
//	cout << /* "*/" /* "/*" */ << endl;
//}

/* test uncertain numbers */
int main()
{
	int value, sum = 0;
	cout << "Please input some integers:" << endl;
	while(cin >> value)
	{
		sum += value;
	}
	cout << "sum is " << sum << endl;
}
