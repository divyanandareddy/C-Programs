#include <iostream>
#include <string>

void twodfuncheck(int (*a)[2]) //or void twodfuncheck(int c[][2])
{

}
int main()
{

	int c[3][2] = { {1,2},
			        {3,4},
					{5,6} };
	// %p means pointer value
	printf("%p %p %p %p %p\n", c, *c, c[0], &c[0], &c[0][0]); // i got  00EFFDBC 00EFFDBC 00EFFDBC 00EFFDBC 00EFFDBC all are same
	printf("%d\n", *(c[0] + 1)); //2
	printf("%d\n", *(c[1] + 1)); //4


	int(*p)[2] = c;
	twodfuncheck(c);

}
	
	
