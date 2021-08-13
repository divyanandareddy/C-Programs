#include <iostream>
#include <array>
#include <vector>


void print_stl_array(std::array<int,10> data) 
{
	for (int n : data) // Rang-Based for loop
	{
		std::cout << n << "\t";
	}
	std::cout << "\n"; 
}

void print_vector(std::vector<int> data)
{
	for (int n : data) // Rang-Based for loop
	{
		std::cout << n << "\t";
	}
	std::cout << "\n";
}



int main()
{
	std::array<int,10> data = { 1,2,3,4,5 };
	print_stl_array(data);
	std::vector<int> data1 = { 1,2,3,4,5 };
	print_vector(data1);

	int num[10] = { 1,2,3,4,5,6,7,8,9,0 };

	for (int n : num) // we can't use range-based for loop inside function because there array is converted into pointer inside function
	{
		std::cout << n << std::endl;
	}
}
