//program of swapping of two numbers without using third variable
#include <iostream>  
using namespace std;  
int main()  
{  
int a, b;
cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value of b:";
cin>>b;      
cout<<"Before swap a = "<<a<<" b = "<<b<<endl;      
a=a+b;    
b=a-b;    
a=a-b;    
cout<<"After swap a = "<<a<<" b = "<<b<<endl;      
return 0;  
}  