#include <iostream>
using namespace std;

int main()
{
	int rows, cols;
	cout << "Rows,Cols: ";
	cin >> rows >> cols;

	int** table = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		table[i] = new int[cols];
	}
	table[1][1] = 35;

	for (int i = 0; i < rows; i++)
	{
		delete[] table[i];
	}

	delete[] table;
	table = NULL;
}
