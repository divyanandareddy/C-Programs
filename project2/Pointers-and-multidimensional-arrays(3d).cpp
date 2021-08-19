#include <iostream>
#include <string>

int main()
{

	int c[3][2][2] = { {{1,2},{3,4}},
					   {{5,6},{7,8}},
					   {{9,10},{11,12}} };
	// %p means pointer value
	printf("%p %p %p %p\n", c, *c, c[0], &c[0][0]); // i got  14351452 14351452 14351452 14351452 all are same
	printf("%d\n", *(c[0][0] + 1)); //2
	printf("%d\n", *(c[0][1] + 1)); //4
	printf("%p\n", *(c[1] + 1)); // 14351476


	int(*p)[2][2] = c;

}
