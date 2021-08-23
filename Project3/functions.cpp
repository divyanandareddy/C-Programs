
#include <iostream>
using namespace std;

void function2();

void function1()
{
	cout << "Hello function1()" << endl;

}
int main()
{
	cout << "Hello main()" << endl;
	function1();
	function2();

}

void function2()
{
	cout << "Hello function2()" << endl;

}
