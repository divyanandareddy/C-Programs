#include <string>
//using std::string;
using std::cout;

int main()
{
	// getting multiple words as inputs using getline()
	std::string msg;
	cout << "Enter Msg (multiple words):";
	getline(std::cin, msg);
	cout << msg << std::endl;
}
