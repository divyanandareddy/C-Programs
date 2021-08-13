#include <stdio.h>
#include <iostream>
#include <string>
int main()
{
	int a = 12;
	int b = 012;
	int c = 0x12;
	int d = 0B1010;
	int e = 12U;
	int f = 12LL;
	int g = 12.1F;
	int h = 12.0;
	int i = 12.1L;

	std::cout << 12 << std::endl;
	std::cout << 012 << std::endl;
	std::cout << 0x12 << std::endl;
	std::cout << 0b1100 << std::endl;
	std::cout << 12U << std::endl;
	std::cout << 12L << std::endl;
	std::cout << 12.1F<< std::endl;
	std::cout << 12.1 << std::endl;
	std::cout << 12.1L << std::endl;
}
