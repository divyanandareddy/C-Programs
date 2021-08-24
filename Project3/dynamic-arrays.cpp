#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "size:";
	cin >> size;
	int *myarray = new int[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Array[" << i << "] : ";
		cin >> myarray[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << *(myarray+i)<<"\t";
	}

	delete[]myarray;
	myarray = NULL;
}
