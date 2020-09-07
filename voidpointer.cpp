//program of void pointer

#include<iostream>
using namespace std;
int main()
{
	void *ptr;
	int a=10;
	ptr = &a;
	cout<< &a <<"\nValue of a:"<< a <<endl;
	cout<< ptr << endl;
	return 0;
}
