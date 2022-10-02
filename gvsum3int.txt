#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",sum(a,b,c));

}

int sum(int a,int b,int c)
{
    if(a==b&&b==c)
    {
        return 0;
    }
    else if(a==b||b==c||a==c)
    {
        if(a==b)
            return c;
        else if(b==c)
            return a;
        else
            return b;
    }
    else
    {
        int s=a+b+c;
        return s;
    }
}
