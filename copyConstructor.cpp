//program to demonstrate the use of copy constructor
#include<iostream>
using namespace std;
class test
{
 private:
  int x;
 public:
  test(int x1)
  { 
    x = x1;
  } test(const test &t2)
  {
    x = t2.x;
  }
  int getX()
  {
    
    cout<<"adress of x is: "<<&x<<" ";
    return x;
  }
};

int main()
{
 test t1(7); // Normal constructor is called here
 test t2 = t1; // Copy constructor is called here
 test t3=test(t1); 
 cout << "t1.x = " << t1.getX()<<"\n";
 cout << "t2.x = " << t2.getX()<<"\n";
 cout << "t3.x = " << t3.getX()<<"\n";
 return 0;
}
