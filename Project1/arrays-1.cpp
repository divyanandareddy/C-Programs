#include <iostream>
#include <string>

int main()
{
	int guesses[20];
	guesses[10] = 10;
	std::cout << "enter guesses[0]: ";
	std::cin >> guesses[0];
	std::cout << guesses[0] << " " << guesses[10] << std::endl;

	int num[10] = { 0 };
	std::cout << num[2] << std::endl;

	int count[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int size = sizeof(count) / sizeof(count[0]);
	for (int i = 0; i < size; i++)
	{
		std::cout << count[i] << std::endl; 
	}
	
	std::cout << guesses[2] << std::endl; // output is some garbage value

}
