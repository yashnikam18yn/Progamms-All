#include<stdio.h>
#include<stdlib.h>

 struct Node
 {
     int data;
     struct Node* Next;
 };

   void linkedlist(struct Node*ptr)
   {
       while(ptr!=NULL)
       {
           printf("ELEMENT:%d\n",ptr->data);
           ptr=ptr->Next;
       }
   }

   struct Node* insertionAtfrist(struct Node*head,int data)
   {
       struct Node*ptr;
       ptr=(struct Node*)malloc(sizeof(struct Node));
       ptr->data=data;

       ptr->Next=head;

       return ptr;

   }

   struct Node* insertionAtend(struct Node*head,int data)
   { 
       struct Node*ptr;
       ptr=(struct Node*)malloc(sizeof(struct Node));
       ptr->data=data;
       struct Node *p=head;

        while(p->Next!=NULL)
        {
            p=p->Next;
        }
        p->Next=ptr;
        ptr->Next=NULL;

         return head;
   }

    struct Node* insertionAtbetween(struct Node* head,int index,int data)
    {
        struct Node*ptr;
        ptr=(struct Node*)malloc(sizeof(struct Node*));
        ptr->data=data;
        struct Node *p=head;
        int i=0;
        while(i!=index-1)
        {
            p=p->Next;
            i++;
        }
         ptr->Next=p->Next;
         p->Next=ptr;
       
        return head;
    }
int main()
{
   struct Node* head;
   struct Node* secound;
   struct Node* third;
   struct Node* four;

   head=(struct Node*)malloc(sizeof(struct Node));
   secound=(struct Node*)malloc(sizeof(struct Node));
   third=(struct Node*)malloc(sizeof(struct Node));
   four=(struct Node*)malloc(sizeof(struct Node));


     head->data=45;
     head->Next=secound;

     secound->data=50;
     secound->Next=third;

     third->data=55;
     third->Next=four;

     four->data=60;
     four->Next=NULL;

  /* linkedlist(head);
printf("AFTER AT  1st INSERTION:\n");
  head=insertionAtfrist(head,25);

   linkedlist(head);
   
   printf("after last /at end:\n");
  head=insertionAtend(head,99);

   linkedlist(head);

*/
   printf("INSERTION IN BETWEEN:\n");
   head=insertionAtbetween(head,2,18);

   linkedlist(head);

    return 0;
}