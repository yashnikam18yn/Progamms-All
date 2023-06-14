#include<stdio.h>

int main()
{
   int a[6]={5,7,3,8,2,1};
   int i,j,n=6;

   printf("YOUR UNSORTED ARRAY IS :\n");
   for(i=0;i<n;i++)
   {
     printf("%d\n",a[i]);
   }

   printf("YOUR ARRAY AFTER SORTED IS:\n");

   for(i=0;i<n;i++)
   {

   

     for(j=i+1;j<n;j++)

     if(a[i]>a[j])
     {
         int temp=a[i];
         a[i]=a[j];
         a[j]=temp;
     }
     
   }

   for(i=0;i<n;i++)
   {
       printf("%d\n",a[i]);
   }

return 0;
}