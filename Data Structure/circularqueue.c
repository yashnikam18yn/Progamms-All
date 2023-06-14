#include<stdio.h>

int a[5],ch,x,front,rear,n=5;
#include<stdlib.h>
 void enqueue()
 {
    if(front==-1 && rear==-1) 
    {
        front=rear=0;
        printf("ENTER ELEMENT :");
        scanf("%d",&x);
        a[rear]=x;
        }else
        {
            if((rear+1)%n==front)
            {
                printf("QUEUE IS FULL!!\n");
            }else
            rear=(rear+1)%n;
            printf("ENTER ELEMENT :");
            scanf("%d",&x);
              a[rear]=x;
            printf("insertion successful!!\n");
        }
 }

  void dequeue()
  {
      if(front==-1 && rear==-1)
      {
          printf("OUEUE IS EMPTY!!\n");
      }else
      {
          if(front==rear)
          {
              printf("deleted:%d\n",a[front]);
          }else
          printf("deleted:%d",a[front]);
          front=(front+1)%n;
      }
  }
  void display()
  {
      int i=front;
      if(front==-1 && rear==-1)
      {
          printf("OUEUE IS EMPTY!!\n");
      }else
      while(i!=rear)
      {
          printf("%d\n",a[i]);
          i=(i+1)%n;
      }
      printf("%d\n",a[rear]);
  }
  int main()
  {
     while(1)
    {
      printf("\n--------MENU-------\n");
      printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
      printf("ENTER YOUR CHOICE:");
      scanf("%d",&ch);

      switch(ch)
      {
          case 1:
          enqueue();
          break;

          case 2:
          dequeue();
          break;

          case 3:
          display();
          break;

          case 4:
          printf("YOU ARE EXIT!!!");
          goto label;
      }
    
  }  label:

      return 0;
  }