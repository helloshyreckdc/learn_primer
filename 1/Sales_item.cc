#include <iostream>
#include "include/Sales_item.h"
using namespace std;

int main()
{
//	Sales_item item1, item2;
//	cin >> item1 >> item2;
//	cout << item1 + item2 << endl;
//	return 0;

	Sales_item current, total;
	int count;
	if(cin >> total)
	{
		count = 1;
		while(cin >> current)
		{
			if(total.isbn() == current.isbn())
			{
				count++;
				total += current;
			}
			else
			{
				cout << total << " occurs " << count << " time" << ((count-1)?"s ":" ") << endl;
				count = 1;
				total = current;
			}
		}
		cout << total << " occurs " << count << " times " << endl;
	}
	else
	{
		cerr << "No data!" << endl;
		return -1;
	}

//	for (Sales_item item; cin >> item; cout << item << endl);
	return 0;
}
