#include <iostream>

void swap(int &a, int &b) // & used for pass by reference 
{
	int temp = a;
	a = b;
	b = temp;
	std::cout << "a: " << a << "\tb: " << b << "\n";
}

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	std::cout << "a: " << a << "\tb: " << b << "\n"; // [ without passby reference(&)--> a: 10   b: 20 ]  [ with passby reference(&)--> a: 20   b: 10 ] 
}
