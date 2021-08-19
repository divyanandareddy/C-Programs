#include <iostream>

int main()
{
	int a; //goes on stack
	int* p;
	p = (int*)malloc(3 * sizeof(int)); //goes on heap -->default values ->GARBAGE VALUE
	p[0] = 10;
	p[1] = 20;
	p[2] = 30;

	free(p);

	int *q= (int*)calloc(3 ,sizeof(int)); // default values->0
	
	int *r=(int*)realloc(q, 4*sizeof(int));  
	free(q);
	free(r);
}
