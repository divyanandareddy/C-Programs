
#include <iostream>
using namespace std;

void showMenu()
{
	cout << "***************MENU***************" << endl;
	cout << "1.Check balance" << endl;
	cout << "2.Deposit" << endl;
	cout << "3.Withdrad" << endl;
	cout << "Press any key to EXIT" << endl;
	cout << "**********************************" << endl;
}

int main()
{
	int option;
	double balance = 100;
	do
	{
		showMenu();
		cout << "Option: ";
		cin >> option;
		system("cls");
		switch (option)
		{
		case 1:
			cout << "Balance is :" << balance << " $" << endl;
			break;
		case 2:
			cout << "Deposit amount: ";
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount;
			break;
		case 3:
			cout << "Withdraw amount: ";
			double withdrawAmount;
			cin >> withdrawAmount;
			if (balance <= withdrawAmount)
			{
				balance -= withdrawAmount;

			}
			else
			{
				cout << "Not enough money!";
			}
			break;

		default:
			break;
		}
	} while (option<=3);
	

}
