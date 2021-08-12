#include <iostream>
#include <string>
//using std::string;
using std::cout;

int main()
{
	int number = 30;
	cout << number << std::endl; // 30
	int number1 = 0x30; // 0x means Hexa decimal number
	cout << number1 << std::endl; // 48
	int number2 = 030; // 0 means Hexa decimal number
	cout << number2 << std::endl; // 24

	int number3 = 30;
	cout << std::hex << number << std::endl; // 1e
	int number4 = 30;
	cout << std::oct << number << std::endl; // 36
}
