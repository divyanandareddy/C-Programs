#include <iostream>
#include <vector>

class User
{
	static int user_count; // Inside class we can't assign values to static  members
	std::string status = "silver";
	public:
		static int get_user_count()
		{
			// return first_name; ## when we try to access non static members inside static method we will get error
			return user_count;
		}
		std::string first_name;
		std::string last_name;
		std::string getstatus()
		{
			return status;
		}

		User()
		{
			std::cout << "Constructor\n";
			user_count++;
		}

		User(std::string first_name, std::string last_name, std::string status)
		{
			this->first_name = first_name;
			this->last_name = last_name;
			this->status = status;
			user_count++;
		}
		~User()
		{
			std::cout << "Destructor\n";
			user_count--;
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

int User::user_count = 0;

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
	User user1,user2,user3,user4; 
	std::cout << "User Count: " << User::get_user_count() << std::endl; // 4 because above line we created 4 user objects
	user1.~User();
	std::cout << "User Count: " << User::get_user_count() << std::endl; // 3 because above line we are using destructor, 1 object is deleted
}
