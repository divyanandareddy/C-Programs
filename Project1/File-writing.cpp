#include <iostream>
#include <fstream>
#include <vector>
int main()
{
	//std::ofstream file("hello.txt"); (or)
	std::string filename;
	std::cin >> filename;
	std::ofstream file;
	file.open(filename.c_str(),std::ios::app); // std::ios::app used for append the text insted of replacing in file

	if (file.is_open())
	{
		std::cout << "file created\n";
	}
	std::vector<std::string> names;

	names.push_back("hari");
	names.push_back("ravi");
	names.push_back("raju");
	
	for (std::string name: names)
	{
		file << name << std::endl;
	}

	file.close();
}
