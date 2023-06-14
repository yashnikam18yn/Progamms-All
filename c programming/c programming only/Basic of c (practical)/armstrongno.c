#include<stdio.h>
int main()
{
    int n,a,c,sum=0;
    printf("ENTER AN POSITIVE INTEGER:");
    scanf("%d",&n);
while(n>0)
{
    c=n%10;
    a=c*c*c;
    sum=sum+a;
    n=n/10;
}
   if(sum==n)
{
    printf("NO IS ARMSTRONG.");
}else
printf("NO IS NOT AN ARMSTRONG.");
   return 0;
}