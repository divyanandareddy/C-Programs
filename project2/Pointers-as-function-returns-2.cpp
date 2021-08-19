#include <iostream>
void PrintHelloworld()
{
	printf("hello world\n");
}
int* add(int* a, int* b) // called function - returns pointer to integer
{
	int* c = (int*) malloc(sizeof(int));
	*c = (*a) + (*b);
	return c;
}

int main() //calling function
{
	int a = 2,b = 4;
	int* ptr = add(&a, &b);
	printf("Sum = %d\n", *ptr); // 6 
	PrintHelloworld(); 
	printf("Sum = %d\n", *ptr); // 6

}
