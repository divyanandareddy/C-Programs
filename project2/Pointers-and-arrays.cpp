#include <iostream>

int main()
{
	int a[] = { 1,2,3,4,5 };
	std::cout << a << std::endl;
	std::cout << &a[0] << std::endl;
	std::cout << a[0] << std::endl;
	std::cout << *a << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << &a[i] << std::endl;
		std::cout << a+i<< std::endl;
		std::cout << a[i] << std::endl;
		std::cout << *(a + i) << std::endl;
	}


}
