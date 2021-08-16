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

		void set_status(std::string status)
		{
			if (status == "Gold" || status == "Silver" || status == "Bronze")
			{
				this->status = status;
			}
			else
			{
				this->status = "No-status";
			}
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
	User user;
	user.set_status("no");
	std::cout << user.getstatus() << std::endl;
	user.set_status("Silver");
	std::cout << user.getstatus() << std::endl;
}
