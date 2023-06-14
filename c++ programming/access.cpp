#include<iostream>
using namespace std;

class base{
  
   public:
  int a=10;
   base()
   {
     cout<<"this is an constructor"<<endl;
   }
  
  private:
  friend void display()
  {
    cout<<"This is an display funtion inside private"<<endl;
  }

  protected:
  void show()
  {
      cout<<"this is an protected function"<<endl;
  }
  
};


class derived : public base{

 public:
   void dis()
   {
      show();// protected accessed
   }

  /*
  void dis1()
  {
    display();//not accessed
  }
  */

};

int main()
{
     base b;
     cout<<"value is:"<<b.a<<endl;
    // b.display();
    // b.show();

    derived d;
    d.dis();
}