#include<iostream>
using namespace std;
int count = 0;
class counter
{
        public:
        counter ()        // constructor
        {
            count++;
            cout<<"\n no of object created"<<count;
        }
        ~counter ()        // constructor
        {
            cout<<"\n no of object destroyed"<<count;
            count--;
        }
};
 
int main ()
{
    cout<<"\n\n Enter Main \n";
    counter c1,c2,c3,c4;
    {
        cout<<"\n\n Enter Block 1 \n";
        counter c5;
 }
    {
        cout<<"\n\n Enter Block 2 \n";
        counter c6;
    }
    cout<<"\n\n Enter Main \n";
    return 0;
}
