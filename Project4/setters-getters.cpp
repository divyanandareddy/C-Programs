#include <iostream>
using namespace std;

class Movie //Class
{
private:
	string rating;
public:
	string title;
	string director;
	

	Movie(string atitle, string adirector, string arating)
	{
		title = atitle;
		director = adirector;
		setRating(arating);
	}

	void setRating(string arating)
	{
		if (arating=="G" || arating=="PG" || arating=="PG-13" || arating=="R" || arating=="NR")
		{
			rating = arating;
		}
		else
		{
			rating = "NR";
		}
		
	}

	void getRating()
	{
		cout << rating;
	}
};

int main()
{
	Movie Avengers("Avengers End Game", "Joss Whedon", "PG-13");

	Avengers.setRating("Good");

	Avengers.getRating();
}
