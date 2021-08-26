#include <iostream>
using namespace std;

int main()
{
	int age = 24;
	int* pAge = &age;
	double gpa = 2.7;
	string name = "Chinna";

	cout << &age << endl; // address of age
	cout << pAge << endl; // address of age
	cout << *pAge << endl; //24
}
