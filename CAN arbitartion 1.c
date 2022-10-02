#include<stdio.h>
int arbtn()
{
    int a[10],b[10];
    printf("enter the message ID's:");
    scanf("%d\n %d",&a,&b);
    a[10]=a[10]%16;
    b[10]=b[10]%16;
    for(int i=0;i<8;i++)
if(a[7]==0)
{
printf("Message won");
}
else
{
printf("message lost");
}
for(int j=0;j<8;j++)
    if(b[7]==0)
       {
printf("Message won");
}
else
{
printf("message lost");
}}
int main()
{
int arbtn(),a[10],b[10];
if(a[7]==0 && b[7]==0)
{

    return 1;
}
}
