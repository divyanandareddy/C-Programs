#include <iostream>
#include <array>

void print_array(std::array<int,10> & data) // & used to change origional vector inside function
{
	for (int i = 0; i < data.size(); i++)
	{
		std::cout << data[i] << "\t";

	}
	std::cout << "\n";
}

int main()
{
	std::array<int,10> data = { 1,2,3,4,5 };
	print_array(data);
}
