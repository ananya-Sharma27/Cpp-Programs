//program of student class inheritance
#include <iostream>  
using namespace std;  
 
 class student
 {  
   public:  
   float marks = 60;   
 };  
   
   class newStudent: public student
   {  
   public:  
   float rollno = 5;    
   };       
   
  int main() 
  {  
    newStudent s1;  
     cout<<"marks: "<<s1.marks<<endl;    
     cout<<"rollno: "<<s1.rollno<<endl;    
     return 0;  
  }  
