#include <iostream>
using namespace std;

int main()
{
	int hostuserNum, guestUsernumber;
	cout << "Host: ";
	cin >> hostuserNum;
	system("cls");
	cout << "Guest: ";
	cin >> guestUsernumber;

	(hostuserNum == guestUsernumber) ? cout << "Correct!" : cout << "Failed"; // Ternary operator

	/*if (hostuserNum == guestUsernumber)
		cout << "Correct!";
	else
		cout << "Failed";*/
}
