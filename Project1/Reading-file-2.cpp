#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
	std::ifstream file("hello.txt");
	std::vector<std::string> names;
	std::string line;

	while (getline(file, line))
	{
		names.push_back(line);
	}

	for (std::string name : names)
	{
		std::cout << name << std::endl;
	}
	file.close();
}
