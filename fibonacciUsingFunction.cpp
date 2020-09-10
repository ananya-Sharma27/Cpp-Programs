//program to find Fibonacci series using function
#include<iostream>
using namespace std;

void fib(int terms){
	int first = 0;
	int second = 1;
	int sum = 0;
	for(int i=1; i<=terms; i++){
		cout<<sum<<" ";
		first = second;
		second = sum;
		sum = first + second;
	}
}
int main(){
	int terms = 0;
	cout<<"Enter the number of the terms"<<endl;
	cin>>terms;
	fib(terms);
	return 0;
}
