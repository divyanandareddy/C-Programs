#include <iostream>
using std::cout; 

char main()
{
	int c1, c2, c3, c4, c5;

	cout << "Enter 5 numbers with in range 128 : "<< std::endl; 
	std::cin >> c1 >> c2 >> c3 >> c4 >> c5;
	cout << (char) c1 << " " << (char)c2 << " " << (char) c3 << " " << (char)c4  << " " << (char)c5 << std::endl; 

}
