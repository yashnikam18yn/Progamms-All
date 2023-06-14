#include<iostream>
using namespace std;


class base{
  public:
  void show()
  {
    cout<<"This an base class"<<endl;
  }
};

class base1{
    public:
    void dis()
    {
        cout<<"this is an base1 class"<<endl;
    }
};

class base2:public base,public base1{
   public:
   void display()
   {
        cout<<"this an base2 class"<<endl;
   }
};

int main()
{
     base2 b2;
  
     b2.dis();
     b2.display();
     b2.show();

    
    return 0;
}