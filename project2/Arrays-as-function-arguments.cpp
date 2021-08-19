#include <iostream>

int Sumofelements(int a[],int size) // when we write like int a[] the compiler will change like int *a means it will not create another array insted it will store athe address of called function array
{									// "int *a" or "int a[]" both are ame in function arguments
	int sum = 0;
	int lengts = sizeof(a) / sizeof(a[0]); // 4 becsuse size of int is 4 bytes
	std::cout <<"SOE\t" << sizeof(a) << "\t" << sizeof(a[0]) << std::endl;
	for (int i = 0; i < size; i++)
	{
		sum += a[i];
	}
	return sum;
}
int main()
{
	int a[] = { 1,2,3,4,5 };
	int size = sizeof(a) / sizeof(a[0]);
	std::cout <<"Main\t" << sizeof(a) << "\t" << sizeof(a[0]) << std::endl;
	int total = Sumofelements(a, size);
	std::cout << total << std::endl;
	

}
