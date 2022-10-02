#include<stdio.h>
int func(int,int);
int add(int,int);
int x,y,sum,sub,mult;
/*int main()
{
     x=10,y=20;
    func(&x,&y);
    sum=x+y;
    printf("%d\n",sum);
}
int func(int x,int y)
{
    x=30,y=50;
    diff(x,y);
    sub=x-y;
    printf("%d\n",sub);
}
int diff(int x,int y)
{
     x=15,y=35;
     mult=x*y;
     printf("%d\n",mult);

}
*/
int main()
{
    x=10;y=20;
    fun(&x,&y);
    printf("%d\n%d\n",x,y);
}
int fun(int *x,int *y)
{
    *x=20;*y=40;
    printf("%d\n%d\n",*x,*y);
}
