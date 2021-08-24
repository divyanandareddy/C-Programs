#include <iostream>
using namespace std;

int main()
{
	int numbers[5] = { 1,2,3,4,5 };
	cout << numbers << endl; //address of first element in the array
	cout << &numbers[0] << endl; ////address of first element in the array

	cout << numbers[2] << endl; // 3
	cout << (*numbers + 2) << endl; // 3

	int luckynumbers[5];
	for (int i = 0; i <= 4; i++)
	{
		cout << "Nubers: ";
		cin >> luckynumbers[i];
	}

	for (int i = 0; i <= 4; i++)
	{
		cout << *(luckynumbers + i) << "\t";
	}
}
