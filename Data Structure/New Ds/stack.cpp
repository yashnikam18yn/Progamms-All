#include<iostream>
using namespace std;
int ch,a[5];
int top=-1,n,x;


void push()
{
       if(top==5)
       {
        cout<<"Stack OverFlow!!!!!!!"<<endl;
       }else
       {
         cout<<"Enter Your Element"<<endl;
         cin>>x;
         top++;
         a[top]=x;
         cout<<"Successfull Added"<<endl;
       }
}

void pop()
{
    if(top==-1)
    {
        cout<<"Stack is an Empty"<<endl;
    }else
    {
        x=a[top];
        cout<<"Element Deleted"<<endl;
        top--;
    }
    
}

void display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<a[i]<<endl;
    }
}

int main()
{
    while(1)
 {
    cout<<"---------Menu-----------"<<endl;
    cout<<"Enter Your Choice:"<<endl;
    cout<<"1.Push\n2.Pop\n3.Display\n4.Exit"<<endl;
    cin>>ch;

 
    switch(ch)
    {
        case 1:
        push();
        break;

        case 2:
        pop();
        break;

        case 3:
        display();
        break;

        case 4:
        break;
    }
 }

    return 0;
}