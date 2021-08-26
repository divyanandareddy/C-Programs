
#include <iostream>
#include <string>

int main()
{
	int numbers[20] = { 1,2,3,4,5,6,7 };

	std::cout << numbers[2] << std::endl; // 3
	std::cout << numbers[19] << std::endl; // 0

	return 0;
}
