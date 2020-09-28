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
    student s1= student(16, "ABC", 20);
	student s2= student(66, "XYZ", 25); 
    s1.display();
    s2.display();
    return 0;  
}  
