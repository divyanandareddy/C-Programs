#include <iostream>

int main()
{
	int a;
	int *p;
	a = 10;
	p = &a; //&a -->address of a
	std::cout << p << std::endl; // address pointed by p
	std::cout << &a << std::endl;
	std::cout << *p << std::endl; //*p --> value at address pointed by p
	int b = 20;
	*p = b;
	std::cout << *p << std::endl; // 20
	std::cout << a << std::endl; // 20
	a = 10;
	p = &b;
	std::cout << *p << std::endl; // 20
	std::cout << a << std::endl; // 10

	// Pointer arithmetic
	int x= 15;
	int* ptr = &x;
	std::cout << ptr << std::endl; // 006FFB20
	std::cout << ptr+1 << std::endl;// 006FFB24 here i got output like this,int size is 4 bites thats why it is incremented 4
	std::cout << *ptr << std::endl; // 15
	std::cout << *ptr+1 << std::endl; // 15+1 -->16
	std::cout << *(ptr+1) << std::endl; // some garbage value
}
