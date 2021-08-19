#include <iostream>

void PrintHello()
{
	printf("Hello");
}


int add(int a, int b) 
{
	return a + b;
}

int main() //calling function
{
	int c;
	int(*p) (int, int);// pointer to function that should tak (int,int) as argument/parameter and retutn int

	//int* func(int, int);// declaring a function that would return int*
	//int (*func) (int, int); //declaring a function pointer

	p = &add; // or add without &
	c = (*p)(2, 3); //de-referencing and executing the function

	//----or---
	// c = p(2, 3) ,c = (*p)(2, 3) both are same 

	printf("%d\n", c);// 5

	void (*ptr)();
	ptr = PrintHello;
	ptr(); // Hello
}
