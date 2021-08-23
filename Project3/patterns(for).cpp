
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int height, width;
	cout << "Height: ";
	cin >> height;
	cout << "Width: ";
	cin >> width;
	char symbol;
	cout << "symbol: ";
	cin >> symbol;



	for (int i = 0; i < height; i++)
	{
		for (size_t j = 0; j < width; j++)
		{
			cout << setw(2)<< symbol ;
		}
		cout << endl;
	}
}
