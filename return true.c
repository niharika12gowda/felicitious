#include<stdio.h>
#include<stdbool.h>

bool less(int );

int main()
{
   int a;
   printf("enter the values:\n");
   scanf("%d",&a);
   printf("%d",less(a));
}


bool less(a)
{
   if(a%20==18||a%20==19){
    return true;
   }
}
