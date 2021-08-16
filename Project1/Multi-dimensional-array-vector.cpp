#include <iostream>
#include <vector>

int main()
{
	int grades[][3] = { {1,2,3},
					    {4,5,6},
					    {7,8,9} };
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			std::cout << grades[r][c] << "\t";
		}
		std::cout <<  "\n";
	}
	std::cout << "\n";

	std::vector<std::vector<int>> grades1= { {11,22,33},
											 {44,55,66},
											 {77,88,99} };
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			std::cout << grades1[r][c] << "\t";
		}
		std::cout << "\n";
	}
}
