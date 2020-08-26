//Program to find the reverse of a number
#include<iostream>
using namespace std;
int main()
{
	int reverse=0, r, n;
	cout<<"Enter a number\n";
	cin>>n;
	while(n!=0){
		r = n%10;
		reverse = reverse*10+r;
		n/=10;
	}
	cout<<"Reversed number is :"<<reverse<<endl;
	return 0;
}
