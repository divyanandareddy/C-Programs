#include <iostream>


int main()
{
	bool isMale = true;
	bool isTall = true;

	if (isMale && isTall)
	{
		std::cout << "You are a tall male";
	}
	else if (isMale && !isTall)
	{
		std::cout << "You are a short male";
	}
	else
	{
		std::cout << "You are not tall male";
	}

	return 0;
}
