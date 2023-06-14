#include<iostream>
using namespace std;
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node* next;

};
       struct Node* linkedlist(struct Node* head)
       {
           struct Node*ptr=head;
        do
           {
               cout<<" "<<ptr->data<<endl;
               ptr=ptr->next;

           }while(ptr->next!=head);
       }
 int main()
 {
      struct Node *head=(struct Node*)malloc(sizeof(struct Node*));
      struct Node *secound=(struct Node*)malloc(sizeof(struct Node*));
      struct Node *third=(struct Node*)malloc(sizeof(struct Node*));
      struct Node *four=(struct Node*)malloc(sizeof(struct Node*));
     
    head->data=34;
    head->next=secound;

    secound->data=45;
    secound->next=third;

    third->data=56;
    third->next=four;

    four->data=99;
    four->next=head;

    linkedlist(head);
        return 0;
 }
