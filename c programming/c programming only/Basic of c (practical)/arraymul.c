#include<stdio.h>
int main()
{  
    int a[3][3],b[3][3],c[3][3];
    int i,j,k,sum;
    printf("ENTER 1ST ARRAY ELEMENT:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d\t%d\t",a[i][j]);
        }
    }
    printf("ENTER 2ND ARRAY ELEMENT:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d\t%d\t",b[i][j]);
        }
    }
  
    printf("THE THIRD ARRAY IS:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            sum=sum+a[i][k]*b[k][j];
        }
        printf("%d/t%d/t",c[i][j]);
        sum=0;
        sum=c[i][j];
    }
   /* for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d\t%d\t",c[i][j]);
        }
    }*/
    return 0;
}