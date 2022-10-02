

#include<stdio.h>
int main()
{
    int a,b,c;
    char x;
    printf("enter the value for a and b:\n");
    scanf("%d%d",&a,&b);
     printf("enter the operation to perform x:");
     scanf("\n%c",&x);
    switch(x)
    {
        case '+':
            printf("Addition result: %d",a+b);
        break;
        case '-': printf("Substraction Result are %d",a-b);
        break;
        case '*': printf("Multiplication Result are %d",a*b);
        break;
        case '/': printf("Quotiont Results are %d",a/b);
        break;
        case '%': printf("Remainder Results are %d",a%b);
        break;
        default:printf("Enter valid input");

    }
}
