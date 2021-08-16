#include <iostream>
#include <vector>

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

int add_user_if_not_exists(std::vector<User> &users,User user)
{
	for (int i = 0; i < users.size(); i++)
	{
		if (users[i].first_name == user.first_name && users[i].last_name == user.last_name)
		{
			return i;
		}
		users.push_back(user);
		return users.size() - 1;
	}
}

int main()
{
	
	
	std::vector<User> users;
	//users.push_back(user);
	//users.push_back(User());
	/*std::cout << "first_name :  " << users[0].first_name << std::endl;
	std::cout << "last_name :  " << users[0].last_name << std::endl;*/

	User user1,user2,user3;
	user1.first_name = "hari";
	user1.last_name = "sai";

	user2.first_name = "ravi";
	user2.last_name = "kumar";

	user3.first_name = "Divyananda";
	user3.last_name = "reddy";

	users.push_back(user1);
	users.push_back(user2);
	users.push_back(user3);

	User user;
	user.first_name = "Divyananda";
	user.last_name = "reddy";

	std::cout << "first_name :  " << add_user_if_not_exists(users, user) << std::endl;
	
	std::cout << "first_name :  " << users.size() << std::endl;
}
