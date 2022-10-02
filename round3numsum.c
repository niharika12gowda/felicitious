#include<stdio.h>
int main()
{
    int a,b,c;
    FILE *ptr;
    scanf("%d %d %d",&a,&b,&c);
    int d=add(a,b,c);
    printf("%d",add(a,b,c));

    ptr=fopen("v1.txt","a");
    fprintf(ptr," %d",d);
    fclose(ptr);


}
int add(int a,int b, int c)
{
    int sum=rou(a)+rou(b)+rou(c);
    return sum;

}
int rou(int a)
{
    int sum=0;

    int l=a%10;
    if(l<=5)
    {
        sum=a-l;
        return sum;
    }
    else{
        l=10-l;
        sum=a+l;
        return sum;
    }
}

