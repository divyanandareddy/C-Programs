
#include <iostream>
#include <string>

int main()
{
	//if we  want to get entair line input 
	std::string name;
	std::cout << "Enter Your name: ";
	getline(std::cin, name); //for getline we need to include string

	std::cout << "Your name is " << name;

	return 0;
}
