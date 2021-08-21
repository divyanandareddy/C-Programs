
#include <iostream>
using namespace std;

int main()
{
	//100-500 numbers, divisible by 3 and 5
	int counter = 100;
	while (counter<=500)
	{
		if (counter % 3 == 0 && counter % 5 == 0)
			cout << counter << " Is divisible by 3 and 5" << endl;
		counter++;
	}
}
