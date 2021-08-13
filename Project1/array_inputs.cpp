#include <iostream>
#include <string>
#include <limits>

void print_array(int array[],int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << std::endl;
	}
}

int main()
{
	int guesses[10];
	int size = sizeof(guesses) / sizeof(int);
	int count = 0;
	
	for (int i = 0; i < size; i++)
	{
		if (std::cin >> guesses[i])
		{
			count++;
		}
		else
		{
			break;
		}
	}
	print_array(guesses, count);
	std::cin.clear();
	//std::cin.ignore(1000, '\n');
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::string test;
	std::cin >> test;
	std::cout << test << std::endl;
		
}
