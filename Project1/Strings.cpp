#include <iostream>
#include <string>
//using std::string;
using std::cout;

int main()
{
	std::string msg = "Hello";

	cout << msg << std::endl; // Hello
	cout << msg[0] << std::endl; // H
	cout << msg +" World" << std::endl; // Hello World -->string concatinaton

	std::string msg1 = "Hello";
	std::string msg3 = msg1 + " there"; //-->string concatinaton
	cout << msg3 << std::endl; // Hello there
	msg3 +="!"; //-->string concatinaton
	cout << msg3 << std::endl; // Hello there!
	cout << msg3.length() << std::endl; // 12
	//method == member function == functions attached to objects


	std::string msg2;
	cout << msg2 << std::endl; // "" empty string
	cout << msg2.length() << std::endl; // 0

	char name[] = "hello"; // c string == array of characters
}
