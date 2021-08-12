#include <iostream>
#include <string>

using std::cout;

int main()
{
	int age;
	std::cout << "Enter age:";
	std::cin >> age;
	switch (age)
	{
		case 13:
			cout << "age is:13\n";
			break;
		case 18:
			cout << "age is:18\n";
			break;
		default:
			cout << "age\n";
			break;
	}	
  
  
	enum season{summer,winter,spring,fall};
	season now = winter;
	switch (now)
	{
		case winter:
			cout << "winter";
			break;
		case summer:
			cout << "summer";
			break;
		case spring:
			cout << "spring";
			break;
		case fall:
			cout << "fall";
			break;
		default:
			cout << "none";
			break;

	}


}
