#include<stdio.h>

void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

}
void linear(int a[],int n,int ele)
{
    int i;
    for(i=0;i<n;i++)
    
    if(a[i]==ele)
    {
        printf("ELEMENT ARE FOUND AT POSITION %d.",i+1);
        break;
    }else
    {
        printf("ELEMENT ARE NOT FOUND.");
        break;
    }  
}

int main()
{
    int i,ele;
    int a[5]={7,4,2,3,9};
    int n=5;
    
    printf(" ELEMENT PRESENT IN ARRY ARE:\n");

    print(a,n);

    printf("ENTER ELEMENT YOU WANT TO FIND:");
    scanf("%d",&ele);

    linear(a,n,ele);

return 0;
}