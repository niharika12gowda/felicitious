#include<stdio.h>
int main()
{
    int i,a[3];
    printf("enter the array:");
    //scanf("%d",&a[3]);
    for (i=0;i<=2;i++)
    {
        scanf("%d",&a[i]);
}
if((a[0]==6)||(a[2]==6))
{
    printf("true");
}
else
{
    printf("false");
}
}
