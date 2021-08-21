
#include <iostream>
using namespace std;

int main()
{
  //reversing number
	int num,reversenum=0;
	cout << "Number: ";
	cin >> num;
	while (num!=0)
	{
		reversenum = reversenum * 10;
		//int lastDigit = num % 10;
		reversenum += num % 10;
		num /= 10;
	}
	cout << "Reversed: "<<reversenum;
	
}


