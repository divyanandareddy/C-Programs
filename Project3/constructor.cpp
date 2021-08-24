#include <iostream>
using namespace std;

class Dog
{
public:
	string name;
	string breed;
	float height;

	Dog(string name, string breed, float height)
	{
		this->name = name;
		this->breed = breed;
		this->height = height;
	}

	void getInfo()
	{
		cout << "Name : " << name << "\tBreed : " << breed << "\tHeight : " << height << endl;
	}
};



int main()
{
	Dog d1("johny", "johny", 15.5);
	d1.getInfo();

	Dog d2("jockey", "johny", 12.5);
	d2.getInfo();

}
