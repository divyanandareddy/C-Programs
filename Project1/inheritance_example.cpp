#include <iostream>
#include <vector>

class User
{
	static int user_count; 
	std::string status = "silver";
	public:
		static int get_user_count()
		{
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
			std::cout << "User Created\n";
			user_count++;
		}

		User(std::string first_name, std::string last_name, std::string status)
		{
			this->first_name = first_name;
			this->last_name = last_name;
			this->status = status;
			user_count++;
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
		friend std::ostream& operator << (std::ostream& output, const User user);
		
};

class Teacher : public User   // Here we are inheriting the user class
{
	public:
		std::vector<std::string> classes_teaching;
		void output()
		{
			std::cout << "Output\n";
		}

		Teacher()
		{
			std::cout << "Teacher Created\n";
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

std::ostream& operator << (std::ostream &output,const User user)
{
	output << "first name: " << user.first_name << "\nLast name: " << user.last_name << "\n" << "Status: " << user.status << "\n";
	return output;
}
std::istream& operator >> (std::istream &input,  User &user)
{
	input >> user.first_name >> user.last_name;
	return input;
}

int main()
{
	User user;
	std::cout << "Enter First_name and Last_name: " << std::endl;
	std::cin >> user;
	std::cout<<user<<std::endl;

	Teacher teacher;
	teacher.first_name = "Teach";
	std::cout << teacher.first_name << std::endl;
	teacher.output();
}