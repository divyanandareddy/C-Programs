#include <iostream>
using std::cout; 

char main()
{
	int count=7;
	count++;
	std::cout << count<<std::endl; // 8
	count--;
	std::cout << count << std::endl;// 7

	std::cout << count++ << std::endl; // 7
	std::cout << count-- << std::endl; // 8

	std::cout << --count << std::endl; // 6
	std::cout << ++count << std::endl; // 7

	//system("cls");  // clear the screen
}
