#include<iostream>
using namespace std;

class base{
    public:

    void display()
    {
        cout<<"this is an display function"<<endl;
    }
};

class derived:public base{
   public:
   void display()
   {
        cout<<"This is an derived class function"<<endl;
   }
};

int main()
{
    derived d1;
    d1.display();
    d1.base::display();
    return 0;
}