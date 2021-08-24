#include <iostream>
using namespace std;

void print_num(int* np)
{
	cout << *np << endl;
}
void print_char(char* cp)
{
	cout << *cp << endl;
}

void print(void* ptr, char type)
{
	switch (type)
	{
	case 'i':
		cout << *((int*)ptr) << endl;
		break;
	case 'c':
		cout << *((char*)ptr) << endl;
		break;
	}
}
int main()
{
	int number = 10;
	char let = 'a';
	/*print_num(&number);
	print_char(&let);*/
	print(&number, 'i');
	print(&let, 'c');


}
