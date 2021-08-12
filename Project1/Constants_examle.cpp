#include <iostream>
#include <climits>
#include <float.h> 

#define z 20 //Constant using macros

using std::cout;

int main()
{
	const int x = 5; // Constant using const keyword
	enum { y = 10}; // Constant using enum

	cout << x << std::endl;
	cout << y << std::endl;
	cout << z << std::endl;

}
