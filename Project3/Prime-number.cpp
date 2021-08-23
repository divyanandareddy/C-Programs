#include <iostream>
using namespace std;

bool isPrimeNumber(int number)
{
	for (int i = 2; i < number; i++)
	{
		if (number%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int number;
	cout << "Number : ";
	cin >> number;
	
	if (isPrimeNumber(number))
	{
		cout << "Prime number";
	}
	else
	{
		cout << "Not Prime number";
	}
}
