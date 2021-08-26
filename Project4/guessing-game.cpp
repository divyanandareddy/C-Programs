#include <iostream>
using namespace std;


int main()
{
	int secretNum = 5;
	int guess;
	int guessCount = 0;
	int guessLimit = 3;
	bool outOfGuesses = false;

	while (secretNum = !guess && !outOfGuesses)
	{
		if (guessCount < guessLimit)
		{
			cout << "Enter Guess:";
			cin >> guess;
			guessCount++;
		}
		else
		{
			outOfGuesses = true;
		}
	}
	if (outOfGuesses)
	{
		cout << "Mission Failed.";
	}
	else
	{
		cout << "Winne Winner Chicken Dinner";
	}
}
