#include<stdio.h>
int main()
{
    int a,b;
    printf("enter values for a and b:");
    scanf("%d%d",&a,&b);
    naveen(a,b);
}
int naveen(int a,int b)
{
    int sum;
    sum=a+b;
    printf("%d",sum);
}

