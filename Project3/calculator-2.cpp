#include <iostream>
using namespace std;

int main()
{
	float num1, num2;
	char operation;
	cout << "** Calculator **" << endl;
	cin >> num1 >> operation >> num2;
	if (operation=='+')
	{
		cout << num1 << operation << num2 << " = " << num1 + num2 << endl;
	}
	else if (operation == '-')
	{
		cout << num1 << operation << num2 << " = " << num1 - num2 << endl;
	}
	else if (operation == '*')
	{
		cout << num1 << operation << num2 << " = " << num1 * num2 << endl;
	}
	else if (operation == '/')
	{
		cout << num1 << operation << num2 << " = " << num1 * num2 << endl;
	}
	else
	{
		cout << "invalid Operator";
	}
		
}
