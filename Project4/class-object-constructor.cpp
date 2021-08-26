#include <iostream>
using namespace std;

class Book //Class
{
public:
	string title;
	string author;
	int pages;
	Book(string name,string author,int pages) { // Constructor
		cout << name << endl;
	}
};

int main()
{
	Book b1("C++", "Bhasker",500); // Object
	/*b1.title = "C++";
	b1.author = "Bhasker";
	b1.pages = 500;*/

	Book b2("Baahubali", "Rajamouli ", 1000); // Object
	/*b2.title = "Baahubali";
	b2.author = "Rajamouli ";
	b2.pages = 1000;*/

	
}
