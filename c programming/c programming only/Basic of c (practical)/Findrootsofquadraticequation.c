#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,r1,r2;

    printf("ENTER VALUE OF a,b,c:\n");
    scanf("%lf%lf%lf",&a,&b,&c);

    d=sqrt(b*b-4*a*c);
    printf("THE VALUE OF d IS:%lf\n",d);

    if(d>0)
    {
        r1=-(b+d)/2*a;
        r2=-(b-d)/2*a;

        printf("THE ROOT OF r1:%lf\n THE ROOT OF r2:%lf\n",r1,r2);
    }
    if(d==0)
    {
        r1=r2=-b/2*a;

        printf("THE ROOTS ARE :%lf\n",r1);
    }
    else

    printf("THE ROOTS ARE IMAGINARY ");

    return 0;

}