#include <stdio.h>
#include<stdlib.h>
void insert_beg();
void delete_beg();
void insert_end();
void delete_end();
void insert_pos();
void delete_pos();
void display();
void create();
 struct node
    {
        int data;
        struct node *next;
    };
struct node *head=NULL,*NEW;
int main()
{
    int ch;
    while (1)
    {
        printf("\n------MENU------\n");
        printf("Enter choice :\n1.insert_beg\n2.delete_beg\n3.insert_end\n4.delete_end\n5.insert at specific position\n6.delete at specific position\n7.Traverse\n8.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_beg();
            break;
        case 2:
            delete_beg();
            break;
        case 3:
            insert_end();
            break;
        case 4:
            delete_end();
            break;
        case 5:
            insert_pos();
            break;
        case 6:
            delete_pos();
            break;
        case 7:
            display();
              break;
        case 8:
            exit(0);
            break;         
        default:
            printf("***Invalid Choice****\n");
        }
    }
    return 0;
}

void create()
{  
    int ele;
    NEW=(struct node*)malloc(sizeof(struct node));
    printf("Enter element to insert in singly linked list :\n");
    scanf("%d",&ele);
    NEW->data=ele;
    NEW->next=NULL;   
}
void insert_beg()
{   create();
    if(head==NULL)
    {
        head=NEW;
    }
    else
    {
        NEW->next=head;
        head=NEW;
    }

}
void delete_beg()
{
  struct node*temp;
  if(head==NULL)
  {
      printf("***List is Empty.You can't Delete***\n");
  }
  else
  {
      temp=head;
      head= head->next;
      printf("Deleted element is : %d\n",temp->data);
      free(temp);
  }
}
void insert_end()
{
    struct node*temp;
    create();
    if(head==NULL)
    {
        head=NEW;
    }
    else
    {
      temp=head;
      while(temp->next!=NULL)
      {
          temp=temp->next;
      }
      temp->next=NEW;
    }
}
void delete_end()
{   
    struct node*temp;
    struct node*prev;
    temp=head;
    if(head==NULL)
    {
        printf("List is Empty..\n");
    }
    else 
    {
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
    }
    
    printf("Deleted element is :%d\n",temp->data);
    free(temp);
}
void insert_pos()
{
    int pos,i=1;
    struct node *temp;
    create();
    printf("Enter the position where do you want to insert elememt :\n");
    scanf("%d",&pos);
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    NEW->next=temp->next;
    temp->next=NEW;
}
void delete_pos()
{
    struct node *temp,*prev;
    int pos,i=1;
    printf("Enter the position of element to delete :\n");
    scanf("%d",&pos);
    if(head==NULL)
    {
        printf("***List is Empty***");
    }
    else
    {
      temp=head;
      while(i<pos)
      {
          prev=temp;
          temp=temp->next;
          i++;
      }
      prev->next=temp->next;
      printf("Deleted element is :%d\n",temp->data);
      free(temp);   
    }
}
void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("List is Empty\n");
    }
    else{
       temp=head;
       while(temp!=NULL)
       {
           printf("%d->",temp->data);
           temp=temp->next;
       }
       printf("NULL");
    }
    printf("\n");
}