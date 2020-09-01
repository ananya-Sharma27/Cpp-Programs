//program to find the factorial of a number
#include<iostream>
using namespace std;
int main()
{
	int number, i, fact=1;
	cout<<"Enter a number\n";
	cin>>number;
	for(i=1; i<=number; i++){
		fact=fact*i;
	}
	cout<<"Factorial= "<<fact;
	return 0;
}
