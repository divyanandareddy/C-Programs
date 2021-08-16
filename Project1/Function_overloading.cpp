#include <iostream>

struct Rectangle {
	double length;
	double width;
};

double area(double length, double width)
{
	return length * width;
}

double area(double length)
{
	return length * length;
}

double area(Rectangle rectangle)
{
	return rectangle.length * rectangle.width;
}

int main()
{
	Rectangle rectangle;
	rectangle.length = 5;
	rectangle.width = 20;
	std::cout << area(rectangle.length, rectangle.width) << std::endl; // 100

	std::cout << area(rectangle.length) << std::endl; // 25

	std::cout << area(rectangle) << std::endl; // 100
}
