#include<iostream>
using namespace std;

class base{
   
   public:
   int a=45;
    
     base()
    {
        cout<<"this is an constructor"<<endl;
    }

   void show()
   {
     cout<<"The value of a is:"<<a<<endl;
   }

};

class derived:public base{
      public:
      int b=80;

      void display()
      {
        cout<<"The value of b is:"<<b<<endl;
      }
};

int main()
{
    // derived d;
    // d.show();
    // d.display();
    derived d;
    d.show();
    d.display();

    return 0;
}