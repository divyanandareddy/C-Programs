#include <iostream>
#include <string>

using std::cout;

int main()
{
	double x = 10 / 4; // int/int=int
	cout << x << std::endl; // 2 but the correct answere is 2.5 
	
	double y = 10.0 / 4; //double/int=double
	cout << y << std::endl; // 2.5

	double z = 10 % 4; 
	cout << z << std::endl; // 2 (remainder)


}
