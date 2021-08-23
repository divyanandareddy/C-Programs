#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int length;
	cout << "length: ";
	cin >> length;
	char symbol;
	cout << "symbol: ";
	cin >> symbol;

	for (int i = 0; i <= length; i++)
	{
		for (size_t j = 0; j <= i; j++)
		{
			cout << setw(2)<< symbol ;
		}
		cout << endl;
	}

	cout << endl;

	for (int i = length; i >= 1; i--)
	{
		for (size_t j = 0; j <= i; j++)
		{
			cout << setw(2) << symbol;
		}
		cout << endl;
	}
}
