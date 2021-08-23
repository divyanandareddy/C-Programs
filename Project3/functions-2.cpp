#include <iostream>
using namespace std;

void introduceMe( string name,int age,string company="cscc") 
{
	cout << name << "\t" << age << "\t" << company << endl;

}
int main()
{
	introduceMe("Divyananda",24); //Divyananda      24      cscc
	introduceMe("Chinna", 24,"HCL");//Chinna  24      HCL
}
