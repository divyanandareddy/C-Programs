
#include <iostream>

double cube(double num)
{
	return num * num * num;
	std::cout << "Hello"; // this line will never execute because return will break the execution
	
}

int main()
{
	std::cout << cube(5.0) << std::endl;
}
