// Function Pointers and callbacks
#include <iostream>
#include <math.h>
int abosulate_compare(int a, int b)
{
	if (abs(a) > abs(b))
	{
		return 1; // if we change here -1 and in else 1 we will get output  in decending order
	}
	else
	{
		return -1;
	}
}
void BubbleSort(int *a,int n,int (*compare)(int,int))
{
	int temp=0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (compare(a[j], a[j + 1]) > 0)
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int main() 
{
	int  a[] = { -31,-5,2,1,-4,6 };
	BubbleSort(a, 6, abosulate_compare);
	for (int i = 0; i < 6; i++)
	{
		std::cout << a[i] << "  " ; // 1  2  -4  -5  6  -31
	}
}
