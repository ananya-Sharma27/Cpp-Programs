//program for constructor overloading 
#include<iostream>
using namespace std;

class sample
{
	int a;
	public:
		sample()   			//Default constructor
		{
			a=30;
		}
		sample(int b)		//parametrised constructor
		{
			a=b;
		}
		void display()
		{
			cout<<"The value of a=\t"<<a;
		}
};
int main()
{
	sample obj1;
	sample obj2(40);
	obj1.display();
	cout<<"\n";
	obj2.display();
	return 0;

}
