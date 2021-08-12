#include <iostream>
#include <string>

using std::cout;

int main()
{
	int age;
	std::cout << "Enter age:";
	std::cin >> age;
	if (age < 10)
	{
		std::cout << "Kid";
		//return -1;
	}
	else if(age <19)
	{
		std::cout << "Kid++";

	}
	else {
		std::cout << "Not Kid";

	}
	//std::cout << "hello";
}
