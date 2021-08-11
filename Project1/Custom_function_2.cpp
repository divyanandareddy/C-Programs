#include <iostream>

double power(double, int); //function declaration

int main()
{
	double base;
	int exponent;
	std::cout << "Enter base value:";
	std::cin >> base;
	std::cout << "Enter exponent value:";
	std::cin >> exponent;
	double mypower=power(base, exponent); //function calling
	std::cout << mypower  << std::endl;
}

double power(double base, int exponent) //function definition
{
	double result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result = result * base;
	}
	return result;
}
