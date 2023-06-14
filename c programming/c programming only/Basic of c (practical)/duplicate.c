#include<stdio.h>
int main()
{
   // int a[8]={5,9,6,7,0,1,2,4};
    int i,j,n=8,a[i];
       
       printf("ENTER ELEMENT IN AN ARRAY:\n");
       
       for(i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
       }
    printf("THE DUPLICATE ELEMENT IN ARRAY:\n");

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)

        if(a[i]==a[j])
        {
            printf("%d\n",a[j]);
        }
        else
        goto label;
    }
        label:
            printf("ELMENT NOT IN AN ARRAY.");
        
    return 0;
}