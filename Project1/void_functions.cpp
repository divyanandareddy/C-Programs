#include <iostream>

void power(double base, int exponent) //function definition
{
	double result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result = result * base;
	}
	std::cout << result << std::endl;
}

int main()
{
	int base, exponent;
	std::cout << "Enter base value:";
	std::cin >> base;
	std::cout << "Enter exponent value:";
	std::cin >> exponent;
	power(base, exponent); //function calling
	
}
