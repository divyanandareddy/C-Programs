#include <iostream>
#include <cmath>
using std::cout;

int main()
{
	cout << sqrt(25) << std::endl; // 5
	cout << sqrt(-25) << std::endl; // if give negative number we will get 'nan' means not a number
	cout << pow(9, 2) << std::endl;
	cout << pow( 9, 999) << std::endl; // here we will get 'inf' means infinity
	cout << pow(-9, 999) << std::endl; // -inf 
	cout << remainder(10, 3) << std::endl; // 1
	cout << remainder(10, 3.25) << std::endl; // 0.25
	cout << fmod(10, 3.25) << std::endl; // 0.25
	cout << fmax(10, 20) << std::endl; // 20 max value
	cout << fmin(10, 20) << std::endl; // 10 min value
	cout << ceil(6.83311) << std::endl; // 7
	cout << floor(6.83311) << std::endl; // 6
	cout << floor(-6.83311) << std::endl; // -7
	cout << trunc(6.83311) << std::endl; // 6
	cout << trunc(-6.83311) << std::endl; // -6
	cout << round(6.83311) << std::endl; // 7
	cout << round(-6.83311) << std::endl; // -7
	cout << round(6.43311) << std::endl; // 6
	cout << round(-6.43311) << std::endl; // -6

}
