#include <iostream>
using std::cout; 

char main()
{
	float a,b,c;

	cout << "Enter a,b & c: " ; 
	std::cin >> a>>b>>c;

	if (a==b && b == c)
	{
		std::cout << "Equilateral triangel "<<std::endl;
	}
	else
	{
		if (a != b && a != c && b != c)
		{
			std::cout << "scalence triangel " << std::endl;

		}
		else
		{
			std::cout << "Isosceles triangel " << std::endl;

		}
	}
	return 0;
}
