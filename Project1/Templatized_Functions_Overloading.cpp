#include <iostream>

template<typename T>

void swap(T & a,  T & b) 
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>

void swap(T a[], T b[],int size)
{
	for (int i = 0; i < size; i++)
	{
		T temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	
}
int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	std::cout << "a: " << a << "\tb: " << b << "\n";
	std::string f_name = "Divyananda";
	std::string l_name = "Reddy";
	swap(f_name, l_name);
	std::cout << "f_name: " << f_name << "\tl_name: " << l_name << "\n";  

	int const size = 6;
	int nines[] = { 9,9,9,9,9,9 };
	int ones[] = { 1, 1, 1, 1, 1, 1 };

	for (int i = 0; i < size; i++)
	{
		std::cout << nines[i] << " " << ones[i] << "\t";
	}
	std::cout << "\n";
	swap(nines, ones, size);

	for (int i = 0; i < size; i++)
	{
		std::cout << nines[i] << " " << ones[i] << "\t";
	}
	std::cout << "\n";
}
