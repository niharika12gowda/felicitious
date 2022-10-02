#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter the range:\n");
    scanf("%d%d",&n1,&n2);
    prime(n1,n2);
}
int prime(int n1,int n2)
{
    int i,j;
    for(i=n1;i<=n2;i++)
    {
        for(j=2;j<i;j++)
        {
           if(i%j==0)
                break;
        }
            if(i==j)
              printf("%d\n",i);
    }
}
