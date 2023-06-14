#include<stdio.h>
int main()
{
    int n,c=1,i;
    printf("enter an no you want to find factorial:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        c=c*i;
    }

    printf("the fcatorial of %d is %d",n,c);

    return 0;
}