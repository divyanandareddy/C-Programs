// Function Pointers and callbacks
#include <iostream>

void PrintHello()
{
	printf("Hello");
}


void add(void (*ptr) ())  // function pointer as argument
{
	ptr(); //call-back function that "ptr" points to
}

int main() 
{
	add(PrintHello); // PrintHello is callback function
}
