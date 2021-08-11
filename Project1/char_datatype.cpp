
int main()
{
	char x='a';

	std::cout << "Value of x:" << x << std::endl;
	std::cout << "Value of x:" << int(x) << std::endl; // ascii value (a-->97)

	char y = 97; // here we are giving ascii value but it wii convert it into char (97-->a)

	std::cout << "Value of x:" << x << std::endl;
	std::cout << "Value of x:" << int(x) << std::endl;
		
	std::cout << "Size of char:" << sizeof(char) << std::endl;

	std::cout << "MIN Size of char:" << CHAR_MIN << std::endl;
	std::cout << "MAX Size of char:" << CHAR_MAX << std::endl;
	
	unsigned char z = 129;

	std::cout << "Value of x:" << z << std::endl;
	std::cout << "Value of x:" << int(z) << std::endl;

	std::cout << "MAX Size of unsigned char:" << UCHAR_MAX << std::endl;

}
