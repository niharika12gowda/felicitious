#include<stdio.h>

int sum(int,int);
void main(){
int s;
int (*ptr)(int a, int b)=&sum;
s=(ptr)(2,3);
printf("%d\n",s);
printf("%d",&s);
}


int sum(int a, int b)
{
return a+b;
}
