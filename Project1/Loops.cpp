
#include <iostream>

int main()
{
   
	int n;
	std::cout << "enter n value : ";
	std::cin >> n;
	// for loop
	std::cout << std::endl;
	std::cout << "For loop" << std::endl;
	std::cout << std::endl;

	for (int  i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			std::cout << "* ";
		}
		std::cout << std::endl;
	}

	// while loop
	std::cout << std::endl;
	std::cout << "While loop" << std::endl;
	std::cout << std::endl;

	int i = 0;
	while (i<n)
	{
		int j = 0;
		while (j <= i)
		{
			std::cout << "@ ";
			j++;
		}
	i++;
	std::cout << std::endl;
	}

	// do-while loop
	std::cout << std::endl;
	std::cout << "do-While loop" << std::endl;
	std::cout << std::endl;

	int k = 0;
	
	do{
		int l = 0;
		do{
			std::cout << "# ";
			l++;
		} while (l <= k);
		k++;
		std::cout << std::endl;
	} while (k < n);
}

