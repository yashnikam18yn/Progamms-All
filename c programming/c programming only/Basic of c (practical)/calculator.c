#include<stdio.h>

int main()
{
    double a,b,c;
    char op;

    printf("ENTER AN OPERATOR(+,-,*,/):\n");
    scanf("%c",&op);

    printf("ENTER TWO NO:\n");
    scanf("%lf%lf",&a,&b);
    
    switch (op)
    {
    case '+':
        c=a+b;
        printf("THE SUM IS:%.2lf\n",c);
        break;

    case '-':
         c=a-b;
         printf("THE SUBSTRACTION IS:%.2lf\n",c);
         break;

    case '*':
         c=a*b;        
         printf("THE MULTIPLICATION IS:%.2lf\n",c);
         break;

    case '/':
         c=a/b;
         printf("THE DIVISION IS:%.2lf\n",c);
         break;

    default:

         printf("PLEASE CHECK YOUR OPERATOR.\n");
        break;
    }

return 0;
}