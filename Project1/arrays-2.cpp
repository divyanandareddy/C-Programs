#include <iostream>
#include <string>

void print_array(int array[],int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << std::endl;
	}
}

int main()
{
	int num[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int size = sizeof(num) / sizeof(int);
	print_array(num, 5);
		
}
