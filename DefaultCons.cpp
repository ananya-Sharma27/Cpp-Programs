//program to demonstrate the use of default constructor
#include<iostream>
using namespace std;

class Abc
{
	int a;
	public:
		Abc()		//Default constructor
		{
			cout<<"Default Constructor Invoked"<<endl;
			a=10;
		}
};
int main(void)
{
	Abc e1;			//Creating  an object
	Abc e2;			
	return 0;
}
