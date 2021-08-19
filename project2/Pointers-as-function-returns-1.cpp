#include <iostream>
void PrintHelloworld()
{
	printf("hello world\n");
}
int* add(int* a, int* b) // called function - returns pointer to integer
{
	int c = (*a) + (*b);
	return &c;
}

int main() //calling function
{
	int a = 2,b = 4;
	int* ptr = add(&a, &b);
	printf("Sum = %d\n", *ptr); // 6 
	PrintHelloworld(); // after calling this method the memory allocated for add() is cleared so the value in the pointer variable c also cleared 
	printf("Sum = %d\n", *ptr); // here we will get some garbage value , to overcome this problem we will allaocate some memory in heap for c

}


	
	
