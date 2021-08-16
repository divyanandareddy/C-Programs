#include <iostream>
#include "math_utils.h"

int main()
{
	Rectangle rectangle;
	rectangle.length = 5;
	rectangle.width = 20;
	std::cout << area(rectangle.length, rectangle.width) << std::endl; // 100

	std::cout << area(rectangle.length) << std::endl; // 25

	std::cout << area(rectangle) << std::endl; // 100

	std::cout << pow(3, 3) << std::endl; // 27
	std::cout << pow(3) << std::endl; // 9

}