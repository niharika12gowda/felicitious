#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",over(a,b));

}

int over(int a,int b)
{
    if(a>21||b>>21)
    {
        return 0;
    }
    else if(a<=21&&b<=21)
    {
        if(a>b)
            return a;
        else
            return b;
    }
}
