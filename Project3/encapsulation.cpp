#include <iostream>
using namespace std;

class Dog
{
private:
	string name;
	string breed;
	float height;

public:
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

	void setname(string name)
	{
		this->name = name;
	}
	void setheight(float height)
	{
		this->height = height;
	}
};



int main()
{
	Dog d1("johny", "johny", 15.5);
	d1.setname("jimmy");
	d1.getInfo();
	Dog d2("jockey", "johny", 12.5);
	d2.setheight(10);
	d2.getInfo();
}
