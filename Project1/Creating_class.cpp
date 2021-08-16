#include <iostream>

class User
{
	std::string status = "silver";
	public:
		std::string first_name;
		std::string last_name;
		std::string getstatus()
		{
			return status;
		}
};

int main()
{
	User user;
	user.first_name = "Divyananda";
	user.last_name = "reddy";
	std::cout << "first_name :  " << user.first_name << std::endl;
	std::cout << "last_name :   " << user.last_name << std::endl;
	std::cout << "status: " << user.getstatus() << std::endl;
}
