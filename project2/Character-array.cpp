#include <iostream>

int main()
{
	char c[4];
	c[0] = 'J';
	c[1] = 'O';
	c[2] = 'H';
	c[3] = 'N';
	std::cout << c << std::endl; // JOHN╠╠╠╠r■åQ¶ⁿ│

	char b[5];
	b[0] = 'J';
	b[1] = 'O';
	b[2] = 'H';
	b[3] = 'N';
	b[4] = '\0';
	std::cout << b << std::endl; // JOHN

	char a[20] = "JOHN";
	int len = strlen(a);
	std::cout << len << std::endl; // 4 , but we gave 201
	std::cout << sizeof(a) << std::endl; // 20
}
