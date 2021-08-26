

#include <iostream>

int main()
{
	std::string name = "Chinna";
	std::cout << name << std::endl; //Chinna
	std::cout << name.length() << std::endl; //6
	std::cout <<  name[0] << std::endl; //c
	std::cout << name.find("nna", 0) << std::endl;//3
	std::cout << name.substr(3,3) << std::endl;//nna
}
