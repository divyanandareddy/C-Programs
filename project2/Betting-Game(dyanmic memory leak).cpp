//	Simple Betting Game
//	Jack Queen King - Computer suffles these cards
//	Player  has to guess the position of queen
//	if he wins ,he takes 3*bet
//	if he looses,he looses the bet amount
//	player  ha $100 initially

#include <iostream>
#include <time.h>
int cash = 100;

void play(int bet)
{
	char *c = (char*)malloc(3*sizeof(char));
	c[0] = 'J';
	c[1] = 'Q';
	c[2] = 'K';
	std::cout << "\n Shuffling ...\n";
	srand(time(NULL));				// seeding random number generator
	for (int i = 0; i < 5; i++)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		int temp = c[x];
		c[x] = c[y];
		c[y] = temp; // swaps cahracters at position x and y
	}
	int playerguess;
	printf("What's the position of queen - 1,2 or 3 ?");
	std::cin >> playerguess;
	if (c[playerguess - 1] == 'Q')
	{
		cash += 3 * bet;
		std::cout << "You Loose ! Result = " << c[0] << c[1] << c[2];
		std::cout << "\nTotal Cash:$" << cash << std::endl;
	}
	else
	{
		cash -= bet;
		std::cout << "You Loose ! Result = " << c[0] << c[1] << c[2];
		std::cout << "\nTotal Cash:$" << cash << std::endl;
	}
	free(c);
}

int main() 
{
	
	while (cash > 0)
	{
		int bet;
		printf("**Welcome to virtual Casino**\n\n");
		printf("Total Cash= $%d\n",cash);
		printf("What's Your bet? $");
		std::cin >> bet;
		if (bet == 0 || bet > cash)
		{
			break;
		}
		else
		{
			play(bet);
			printf("--------------------------**--------------------------\n");
		}
		
	}
}
