
#include <iostream>
using namespace std;

int main()
{
	//BMI Calculator
	 //Weight(kg)/height *height(m)
	 //Under weight <18.5
	 //Normal Weight 18.5-24.9
	 //overweight >25

	float weight, height, bmi;
	cout << "Weight(kg), height(m) :";
	std::cin >> weight>> height;
	bmi = weight / height * height;

	if (bmi < 18.5)
	{
		cout << "Underweight" << endl;
	}
	else if (bmi > 25)
	{
		cout << "Overweight" << endl;

	}
	else if (bmi > 1.8 && bmi < 25)
	{
		cout << "Normal weight" << endl;

	}

	cout << "Your Bmi is :" << bmi << endl;
}

