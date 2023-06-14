#include<stdio.h>
 int lb,ub,mid,i,j,k;
  void mergesort(int a[],int lb,int ub)
  {
       if(lb<ub)
       {
           mid=(lb+ub)/2;
       }

       mergesort(a,lb,mid+1);
       mergesort(a,mid+1,ub);
       merge(a,lb,mid,ub);
  }
  
   void merge(int a[],int lb,int mid,int ub)
   {
       int b[k];
     int i=lb;
     int k=lb;
     int j=mid+1;

      while(i<=mid+1 && j<=ub)
      {
          if(a[i]<a[j])
          {
              b[k]=a[i];
              i++;
          }else
          b[k]=a[j];
          i++;

          if(i>mid)
          {
              while(j<=ub)
              b[k]=a[j];
              j++;
          }else
          {
              while(i<=mid)
              b[k]=a[i];
              i++;
          }
          k++;
      }


   }
  int main()
  {
      int a[8],i,b[k];

      printf("ENTER AN ELEMENT WHICH ARE PRESENT IN ARRAY:\n");
      for(i=0;i<8;i++)
     {
         scanf("%d",&a[i]);
     }

     printf("GIVEN ARRAY IS:\n");

     for(i=0;i<8;i++)
     {
         printf("%d\n",a[i]);
     }

     mergesort(a,lb,ub);
     //merge(a,lb,mid,ub);
   for(k=0;k<ub;k++)
   {
       b[k]=a[k];
   }
     printf("ARRAY AFTER SORTED IS:\n");
     
     for(k=0;k<ub;k++)
     {
         printf("%d\n",a[k]);
     }
      return 0;
  }