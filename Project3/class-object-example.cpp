#include <iostream>
using std::cout;

class Dog
{
public:
	std::string name;
	std::string breed;
	float height;
};


char main()
{
	Dog d1;
	d1.name = "johny";
	d1.breed = "lab";
	d1.height = 15.5;

	cout << "Name : " << d1.name << "\tBreed : " << d1.breed << "\tHeight : " << d1.height;
}
