#include <stdio.h>
#include <iostream>
#include <string>
int main()
{
	int answer = 12;
	std::cout << "Guess the number:";
	int guess;
	std::cin >> guess;
	int points = guess == answer ? 10 : 0; // Ternary operator -->condition ? true:false;
	std::cout << points << std::endl;

}
