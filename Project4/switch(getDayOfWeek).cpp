#include <iostream>
using namespace std;

string getDayOfWeek(int dayNum) {
	switch (dayNum)
	{
	case 0:
		return "Sunday";
		break;
	case 1:
		return "Monday";
		break;
	case 2:
		return "Tuesday";
		break;
	case 3:
		return "Wednesday";
		break;
	case 4:
		return "Thursday";
		break;
	case 5:
		return "Friday";
		break;
	case 6:
		return "Saturday";
		break;
	default:
		return "Invalid";
		break;
	}
}

int main()
{
	int dayNum;
	std::cout<<"Ender Day num[0-6]: ";
	std::cin >> dayNum;
	std::cout << getDayOfWeek(dayNum);
	return 0;
}
