#include <iostream>
#include <vector>

void print_vector(std::vector<int> &data) // & used to change origional vector inside function
{
	data.push_back(12);
	for (int i = 0; i < data.size(); i++)
	{
		std::cout << data[i] << "\t"; //12

	}
	std::cout << "\n";
}

int main()
{
	std::vector<int> data = { 1,2,5 };
	print_vector(data);
	print_vector(data);
	print_vector(data);
}
