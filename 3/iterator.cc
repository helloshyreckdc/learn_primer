#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
//	string s("some thing");
//	for(auto it = s.begin(); it != s.end(); ++it)
//	{
//		*it = toupper(*it);	
//	}
//	cout << s << endl;

	vector<unsigned> v(11, 0);
	unsigned num;
	while(cin >> num)
		if(num <= 100)
			++*(v.begin() + num / 10);
	for(auto score : v)
		cout << score << " " ;
	cout << endl;
	return 0;

}
