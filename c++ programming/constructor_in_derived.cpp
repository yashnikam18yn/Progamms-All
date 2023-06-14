#include<iostream>
using namespace std;

 class base1
 {
     protected:
     int a;
     public:
       
       base1(int j)
       {
           j=a;
       }
       void displaybase1()
       {
           cout<<"the value of a is:"<<a<<endl;
       }
 };
 class base2
 {
        protected:
        int b;
        public:

        base2(int i)
        {
          i=b;
        }
        void displaybase2()
       {
           cout<<"the value of a is:"<<b<<endl;
       }       
 };  
 class derived:public base1,public base2
 {
    protected:
      int c;

      public:
    derived(int i,int j,int k):base1(i),base2(j)
    {
        k=c;
    }
     void displayder()
     {
         cout<<"the value of a is:"<<c<<endl;
     }
 };  

  int main()
  {
      derived  d(12,34,45);
      d.displaybase1();
      d.displaybase2();
      d.displayder();

     return 0;      
  }                                      