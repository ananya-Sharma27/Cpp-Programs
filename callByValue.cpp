//program of swapping of two numbers using call by value
#include<iostream>
using namespace std;

void swap(int, int);
int main()
{
	int a, b;
		a=10;
		b=20;
	cout<<"Value of two variables a and b before swapping:"  <<a<<" "<<b<<"\n";
	swap(a,b);
	cout<<"Value of two variables a and b after swapping:"  <<a<<" "<<b;
	return 0;
}
void swap(int c, int d)
{
	int temp;
	temp=c;
	c=d;
	d=temp;
}
