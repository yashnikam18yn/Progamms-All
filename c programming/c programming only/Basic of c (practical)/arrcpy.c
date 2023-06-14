#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i,j;

    printf("THE GIVEN ARRAY:\n");

    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");

    printf("THE REVERSE OF ARRAY:\n");

    for(i=5-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}