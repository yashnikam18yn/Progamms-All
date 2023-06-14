#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
 {
     int data;
     struct Node* Next;
 };
     
     struct Node * linkedlist(struct Node*ptr)
     {
         
         while(ptr!=NULL)
         {
             cout<<" "<<ptr->data<<endl;
             ptr=ptr->Next;
         }
     }

     struct Node* deletedfristnode(struct Node *head)
     {
         struct Node *ptr=head;
        

         head=head->Next;
         free(ptr);
  return head;
     }

     struct Node* deletedlastnode(struct Node*head)
     {
         struct Node *p=head;
         struct Node *q=head->Next;

         while(q->Next!=NULL)
         {
             p=p->Next;
             q=q->Next;
         }

         p->Next=NULL;
         free(q);
         return head;
     }

     struct Node* deletedatindex(struct Node* head,int index)
     {
         struct Node*p=head;
         struct Node*q=head->Next;

        for(int i=0;i<index-1;i++)
         {
             p=p->Next;
             q=q->Next;

         }
         p->Next=q->Next;

         free(q);
         return head;
     }

int main()
{
    struct Node *head=(struct Node*)malloc(sizeof(struct Node*));
    struct Node *secound=(struct Node*)malloc(sizeof(struct Node*));
    struct Node *third=(struct Node*)malloc(sizeof(struct Node*));
    struct Node *four=(struct Node*)malloc(sizeof(struct Node*));

    head->data=23;
    head->Next=secound;

    secound->data=34;
    secound->Next=third;

    third->data=45;
    third->Next=four;

    four->data=56;
    four->Next=NULL;

     linkedlist(head);

 /*   head=deletedfristnode(head);
 cout<<"after deleted frist node:"<<endl;
    linkedlist(head);
    
    head=deletedlastnode(head);
    
    cout<<"after deleted last node:"<<endl;
    linkedlist(head);
    */
   cout<<"after deleted at index node:\n"<<endl;
   head=deletedatindex(head,2);
   linkedlist(head);
    return 0;
     
}