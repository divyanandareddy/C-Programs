#include <iostream>
using namespace std;

int main()
{
	int numbers[3][2] = { {2,3},{1,4},{5,6} };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << numbers[i][j];
		}
		cout << endl;
	}
}
