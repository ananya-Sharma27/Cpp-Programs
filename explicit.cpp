//program to demonstrate the use of explicit
#include<iostream>
using namespace std;

class Myclass
{
	private:            //Access specifier
		int a=10;      //function declaration
	public:
		void myMethod();
};
void Myclass::myMethod()
{
		cout<< "HEY....I am a function in class!\n";
		cout<< "Value of a = "<<a;	
}

int main()
{
	Myclass myObj;      //create an object of MyClass
	myObj.myMethod();  //Call the method
	return 0;
};
