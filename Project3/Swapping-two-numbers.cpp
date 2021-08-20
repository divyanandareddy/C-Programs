#include <iostream>
using std::cout; 

char main()
{
	int a = 10;
	int b = 20;

	std::cout << "a= " << a << " b= " << b << std::endl;

	int temp=a;
	a = b;
	b = temp;

	std::cout << "a= " << a << " b= " << b << std::endl;

//-------------------------------------OR -------------------------------------//

	a = a + b;
	b = a - b;
	a = a - b;
	std::cout << "a= " << a << " b= " << b << std::endl;

}
