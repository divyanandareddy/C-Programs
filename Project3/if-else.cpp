#include <iostream>
using std::cout; 

char main()
{
	int num;

	cout << "Enter  number : "; 
	std::cin >> num;

	if (num % 2 == 0)
	{
		std::cout << "Even Number"<<std::endl;
	}
	else
	{
		std::cout << "Odd Number" << std::endl;
	}
	return 0;
}
