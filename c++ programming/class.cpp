#include<iostream>
using namespace std;

 class student
 {
    
     public:
     int rollno;
     string name;

     void getdata();
     void display()
     {
         cout<<"the roll no is: "<<rollno<<endl;
         cout<<"name: "<<name<<endl;
     }
 };
  
   void student::getdata()
   {
     cout<<"ENTER ROLL NO :";
     cin>>rollno;

     cout<<"ENTER NAME OF STUDENT : ";
     cin>>name;
   }

 int main()
 {
     student s1;
     s1.getdata();
     s1.display();

     return 0;

 }