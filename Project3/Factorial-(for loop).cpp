#include <iostream>
using namespace std;

int main()
{
	// Factorial of a number
	int num, fact = 1;;
	cout << "enter number:";
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		fact *= i;
	}
	cout << "Factorial of a " << num << "is : " << fact<<endl;
}
