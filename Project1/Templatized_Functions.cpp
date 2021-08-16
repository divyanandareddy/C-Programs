#include <iostream>

template<typename T>

void swap(T & a,  T & b) 
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	std::cout << "a: " << a << "\tb: " << b << "\n";
	std::string f_name = "Divyananda";
	std::string l_name = "Reddy";
	swap(f_name, l_name);
	std::cout << "f_name: " << f_name << "\tl_name: " << l_name << "\n";  
}
