#include <iostream>
#include <cmath>

int main()
{
	int base,exponent; 
	std::cout << "Enter base value:";
	std::cin >> base;
	std::cout << "Enter exponent value:";
	std::cin >> exponent;
	double power=pow(base, exponent);
	std::cout << power  << std::endl;
}
