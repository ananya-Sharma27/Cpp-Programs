//program to find the greatest of three numbers using conditional operator
# include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3, greatest;
    cout<<"Enter three numbers:";
    cin>>num1>>num2>>num3;
    greatest= num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3) ;
    cout<<"\nThe greatest number is: "<<greatest;
}
