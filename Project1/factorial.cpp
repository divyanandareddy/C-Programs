#include <iostream>
#include <string>

using std::cout;

int main()
{
	int fact ;
	cout << "enter num:";
	std::cin >> fact;
	int factorial = fact;
	for (int i = factorial - 1; i > 1; i--)
	{
		factorial = factorial * i;
	}
	cout << "factorial of " << fact << ": " << factorial << std::endl;

}
