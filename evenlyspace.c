#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value for a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);
    evenly(a,b,c);
}
int evenly(int a,int b,int c)
{
    if(a-b==b-c||c-a==c-b||b-a==b-c)
    {
        printf("evenly placed");
    }else
    {
        printf("Not placed evenly");
    }
}
