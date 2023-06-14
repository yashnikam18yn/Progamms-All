#include<iostream>
using namespace std;
#include<stdlib.h>

 struct node 
 {
     int data ;
     struct node *next;
 };
struct node *head;
int x;
  void insertAtfrist()
  {
    
      struct node *ptr;
      ptr=(struct node*)malloc(sizeof(struct node*));
      if(ptr==NULL)
      {
          cout<<"OVERFLOW!!"<<endl;
      }else
      {
      cout<<"ENTER AN ELEMENT: ";
      cin>>ptr->data;
      ptr->data=x;
      ptr->next=head;
      ptr=head;

      cout<<"insertion successful!!"<<endl;
      }
    
  }

  void insertAtlast()
  {
      struct node *p;
      p=head;
      struct node *ptr;
      ptr=(struct node*)malloc(sizeof(struct node*));

      if(ptr==NULL)
      {
          cout<<"overflow!!"<<endl;
      }else
      {
         if(p->next!=NULL)
         {
             p=p->next;
         }else
        cout<<"ENTER AN ELEMENT:";
        cin>>ptr->data;
        ptr->data=x;
        p->next=ptr;
        ptr->next=NULL;
         cout<<"insertion successful!!"<<endl;
      }

      
  }
  void insertInbetween()
  {
      int ind,i=1;
      struct node*ptr;
      struct node *p;
      ptr=(struct node*)malloc(sizeof(struct node *));
     if(ptr==NULL)
     {
         cout<<"OVERFLOW!!"<<endl;
     } else
     {
         cout<<"ENTER AN INDEX YOU WANT TO INSERT:";
         cin>>ind;
         p=head;

         for(i=1;i<ind-1;i++)
         {
             p=p->next;
         }
         ptr->next=p->next;
         p->next=ptr;
         cout<<"enter element you want to insert: ";
         cin>>ptr->data;
         ptr->data=x;
     } 

  }
  void display()
  {
       struct node *ptr;
    
     /* if(head==NULL)
      {
          cout<<"list is empty!!!"<<endl;
      }else
    */  {
          ptr=head;
          if(ptr!=NULL)
          {
              cout<<" "<<ptr->data<<endl;
              ptr=ptr->next;
          }
          
      }
  }
  void deletefrist()
  {
      struct node *p;
      if(head==NULL)
      {
          cout<<"list are empty.!!"<<endl;
      }else
      {
          p=head;
          head=head->next;
          free(p);
      }
  }

  void deleteAtlast()
  {
      struct node *p;
      struct node *q;

      if(head==NULL)
      {
          cout<<"list is empty.!!"<<endl;
      }else
      {
          while(p->next=NULL)
          {
              q=p;
              p=p->next;
          }
          q->next=NULL;
      }
      cout<<"deleted element is : "<<p->data<<endl;
      free(p);
  }

  void deleteInbetween()
  {
      struct node *p,*q;
      int ind,i=1;
      cout<<"ENTER AN INDEX: ";
      cin>>ind;

      if(head==NULL)
      {
          cout<<"list is empty.!!"<<endl;
      }else
      {
          p=head;
          while(i<ind)
          {
              p=q;
              p=p->next;
              i++;
          }
          q->next=p->next;
          cout<<"deleted element is: "<<p->data<<endl;
          free(p);
      }
  }
int main()
{
    int ch;
    while (1)
      {    
    cout<<"---MENU---"<<endl;
    cout<<"1.insert at frist"<<endl<<"2.insert at last"<<endl<<"3.insert in between"<<endl<<"4.delete frist"<<endl<<"5.delete at last"<<endl<<"6.delete inbetween"<<endl<<"7.display"<<endl<<"9.exit"<<endl;
    cout<<"ENTER YOUR CHOICE: ";
    cin>>ch;

    switch(ch)
    {
        case 1:
        insertAtfrist();
        break;

        case 2:
        insertAtlast();
        break;

        case 3:
        insertInbetween();
        break;

        case 4:
        deletefrist();
        break;

        case 5:
        deleteAtlast();
        break;

        case 6:
        deleteInbetween();
        break;

        case 7:
        display();
        break;
 
        case 8:
        cout<<"you are exit!!"<<endl;
        goto label;
          }
    }
   label:
    return 0;
}