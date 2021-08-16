#include <iostream>

double pow(double base, int pow = 2) // here we are assigning default value to an argument 
{
	int total = 1;
	for (int i = 0; i < pow; i++)
	{
		total *= base;

	}
	return total;
}

int main()
{
	
	std::cout << pow(3, 3) << std::endl; // 27
	std::cout << pow(3) << std::endl; // 9
}
