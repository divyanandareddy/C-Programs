#include <iostream>
#include <climits>

using std::cout;

int main()
{
	bool found = false; // false
	cout << found << std::endl; //0
	bool x = 1; // true
	cout << x << std::endl; // 1
	bool y = 0; // false
	cout << y << std::endl; // 0
	bool z = -1; // true
	cout << z << std::endl; // 1
	bool a = 90394393; // true
	cout << a << std::endl; // 1

	/*when we try to print any bool variable value we are getting 0 or 1, insted
	if we want to get true or false we need to use on manipulator called "boolalpha" with 'std' namespace*/
	
	cout << std::boolalpha << found << std::endl; // false
	cout << std::boolalpha << x << std::endl; // true
}
