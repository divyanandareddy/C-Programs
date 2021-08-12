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

}
