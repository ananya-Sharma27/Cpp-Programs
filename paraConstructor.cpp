//program of parameterised constructor
#include <iostream>  
using namespace std;  
class student 
 {  
   public:
   		int rollno;
		string name;
		float marks;
		student(int i, string n, float m)    
        {    
            rollno = i;
            name = n;
            marks = m;
        }   
        void display()
        {
            cout<<rollno<<" "<<name<<" "<<marks<<endl;
        }
};  
int main()   
{  
    student e1= student(16, "ABC", 20);
	student e2= student(66, "XYZ", 25); 
    e1.display();
    e2.display();
    return 0;  
}  
