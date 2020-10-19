//program to demonstrate the use of static variable
#include <iostream>
using namespace std;

class Something
{
  private:
    static int s_value;		//static variable declaration
    int a=5;				//normal variable declaration
  public:
    int show()
    {
        return s_value+a;
    }
    static int getValue() 
    { 
        return s_value; 
        
    } // static member function
};
 
int Something::s_value=1; // initializer
 
int main()
{
    Something s;
    cout << s.show()<< '\n';;
    cout << Something::getValue() << '\n';
}
