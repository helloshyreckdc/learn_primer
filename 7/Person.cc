#include <iostream>
using namespace std;

struct Person
{
	string address;
	string name;

	string get_address() const { return address; }
	string get_name() const { return name; }
}

istream &read(istream &is, Person &person)
{
	is >> person.name >> person.address;
	return is;
}

ostream &print(ostream &os, const Person &person)
{
	os << person.name << " " << person.address;
	return os;
}
