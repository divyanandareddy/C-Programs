#include <iostream>

int main()
{
	int a; //goes on stack
	int* p;
	p = (int*)malloc(20*sizeof(int)); //goes on heap
	*p = 10;
	free(p); //clear the memory
	p = (int*)malloc(sizeof(int));
	*p = 20;
	std::cout << *p;

//-----------------OR--------------------

	int n; //goes on stack
	int* q;
	q = new int; //goes on heap
	*q = 10;
	delete q; //clear the memory
	q = new int[20]; //array
	delete[] q;
}
	
	
