#include <iostream>
#include <string>
using namespace std;

int main()
{
//	string s;
//	cin >> s;
//	cout << s << endl;

//	string word;
//	while(cin >> word)
//		cout << word << endl;

//	string line;
//	while(getline(cin, line))
//		cout << line << endl;

	string s = "hello,world";
	string s1;
	for(auto &c : s)
		if(!ispunct(c))
			s1 += c;
	cout << s1 << endl;
	return 0;
}
