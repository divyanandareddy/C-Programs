#include <iostream>

int main()
{
	int x = 1025;
	int* ptr = &x;
	std::cout << "Size of int: " << sizeof(int) << std::endl;
	std::cout << "Address : " << ptr << "\tvalue: " << *ptr << std::endl;
	std::cout << "Address : " << ptr+1 << "\tvalue: " << *(ptr+1) << std::endl;
	char* ptr1;
	ptr1 = (char*)ptr; //typecasting

	std::cout << "Size of char: " << sizeof(char) << std::endl;
	std::cout << "Address : " << ptr1 << "\tvalue: " << *ptr1 << std::endl;
	std::cout << "Address : " << ptr1 + 1 << "\tvalue: " << *(ptr1 + 1) << std::endl;
}
