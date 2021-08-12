#include <iostream>
#include <string>
//using std::string;
using std::cout;

int main()
{
	std::string msg="Hello";
	cout << msg << std::endl; // Hello
	msg += " Wo"; // concatination with +
	cout << msg << std::endl; // Hello Wo
	msg.append("rld"); // concatination with append
	cout << msg << std::endl; // Hello World
	msg.insert(5, "     hello      ");
	cout << msg << std::endl; // Hello     hello       World
	msg.erase(5, 10);
	cout << msg << std::endl; // Hello       World
	msg.erase(5);
	cout << msg << std::endl; // Hello
	msg.erase(msg.length()-1);
	cout << msg << std::endl; // Hell
	msg.pop_back();
	cout << msg << std::endl; // Hel
	msg.replace(0, 3, "How are you");
	cout << msg << std::endl; // How are you
	cout << msg.substr(4,3) << std::endl; // are 

	std::string msg1 = "Hello World";
	cout << msg1.find("World") << std::endl; // 6
	msg1.replace(msg1.find("World"), 5, "****");
	cout << msg1 << std::endl; // Hello ****

	cout << msg1.find_first_of("Hell") << std::endl; // 0 because i will display the index of any value that is given by user 
	cout << msg1.find_first_of("?") << std::endl; // 4294967295 if no value is there -- npos==-1
	unsigned long x = -1;
	cout << x << std::endl;// 4294967295 same as previous output

	if (msg1.find_first_of("?") == -1) cout << "not found" << std::endl; // not found

	std::string msg2 = "Hello";
	std::string msg3 = "world";

	cout << msg2.compare("Hello") << std::endl; // 0
	cout << msg2.compare("how") << std::endl; // -1
	cout << msg2.compare(msg3) << std::endl; // -1
	cout << msg2.compare(msg2) << std::endl; // 0

}
