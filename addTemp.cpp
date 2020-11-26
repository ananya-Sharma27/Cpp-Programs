#include <iostream>  
using namespace std;  
template <class T> 
T add(T a,T b)  
{  
    T result = a+b;  
    return result;  
      
}  
int main()  
{  
  int i =4;  
  int j =5;  
  float m = 5.3;  
  float n = 4.3;  
  cout<<"Addition of i and j is :"<<add(i,j);  
  cout<<'\n';  
  cout<<"Addition of m and n is :"<<add(m,n);  
  return 0;  
}  
