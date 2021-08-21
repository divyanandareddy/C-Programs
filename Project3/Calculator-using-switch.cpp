
#include <iostream>
using namespace std;

int main()
{
	float num1, num2;
	char operation;
	cout << "** Calculator **"<<endl;
	cin >> num1 >> operation >> num2;
	switch (operation)
	{
		case '+':
			cout << num1 << operation << num2 <<" = " << num1 + num2 << endl;
			break;
		case '-':
			cout << num1 << operation << num2 << " = " << num1 - num2 << endl;
			break;
		case '*':
			cout << num1 << operation << num2 << " = " << num1 * num2 << endl;
			break;
		case '%':
			bool isNum1Int, isNum2Int;
			isNum1Int = ((int)num1 == num1);
			isNum2Int =((int)num1 == num2);
			if (isNum1Int && isNum2Int)
			{
				cout << num1 << operation << num2 << " = " << (int)num1 % (int)num2 << endl;
			}
			else
			{
				cout << "Not valid!";
			}
			break;
		case '/':
			cout << num1 << operation << num2 << " = " << num1 / num2 << endl;
			break;
		default:
			cout << "Invalid Operation" << endl;

			break;
	}
}


