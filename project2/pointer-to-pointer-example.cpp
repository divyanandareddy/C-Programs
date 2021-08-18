#include <iostream>

int main()
{
	int x = 5;
	int* p = &x;
	*p = 6;
	int** q = &p;
	int*** r = &q;
	std::cout << *p << std::endl; //6
	std::cout << *q << std::endl; // address of p
	std::cout << **q << std::endl; // 6
	std::cout << **r << std::endl; // address of p
	std::cout << ***r << std::endl;// 6

	***r = 10;
	std::cout << x << std::endl; //10

	**q = *p + 12;
	std::cout << x << std::endl; //22
}
