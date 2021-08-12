#include <iostream>
#include <string>

using std::cout;

int main()
{
	std::string msg ;
	cout << "enter msg:";
	getline(std::cin, msg);
	for (int i = 0; i < msg.length(); i++)
	{
		if (msg[i] == '@')
		{
			continue;
		}
		if (msg[i] == '#')
		{
			break;
		}
		cout << msg[i];
	}
}
