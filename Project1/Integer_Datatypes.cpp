#include <iostream>
#include <climits>


int main()
{
	short a;
	int b;
	long c;
	long long d;

	unsigned short e;
	unsigned int f;
	unsigned long g;
	unsigned long long h;
	
	std::cout << "Size of short:" << sizeof(short) << std::endl;
	std::cout << "Size of int:" << sizeof(int) << std::endl;
	std::cout << "Size of long:" << sizeof(long) << std::endl;
	std::cout << "Size of long long:" << sizeof(long long) << std::endl;

	std::cout << "MIN Size of short:" << SHRT_MIN << std::endl;
	std::cout << "MAX Size of short:" << SHRT_MAX << std::endl;
	std::cout << "MIN Size of int:" << INT_MIN << std::endl;
	std::cout << "MAX Size of int:" << INT_MAX << std::endl;
	std::cout << "MIN Size of long:" << LONG_MIN << std::endl;
	std::cout << "MAX Size of long:" << LONG_MAX << std::endl;
	std::cout << "MIN Size of long long:" << LLONG_MIN << std::endl;
	std::cout << "MAX Size of long long:" << LLONG_MAX << std::endl;

	
	std::cout << "MAX Size of Unsigned short:" << USHRT_MAX << std::endl;
	std::cout << "MAX Size of Unsigned int:" << UINT_MAX << std::endl;
	std::cout << "MAX Size of Unsigned long:" << ULONG_MAX << std::endl;
	std::cout << "MAX Size of Unsigned long long:" << ULLONG_MAX << std::endl;


}
