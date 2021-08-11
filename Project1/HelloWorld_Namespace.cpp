#include <iostream>
// Using Directive
//using namespace std; 

// Using Declaration
using std::cout; // this we are using only for cout object.

int main()
{
	// Using Declaration inside a function
	//using std::cout; --> this we can use with in the function, outside of this function if we try to use this we will get compilation error.
	cout << "Hello World\n";
	return 0;
}
