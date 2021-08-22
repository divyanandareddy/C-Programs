#include <iostream>
using namespace std;

int main()
{
	int userPin = 1234, pin, errorcounter = 0;

	do
	{
		cout << "Enter pin : ";
		cin >> pin;
		if (pin != userPin)
			errorcounter++;
	} while (errorcounter < 3 && pin != userPin);

	if (errorcounter<3)
	{
		cout << "Loading ...";
	}
	else
	{
		cout << "Blocked ...";
	}
	return 0;
}


