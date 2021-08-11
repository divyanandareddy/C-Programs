#include <iostream>
#include <climits>


int main()
{
	std::cout << "Hello\tWorld" << std::endl; // \t means Tab space
	std::cout << "Hello\nWorld" << std::endl; // \n means next line
	std::cout << "Hello\vWorld" << std::endl; // \v means vertical Tab
	std::cout << "Hello\aWorld" << std::endl; // \a will give beep sound
	std::cout << "Hello\0World" << std::endl; // \0 non terminating character
	std::cout << "Hello\"world\"" << std::endl;// \" it allow us to type " (double quote) and ' (single quote)
	std::cout << "Hello\\World" << std::endl; // \\ wii print \

}
