//Program to display sum of digits of a number
#include<iostream>
using namespace std;
int main()
{
	int sum=0, n, r;
	cout<<"Enter any number\n";
	cin>>n;
	
	while(n!=0)
	{
		r = n%10;
		sum = sum + r;
		n = n/10;
	 } 
	 cout<<"Sum of digits of entered number is\n"<<sum;
}
