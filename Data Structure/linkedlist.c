#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node* Next;
  int *ptr;
};
 void linkedlist(struct Node *ptr)
 {
   while(ptr!=NULL)
  {
    
      printf("ELEMENT:%d\n",ptr->data);
      ptr=ptr->Next;
  }
 }
int main()
{
  struct Node *ptr;
  struct Node*head;
  struct Node*secound;
  struct Node*third;
  struct Node *fourth;

  head=(struct Node*)malloc(sizeof(struct Node));
  secound=(struct Node*)malloc(sizeof(struct Node));
  third=(struct Node*)malloc(sizeof(struct Node));

  head->data=7;
  head->Next=secound;

  secound->data=23;
  secound->Next=third;

  third->data=44;
  third->Next=fourth;
 
  fourth->data=56;
  fourth->Next=NULL;
  
  linkedlist(head);

  return 0;
}