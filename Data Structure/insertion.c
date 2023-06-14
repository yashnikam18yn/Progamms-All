#include<stdio.h>

int main()
{    int i,j,n,a[100],key;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter elements in array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
        j--;
    }
    printf("sorted array is:\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}