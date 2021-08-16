#include <iostream>
#include <vector>

//void test(int numbers[]) // the caller function using const array, in this function also we should use const 
void test(const int numbers[])
{

}
void print_array(const int numbers[], int size)
{
	for (int i = 0; i < size; i++)
	{
		//numbers[i]++; if we try to do any changes to array values it will give error because we are using const keyword 
		std::cout << numbers[i];
	}
	test(numbers);
}

int main()
{
	int numbers[] = { 1,2,3,4,5 };
	print_array(numbers,5);
}
