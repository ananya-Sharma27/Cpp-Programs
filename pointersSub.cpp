//program for Subtraction of two pointers 
#include<iostream>
using namespace std;
int main()
{
    int x;
    int a=10;
    int *ptr1, *ptr2;

    ptr1=&a;
    ptr2=&a;

    // adding 6 to ptr2(to show an integer can be added to a pointer)
    ptr2=ptr2+6;

    // Subtracting of ptr1 from ptr2
    x=ptr2-ptr1;

    cout<<"Subtraction of ptr1 and ptr2 is "<<x<<endl;
    return 0;
}
