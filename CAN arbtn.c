#include<stdio.h>
int arbtn(int [],int []);
int main()
{
    int a[5],b[5],i;
    printf("enter the first message ID:");
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the second message ID:");
     for(i=0;i<4;i++)
    {
        scanf("%d",&b[i]);
    }
    arbtn(a[i],b[i]);
}
int arbtn(int a[],int b[])
{
for(int i=0;i<5;i++)
if(a[5]==0)
{
for(int j=0;j<5;j++)
{
if(a[i]==b[i])
printf("first Message won");
}
}
else
{
printf("first message lost");
}
    if(b[5]==0)
       {
printf("second Message won");
}
else
{
printf("second message lost");
}
}
