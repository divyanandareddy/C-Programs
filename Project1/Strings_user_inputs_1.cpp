#include <iostream>
#include <string>
//using std::string;
using std::cout;

int main()
{
	std::string msg;
	std::string msg1;
	cout << "Enter Msg:";
	std::cin >> msg; // if we enter --> hello there 
	std::cin >> msg1;
	cout << msg << std::endl; // hello -->here we are getting only, after space we are not getting remaining string
	cout << msg1 << std::endl; // there -->after space remaining string stored in msg1 
}
