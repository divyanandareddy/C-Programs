#include <iostream>
#include <climits>
#include <float.h> 

using std::cout;

int main()
{
	float a = 10.0 / 3;
	double b = 10.0 / 3;
	long double c = 10.0 / 3;
	float e = 3E4;

	a = a * 10000000000000000000;
	b = b * 10000000000000000000;
	c = c * 10000000000000000000;

	cout << e << std::endl; // 30000
	cout << a << std::endl; // 3.33333e+19 here we are getting scientific number if we dont want to print like that then we can use 'fixed' manipulator with 'std' namespace
	cout << std::fixed << a << std::endl; // 33333333268354826240.000000
	cout << std::fixed << b << std::endl; // 33333333333333336064.000000
	cout << std::fixed << c << std::endl; // 33333333333333336064.000000

	cout << FLT_DIG << std::endl; // 6
	cout << DBL_DIG << std::endl; // 15
	cout << LDBL_DIG << std::endl; // 15

}
