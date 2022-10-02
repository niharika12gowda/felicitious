#include<stdio.h>

int main()
{
    int n;
    printf("enter the value for n:\n");
    scanf("%d",&n);
    printf("%d",facto(n));
}
int facto(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
