#include<stdio.h>
int reject(int);
int main()
{
    int a;
    printf("enter the number:\n");
    scanf("%d",&a);
    printf("%d",reject(a));
}
int reject(int a)
{
    return a/10;
}
