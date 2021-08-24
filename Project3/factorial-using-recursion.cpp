#include <iostream>
using std::cout;


int factorial(int f)
{
	if (f==0)
	{
		return 1;
	}
	else
	{
		return f * factorial(f - 1); 
	}
}
char main()
{
	int a = 4;
	cout<< factorial(a);
}
