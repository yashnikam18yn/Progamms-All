#include<iostream>
using namespace std;
  
  class demo
  {
      private:
      int a,b;

      public:

        demo()
        {
            a=10;
            b=90;
        }

        void display()
        {
            cout<<"THE VALUE OF a IS: "<<a<<endl;
            cout<<"THE VALUE OF b IS: "<<b<<endl;

        }
  };

   int main()
   {
       demo d;
       d.display();

       return 0;
   }