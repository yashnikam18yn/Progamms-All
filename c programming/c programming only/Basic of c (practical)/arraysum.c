#include<stdio.h>
int main()
{
    int i,j,n;
    int a[2][2],b[2][2],c[2][2];
    printf("ENTER 1st ARRAY ELEMENTS :\n");

    for(i=0;i<2;i++)
    {
    
      for(j=0;j<2;j++)
      {
    scanf("%d\t",&a[i][j]);
      }
    }

    printf("ENTER 2nd ARRAY ELEMENT :\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d\t",&b[i][j]);
        }
    }

   

    printf("THE SUM IS:\n");
 for(i=0;i<2;i++)
 {
     
     for(j=0;j<2;j++)
     {
          c[i][j]=a[i][j]+b[i][j];
         printf("%d\t",c[i][j]);
     }
 }

    return 0;
}