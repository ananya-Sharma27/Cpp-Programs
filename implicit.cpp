//program to demonstrate the use of implicit
#include<iostream>
using namespace std;

class Myclass
{
	private:
		int a=10;
	public:
		void myMethod()
		{
			cout<< "HEY....I am a function in class!\n";
			cout<< "Value of a = "<<a;
		}
};

int main()
{
	Myclass myObj;
	myObj.myMethod();
	return 0;
};
