#include <iostream>
using std::cout;


int recursive_sum(int m,int n)
{
	if (m == n)
	{
		return m;
	}
	else
	{
		return m + recursive_sum(m + 1, n); // 20+(21+(22+ -------+30)) ===> 275
	}
}
char main()
{
	int a = 20;
	int b = 30;
	
	cout<<recursive_sum(a, b);

}
