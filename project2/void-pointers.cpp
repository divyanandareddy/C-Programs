#include <iostream>

int main()
{
	int x = 1025;
	int* ptr = &x;
	std::cout << "Size of int: " << sizeof(int) << std::endl;
	std::cout << "Address : " << ptr << "\tvalue: " << *ptr << std::endl;

	//Void pointer --> Generic pointer
	void* p;
	p = ptr;
	std::cout << "Address : " << p; // in void pointers we can't fetch the value
}
