//Program to find equivalent temperature in farenheit
#include<iostream>
using namespace std;
int main()
{
	float f, c;
	cout<<"Enter the temperature in celsius:\n";
	cin>>c;
	f = (9.0*c/5.0)+32;
	cout<<"Equivalent temperature in farenheit:"<<f;
}
