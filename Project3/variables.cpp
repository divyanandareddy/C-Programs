#include <iostream>
using std::cout; 

int main()
{
	float annuansalary;
	cout << "enter annual salary: ";
	std::cin >> annuansalary;
	float monthlysalary = annuansalary / 12;
	cout << "Your monthly salary is :" << monthlysalary << std::endl;
	system("pause>0");
}
