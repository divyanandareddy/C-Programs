#include <iostream>
#include <vector>

int main()
{
	std::vector<int> data = { 1,2,5 };
	data.push_back(12);
	std::cout << data[3] << std::endl; //12
	std::cout << data[data.size() - 1] << std::endl; //12
	data.pop_back();
	std::cout << data.size() << std::endl; // 3
	std::cout << data[data.size() - 1] << std::endl; //5
}
