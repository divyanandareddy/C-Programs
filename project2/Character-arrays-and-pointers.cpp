#include <iostream>

void print(char *c) // or void print(char c[])  
{
	int i = 0;
	while (*(c+i) != '\0') // or while(c[i]!='\0')
	{
		std::cout << c[i];
		i++;
	}
	std::cout << std::endl;
}

void print_p(char* c) // or void print(char c[])  
{
	while (*c  != '\0') // or while(c[i]!='\0')
	{
		std::cout << *c;
		c++;
	}
	std::cout << std::endl;
}

int main()
{
	char c[20] = "JOHN";
	print(c);
	print_p(c);
}
