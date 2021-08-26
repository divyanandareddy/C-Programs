#include <iostream>

void printHi(std::string);

void prinHello(std::string name)
{
	std::cout << "Hello " << name << std::endl;
}

int main()
{
	prinHello("Divyananda");
	prinHello("Cscc");


	printHi("Divyananda");
	printHi("Cscc");

	return 0;
}

void printHi(std::string name)
{
	std::cout << "Hi " << name << std::endl;
}
