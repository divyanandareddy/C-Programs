#include <iostream>
using std::cout; 

int main()
{
	char c1, c2, c3, c4, c5;

	cout << "Enter 5 letters : "<< std::endl; //97
	std::cin >> c1 >> c2 >> c3 >> c4 >> c5;
	cout << (int) c1 << " " << (int)c2 << " " << (int) c3 << " " << (int)c4  << " " << (int)c5 << std::endl; //97

}
