
#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Number: ";
	cin >> num;
	if (num == 0)
	{
		cout << "You have entered 0.\n";
	}
	else
	{
		if (num < 0)
		{
			num = -1 * num; //removes - (negative sign)
		}
		int counter=0;
		while (num>0)
		{
			num = num / 10; // 0r num /=10;
			cout << num << endl;
			counter++;
		}
		cout << "Numbercontains " << counter << " digits\n";
	}
	
}


