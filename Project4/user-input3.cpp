#include <iostream>
#include <string>

int main()
{
	std::string color, pluralNoun, celebrity;
	std::cout << "enter a color: ";
	getline(std::cin, color);
	std::cout << "enter a plural noun: ";
	getline(std::cin, pluralNoun);
	std::cout << "enter a celebrity: ";
	getline(std::cin, celebrity);

	std::cout << "Roses are " << color << std::endl;
	std::cout << pluralNoun << "Roses are " << std::endl;
	std::cout << "I love " << celebrity << std::endl;

	return 0;
}
